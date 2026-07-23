/*
 * XREFs of sub_14091DF30 @ 0x14091DF30
 * Callers:
 *     sub_14091EB00 @ 0x14091EB00 (sub_14091EB00.c)
 * Callees:
 *     KeLeaveGuardedRegion @ 0x140362BA0 (KeLeaveGuardedRegion.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     WbGetWowTrapFrame @ 0x140801230 (WbGetWowTrapFrame.c)
 *     PsWow64GetProcessMachine @ 0x14091D9C0 (PsWow64GetProcessMachine.c)
 *     sub_14091DAB0 @ 0x14091DAB0 (sub_14091DAB0.c)
 *     sub_14091DBE4 @ 0x14091DBE4 (sub_14091DBE4.c)
 *     WbValidateHeapExecuteCallArguments @ 0x14091E410 (WbValidateHeapExecuteCallArguments.c)
 *     sub_14091E6EC @ 0x14091E6EC (sub_14091E6EC.c)
 *     sub_14091EE7C @ 0x14091EE7C (sub_14091EE7C.c)
 *     sub_14091F7AC @ 0x14091F7AC (sub_14091F7AC.c)
 *     sub_14091F7CC @ 0x14091F7CC (sub_14091F7CC.c)
 *     WbDisableTracing @ 0x14091FA48 (WbDisableTracing.c)
 *     PspSetContextThreadInternal @ 0x14091FB00 (PspSetContextThreadInternal.c)
 *     PspGetContextThreadInternal @ 0x14091FE50 (PspGetContextThreadInternal.c)
 *     WbSetWowTrapFrame @ 0x140920FBC (WbSetWowTrapFrame.c)
 *     sub_140A5D984 @ 0x140A5D984 (sub_140A5D984.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_14091DF30(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  unsigned int *v6; // rdi
  unsigned int v7; // esi
  int WowTrapFrame; // ebx
  __int64 v9; // rdx
  int v10; // r9d
  _KPROCESS *Process; // rcx
  PVOID v12; // r15
  PVOID v13; // r12
  unsigned int v14; // r14d
  unsigned int v15; // ecx
  size_t v16; // rdx
  __int64 v18; // r8
  __int64 v19; // rcx
  __int64 v20; // rax
  int v21; // eax
  __int64 v22; // rsi
  int v23; // r9d
  _KPROCESS *v24; // rcx
  struct _KTHREAD *CurrentThread; // rax
  int ContextThreadInternal; // esi
  int v27; // eax
  _KPROCESS *v28; // rcx
  __int64 v29; // rdi
  __int64 v30; // rdx
  __int16 v31; // ax
  __int16 v32; // ax
  __int16 v33; // ax
  __int16 ProcessMachine; // ax
  _QWORD *v35; // rdi
  void *v36; // rcx
  unsigned int v37; // [rsp+30h] [rbp-D8h]
  PVOID v38; // [rsp+38h] [rbp-D0h] BYREF
  __int64 P; // [rsp+40h] [rbp-C8h] BYREF
  PVOID P_8[2]; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v41; // [rsp+58h] [rbp-B0h]
  __int64 v42; // [rsp+60h] [rbp-A8h]
  __int64 v43; // [rsp+68h] [rbp-A0h]
  __int64 v44; // [rsp+70h] [rbp-98h]
  _BYTE v45[336]; // [rsp+78h] [rbp-90h] BYREF

  v44 = a3;
  v43 = a2;
  v6 = 0LL;
  v41 = 0LL;
  v38 = 0LL;
  LODWORD(v42) = a4;
  P = 0LL;
  *(_OWORD *)P_8 = 0LL;
  v7 = a4;
  memset_0(v45, 0, sizeof(v45));
  WowTrapFrame = WbValidateHeapExecuteCallArguments(a2, v7, v45);
  if ( WowTrapFrame < 0 )
    goto LABEL_9;
  WowTrapFrame = sub_14091E6EC(a1, v45, &P);
  if ( WowTrapFrame < 0 )
    goto LABEL_9;
  WowTrapFrame = sub_14091EE7C(a1, v9, &v38);
  if ( WowTrapFrame < 0 )
  {
LABEL_26:
    v6 = (unsigned int *)v38;
    goto LABEL_9;
  }
  Process = KeGetCurrentThread()->ApcState.Process;
  if ( Process[1].ReadyTime && ((v31 = WORD2(Process[3].PerProcessorCycleTimes), v31 == 332) || v31 == 452) )
  {
    v6 = (unsigned int *)v38;
    WowTrapFrame = WbGetWowTrapFrame(v38, (__int64)P_8);
    if ( WowTrapFrame < 0 )
      goto LABEL_9;
    v14 = v41;
    v12 = P_8[1];
    v13 = P_8[0];
  }
  else
  {
    LOBYTE(v10) = 1;
    *((_DWORD *)v38 + 24) = 1048577;
    v6 = (unsigned int *)v38;
    WowTrapFrame = PspGetContextThreadInternal((unsigned int)KeGetCurrentThread(), (int)v38 + 48, 0, v10, 1);
    if ( WowTrapFrame < 0 )
      goto LABEL_9;
    v12 = (PVOID)*((_QWORD *)v6 + 37);
    v13 = (PVOID)*((_QWORD *)v6 + 25);
    v14 = v6[29];
    P_8[1] = v12;
    P_8[0] = v13;
    LODWORD(v41) = v14;
  }
  v15 = v6[5];
  v16 = 32LL * v15;
  if ( v16 > 0xFFFFFFFF || (v18 = v15 + v6[8], (unsigned int)v18 < v15) || (unsigned __int64)(32 * v18) > 0xFFFFFFFF )
  {
    WowTrapFrame = -1073741675;
    goto LABEL_9;
  }
  if ( v6[4] + 1 >= v15 )
  {
    WowTrapFrame = sub_140A5D984(*((void **)v6 + 3), v16);
    if ( WowTrapFrame < 0 )
      goto LABEL_17;
    v6[5] += v6[8];
  }
  v19 = P;
  v20 = *((_QWORD *)v6 + 3) + 32LL * v6[4];
  *(_QWORD *)v20 = P;
  *(_QWORD *)(v20 + 8) = v12;
  *(_QWORD *)(v20 + 16) = v13;
  *(_DWORD *)(v20 + 24) = v14;
  ++v6[4];
  v21 = sub_14091F7AC(v19);
  v7 = v42;
  WowTrapFrame = v21;
LABEL_17:
  if ( WowTrapFrame < 0 )
    goto LABEL_9;
  v37 = v7;
  v22 = P;
  WowTrapFrame = sub_14091F7CC(v45, P, P_8, v43, v44, v37);
  if ( WowTrapFrame < 0 )
    goto LABEL_9;
  WowTrapFrame = WbDisableTracing(P_8);
  if ( WowTrapFrame < 0 )
    goto LABEL_9;
  P_8[1] = *(PVOID *)(v22 + 24);
  v24 = KeGetCurrentThread()->ApcState.Process;
  if ( v24[1].ReadyTime && ((v32 = WORD2(v24[3].PerProcessorCycleTimes), v32 == 332) || v32 == 452) )
  {
    v6 = (unsigned int *)v38;
    ContextThreadInternal = WbSetWowTrapFrame(v38, P_8);
    WowTrapFrame = ContextThreadInternal;
    if ( ContextThreadInternal >= 0 )
      goto LABEL_25;
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    LOBYTE(v23) = 1;
    --CurrentThread->SpecialApcDisable;
    *((_DWORD *)v38 + 24) = 1048577;
    v6 = (unsigned int *)v38;
    ContextThreadInternal = PspGetContextThreadInternal((unsigned int)KeGetCurrentThread(), (int)v38 + 48, 0, v23, 1);
    if ( ContextThreadInternal >= 0 )
    {
      *((PVOID *)v6 + 37) = P_8[1];
      *((PVOID *)v6 + 25) = P_8[0];
      v6[29] = v41;
      v27 = PspSetContextThreadInternal(KeGetCurrentThread(), 3);
      v6 = (unsigned int *)v38;
      ContextThreadInternal = v27;
    }
    KeLeaveGuardedRegion();
  }
  WowTrapFrame = ContextThreadInternal;
  if ( ContextThreadInternal < 0 )
    goto LABEL_9;
LABEL_25:
  v28 = KeGetCurrentThread()->ApcState.Process;
  if ( !v28[1].ReadyTime )
    goto LABEL_26;
  v33 = WORD2(v28[3].PerProcessorCycleTimes);
  if ( v33 != 332 && v33 != 452 )
    goto LABEL_26;
  ProcessMachine = PsWow64GetProcessMachine((__int64)KeGetCurrentThread()->ApcState.Process);
  v6 = (unsigned int *)v38;
  if ( ProcessMachine == 332 )
    WowTrapFrame = (int)P_8[1];
LABEL_9:
  if ( v6 )
  {
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v6 + 1, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    {
      v35 = v38;
      if ( (int)sub_14091DAB0(a1, (__int64)v38, -1) >= 0 )
      {
        v36 = (void *)v35[3];
        if ( v36 )
          ExFreePoolWithTag(v36, 0);
        ExFreePoolWithTag(v35, 0);
      }
    }
  }
  if ( P && _InterlockedExchangeAdd64((volatile signed __int64 *)(P + 80), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
  {
    v29 = P;
    v30 = *(_QWORD *)(P + 40);
    if ( v30 )
    {
      sub_14091DBE4(a1, v30);
      *(_QWORD *)(v29 + 40) = 0LL;
      *(_QWORD *)(v29 + 24) = 0LL;
      *(_QWORD *)(v29 + 32) = 0LL;
      *(_DWORD *)(v29 + 72) = 0;
    }
    ExFreePoolWithTag((PVOID)v29, 0);
  }
  return (unsigned int)WowTrapFrame;
}
