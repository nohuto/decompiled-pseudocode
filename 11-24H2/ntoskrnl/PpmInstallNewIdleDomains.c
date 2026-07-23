/*
 * XREFs of PpmInstallNewIdleDomains @ 0x1405CC700
 * Callers:
 *     <none>
 * Callees:
 *     ?KiCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z @ 0x14039FF30 (-KiCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall PpmInstallNewIdleDomains(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  unsigned int v3; // esi
  int v5; // eax
  unsigned int v6; // r15d
  struct _KAFFINITY_EX *v7; // rdi

  v2 = *(_QWORD *)(a1 + 34880);
  v3 = 0;
  if ( v2 && (v5 = *(_DWORD *)(v2 + 40), v5 == *(_DWORD *)(a2 + 4)) )
  {
    v6 = 0;
    if ( v5 )
    {
      do
      {
        v7 = (struct _KAFFINITY_EX *)(v2 + 344LL * v6 + 1056);
        *(_QWORD *)&v7->Count = 2097153LL;
        memset_0(&v7->8, 0, sizeof(v7->8));
        KiCopyAffinityEx(v7, v7->Size, (struct _KAFFINITY_EX *)(a2 + 264LL * v6++ + 272));
      }
      while ( v6 < *(_DWORD *)(v2 + 40) );
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v3;
}
