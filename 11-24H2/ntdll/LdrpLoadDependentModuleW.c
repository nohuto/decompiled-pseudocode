/*
 * XREFs of LdrpLoadDependentModuleW @ 0x1801164FC
 * Callers:
 *     LdrpMapAndSnapDependency @ 0x18000C8D0 (LdrpMapAndSnapDependency.c)
 * Callees:
 *     RtlpSysVolFree @ 0x180001470 (RtlpSysVolFree.c)
 *     LdrpLoadDependentModuleInternal @ 0x18000D2E0 (LdrpLoadDependentModuleInternal.c)
 *     LdrpLogInternal @ 0x180013D80 (LdrpLogInternal.c)
 *     __security_check_cookie @ 0x1801659C0 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x180172030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall LdrpLoadDependentModuleW(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 *a5, _QWORD *a6)
{
  int v8; // eax
  unsigned int v9; // ebx
  char v11; // [rsp+28h] [rbp-140h]
  const void *v12; // [rsp+30h] [rbp-138h] BYREF
  _WORD *v13; // [rsp+38h] [rbp-130h]
  _WORD v14[128]; // [rsp+40h] [rbp-128h] BYREF

  memset_thunk_772440563353939046(&v12, 0, 0x110uLL);
  LODWORD(v12) = 0x1000000;
  v14[0] = 0;
  v13 = v14;
  LdrpLogInternal(
    (__int64)"minkernel\\ldr\\ldrsnap.c",
    1829,
    (__int64)"LdrpLoadDependentModuleW",
    2,
    "Loading a patch image.\n",
    v11);
  v8 = LdrpLoadDependentModuleInternal(&v12, a2, a3, 9, a5, a6);
  v9 = v8;
  if ( v8 < 0 )
  {
    *a5 = 0LL;
    **(_DWORD **)(a2 + 40) = v8;
  }
  if ( v14 != v13 )
    RtlpSysVolFree((__int64)v13);
  return v9;
}
