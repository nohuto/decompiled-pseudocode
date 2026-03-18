/*
 * XREFs of ?ReclaimAtlasEntries@CAtlasManager@@QEAAXXZ @ 0x1801C8690
 * Callers:
 *     ?AdvanceFrame@CD3DDevice@@QEAAJXZ @ 0x1800F2360 (-AdvanceFrame@CD3DDevice@@QEAAJXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CAtlasManager::ReclaimAtlasEntries(CAtlasManager *this)
{
  __int64 *v1; // r9
  __int64 *i; // rax
  __int64 v3; // r8
  __int64 j; // r10
  __int64 v5; // rcx

  v1 = (__int64 *)*((_QWORD *)this + 1);
  for ( i = *(__int64 **)this; i != v1; ++i )
  {
    v3 = *i;
    if ( *(_DWORD *)(*i + 32) )
    {
      for ( j = 0LL; (unsigned int)j < *(_DWORD *)(v3 + 24); j = (unsigned int)(j + 1) )
      {
        v5 = *(_QWORD *)(v3 + 16);
        if ( *(_QWORD *)(v5 + 8 * j) == -1LL )
          *(_QWORD *)(v5 + 8 * j) = 0LL;
      }
      *(_DWORD *)(v3 + 28) += *(_DWORD *)(v3 + 32);
      *(_DWORD *)(v3 + 32) = 0;
    }
  }
}
