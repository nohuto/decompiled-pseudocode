/*
 * XREFs of ?AllocateNewChunks@MIRACAST_CHUNK_LIST@@QEAAEK@Z @ 0x14007E104
 * Callers:
 *     DxgNotifyDpcCB @ 0x140029CC0 (DxgNotifyDpcCB.c)
 *     DxgkMiracastStartMiracastSession @ 0x140080698 (DxgkMiracastStartMiracastSession.c)
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall MIRACAST_CHUNK_LIST::AllocateNewChunks(
        MIRACAST_CHUNK_LIST *this,
        unsigned int a2,
        __int64 a3,
        __int64 a4)
{
  unsigned int v4; // eax
  unsigned int v7; // esi
  unsigned int i; // edi
  MIRACAST_CHUNK_LIST *Pool2; // rax
  MIRACAST_CHUNK_LIST **v10; // rcx

  v4 = *((_DWORD *)this + 5);
  v7 = v4 + 44;
  if ( v4 + 44 < v4 )
    return 0;
  for ( i = 0; i < a2; ++i )
  {
    Pool2 = (MIRACAST_CHUNK_LIST *)ExAllocatePool2(64LL, v7, 1265072196LL, a4);
    if ( !Pool2 )
      return 0;
    v10 = (MIRACAST_CHUNK_LIST **)*((_QWORD *)this + 1);
    if ( *v10 != this )
      __fastfail(3u);
    *(_QWORD *)Pool2 = this;
    *((_QWORD *)Pool2 + 1) = v10;
    *v10 = Pool2;
    *((_QWORD *)this + 1) = Pool2;
    ++*((_DWORD *)this + 4);
  }
  return 1;
}
