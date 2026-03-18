/*
 * XREFs of PspInitializeThunkContext @ 0x14090A9A0
 * Callers:
 *     PspUserThreadStartup @ 0x14090AF50 (PspUserThreadStartup.c)
 * Callees:
 *     RtlInitializeExtendedContext2 @ 0x140258C20 (RtlInitializeExtendedContext2.c)
 *     RtlGetExtendedContextLength2 @ 0x14025D850 (RtlGetExtendedContextLength2.c)
 *     KiDispatchException @ 0x14025DD90 (KiDispatchException.c)
 *     KePopulateContinuationContext @ 0x140260C30 (KePopulateContinuationContext.c)
 *     KiCheckForKernelApcDelivery @ 0x140320950 (KiCheckForKernelApcDelivery.c)
 *     ExReferenceCallBackBlock @ 0x140326780 (ExReferenceCallBackBlock.c)
 *     PspGetBaseTrapFrame @ 0x140439370 (PspGetBaseTrapFrame.c)
 *     ExDereferenceCallBackBlock @ 0x1404482A0 (ExDereferenceCallBackBlock.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     _alloca_probe @ 0x1406A89B0 (_alloca_probe.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     PspSetContextThreadInternal @ 0x1409095F0 (PspSetContextThreadInternal.c)
 *     PspGetContextThreadInternal @ 0x140909940 (PspGetContextThreadInternal.c)
 *     RtlCopyContext @ 0x14090AD80 (RtlCopyContext.c)
 *     ProbeForWrite @ 0x140934CF0 (ProbeForWrite.c)
 */

