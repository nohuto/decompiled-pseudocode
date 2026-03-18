/*
 * XREFs of HalpApicInitializeLocalUnit @ 0x140565F00
 * Callers:
 *     <none>
 * Callees:
 *     HalpApicSetupRegisterAccess @ 0x140554CB8 (HalpApicSetupRegisterAccess.c)
 *     HalMapIoSpace @ 0x14055D580 (HalMapIoSpace.c)
 *     HalpApicDescribeLocalLines @ 0x140565954 (HalpApicDescribeLocalLines.c)
 *     HalpApicIsCmciImplemented @ 0x140566124 (HalpApicIsCmciImplemented.c)
 *     HalpApicSetPriority @ 0x140566670 (HalpApicSetPriority.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpApicInitializeLocalUnit(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        unsigned int *a6)
{
  __int64 result; // rax
  __int64 v8; // rcx
  __int64 v9; // rcx
  unsigned int v10; // eax
  bool v11; // zf
  unsigned int *v12; // rcx
  _DWORD v13[6]; // [rsp+20h] [rbp-18h] BYREF
  int v14; // [rsp+40h] [rbp+8h] BYREF

  v14 = 0;
  v13[0] = 0;
  if ( !HalpApicX2Mode && !HalpApicUsingMsrs )
  {
    if ( !HalpLocalApicPhysical.QuadPart )
      return 3221225486LL;
    if ( !HalpLocalApic )
    {
      HalpLocalApic = (__int64)HalMapIoSpace(HalpLocalApicPhysical, 0x1000uLL, MmNonCached);
      if ( !HalpLocalApic )
        return 3221225626LL;
    }
  }
  result = HalpApicSetupRegisterAccess();
  if ( (int)result >= 0 )
  {
    if ( !*(_BYTE *)(a1 + 27) && (unsigned __int8)HalpApicIsCmciImplemented(&v14, v13) )
    {
      *(_DWORD *)(a1 + 32) = v14;
      *(_DWORD *)(a1 + 36) = v13[0];
    }
    v8 = *(unsigned int *)(a1 + 32);
    if ( (_DWORD)v8 )
      guard_dispatch_icall_no_overrides(v8);
    v9 = *(unsigned int *)(a1 + 36);
    if ( (_DWORD)v9 )
      guard_dispatch_icall_no_overrides(v9);
    HalpApicSetPriority(0LL, 15LL);
    if ( HalpApicDirectedEndOfInterruptModeEnabled )
      guard_dispatch_icall_no_overrides(48LL);
    guard_dispatch_icall_no_overrides(240LL);
    guard_dispatch_icall_no_overrides(800LL);
    guard_dispatch_icall_no_overrides(992LL);
    guard_dispatch_icall_no_overrides(880LL);
    guard_dispatch_icall_no_overrides(832LL);
    guard_dispatch_icall_no_overrides(848LL);
    guard_dispatch_icall_no_overrides(848LL);
    guard_dispatch_icall_no_overrides(848LL);
    guard_dispatch_icall_no_overrides(864LL);
    v10 = guard_dispatch_icall_no_overrides(32LL);
    v11 = HalpApicX2Mode == 0;
    v12 = a6;
    *a6 = v10;
    if ( v11 )
      *v12 = HIBYTE(v10);
    if ( !*(_BYTE *)(a1 + 27) )
    {
      result = HalpApicDescribeLocalLines((_DWORD *)a1);
      if ( (int)result < 0 )
        return result;
      *(_BYTE *)(a1 + 27) = 1;
    }
    return 0LL;
  }
  return result;
}
