/*
 * XREFs of KiSystemStartup @ 0x140B3B3A0
 * Callers:
 *     <none>
 * Callees:
 *     KzSetIrqlUnsafe @ 0x1405B3940 (KzSetIrqlUnsafe.c)
 *     KiIdleLoop @ 0x1406A0960 (KiIdleLoop.c)
 *     KiInitializeXSaveConfiguration @ 0x140B46B00 (KiInitializeXSaveConfiguration.c)
 *     KiInitializeBootStructures @ 0x140B48120 (KiInitializeBootStructures.c)
 *     KiInitializeKernel @ 0x140B48920 (KiInitializeKernel.c)
 *     KiInitializeKernelShadowStacks @ 0x140B49260 (KiInitializeKernelShadowStacks.c)
 *     KdInitSystem @ 0x140B65E30 (KdInitSystem.c)
 *     KasanInitSystem @ 0x140C15600 (KasanInitSystem.c)
 */

// write access to const memory has been detected, the output may be wrong!
NTSTATUS __stdcall __noreturn KiSystemStartup(PDRIVER_OBJECT DriverObject, PUNICODE_STRING RegistryPath)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  unsigned int *v4; // r10
  unsigned __int64 v6; // r8
  unsigned __int64 v7; // r8
  unsigned __int64 v8; // r8
  unsigned __int64 v9; // r8
  __int64 v10; // r8
  unsigned __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v16; // rdx
  unsigned int v17; // eax
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rcx
  void *v21; // rsp
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rdx
  unsigned __int64 v25; // r8
  __int64 v26; // rdx
  __int64 v27; // r8
  struct _KTHREAD *CurrentThread; // rcx

  *(_QWORD *)&KeNumberProcessorsGroup0[1] = DriverObject;
  if ( !*((_DWORD *)DriverObject->MajorFunction[3] + 9) )
    KasanInitSystem(DriverObject, 0LL);
  v2 = *(_QWORD *)&KeNumberProcessorsGroup0[1];
  if ( !*(_DWORD *)(*(_QWORD *)(v2 + 136) + 36LL) )
    KdInitSystem(0xFFFFFFFFLL, v2);
  v3 = *(_QWORD *)&KeNumberProcessorsGroup0[1];
  v4 = *(unsigned int **)(v3 + 136);
  _RDX = v4 - 96;
  *((_QWORD *)_RDX + 3) = _RDX;
  *((_QWORD *)_RDX + 4) = v4;
  v6 = __readcr0();
  *((_QWORD *)v4 + 32) = v6;
  v7 = __readcr2();
  *((_QWORD *)v4 + 33) = v7;
  v8 = __readcr3();
  *((_QWORD *)v4 + 34) = v8;
  v9 = __readcr4();
  *((_QWORD *)v4 + 35) = v9;
  __sgdt((char *)v4 + 342);
  v10 = *((_QWORD *)v4 + 43);
  *(_QWORD *)_RDX = v10;
  __sidt((char *)v4 + 358);
  *((_QWORD *)_RDX + 7) = *((_QWORD *)v4 + 45);
  __asm
  {
    str     word ptr [rdx+2F0h]
    sldt    word ptr [rdx+2F2h]
  }
  *v4 = 8064;
  _mm_setcsr(*v4);
  if ( !v4[9] )
    *(_WORD *)(v10 + 80) = 15360;
  __DS__ = 43;
  if ( !VslVsmEnabled )
  {
    _AX = 0;
    __asm { lldt    ax }
  }
  *MK_FP(43, _RDX + 2) = *MK_FP(43, v10 + 66);
  *MK_FP(43, (char *)_RDX + 10) = *MK_FP(43, v10 + 68);
  *MK_FP(43, (char *)_RDX + 11) = *MK_FP(43, v10 + 71);
  *MK_FP(43, _RDX + 3) = *MK_FP(43, v10 + 72);
  v12 = (unsigned __int64)_RDX >> 32;
  __writemsr(0xC0000101, __PAIR64__(v12, (int)v4 - 384));
  __writemsr(0xC0000102, __PAIR64__(v12, (int)v4 - 384));
  if ( !*MK_FP(43, v4 + 9) )
  {
    _guard_dispatch_icall_fptr[0] = guard_dispatch_icall_thunk_10345483385596137414;
    _guard_check_icall_fptr[0] = (__int64 (__fastcall *)())guard_check_icall_no_overrides;
  }
  v13 = *(_QWORD *)&KeNumberProcessorsGroup0[1];
  v14 = KiInitializeKernelShadowStacks(v13);
  if ( v14 )
  {
    _R8 = v14;
    v16 = *(_QWORD *)&KeNumberProcessorsGroup0[1];
    if ( !*MK_FP(43, *MK_FP(43, v16 + 136) + 36LL) )
    {
      v17 = 1;
      if ( (KiKernelCetAuditModeEnabled & 1) != 0 )
        v17 = 3;
      __writemsr(0x6A2u, v17);
      __asm { setssbsy }
    }
    __asm
    {
      rstorssp qword ptr [r8]
      saveprevssp
    }
  }
  v18 = *(_QWORD *)&KeNumberProcessorsGroup0[1];
  KiInitializeBootStructures(v18);
  v19 = *(_QWORD *)&KeNumberProcessorsGroup0[1];
  if ( !*MK_FP(43, *MK_FP(43, v19 + 136) + 36LL) )
    KdInitSystem(0LL, v19);
  v20 = *(_QWORD *)&KeNumberProcessorsGroup0[1];
  KiInitializeXSaveConfiguration(v20, (unsigned int)*MK_FP(43, *MK_FP(43, v20 + 136) + 36LL));
  if ( KiIrqlFlags )
    KzSetIrqlUnsafe(0xFu);
  else
    __writecr8(0xFuLL);
  v21 = alloca((unsigned int)KiXSaveAreaLength);
  v22 = *(_QWORD *)&KeNumberProcessorsGroup0[1];
  v23 = *MK_FP(43, v22 + 144);
  v24 = *MK_FP(43, v22 + 152);
  if ( (KiKvaShadow & 1) != 0 )
  {
    v25 = *MK_FP(43, *MK_FP(43, &KeGetPcr()->IdtBase) + 4216LL);
    __writegsqword(0xB008u, v25);
  }
  else
  {
    v25 = *MK_FP(43, *MK_FP(43, &KeGetPcr()->TssBase) + 4LL);
  }
  __writegsqword(0x1A8u, v25);
  KiInitializeKernel(v23, v24);
  if ( !*MK_FP(43, &KeGetPcr()->Prcb.Number) )
    _security_cookie_complement = ~RtlCopyFromUser__fo_;
  CurrentThread = KeGetCurrentThread();
  *MK_FP(43, &CurrentThread->WaitBlockFill11[70]) = 2;
  KiIdleLoop((__int64)CurrentThread, v26, v27);
}