__int16 PspInitializeThunkContext()
{
  struct _KTHREAD *CurrentThread; // rsi
  int v1; // ecx
  __int64 v2; // r14
  unsigned int v3; // r12d
  $727077A9B6E167EAE1398C74674DC5A5 *v4; // rax
  int v5; // ebx
  unsigned __int64 v6; // rax
  void *v7; // rsp
  union _RTL_RUN_ONCE *v8; // rbx
  __int64 v9; // r12
  struct _EX_RUNDOWN_REF *v10; // rax
  struct _EX_RUNDOWN_REF *v11; // r15
  __int64 v12; // rdx
  char *v13; // r15
  void *v14; // rcx
  void *InstrumentationCallback; // rcx
  unsigned __int64 v16; // rcx
  unsigned __int64 BaseTrapFrame; // rbx
  __int64 v19; // rax
  unsigned int Length; // [rsp+30h] [rbp+0h] BYREF
  int Length_4; // [rsp+34h] [rbp+4h]
  unsigned int v23; // [rsp+38h] [rbp+8h]
  __int64 v24; // [rsp+40h] [rbp+10h] BYREF
  __int64 v25; // [rsp+48h] [rbp+18h]
  _QWORD v26[2]; // [rsp+50h] [rbp+20h] BYREF
  ULONG_PTR v27[3]; // [rsp+60h] [rbp+30h] BYREF
  int v28; // [rsp+78h] [rbp+48h]
  char v29[76]; // [rsp+7Ch] [rbp+4Ch] BYREF
  __int64 v30; // [rsp+C8h] [rbp+98h]
  int v31[10]; // [rsp+100h] [rbp+D0h] BYREF
  __int64 v32; // [rsp+128h] [rbp+F8h]
  int v33; // [rsp+130h] [rbp+100h]
  int v34; // [rsp+134h] [rbp+104h]
  __int16 v35; // [rsp+138h] [rbp+108h]
  int v36; // [rsp+13Ah] [rbp+10Ah]
  int v37; // [rsp+13Eh] [rbp+10Eh]
  __int16 v38; // [rsp+142h] [rbp+112h]
  char *v39; // [rsp+180h] [rbp+150h]
  void *v40; // [rsp+188h] [rbp+158h]
  char *v41; // [rsp+198h] [rbp+168h]
  __int64 v42; // [rsp+1C8h] [rbp+198h]
  __int64 v43; // [rsp+1F8h] [rbp+1C8h]
  __int16 v44; // [rsp+200h] [rbp+1D0h]
  int v45; // [rsp+218h] [rbp+1E8h]

  memset_0(v29, 0, 0x7CuLL);
  v24 = 0LL;
  Length = 0;
  v26[0] = 0LL;
  CurrentThread = KeGetCurrentThread();
  v26[1] = CurrentThread;
  v1 = CurrentThread->MiscFlags & 0x100000;
  v2 = v1 != 0 ? 0x800 : 0;
  v25 = v2;
  v3 = v1 != 0 ? 1048667 : 1048603;
  v23 = v3;
  LODWORD(v4) = RtlGetExtendedContextLength2(v3, &Length, (unsigned int)v2);
  v5 = (int)v4;
  if ( (int)v4 >= 0 )
  {
    v6 = Length + 15LL;
    if ( v6 <= Length )
      v6 = 0xFFFFFFFFFFFFFF0LL;
    v7 = alloca(v6 & 0xFFFFFFFFFFFFFFF0uLL);
    memset_0(&Length, 0, Length);
    LODWORD(v4) = RtlInitializeExtendedContext2((__int64)&Length, v3, &v24, v2);
    v5 = (int)v4;
    if ( (int)v4 >= 0 )
    {
      memset_0(v31, 0, 0x4D0uLL);
      --CurrentThread->SpecialApcDisable;
      if ( (PspNotifyEnableMask & 0x10) != 0 )
      {
        v8 = &PspCreateThreadNotifyRoutine;
        v9 = 64LL;
        do
        {
          v10 = ExReferenceCallBackBlock((signed __int64 *)v8);
          v11 = v10;
          if ( v10 )
          {
            if ( (v10[2].Count & 1) != 0 )
              guard_dispatch_icall_no_overrides(CurrentThread->Process[1].Header.WaitListHead.Flink);
            ExDereferenceCallBackBlock((signed __int64 *)v8, v11);
          }
          ++v8;
          --v9;
        }
        while ( v9 );
        v3 = v23;
      }
      LODWORD(v4) = PspGetContextThreadInternal((__int64)CurrentThread, (__int64)&Length, 0, 1, 0);
      v5 = (int)v4;
      Length_4 = (int)v4;
      if ( (int)v4 >= 0 )
      {
        v12 = Length;
        v13 = (char *)((v30 - Length) & 0xFFFFFFFFFFFFFFF0uLL);
        v41 = v13 - 40;
        v14 = PspSystemDlls[0][4];
        v33 = 1048587;
        v43 = qword_140FC6478;
        v39 = v13;
        v40 = v14;
        v36 = 2818091;
        v37 = 2818131;
        v38 = 43;
        v35 = 51;
        v34 = 8064;
        v44 = 639;
        v45 = 8064;
        InstrumentationCallback = CurrentThread->ApcState.Process->InstrumentationCallback;
        if ( InstrumentationCallback )
        {
          v42 = qword_140FC6478;
          v43 = (__int64)InstrumentationCallback;
        }
        v16 = (v30 - Length) & 0xFFFFFFFFFFFFFFF0uLL;
        if ( (unsigned __int64)Length - 1 > 0xFFE )
        {
          ProbeForWrite(v13, Length, 0x10u);
        }
        else
        {
          if ( (unsigned __int64)v13 >= 0x7FFFFFFF0000LL )
            v16 = 0x7FFFFFFF0000LL;
          *(_BYTE *)v16 = *(_BYTE *)v16;
          *(_BYTE *)(v16 + v12 - 1) = *(_BYTE *)(v16 + v12 - 1);
        }
        LODWORD(v4) = RtlInitializeExtendedContext2((__int64)v13, v3, v26, v25);
        v5 = (int)v4;
        Length_4 = (int)v4;
        if ( (int)v4 >= 0 )
        {
          LODWORD(v4) = RtlCopyContext(v13, v3, &Length);
          v5 = (int)v4;
          Length_4 = (int)v4;
          if ( (int)v4 >= 0 )
            LOWORD(v4) = (unsigned __int16)KePopulateContinuationContext(v32);
        }
        if ( v5 >= 0 )
        {
          LODWORD(v4) = PspSetContextThreadInternal(CurrentThread, v31, 0, 1, 2);
          v5 = (int)v4;
        }
      }
    }
  }
  if ( CurrentThread->SpecialApcDisable++ == -1 )
  {
    v4 = &CurrentThread->152;
    if ( ($727077A9B6E167EAE1398C74674DC5A5 *)v4->ApcState.ApcListHead[0].Flink != v4 )
      LOWORD(v4) = KiCheckForKernelApcDelivery();
  }
  if ( v5 < 0 )
  {
    v27[2] = qword_140FC6478;
    v27[0] = (unsigned int)v5;
    v28 = 0;
    v27[1] = 0LL;
    BaseTrapFrame = PspGetBaseTrapFrame((__int64)CurrentThread, 0LL);
    v19 = PspGetBaseTrapFrame((__int64)CurrentThread, 0LL);
    LOWORD(v4) = KiDispatchException((NTSTATUS *)v27, v19 - 320, BaseTrapFrame, 1, 0);
  }
  return (__int16)v4;
}
