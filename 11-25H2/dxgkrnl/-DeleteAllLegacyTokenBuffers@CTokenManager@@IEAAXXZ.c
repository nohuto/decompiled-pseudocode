/*
 * XREFs of ?DeleteAllLegacyTokenBuffers@CTokenManager@@IEAAXXZ @ 0x14002493C
 * Callers:
 *     ?DeleteAllTokens@CTokenManager@@UEAAXXZ @ 0x140024770 (-DeleteAllTokens@CTokenManager@@UEAAXXZ.c)
 *     ??1CTokenManager@@AEAA@XZ @ 0x140097C68 (--1CTokenManager@@AEAA@XZ.c)
 * Callees:
 *     ??_GCLegacyTokenBuffer@@AEAAPEAXI@Z @ 0x1400249B8 (--_GCLegacyTokenBuffer@@AEAAPEAXI@Z.c)
 */

void __fastcall CTokenManager::DeleteAllLegacyTokenBuffers(CTokenManager *this, unsigned int a2)
{
  CLegacyTokenBuffer *v3; // rcx
  CLegacyTokenBuffer *v4; // rbx
  CLegacyTokenBuffer *v5; // rax
  __int64 v6; // rcx

  v3 = (CLegacyTokenBuffer *)*((_QWORD *)this + 24);
  if ( v3 )
  {
    CLegacyTokenBuffer::`scalar deleting destructor'(v3, a2);
    *((_QWORD *)this + 24) = 0LL;
  }
  v4 = (CTokenManager *)((char *)this + 168);
  while ( 1 )
  {
    v5 = *(CLegacyTokenBuffer **)v4;
    if ( *(CLegacyTokenBuffer **)(*(_QWORD *)v4 + 8LL) != v4
      || (v6 = *(_QWORD *)v5, *(CLegacyTokenBuffer **)(*(_QWORD *)v5 + 8LL) != v5) )
    {
      __fastfail(3u);
    }
    *(_QWORD *)v4 = v6;
    *(_QWORD *)(v6 + 8) = v4;
    if ( v5 == v4 )
      break;
    if ( v5 )
      CLegacyTokenBuffer::`scalar deleting destructor'(v5, a2);
  }
  *((_DWORD *)this + 46) = 0;
}
