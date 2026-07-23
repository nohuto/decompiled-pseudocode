/*
 * XREFs of PspWow64GetContextThread @ 0x1409C4730
 * Callers:
 *     WbGetWowTrapFrame @ 0x1407F0C30 (WbGetWowTrapFrame.c)
 *     WbSetWowTrapFrame @ 0x14090A858 (WbSetWowTrapFrame.c)
 *     NtQueryInformationThread @ 0x1409C32F0 (NtQueryInformationThread.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     RtlInitializeExtendedContext2 @ 0x140258C20 (RtlInitializeExtendedContext2.c)
 *     RtlGetExtendedContextLength2 @ 0x14025D850 (RtlGetExtendedContextLength2.c)
 *     PsMultiResumeThread @ 0x140462278 (PsMultiResumeThread.c)
 *     Feature_Servicing_Wow64HwAmd64X86SuspendBeforeGetSetThreadContextSilent__private_IsEnabledNoReportingNoInline @ 0x1405DAD6C (Feature_Servicing_Wow64HwAmd64X86SuspendBeforeGetSetThreadContextSilent__private_IsEnabledNoRepo.c)
 *     Feature_Servicing_Wow64HwAmd64X86SuspendBeforeGetSetThreadContext__private_IsEnabledNoReportingNoInline @ 0x1405DADC0 (Feature_Servicing_Wow64HwAmd64X86SuspendBeforeGetSetThreadContext__private_IsEnabledNoReportingN.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     _alloca_probe @ 0x1406A89B0 (_alloca_probe.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     PspWow64GetContextThread_BeforeFix @ 0x14076CC9C (PspWow64GetContextThread_BeforeFix.c)
 *     RtlpReadExtendedContext @ 0x140859000 (RtlpReadExtendedContext.c)
 *     PsWow64GetProcessMachine @ 0x140907610 (PsWow64GetProcessMachine.c)
 *     PspGetContextThreadInternal @ 0x140909940 (PspGetContextThreadInternal.c)
 *     RtlpWriteExtendedContext @ 0x140909C2C (RtlpWriteExtendedContext.c)
 *     RtlCopyContext @ 0x14090AD80 (RtlCopyContext.c)
 *     PsSuspendThread @ 0x1409BA290 (PsSuspendThread.c)
 *     RtlWow64GetCpuAreaEnabledFeatures @ 0x1409EBAB0 (RtlWow64GetCpuAreaEnabledFeatures.c)
 *     PspWow64ReadOrWriteThreadCpuArea @ 0x1409EBC24 (PspWow64ReadOrWriteThreadCpuArea.c)
 *     RtlpWow64SanitizeContextFlags @ 0x1409EBFD0 (RtlpWow64SanitizeContextFlags.c)
 *     RtlpWow64CtxFromAmd64 @ 0x140A02040 (RtlpWow64CtxFromAmd64.c)
 */

