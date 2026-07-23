/*
 * XREFs of PspWow64SetContextThread @ 0x1408EA8C4
 * Callers:
 *     NtSetInformationThread @ 0x1408E8B60 (NtSetInformationThread.c)
 *     WbSetWowTrapFrame @ 0x140920FBC (WbSetWowTrapFrame.c)
 * Callees:
 *     RtlInitializeExtendedContext2 @ 0x140235240 (RtlInitializeExtendedContext2.c)
 *     RtlGetExtendedContextLength2 @ 0x1402354D0 (RtlGetExtendedContextLength2.c)
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     IoThreadToProcess @ 0x140438740 (IoThreadToProcess.c)
 *     PsGetThreadTeb @ 0x14044C5E0 (PsGetThreadTeb.c)
 *     PsMultiResumeThread @ 0x140455D04 (PsMultiResumeThread.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     _alloca_probe @ 0x1406B4C20 (_alloca_probe.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     PsWow64GetProcessMachine @ 0x14091D9C0 (PsWow64GetProcessMachine.c)
 *     PspSetContextThreadInternal @ 0x14091FB00 (PspSetContextThreadInternal.c)
 *     PspGetContextThreadInternal @ 0x14091FE50 (PspGetContextThreadInternal.c)
 *     RtlCopyContext @ 0x140921110 (RtlCopyContext.c)
 *     RtlpReadExtendedContext @ 0x1409219A0 (RtlpReadExtendedContext.c)
 *     RtlpWow64SanitizeContextFlags @ 0x1409E0B04 (RtlpWow64SanitizeContextFlags.c)
 *     RtlWow64GetCpuAreaEnabledFeatures @ 0x1409E0BB8 (RtlWow64GetCpuAreaEnabledFeatures.c)
 *     RtlpWow64CtxFromAmd64 @ 0x1409FD4A8 (RtlpWow64CtxFromAmd64.c)
 *     PsSuspendThread @ 0x140A0CF10 (PsSuspendThread.c)
 *     EtwTiLogSetContextThread @ 0x140A1AB28 (EtwTiLogSetContextThread.c)
 *     RtlGuardIsValidWow64StackPointer @ 0x140A3C85C (RtlGuardIsValidWow64StackPointer.c)
 *     RtlpWow64CtxToAmd64 @ 0x140A47CC4 (RtlpWow64CtxToAmd64.c)
 *     PspWow64ReadOrWriteThreadCpuArea @ 0x140ACFCF8 (PspWow64ReadOrWriteThreadCpuArea.c)
 */

