/*
 * XREFs of MiSystemCacheVaControlArea @ 0x14034F790
 * Callers:
 *     MmCheckCachedPageStates @ 0x140236420 (MmCheckCachedPageStates.c)
 *     MmCopyToCachedPage @ 0x14034F0D4 (MmCopyToCachedPage.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiSystemCacheVaControlArea(unsigned __int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 v4; // rax
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // rax

  v2 = 48 * ((*(_QWORD *)(((a1 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL) >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
  v3 = *(_QWORD *)v2 >> 1;
  LODWORD(v3) = v3 & 0x7FFFFFFF;
  v4 = v3 | ((unsigned __int64)(*(_DWORD *)(v2 + 36) & 0x3FF0000) << 15);
  if ( v4 )
  {
    if ( (unsigned __int64)(v4 - 0x10000000000LL) <= 1 )
    {
      if ( v4 == 0x10000000001LL && PsInitialSystemProcess )
        v4 = (__int64)PsInitialSystemProcess;
    }
    else
    {
      v4 = qword_140E38BF8 + 16 * (v4 - 1);
    }
    if ( v4 )
      v4 += 40 * ((a1 >> 18) & 7);
  }
  else
  {
    v4 = 0LL;
  }
  v5 = *(_QWORD *)(v4 + 24);
  v6 = v5 & 0xFFFFFFFFFFFFFFFEuLL;
  if ( (v5 & 1) == 0 )
    v6 = v5;
  return *(_QWORD *)v6;
}
