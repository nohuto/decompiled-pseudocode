/*
 * XREFs of PspInitializeThunkContext @ 0x1408FE308
 * Callers:
 *     PspUserThreadStartup @ 0x1408FEA00 (PspUserThreadStartup.c)
 * Callees:
 *     ExReferenceCallBackBlock @ 0x140279300 (ExReferenceCallBackBlock.c)
 *     RtlInitializeExtendedContext2 @ 0x14027FCB0 (RtlInitializeExtendedContext2.c)
 *     RtlGetExtendedContextLength2 @ 0x14027FF40 (RtlGetExtendedContextLength2.c)
 *     KiCheckForKernelApcDelivery @ 0x1402BB4D0 (KiCheckForKernelApcDelivery.c)
 *     KePopulateContinuationContext @ 0x1403E5874 (KePopulateContinuationContext.c)
 *     KiDispatchException @ 0x1403E8310 (KiDispatchException.c)
 *     PspGetBaseTrapFrame @ 0x140434EF0 (PspGetBaseTrapFrame.c)
 *     ExDereferenceCallBackBlock @ 0x1404459D0 (ExDereferenceCallBackBlock.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     _alloca_probe @ 0x1406B3C80 (_alloca_probe.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     ProbeForWrite @ 0x1408C0590 (ProbeForWrite.c)
 *     PspSetContextThreadInternal @ 0x1408FD220 (PspSetContextThreadInternal.c)
 *     PspGetContextThreadInternal @ 0x1408FD570 (PspGetContextThreadInternal.c)
 *     RtlCopyContext @ 0x1408FE830 (RtlCopyContext.c)
 */

