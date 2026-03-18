/*
 * XREFs of ?MiracastProcessPendingDPCChunks@@YAEPEAX@Z @ 0x1400641A0
 * Callers:
 *     <none>
 * Callees:
 *     ?AddChunkListToTail@MIRACAST_CHUNK_LIST@@QEAAXPEAV1@@Z @ 0x140064294 (-AddChunkListToTail@MIRACAST_CHUNK_LIST@@QEAAXPEAV1@@Z.c)
 */

unsigned __int8 __fastcall MiracastProcessPendingDPCChunks(_WORD *a1)
{
  _DWORD *v1; // rbx
  _WORD *v2; // r10
  __int64 v3; // rcx
  unsigned __int8 result; // al
  __int64 v5; // r10
  struct MIRACAST_CHUNK_LIST **v6; // r10
  _DWORD *v7; // rdi
  struct MIRACAST_CHUNK_LIST *v8; // rdx
  struct MIRACAST_CHUNK_LIST *v9; // rdx

  a1[8] = 0;
  v1 = a1 + 10;
  *((_DWORD *)a1 + 5) = 0;
  v2 = a1;
  *((_BYTE *)a1 + 18) = 0;
  v3 = *(_QWORD *)a1;
  if ( *(_BYTE *)(v3 + 3385) )
  {
    *((_BYTE *)v2 + 17) = 1;
    return 0;
  }
  else
  {
    if ( *(_BYTE *)(v3 + 3384) )
    {
      MIRACAST_CHUNK_LIST::AddChunkListToTail(
        *(MIRACAST_CHUNK_LIST **)(v3 + 3392),
        *(struct MIRACAST_CHUNK_LIST **)(v3 + 3408));
      MIRACAST_CHUNK_LIST::AddChunkListToTail(
        *(MIRACAST_CHUNK_LIST **)(*(_QWORD *)v5 + 3392LL),
        *(struct MIRACAST_CHUNK_LIST **)(*(_QWORD *)v5 + 3400LL));
      MIRACAST_CHUNK_LIST::AddChunkListToTail(*((MIRACAST_CHUNK_LIST **)*v6 + 424), v6[1]);
      v7 = v2 + 10;
      *(_BYTE *)(*(_QWORD *)v2 + 3384LL) = 0;
      *((_BYTE *)v2 + 16) = 1;
    }
    else
    {
      v7 = v1;
    }
    v8 = *(struct MIRACAST_CHUNK_LIST **)(*(_QWORD *)v2 + 3400LL);
    if ( *((_DWORD *)v8 + 4) )
    {
      MIRACAST_CHUNK_LIST::AddChunkListToTail(*((MIRACAST_CHUNK_LIST **)v2 + 1), v8);
      *((_BYTE *)v2 + 18) = 1;
      v1 = v7;
    }
    v9 = *(struct MIRACAST_CHUNK_LIST **)(*(_QWORD *)v2 + 3408LL);
    if ( *((_DWORD *)v9 + 4) )
      MIRACAST_CHUNK_LIST::AddChunkListToTail(*(MIRACAST_CHUNK_LIST **)(*(_QWORD *)v2 + 3392LL), v9);
    result = 1;
    *v1 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v2 + 3392LL) + 16LL);
  }
  return result;
}
