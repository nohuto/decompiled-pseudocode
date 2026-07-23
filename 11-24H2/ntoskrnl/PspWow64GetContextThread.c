/*
 * XREFs of PspWow64GetContextThread @ 0x140992510
 * Callers:
 *     WbGetWowTrapFrame @ 0x140801230 (WbGetWowTrapFrame.c)
 *     WbSetWowTrapFrame @ 0x140920FBC (WbSetWowTrapFrame.c)
 *     NtQueryInformationThread @ 0x1409910D0 (NtQueryInformationThread.c)
 * Callees:
 *     RtlInitializeExtendedContext2 @ 0x140235240 (RtlInitializeExtendedContext2.c)
 *     RtlGetExtendedContextLength2 @ 0x1402354D0 (RtlGetExtendedContextLength2.c)
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     PsMultiResumeThread @ 0x140455D04 (PsMultiResumeThread.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     _alloca_probe @ 0x1406B4C20 (_alloca_probe.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     PsWow64GetProcessMachine @ 0x14091D9C0 (PsWow64GetProcessMachine.c)
 *     PspGetContextThreadInternal @ 0x14091FE50 (PspGetContextThreadInternal.c)
 *     RtlpWriteExtendedContext @ 0x14092013C (RtlpWriteExtendedContext.c)
 *     RtlCopyContext @ 0x140921110 (RtlCopyContext.c)
 *     RtlpReadExtendedContext @ 0x1409219A0 (RtlpReadExtendedContext.c)
 *     RtlpWow64SanitizeContextFlags @ 0x1409E0B04 (RtlpWow64SanitizeContextFlags.c)
 *     RtlWow64GetCpuAreaEnabledFeatures @ 0x1409E0BB8 (RtlWow64GetCpuAreaEnabledFeatures.c)
 *     RtlpWow64CtxFromAmd64 @ 0x1409FD4A8 (RtlpWow64CtxFromAmd64.c)
 *     PsSuspendThread @ 0x140A0CF10 (PsSuspendThread.c)
 *     PspWow64ReadOrWriteThreadCpuArea @ 0x140ACFCF8 (PspWow64ReadOrWriteThreadCpuArea.c)
 */