__int16 PspInitializeThunkContext()
{
  struct _KTHREAD *CurrentThread; // rsi
  int v1; // ecx
  __int64 v2; // r14
  unsigned int v3; // r12d
  $81B80DCEA5A02D890AB7B2872B48AC01 *v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  int v7; // ebx
  unsigned __int64 v8; // rax
  void *v9; // rsp
  union _RTL_RUN_ONCE *v10; // rbx
  __int64 v11; // r12
  struct _EX_RUNDOWN_REF *v12; // rax
  __int64 v13; // r8
  __int64 v14; // r9
  struct _EX_RUNDOWN_REF *v15; // r15
  __int64 v16; // rdx
  char *v17; // r15
  void *v18; // rcx
  void *InstrumentationCallback; // rcx
  unsigned __int64 v20; // rcx
  __int64 BaseTrapFrame; // rbx
  __int64 v23; // rax
  unsigned int Length; // [rsp+30h] [rbp+0h] BYREF
  int Length_4; // [rsp+34h] [rbp+4h]
  unsigned int v27; // [rsp+38h] [rbp+8h]
  __int64 v28; // [rsp+40h] [rbp+10h] BYREF
  __int64 v29; // [rsp+48h] [rbp+18h]
  _QWORD v30[2]; // [rsp+50h] [rbp+20h] BYREF
  ULONG_PTR v31[3]; // [rsp+60h] [rbp+30h] BYREF
  int v32; // [rsp+78h] [rbp+48h]
  char v33[76]; // [rsp+7Ch] [rbp+4Ch] BYREF
  __int64 v34; // [rsp+C8h] [rbp+98h]
  _BYTE v35[40]; // [rsp+100h] [rbp+D0h] BYREF
  __int64 v36; // [rsp+128h] [rbp+F8h]
  int v37; // [rsp+130h] [rbp+100h]
  int v38; // [rsp+134h] [rbp+104h]
  __int16 v39; // [rsp+138h] [rbp+108h]
  int v40; // [rsp+13Ah] [rbp+10Ah]
  int v41; // [rsp+13Eh] [rbp+10Eh]
  __int16 v42; // [rsp+142h] [rbp+112h]
  char *v43; // [rsp+180h] [rbp+150h]
  void *v44; // [rsp+188h] [rbp+158h]
  char *v45; // [rsp+198h] [rbp+168h]
  __int64 v46; // [rsp+1C8h] [rbp+198h]
  __int64 v47; // [rsp+1F8h] [rbp+1C8h]
  __int16 v48; // [rsp+200h] [rbp+1D0h]
  int v49; // [rsp+218h] [rbp+1E8h]

  memset_0(v33, 0, 0x7CuLL);
  v28 = 0LL;
  Length = 0;
  v30[0] = 0LL;
  CurrentThread = KeGetCurrentThread();
  v30[1] = CurrentThread;
  v1 = CurrentThread->MiscFlags & 0x100000;
  v2 = v1 != 0 ? 0x800 : 0;
  v29 = v2;
  v3 = v1 != 0 ? 1048667 : 1048603;
  v27 = v3;
  LODWORD(v4) = RtlGetExtendedContextLength2(v3, &Length, (unsigned int)v2);
  v7 = (int)v4;
  if ( (int)v4 >= 0 )
  {
    v8 = Length + 15LL;
    if ( v8 <= Length )
      v8 = 0xFFFFFFFFFFFFFF0LL;
    v9 = alloca(v8 & 0xFFFFFFFFFFFFFFF0uLL);
    memset_0(&Length, 0, Length);
    LODWORD(v4) = RtlInitializeExtendedContext2((__int64)&Length, v3, &v28, v2);
    v7 = (int)v4;
    if ( (int)v4 >= 0 )
    {
      memset_0(v35, 0, 0x4D0uLL);
      --CurrentThread->SpecialApcDisable;
      if ( (PspNotifyEnableMask & 0x10) != 0 )
      {
        v10 = &PspCreateThreadNotifyRoutine;
        v11 = 64LL;
        do
        {
          v12 = ExReferenceCallBackBlock((signed __int64 *)v10);
          v15 = v12;
          if ( v12 )
          {
            if ( (v12[2].Count & 1) != 0 )
            {
              LOBYTE(v13) = 1;
              guard_dispatch_icall_no_overrides(
                CurrentThread->Process[1].Header.WaitListHead.Flink,
                *(_QWORD *)&CurrentThread[1].CurrentRunTime,
                v13,
                v14);
            }
            ExDereferenceCallBackBlock((signed __int64 *)v10, v15);
          }
          ++v10;
          --v11;
        }
        while ( v11 );
        v3 = v27;
      }
      LODWORD(v4) = PspGetContextThreadInternal((__int64)CurrentThread, (__int64)&Length, 0, 1, 0);
      v7 = (int)v4;
      Length_4 = (int)v4;
      if ( (int)v4 >= 0 )
      {
        v16 = Length;
        v17 = (char *)((v34 - Length) & 0xFFFFFFFFFFFFFFF0uLL);
        v45 = v17 - 40;
        v18 = PspSystemDlls[0][4];
        v37 = 1048587;
        v47 = qword_140FC6438;
        v43 = v17;
        v44 = v18;
        v40 = 2818091;
        v41 = 2818131;
        v42 = 43;
        v39 = 51;
        v38 = 8064;
        v48 = 639;
        v49 = 8064;
        InstrumentationCallback = CurrentThread->ApcState.Process->InstrumentationCallback;
        if ( InstrumentationCallback )
        {
          v46 = qword_140FC6438;
          v47 = (__int64)InstrumentationCallback;
        }
        v20 = (v34 - Length) & 0xFFFFFFFFFFFFFFF0uLL;
        if ( (unsigned __int64)Length - 1 > 0xFFE )
        {
          ProbeForWrite(v17, Length, 0x10u);
        }
        else
        {
          if ( (unsigned __int64)v17 >= 0x7FFFFFFF0000LL )
            v20 = 0x7FFFFFFF0000LL;
          *(_BYTE *)v20 = *(_BYTE *)v20;
          *(_BYTE *)(v20 + v16 - 1) = *(_BYTE *)(v20 + v16 - 1);
        }
        LODWORD(v4) = RtlInitializeExtendedContext2((__int64)v17, v3, v30, v29);
        v7 = (int)v4;
        Length_4 = (int)v4;
        if ( (int)v4 >= 0 )
        {
          LODWORD(v4) = RtlCopyContext(v17, v3, &Length);
          v7 = (int)v4;
          Length_4 = (int)v4;
          if ( (int)v4 >= 0 )
            LOWORD(v4) = (unsigned __int16)KePopulateContinuationContext(v36);
        }
        if ( v7 >= 0 )
        {
          LODWORD(v4) = PspSetContextThreadInternal(CurrentThread, (__int64)v35, 0, 1, 2);
          v7 = (int)v4;
        }
      }
    }
  }
  if ( CurrentThread->SpecialApcDisable++ == -1 )
  {
    v4 = &CurrentThread->152;
    if ( ($81B80DCEA5A02D890AB7B2872B48AC01 *)v4->ApcState.ApcListHead[0].Flink != v4 )
      LOWORD(v4) = KiCheckForKernelApcDelivery(v6, v5);
  }
  if ( v7 < 0 )
  {
    v31[2] = qword_140FC6438;
    v31[0] = (unsigned int)v7;
    v32 = 0;
    v31[1] = 0LL;
    BaseTrapFrame = PspGetBaseTrapFrame((__int64)CurrentThread, 0LL);
    v23 = PspGetBaseTrapFrame((__int64)CurrentThread, 0LL);
    LOWORD(v4) = KiDispatchException((unsigned int *)v31, v23 - 320, BaseTrapFrame, 1u, 0);
  }
  return (__int16)v4;
}