__int64 __fastcall PspWow64SetContextThread(PETHREAD Thread, char *a2, int a3, char a4)
{
  NTSTATUS ExtendedContextLength2; // ebx
  __int64 v8; // rdx
  ULONG64 CpuAreaEnabledFeatures; // r12
  __int64 v10; // rax
  ULONG v11; // esi
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // rcx
  void *v14; // rsp
  void *v15; // rsp
  char *v16; // r13
  int v17; // edx
  int v18; // ecx
  struct _KPROCESS *v19; // rbx
  __int64 ThreadTeb; // rax
  int v21; // r15d
  unsigned __int64 v22; // rcx
  unsigned __int64 v23; // rcx
  void *v24; // rsp
  void *v25; // rsp
  int v26; // r9d
  struct _KTHREAD *CurrentThread; // rax
  ULONG v28; // ecx
  int v29; // r15d
  unsigned __int64 v30; // rcx
  unsigned __int64 v31; // rcx
  void *v32; // rsp
  void *v33; // rsp
  ULONG64 v34; // rax
  char v35; // r15
  int v36; // r15d
  __int64 v37; // rcx
  _CONTEXT *v38; // r12
  int v39; // r15d
  struct _KTHREAD *v40; // rcx
  int v42; // [rsp+28h] [rbp-28h]
  int v43; // [rsp+28h] [rbp-28h]
  char v44; // [rsp+50h] [rbp+0h] BYREF
  _BYTE v45[11]; // [rsp+51h] [rbp+1h] BYREF
  char v46; // [rsp+5Ch] [rbp+Ch]
  char v47; // [rsp+5Dh] [rbp+Dh]
  __int64 v48; // [rsp+60h] [rbp+10h] BYREF
  PCONTEXT_EX ContextEx; // [rsp+68h] [rbp+18h] BYREF
  PETHREAD Threada; // [rsp+70h] [rbp+20h] BYREF
  ULONG_PTR BugCheckParameter1; // [rsp+78h] [rbp+28h]
  PCONTEXT_EX v52; // [rsp+80h] [rbp+30h] BYREF
  __int64 v53; // [rsp+88h] [rbp+38h]

  v47 = a4;
  v44 = 0;
  v45[0] = 0;
  if ( a3 != 716 )
  {
    ExtendedContextLength2 = -1073741820;
    goto LABEL_58;
  }
  Threada = KeGetCurrentThread();
  BugCheckParameter1 = (ULONG_PTR)Thread->Process;
  if ( (unsigned __int16)PsWow64GetProcessMachine(BugCheckParameter1) != 332 )
    goto LABEL_4;
  *(_DWORD *)&v45[3] = 0x10000;
  CpuAreaEnabledFeatures = RtlWow64GetCpuAreaEnabledFeatures(&v45[3]);
  if ( a4 )
  {
    v10 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)a2 < 0x7FFFFFFF0000LL )
      v10 = (__int64)a2;
    *(_DWORD *)&v45[3] = *(_DWORD *)v10;
  }
  else
  {
    *(_DWORD *)&v45[3] = *(_DWORD *)a2;
  }
  LOBYTE(v8) = a4;
  ExtendedContextLength2 = RtlpWow64SanitizeContextFlags(&v45[3], v8);
  if ( ExtendedContextLength2 >= 0 )
  {
    v11 = *(_DWORD *)&v45[3] & 0x37FFFFFF;
    *(_QWORD *)&v45[3] = *(_DWORD *)&v45[3] & 0x37FFFFFF;
    ContextEx = 0LL;
    if ( a4 )
    {
      ExtendedContextLength2 = RtlGetExtendedContextLength2(v11, (PULONG)&v45[7], CpuAreaEnabledFeatures);
      if ( ExtendedContextLength2 < 0 )
        goto LABEL_58;
      v12 = *(unsigned int *)&v45[7] + 15LL;
      if ( v12 <= *(unsigned int *)&v45[7] )
        v12 = 0xFFFFFFFFFFFFFF0LL;
      v13 = v12 & 0xFFFFFFFFFFFFFFF0uLL;
      v14 = alloca(v13);
      v15 = alloca(v13);
      v16 = &v44;
      ExtendedContextLength2 = RtlInitializeExtendedContext2((PCONTEXT)&v44, v11, &ContextEx, CpuAreaEnabledFeatures);
      if ( ExtendedContextLength2 < 0 )
        goto LABEL_58;
      LOBYTE(v17) = 1;
      ExtendedContextLength2 = RtlpReadExtendedContext(v18, v17, (_DWORD)ContextEx, v11, (__int64)a2, 0LL);
      if ( ExtendedContextLength2 < 0 )
        goto LABEL_58;
    }
    else
    {
      v16 = a2;
    }
    v19 = IoThreadToProcess(Threada);
    if ( IoThreadToProcess(Thread) == v19
      && (*(_DWORD *)(BugCheckParameter1 + 136) & 0x20) != 0
      && (v11 & 0x10001) == 0x10001 )
    {
      ThreadTeb = PsGetThreadTeb((__int64)Thread);
      if ( !(unsigned int)RtlGuardIsValidWow64StackPointer(*((unsigned int *)v16 + 49), ThreadTeb) )
      {
LABEL_4:
        ExtendedContextLength2 = -1073741811;
        goto LABEL_58;
      }
    }
    v21 = CpuAreaEnabledFeatures != 0 ? 0x40 : 0;
    *(_DWORD *)&v45[7] = 0;
    ExtendedContextLength2 = RtlGetExtendedContextLength2(v21 + 1048607, (PULONG)&v45[7], CpuAreaEnabledFeatures);
    if ( ExtendedContextLength2 >= 0 )
    {
      v22 = *(unsigned int *)&v45[7] + 15LL;
      if ( v22 <= *(unsigned int *)&v45[7] )
        v22 = 0xFFFFFFFFFFFFFF0LL;
      v23 = v22 & 0xFFFFFFFFFFFFFFF0uLL;
      v24 = alloca(v23);
      v25 = alloca(v23);
      ExtendedContextLength2 = RtlInitializeExtendedContext2(
                                 (PCONTEXT)&v44,
                                 v21 + 1048607,
                                 &ContextEx,
                                 CpuAreaEnabledFeatures);
      if ( ExtendedContextLength2 >= 0 )
      {
        if ( Thread != KeGetCurrentThread() )
        {
          CurrentThread = KeGetCurrentThread();
          --CurrentThread->KernelApcDisable;
          if ( (int)PsSuspendThread(Thread, 0LL) < 0 )
            KeLeaveCriticalRegion();
          else
            v44 = 1;
        }
        LOBYTE(v26) = 1;
        ExtendedContextLength2 = PspGetContextThreadInternal((_DWORD)Thread, (unsigned int)&v44, 0, v26, 1);
        if ( ExtendedContextLength2 >= 0 )
        {
          v28 = 65599;
          if ( CpuAreaEnabledFeatures )
            v28 = 65663;
          LODWORD(Threada) = v28;
          *(_DWORD *)&v45[7] = 0;
          ExtendedContextLength2 = RtlGetExtendedContextLength2(v28, (PULONG)&v45[7], CpuAreaEnabledFeatures);
          if ( ExtendedContextLength2 >= 0 )
          {
            v45[0] = 0;
            LODWORD(v48) = 0;
            v29 = *(_DWORD *)&v45[7];
            v30 = *(unsigned int *)&v45[7] + 15LL;
            if ( v30 <= *(unsigned int *)&v45[7] )
              v30 = 0xFFFFFFFFFFFFFF0LL;
            v31 = v30 & 0xFFFFFFFFFFFFFFF0uLL;
            v32 = alloca(v31);
            v33 = alloca(v31);
            ContextEx = (PCONTEXT_EX)&v44;
            v34 = RtlWow64GetCpuAreaEnabledFeatures(&Threada);
            RtlInitializeExtendedContext2((PCONTEXT)&v44, (ULONG)Threada, &v52, v34);
            ExtendedContextLength2 = PspWow64ReadOrWriteThreadCpuArea(
                                       BugCheckParameter1,
                                       v29,
                                       v42,
                                       (__int64)&v48,
                                       (__int64)v45);
            if ( ExtendedContextLength2 >= 0 )
            {
              v35 = 0;
              v46 = 0;
              if ( v45[0] )
              {
                ExtendedContextLength2 = RtlCopyContext((PCONTEXT)ContextEx, *(ULONG *)&v45[3], (PCONTEXT)v16);
                if ( ExtendedContextLength2 < 0 )
                  goto LABEL_58;
LABEL_53:
                ExtendedContextLength2 = PspWow64ReadOrWriteThreadCpuArea(
                                           BugCheckParameter1,
                                           *(int *)&v45[7],
                                           v43,
                                           (__int64)&v48,
                                           0LL);
                if ( ExtendedContextLength2 < 0 )
                  goto LABEL_58;
                goto LABEL_54;
              }
              if ( (_WORD)v53 == 35 )
              {
                ExtendedContextLength2 = RtlpWow64CtxToAmd64(*(unsigned int *)&v45[3], v16, &v44);
                if ( ExtendedContextLength2 < 0 )
                  goto LABEL_58;
                v35 = 1;
LABEL_54:
                if ( !v35
                  || (ExtendedContextLength2 = PspSetContextThreadInternal(Thread, 1), ExtendedContextLength2 >= 0) )
                {
                  if ( v47 )
                  {
                    v40 = KeGetCurrentThread();
                    LOBYTE(v40) = v40->PreviousMode;
                    EtwTiLogSetContextThread(v40, Thread, v16, *(unsigned int *)&v45[3]);
                  }
                }
                goto LABEL_58;
              }
              v36 = v48;
              if ( (v48 & 1) != 0 )
              {
                v38 = (_CONTEXT *)ContextEx;
              }
              else
              {
                v37 = CpuAreaEnabledFeatures != 0 ? 65656 : 65592;
                v38 = (_CONTEXT *)ContextEx;
                ExtendedContextLength2 = RtlpWow64CtxFromAmd64(v37, &v44, ContextEx);
                if ( ExtendedContextLength2 < 0 )
                  goto LABEL_58;
                memset_0((char *)&v38->Legacy[4].High + 4, 0, 0x60uLL);
                LODWORD(v48) = v36 | 1;
              }
              v39 = *(_DWORD *)&v45[3];
              ExtendedContextLength2 = RtlCopyContext(v38, *(ULONG *)&v45[3], (PCONTEXT)v16);
              if ( ExtendedContextLength2 >= 0 )
              {
                if ( (v39 & 0x10010) == 0x10010 )
                {
                  ExtendedContextLength2 = RtlpWow64CtxToAmd64(65552LL, v16, &v44);
                  if ( ExtendedContextLength2 < 0 )
                    goto LABEL_58;
                  v35 = 1;
                  LODWORD(v52) = 1048592;
                }
                else
                {
                  v35 = v46;
                }
                goto LABEL_53;
              }
            }
          }
        }
      }
    }
  }
LABEL_58:
  if ( v44 )
  {
    PsMultiResumeThread((__int64)Thread, 0LL, 1u);
    KeLeaveCriticalRegion();
  }
  return (unsigned int)ExtendedContextLength2;
}
