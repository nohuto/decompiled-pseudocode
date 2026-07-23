/*
 * XREFs of ?StLazyWorkMgrInitialize@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_LAZY_WORK_MGR@1@@Z @ 0x14045491C
 * Callers:
 *     ?StInitialize@?$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x140454400 (-StInitialize@-$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 * Callees:
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StLazyWorkMgrInitialize(_DWORD *a1)
{
  _QWORD *v2; // rcx
  _QWORD *v3; // rax
  unsigned int v4; // eax
  __int64 result; // rax

  memset_0(a1, 0, 0xE8uLL);
  v2 = a1 + 42;
  v3 = a1;
  if ( a1 < a1 + 42 )
  {
    do
    {
      *v3 = -1LL;
      v3[1] = -1LL;
      v3 += 3;
    }
    while ( v3 < v2 );
  }
  v4 = a1[48] & 0xFFFFFFFE;
  *v2 = -1LL;
  result = v4 | 6;
  a1[50] = 5;
  a1[48] = result;
  return result;
}