NTSTATUS __fastcall PspWow64GetContextThread(
        __int64 a1,
        unsigned __int64 a2,
        int a3,
        char a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        __int64 a14,
        __int64 a15,
        __int64 a16,
        __int64 a17,
        __int64 a18,
        __int64 a19,
        __int64 a20,
        __int64 a21,
        __int64 a22,
        __int64 a23,
        __int64 a24)
{
  int ExtendedContextLength2; // ebx
  __int64 v30; // rdx
  ULONG64 CpuAreaEnabledFeatures; // r13
  __int64 v32; // rax
  ULONG v33; // r15d
  unsigned __int64 v34; // rax
  void *v35; // rsp
  __int64 v36; // rcx
  int v37; // r15d
  unsigned __int64 v38; // rcx
  unsigned __int64 v39; // rcx
  void *v40; // rsp
  void *v41; // rsp
  int IsEnabledNoReportingNoInline; // eax
  bool v43; // zf
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 v45; // rcx
  unsigned __int64 v46; // rcx
  void *v47; // rsp
  void *v48; // rsp
  unsigned int v49; // r14d
  NTSTATUS v50; // eax
  __int64 P1Home_low; // rcx
  int v52; // r14d
  PCONTEXT v53; // r13
  int v54; // edx
  SIZE_T Length; // [rsp+20h] [rbp-30h]
  SIZE_T Lengtha; // [rsp+20h] [rbp-30h]
  SIZE_T Lengthb; // [rsp+20h] [rbp-30h]
  __int64 v58; // [rsp+28h] [rbp-28h]
  int v59; // [rsp+28h] [rbp-28h]
  __int64 v60; // [rsp+30h] [rbp-20h]
  __int64 v61; // [rsp+38h] [rbp-18h]
  __int64 v62; // [rsp+40h] [rbp-10h]
  __int64 v63; // [rsp+48h] [rbp-8h]
  __int64 v64; // [rsp+50h] [rbp+0h] BYREF
  __int64 v65; // [rsp+58h] [rbp+8h]
  __int64 ContextLength; // [rsp+60h] [rbp+10h] BYREF
  __int64 v67; // [rsp+68h] [rbp+18h] BYREF
  PCONTEXT Context; // [rsp+70h] [rbp+20h]
  PCONTEXT_EX ContextEx; // [rsp+78h] [rbp+28h] BYREF
  __int64 v70; // [rsp+80h] [rbp+30h]
  __int64 *v71; // [rsp+88h] [rbp+38h]
  ULONG_PTR BugCheckParameter1; // [rsp+90h] [rbp+40h]
  __int64 v73; // [rsp+98h] [rbp+48h]
  __int128 v74; // [rsp+A0h] [rbp+50h] BYREF
  __int128 v75; // [rsp+B0h] [rbp+60h]
  __int64 v76; // [rsp+C0h] [rbp+70h]
  __int64 v77; // [rsp+C8h] [rbp+78h]

  LOBYTE(v65) = a4;
  v73 = a1;
  if ( !(unsigned int)Feature_Servicing_Wow64HwAmd64X86SuspendBeforeGetSetThreadContext__private_IsEnabledNoReportingNoInline() )
    return PspWow64GetContextThread_BeforeFix(
             a1,
             a2,
             a3,
             a4,
             Length,
             v58,
             v60,
             v61,
             v62,
             v63,
             v64,
             v65,
             ContextLength,
             v67,
             (__int64)Context,
             (__int64)ContextEx,
             v70,
             (__int64)v71,
             BugCheckParameter1,
             v73,
             v74,
             *((__int64 *)&v74 + 1),
             v75,
             *((__int64 *)&v75 + 1),
             v76,
             v77);
  LOBYTE(v64) = 0;
  if ( a3 != 716 )
  {
    ExtendedContextLength2 = -1073741820;
    goto LABEL_53;
  }
  BugCheckParameter1 = *(_QWORD *)(a1 + 544);
  if ( (unsigned __int16)PsWow64GetProcessMachine(BugCheckParameter1) != 332 )
  {
    ExtendedContextLength2 = -1073741811;
    goto LABEL_53;
  }
  HIDWORD(v64) = 0x10000;
  CpuAreaEnabledFeatures = RtlWow64GetCpuAreaEnabledFeatures((char *)&v64 + 4);
  if ( a4 )
  {
    v32 = 0x7FFFFFFF0000LL;
    if ( a2 < 0x7FFFFFFF0000LL )
      v32 = a2;
    HIDWORD(v64) = *(_DWORD *)v32;
  }
  else
  {
    HIDWORD(v64) = *(_DWORD *)a2;
  }
  LOBYTE(v30) = a4;
  ExtendedContextLength2 = RtlpWow64SanitizeContextFlags((char *)&v64 + 4, v30);
  if ( ExtendedContextLength2 < 0 )
    goto LABEL_53;
  LODWORD(ContextLength) = 0;
  ContextEx = 0LL;
  v74 = 0LL;
  v75 = 0LL;
  if ( a4 )
  {
    v33 = HIDWORD(v64);
    ExtendedContextLength2 = RtlGetExtendedContextLength2(HIDWORD(v64), (PULONG)&ContextLength, CpuAreaEnabledFeatures);
    if ( ExtendedContextLength2 < 0 )
      goto LABEL_53;
    v34 = (unsigned int)ContextLength + 15LL;
    if ( v34 <= (unsigned int)ContextLength )
      v34 = 0xFFFFFFFFFFFFFF0LL;
    v35 = alloca(v34 & 0xFFFFFFFFFFFFFFF0uLL);
    Context = (PCONTEXT)&v64;
    memset_0(&v64, 0, (unsigned int)ContextLength);
    ExtendedContextLength2 = RtlInitializeExtendedContext2((PCONTEXT)&v64, v33, &ContextEx, CpuAreaEnabledFeatures);
    if ( ExtendedContextLength2 < 0 )
      goto LABEL_53;
    ExtendedContextLength2 = RtlpReadExtendedContext(v36, 0, (__int64)ContextEx, v33, a2, &v74);
    if ( ExtendedContextLength2 < 0 )
      goto LABEL_53;
  }
  else
  {
    Context = (PCONTEXT)a2;
    ContextEx = (PCONTEXT_EX)(a2 + 716);
  }
  v37 = CpuAreaEnabledFeatures != 0 ? 0x40 : 0;
  LODWORD(ContextLength) = 0;
  ExtendedContextLength2 = RtlGetExtendedContextLength2(
                             v37 + 1074790431,
                             (PULONG)&ContextLength,
                             CpuAreaEnabledFeatures);
  if ( ExtendedContextLength2 >= 0 )
  {
    v38 = (unsigned int)ContextLength + 15LL;
    if ( v38 <= (unsigned int)ContextLength )
      v38 = 0xFFFFFFFFFFFFFF0LL;
    v39 = v38 & 0xFFFFFFFFFFFFFFF0uLL;
    v40 = alloca(v39);
    v41 = alloca(v39);
    v71 = &v64;
    ExtendedContextLength2 = RtlInitializeExtendedContext2(
                               (PCONTEXT)&v64,
                               v37 + 1074790431,
                               (PCONTEXT_EX *)&ContextLength,
                               CpuAreaEnabledFeatures);
    if ( ExtendedContextLength2 >= 0 )
    {
      IsEnabledNoReportingNoInline = Feature_Servicing_Wow64HwAmd64X86SuspendBeforeGetSetThreadContextSilent__private_IsEnabledNoReportingNoInline();
      if ( (struct _KTHREAD *)a1 == KeGetCurrentThread() )
        goto LABEL_32;
      v43 = IsEnabledNoReportingNoInline == 0;
      CurrentThread = KeGetCurrentThread();
      if ( v43 )
      {
        --CurrentThread->KernelApcDisable;
        ExtendedContextLength2 = PsSuspendThread(a1, 0LL);
        if ( ExtendedContextLength2 < 0 )
        {
          KeLeaveCriticalRegion();
          goto LABEL_53;
        }
      }
      else
      {
        --CurrentThread->KernelApcDisable;
        if ( (int)PsSuspendThread(a1, 0LL) < 0 )
        {
          KeLeaveCriticalRegion();
          goto LABEL_32;
        }
      }
      LOBYTE(v64) = 1;
LABEL_32:
      ExtendedContextLength2 = PspGetContextThreadInternal(a1, (__int64)v71, 0, 1, 1);
      if ( ExtendedContextLength2 < 0 )
        goto LABEL_53;
      LODWORD(ContextLength) = 0;
      ExtendedContextLength2 = RtlGetExtendedContextLength2(
                                 CpuAreaEnabledFeatures != 0 ? 65663 : 65599,
                                 (PULONG)&ContextLength,
                                 CpuAreaEnabledFeatures);
      if ( ExtendedContextLength2 < 0 )
        goto LABEL_53;
      BYTE1(v64) = 0;
      LODWORD(v67) = 0;
      v45 = (unsigned int)ContextLength + 15LL;
      if ( v45 <= (unsigned int)ContextLength )
        v45 = 0xFFFFFFFFFFFFFF0LL;
      v46 = v45 & 0xFFFFFFFFFFFFFFF0uLL;
      v47 = alloca(v46);
      v48 = alloca(v46);
      LODWORD(Lengtha) = ContextLength;
      ExtendedContextLength2 = PspWow64ReadOrWriteThreadCpuArea(
                                 BugCheckParameter1,
                                 Lengtha,
                                 v58,
                                 (__int64)&v67,
                                 (__int64)&v64 + 1);
      if ( ExtendedContextLength2 < 0 )
        goto LABEL_53;
      BYTE2(v64) = 0;
      if ( BYTE1(v64) )
      {
        v49 = HIDWORD(v64);
        v50 = RtlCopyContext(Context, HIDWORD(v64), (PCONTEXT)&v64);
      }
      else
      {
        if ( *((_WORD *)v71 + 28) != 35 )
        {
          v52 = v67;
          if ( (v67 & 1) == 0 )
          {
            ExtendedContextLength2 = RtlpWow64CtxFromAmd64(CpuAreaEnabledFeatures != 0 ? 65656 : 65592, v71, &v64);
            if ( ExtendedContextLength2 < 0 )
              goto LABEL_53;
            memset_0((char *)&a24 + 4, 0, 0x60uLL);
            LODWORD(v67) = v52 | 1;
            BYTE2(v64) = 1;
          }
          v49 = HIDWORD(v64);
          v53 = Context;
          ExtendedContextLength2 = RtlCopyContext(Context, HIDWORD(v64), (PCONTEXT)&v64);
          if ( ExtendedContextLength2 < 0 )
            goto LABEL_53;
          if ( (v49 & 0x40000000) != 0 )
          {
            P1Home_low = LODWORD(v53->P1Home);
            LODWORD(v53->P1Home) &= 0x67FFFFFFu;
            v54 = *((_DWORD *)v71 + 12) ^ (P1Home_low ^ *((_DWORD *)v71 + 12)) & 0x67FFFFFF;
            LODWORD(v53->P1Home) = v54;
            if ( (v54 & 0x18000000) == 0 )
              LODWORD(v53->P1Home) = v54 | 0x88000000;
          }
LABEL_49:
          if ( !BYTE2(v64)
            || (LODWORD(Lengthb) = ContextLength,
                ExtendedContextLength2 = PspWow64ReadOrWriteThreadCpuArea(
                                           BugCheckParameter1,
                                           Lengthb,
                                           v59,
                                           (__int64)&v67,
                                           0LL),
                ExtendedContextLength2 >= 0) )
          {
            if ( (_BYTE)v65 )
            {
              ExtendedContextLength2 = RtlpWriteExtendedContext(P1Home_low, a2 + 716, &v74, v49, (__int64)ContextEx);
              LODWORD(v70) = ExtendedContextLength2;
            }
          }
          goto LABEL_53;
        }
        v49 = HIDWORD(v64);
        v50 = RtlpWow64CtxFromAmd64(HIDWORD(v64), v71, Context);
      }
      ExtendedContextLength2 = v50;
      if ( v50 < 0 )
        goto LABEL_53;
      goto LABEL_49;
    }
  }
LABEL_53:
  if ( (_BYTE)v64 )
  {
    PsMultiResumeThread(a1, 0LL, 1u);
    KeLeaveCriticalRegion();
  }
  return ExtendedContextLength2;
}