__int64 __fastcall PspWow64GetContextThread(
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
  __int64 v28; // rdx
  ULONG64 CpuAreaEnabledFeatures; // r14
  __int64 v30; // rax
  unsigned __int64 v31; // rax
  void *v32; // rsp
  _CONTEXT *v33; // r15
  __int64 v34; // rcx
  int v35; // r12d
  unsigned __int64 v36; // rcx
  unsigned __int64 v37; // rcx
  void *v38; // rsp
  void *v39; // rsp
  struct _KTHREAD *CurrentThread; // rax
  ULONG v41; // ecx
  ULONG v42; // ebx
  unsigned __int64 v43; // rcx
  unsigned __int64 v44; // rcx
  void *v45; // rsp
  void *v46; // rsp
  ULONG64 v47; // rax
  unsigned int v48; // r14d
  NTSTATUS v49; // eax
  __int64 P1Home_low; // rcx
  int v51; // r12d
  int v52; // edx
  int v54; // [rsp+28h] [rbp-28h]
  int v55; // [rsp+28h] [rbp-28h]
  char v56; // [rsp+50h] [rbp+0h] BYREF
  char v57; // [rsp+51h] [rbp+1h]
  char v58; // [rsp+52h] [rbp+2h]
  ULONG v59; // [rsp+54h] [rbp+4h] BYREF
  ULONG ContextLength; // [rsp+58h] [rbp+8h] BYREF
  char v61; // [rsp+5Ch] [rbp+Ch]
  __int64 v62; // [rsp+60h] [rbp+10h] BYREF
  PCONTEXT_EX ContextEx; // [rsp+68h] [rbp+18h] BYREF
  PCONTEXT_EX v64; // [rsp+70h] [rbp+20h] BYREF
  int v65; // [rsp+78h] [rbp+28h]
  char *v66; // [rsp+80h] [rbp+30h]
  ULONG_PTR BugCheckParameter1; // [rsp+88h] [rbp+38h]
  __int64 v68; // [rsp+90h] [rbp+40h]
  unsigned __int64 v69; // [rsp+98h] [rbp+48h]
  PCONTEXT_EX v70; // [rsp+A0h] [rbp+50h] BYREF
  _OWORD v71[2]; // [rsp+A8h] [rbp+58h] BYREF

  v61 = a4;
  v69 = a2;
  v68 = a1;
  v58 = 0;
  if ( a3 != 716 )
  {
    ExtendedContextLength2 = -1073741820;
    goto LABEL_50;
  }
  BugCheckParameter1 = *(_QWORD *)(a1 + 544);
  if ( (unsigned __int16)PsWow64GetProcessMachine(BugCheckParameter1) != 332 )
  {
    ExtendedContextLength2 = -1073741811;
    goto LABEL_50;
  }
  v59 = 0x10000;
  CpuAreaEnabledFeatures = RtlWow64GetCpuAreaEnabledFeatures(&v59);
  if ( a4 )
  {
    v30 = 0x7FFFFFFF0000LL;
    if ( a2 < 0x7FFFFFFF0000LL )
      v30 = a2;
    v59 = *(_DWORD *)v30;
  }
  else
  {
    v59 = *(_DWORD *)a2;
  }
  LOBYTE(v28) = a4;
  ExtendedContextLength2 = RtlpWow64SanitizeContextFlags(&v59, v28);
  if ( ExtendedContextLength2 >= 0 )
  {
    ContextLength = 0;
    ContextEx = 0LL;
    memset(v71, 0, sizeof(v71));
    if ( a4 )
    {
      ExtendedContextLength2 = RtlGetExtendedContextLength2(v59, &ContextLength, CpuAreaEnabledFeatures);
      if ( ExtendedContextLength2 < 0 )
        goto LABEL_50;
      v31 = ContextLength + 15LL;
      if ( v31 <= ContextLength )
        v31 = 0xFFFFFFFFFFFFFF0LL;
      v32 = alloca(v31 & 0xFFFFFFFFFFFFFFF0uLL);
      v33 = (_CONTEXT *)&v56;
      memset_0(&v56, 0, ContextLength);
      ExtendedContextLength2 = RtlInitializeExtendedContext2((PCONTEXT)&v56, v59, &ContextEx, CpuAreaEnabledFeatures);
      if ( ExtendedContextLength2 < 0 )
        goto LABEL_50;
      ExtendedContextLength2 = RtlpReadExtendedContext(v34, 0, (__int64)ContextEx, v59, a2, v71);
      if ( ExtendedContextLength2 < 0 )
        goto LABEL_50;
    }
    else
    {
      v33 = (_CONTEXT *)a2;
      ContextEx = (PCONTEXT_EX)(a2 + 716);
    }
    v35 = CpuAreaEnabledFeatures != 0 ? 0x40 : 0;
    ContextLength = 0;
    ExtendedContextLength2 = RtlGetExtendedContextLength2(v35 + 1074790431, &ContextLength, CpuAreaEnabledFeatures);
    if ( ExtendedContextLength2 >= 0 )
    {
      v36 = ContextLength + 15LL;
      if ( v36 <= ContextLength )
        v36 = 0xFFFFFFFFFFFFFF0LL;
      v37 = v36 & 0xFFFFFFFFFFFFFFF0uLL;
      v38 = alloca(v37);
      v39 = alloca(v37);
      v66 = &v56;
      ExtendedContextLength2 = RtlInitializeExtendedContext2(
                                 (PCONTEXT)&v56,
                                 v35 + 1074790431,
                                 &v64,
                                 CpuAreaEnabledFeatures);
      if ( ExtendedContextLength2 >= 0 )
      {
        if ( (struct _KTHREAD *)a1 != KeGetCurrentThread() )
        {
          CurrentThread = KeGetCurrentThread();
          --CurrentThread->KernelApcDisable;
          if ( (int)PsSuspendThread(a1, 0LL) < 0 )
            KeLeaveCriticalRegion();
          else
            v58 = 1;
        }
        ExtendedContextLength2 = PspGetContextThreadInternal(a1, (__int64)&v56, 0, 1, 1);
        if ( ExtendedContextLength2 >= 0 )
        {
          v41 = 65599;
          if ( CpuAreaEnabledFeatures )
            v41 = 65663;
          LODWORD(v64) = v41;
          ContextLength = 0;
          ExtendedContextLength2 = RtlGetExtendedContextLength2(v41, &ContextLength, CpuAreaEnabledFeatures);
          if ( ExtendedContextLength2 >= 0 )
          {
            v56 = 0;
            LODWORD(v62) = 0;
            v42 = ContextLength;
            v43 = ContextLength + 15LL;
            if ( v43 <= ContextLength )
              v43 = 0xFFFFFFFFFFFFFF0LL;
            v44 = v43 & 0xFFFFFFFFFFFFFFF0uLL;
            v45 = alloca(v44);
            v46 = alloca(v44);
            v47 = RtlWow64GetCpuAreaEnabledFeatures(&v64);
            RtlInitializeExtendedContext2((PCONTEXT)&v56, (ULONG)v64, &v70, v47);
            ExtendedContextLength2 = PspWow64ReadOrWriteThreadCpuArea(
                                       BugCheckParameter1,
                                       v42,
                                       v54,
                                       (__int64)&v62,
                                       (__int64)&v56);
            if ( ExtendedContextLength2 >= 0 )
            {
              v57 = 0;
              if ( v56 )
              {
                v48 = v59;
                v49 = RtlCopyContext(v33, v59, (PCONTEXT)&v56);
LABEL_45:
                ExtendedContextLength2 = v49;
                if ( v49 < 0 )
                  goto LABEL_50;
                goto LABEL_46;
              }
              if ( (_WORD)BugCheckParameter1 == 35 )
              {
                v48 = v59;
                v49 = RtlpWow64CtxFromAmd64(v59, &v56, v33);
                goto LABEL_45;
              }
              v51 = v62;
              if ( (v62 & 1) == 0 )
              {
                ExtendedContextLength2 = RtlpWow64CtxFromAmd64(CpuAreaEnabledFeatures != 0 ? 65656 : 65592, v66, &v56);
                if ( ExtendedContextLength2 < 0 )
                  goto LABEL_50;
                memset_0((char *)&a24 + 4, 0, 0x60uLL);
                LODWORD(v62) = v51 | 1;
                v57 = 1;
              }
              v48 = v59;
              ExtendedContextLength2 = RtlCopyContext(v33, v59, (PCONTEXT)&v56);
              if ( ExtendedContextLength2 >= 0 )
              {
                if ( (v48 & 0x40000000) != 0 )
                {
                  P1Home_low = LODWORD(v33->P1Home);
                  LODWORD(v33->P1Home) &= 0x67FFFFFFu;
                  v52 = *((_DWORD *)v66 + 12) ^ (P1Home_low ^ *((_DWORD *)v66 + 12)) & 0x67FFFFFF;
                  LODWORD(v33->P1Home) = v52;
                  if ( (v52 & 0x18000000) == 0 )
                    LODWORD(v33->P1Home) = v52 | 0x88000000;
                }
LABEL_46:
                if ( !v57
                  || (ExtendedContextLength2 = PspWow64ReadOrWriteThreadCpuArea(
                                                 BugCheckParameter1,
                                                 ContextLength,
                                                 v55,
                                                 (__int64)&v62,
                                                 0LL),
                      ExtendedContextLength2 >= 0) )
                {
                  if ( v61 )
                  {
                    ExtendedContextLength2 = RtlpWriteExtendedContext(
                                               P1Home_low,
                                               v69 + 716,
                                               v71,
                                               v48,
                                               (__int64)ContextEx);
                    v65 = ExtendedContextLength2;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LABEL_50:
  if ( v58 )
  {
    PsMultiResumeThread(a1, 0LL, 1u);
    KeLeaveCriticalRegion();
  }
  return (unsigned int)ExtendedContextLength2;
}
