/*
 * XREFs of LdrpLoadDependentModuleW @ 0x1801196EC
 * Callers:
 *     LdrpMapAndSnapDependency @ 0x18004B770 (LdrpMapAndSnapDependency.c)
 * Callees:
 *     RtlpSysVolFree @ 0x180015880 (RtlpSysVolFree.c)
 *     LdrpLoadDependentModuleInternal @ 0x18004C180 (LdrpLoadDependentModuleInternal.c)
 *     LdrpLogInternal @ 0x18007B390 (LdrpLogInternal.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x180174030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall LdrpLoadDependentModuleW(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 *a5, _QWORD *a6)
{
  int v8; // eax
  unsigned int v9; // ebx
  _UNICODE_STRING OriginalName; // [rsp+30h] [rbp-138h] BYREF
  _WORD v12[128]; // [rsp+40h] [rbp-128h] BYREF

  memset_thunk_772440563353939046(&OriginalName, 0, 0x110uLL);
  *(_DWORD *)&OriginalName.Length = 0x1000000;
  v12[0] = 0;
  OriginalName.Buffer = v12;
  LdrpLogInternal("minkernel\\ldr\\ldrsnap.c", 1829, (__int64)"LdrpLoadDependentModuleW", 2, "Loading a patch image.\n");
  v8 = LdrpLoadDependentModuleInternal(&OriginalName, a2, a3, 9, a5, a6);
  v9 = v8;
  if ( v8 < 0 )
  {
    *a5 = 0LL;
    **(_DWORD **)(a2 + 40) = v8;
  }
  if ( v12 != OriginalName.Buffer )
    RtlpSysVolFree(OriginalName.Buffer);
  return v9;
}
