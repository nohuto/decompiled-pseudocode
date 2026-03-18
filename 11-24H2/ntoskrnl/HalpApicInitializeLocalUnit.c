/*
 * XREFs of HalpApicInitializeLocalUnit @ 0x140568AD0
 * Callers:
 *     <none>
 * Callees:
 *     HalpApicSetupRegisterAccess @ 0x1405575B8 (HalpApicSetupRegisterAccess.c)
 *     HalMapIoSpace @ 0x14055FE80 (HalMapIoSpace.c)
 *     HalpApicDescribeLocalLines @ 0x140568524 (HalpApicDescribeLocalLines.c)
 *     HalpApicIsCmciImplemented @ 0x140568CF4 (HalpApicIsCmciImplemented.c)
 *     HalpApicSetPriority @ 0x140569240 (HalpApicSetPriority.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpApicInitializeLocalUnit(
        __int64 a1,
        __int64 a2,
        int a3,
        int a4,
        unsigned int a5,
        unsigned int *a6)
{
  __int64 result; // rax
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rcx
  unsigned int v13; // edi
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  unsigned int v18; // esi
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rdx
  __int64 v28; // r8
  __int64 v29; // r9
  unsigned int v30; // eax
  __int64 v31; // rdx
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 v38; // rdx
  __int64 v39; // r8
  __int64 v40; // r9
  unsigned int v41; // eax
  bool v42; // zf
  unsigned int *v43; // rcx
  _DWORD v44[6]; // [rsp+20h] [rbp-18h] BYREF
  int v45; // [rsp+40h] [rbp+8h] BYREF

  v45 = 0;
  v44[0] = 0;
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
    if ( !*(_BYTE *)(a1 + 27) && (unsigned __int8)HalpApicIsCmciImplemented(&v45, v44) )
    {
      *(_DWORD *)(a1 + 32) = v45;
      *(_DWORD *)(a1 + 36) = v44[0];
    }
    v12 = *(unsigned int *)(a1 + 32);
    v13 = a4 | 0x10000;
    if ( (_DWORD)v12 )
      guard_dispatch_icall_no_overrides(v12, v13, v10, v11);
    v14 = *(unsigned int *)(a1 + 36);
    if ( (_DWORD)v14 )
      guard_dispatch_icall_no_overrides(v14, v13, v10, v11);
    HalpApicSetPriority(0LL, 15LL);
    v18 = a3 | 0x100;
    if ( HalpApicDirectedEndOfInterruptModeEnabled
      && (guard_dispatch_icall_no_overrides(48LL, v15, v16, v17) & 0x1000000) != 0 )
    {
      v18 |= 0x1000u;
    }
    guard_dispatch_icall_no_overrides(240LL, v18, v16, v17);
    guard_dispatch_icall_no_overrides(800LL, a4 | 0x30000u, v19, v20);
    guard_dispatch_icall_no_overrides(992LL, 11LL, v21, v22);
    guard_dispatch_icall_no_overrides(880LL, a5, v23, v24);
    guard_dispatch_icall_no_overrides(832LL, v13, v25, v26);
    v30 = guard_dispatch_icall_no_overrides(848LL, v27, v28, v29);
    v31 = v30;
    LODWORD(v31) = v30 | 0x10000;
    guard_dispatch_icall_no_overrides(848LL, v31, v32, v33);
    guard_dispatch_icall_no_overrides(848LL, v13, v34, v35);
    guard_dispatch_icall_no_overrides(864LL, a4 | 0x18400u, v36, v37);
    v41 = guard_dispatch_icall_no_overrides(32LL, v38, v39, v40);
    v42 = HalpApicX2Mode == 0;
    v43 = a6;
    *a6 = v41;
    if ( v42 )
      *v43 = HIBYTE(v41);
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
