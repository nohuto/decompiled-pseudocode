/*
 * XREFs of PspWow64SetContextThread @ 0x140913174
 * Callers:
 *     WbSetWowTrapFrame @ 0x1408FE6DC (WbSetWowTrapFrame.c)
 *     NtSetInformationThread @ 0x140911410 (NtSetInformationThread.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140257E40 (KeLeaveCriticalRegion.c)
 *     RtlInitializeExtendedContext2 @ 0x14027FCB0 (RtlInitializeExtendedContext2.c)
 *     RtlGetExtendedContextLength2 @ 0x14027FF40 (RtlGetExtendedContextLength2.c)
 *     IoThreadToProcess @ 0x140441CC0 (IoThreadToProcess.c)
 *     PsGetThreadTeb @ 0x140456DA0 (PsGetThreadTeb.c)
 *     PsMultiResumeThread @ 0x14046086C (PsMultiResumeThread.c)
 *     Feature_3952555321__private_IsEnabledDeviceUsageNoInline @ 0x1405E6EA0 (Feature_3952555321__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     _alloca_probe @ 0x1406B3C80 (_alloca_probe.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     PspWow64ReadOrWriteThreadCpuAreaOld @ 0x14077A5B0 (PspWow64ReadOrWriteThreadCpuAreaOld.c)
 *     PsWow64GetProcessMachine @ 0x1408FB0E0 (PsWow64GetProcessMachine.c)
 *     PspSetContextThreadInternal @ 0x1408FD220 (PspSetContextThreadInternal.c)
 *     PspGetContextThreadInternal @ 0x1408FD570 (PspGetContextThreadInternal.c)
 *     RtlCopyContext @ 0x1408FE830 (RtlCopyContext.c)
 *     RtlpReadExtendedContext @ 0x1408FF0C0 (RtlpReadExtendedContext.c)
 *     PsSuspendThread @ 0x14093A4F0 (PsSuspendThread.c)
 *     RtlpWow64SanitizeContextFlags @ 0x1409E6274 (RtlpWow64SanitizeContextFlags.c)
 *     RtlWow64GetCpuAreaEnabledFeatures @ 0x1409E6328 (RtlWow64GetCpuAreaEnabledFeatures.c)
 *     RtlpWow64CtxFromAmd64 @ 0x140A004D0 (RtlpWow64CtxFromAmd64.c)
 *     EtwTiLogSetContextThread @ 0x140A260A0 (EtwTiLogSetContextThread.c)
 *     RtlGuardIsValidWow64StackPointer @ 0x140A468E8 (RtlGuardIsValidWow64StackPointer.c)
 *     RtlpWow64CtxToAmd64 @ 0x140A50968 (RtlpWow64CtxToAmd64.c)
 *     PspWow64ReadOrWriteThreadCpuArea @ 0x140AD198C (PspWow64ReadOrWriteThreadCpuArea.c)
 */

__int64 __fastcall PspWow64SetContextThread(
        PETHREAD Thread,
        char *a2,
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
        __int64 a24,
        __int64 a25,
        __int64 a26,
        __int64 a27,
        __int64 a28,
        __int64 a29,
        __int64 a30,
        __int64 a31,
        __int64 a32)
{
  int ExtendedContextLength2; // ebx
  __int64 v36; // rdx
  __int64 CpuAreaEnabledFeatures; // r12
  __int64 v38; // rax
  unsigned int v39; // r14d
  unsigned __int64 v40; // rcx
  unsigned __int64 v41; // rcx
  void *v42; // rsp
  void *v43; // rsp
  char *v44; // r13
  __int64 v45; // rcx
  struct _KPROCESS *v46; // rbx
  __int64 ThreadTeb; // rax
  int v48; // r14d
  unsigned __int64 v49; // rcx
  unsigned __int64 v50; // rcx
  void *v51; // rsp
  void *v52; // rsp
  struct _KTHREAD *CurrentThread; // rax
  __int64 v54; // rcx
  int v55; // ebx
  unsigned __int64 v56; // rcx
  unsigned __int64 v57; // rcx
  void *v58; // rsp
  void *v59; // rsp
  __int64 v60; // rax
  int v61; // eax
  char v62; // r12
  int v63; // r12d
  bool v64; // cf
  int v65; // r12d
  int IsEnabledDeviceUsageNoInline; // eax
  int v67; // eax
  struct _KTHREAD *v68; // rcx
  size_t Size; // [rsp+20h] [rbp-30h]
  size_t Sizea; // [rsp+20h] [rbp-30h]
  int v72; // [rsp+28h] [rbp-28h]
  int v73; // [rsp+28h] [rbp-28h]
  char v74; // [rsp+50h] [rbp+0h] BYREF
  bool v75[11]; // [rsp+51h] [rbp+1h] BYREF
  char v76; // [rsp+5Ch] [rbp+Ch]
  char v77; // [rsp+5Dh] [rbp+Dh]
  PETHREAD Threada; // [rsp+60h] [rbp+10h] BYREF
  __int64 v79; // [rsp+68h] [rbp+18h] BYREF
  __int64 v80; // [rsp+70h] [rbp+20h]
  ULONG_PTR BugCheckParameter1; // [rsp+78h] [rbp+28h]
  __int64 v82; // [rsp+80h] [rbp+30h] BYREF
  __int64 v83; // [rsp+88h] [rbp+38h]

  v77 = a4;
  v74 = 0;
  v75[0] = 0;
  if ( a3 != 716 )
  {
    ExtendedContextLength2 = -1073741820;
    goto LABEL_63;
  }
  Threada = KeGetCurrentThread();
  BugCheckParameter1 = (ULONG_PTR)Thread->Process;
  if ( (unsigned __int16)PsWow64GetProcessMachine(BugCheckParameter1) != 332 )
    goto LABEL_4;
  *(_DWORD *)&v75[3] = 0x10000;
  CpuAreaEnabledFeatures = RtlWow64GetCpuAreaEnabledFeatures(&v75[3]);
  v80 = CpuAreaEnabledFeatures;
  if ( a4 )
  {
    v38 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)a2 < 0x7FFFFFFF0000LL )
      v38 = (__int64)a2;
    *(_DWORD *)&v75[3] = *(_DWORD *)v38;
  }
  else
  {
    *(_DWORD *)&v75[3] = *(_DWORD *)a2;
  }
  LOBYTE(v36) = a4;
  ExtendedContextLength2 = RtlpWow64SanitizeContextFlags(&v75[3], v36);
  if ( ExtendedContextLength2 >= 0 )
  {
    v39 = *(_DWORD *)&v75[3] & 0x37FFFFFF;
    *(_QWORD *)&v75[3] = *(_DWORD *)&v75[3] & 0x37FFFFFF;
    v79 = 0LL;
    if ( a4 )
    {
      ExtendedContextLength2 = RtlGetExtendedContextLength2(v39, &v75[7], CpuAreaEnabledFeatures);
      if ( ExtendedContextLength2 < 0 )
        goto LABEL_63;
      v40 = *(unsigned int *)&v75[7] + 15LL;
      if ( v40 <= *(unsigned int *)&v75[7] )
        v40 = 0xFFFFFFFFFFFFFF0LL;
      v41 = v40 & 0xFFFFFFFFFFFFFFF0uLL;
      v42 = alloca(v41);
      v43 = alloca(v41);
      v44 = &v74;
      ExtendedContextLength2 = RtlInitializeExtendedContext2((__int64)&v74, v39, &v79, v80);
      if ( ExtendedContextLength2 < 0 )
        goto LABEL_63;
      ExtendedContextLength2 = RtlpReadExtendedContext(v45, 1u, v79, v39, (__int64)a2, 0LL);
      if ( ExtendedContextLength2 < 0 )
        goto LABEL_63;
    }
    else
    {
      v44 = a2;
    }
    v46 = IoThreadToProcess(Threada);
    if ( IoThreadToProcess(Thread) == v46
      && (*(_DWORD *)(BugCheckParameter1 + 136) & 0x20) != 0
      && (v39 & 0x10001) == 0x10001 )
    {
      ThreadTeb = PsGetThreadTeb((__int64)Thread);
      if ( !(unsigned int)RtlGuardIsValidWow64StackPointer(*((unsigned int *)v44 + 49), ThreadTeb) )
      {
LABEL_4:
        ExtendedContextLength2 = -1073741811;
        goto LABEL_63;
      }
    }
    v48 = v80 != 0 ? 0x40 : 0;
    *(_DWORD *)&v75[7] = 0;
    ExtendedContextLength2 = RtlGetExtendedContextLength2((unsigned int)(v48 + 1048607), &v75[7], v80);
    if ( ExtendedContextLength2 >= 0 )
    {
      v49 = *(unsigned int *)&v75[7] + 15LL;
      if ( v49 <= *(unsigned int *)&v75[7] )
        v49 = 0xFFFFFFFFFFFFFF0LL;
      v50 = v49 & 0xFFFFFFFFFFFFFFF0uLL;
      v51 = alloca(v50);
      v52 = alloca(v50);
      ExtendedContextLength2 = RtlInitializeExtendedContext2((__int64)&v74, v48 + 1048607, &v79, v80);
      if ( ExtendedContextLength2 >= 0 )
      {
        if ( Thread != KeGetCurrentThread() )
        {
          CurrentThread = KeGetCurrentThread();
          --CurrentThread->KernelApcDisable;
          if ( (int)PsSuspendThread(Thread, 0LL) < 0 )
            KeLeaveCriticalRegion();
          else
            v74 = 1;
        }
        ExtendedContextLength2 = PspGetContextThreadInternal((__int64)Thread, (__int64)&v74, 0, 1, 1);
        if ( ExtendedContextLength2 >= 0 )
        {
          v54 = 65599LL;
          if ( v80 )
            v54 = 65663LL;
          LODWORD(v79) = v54;
          *(_DWORD *)&v75[7] = 0;
          ExtendedContextLength2 = RtlGetExtendedContextLength2(v54, &v75[7], v80);
          if ( ExtendedContextLength2 >= 0 )
          {
            v75[0] = 0;
            LODWORD(Threada) = 0;
            v55 = *(_DWORD *)&v75[7];
            v56 = *(unsigned int *)&v75[7] + 15LL;
            if ( v56 <= *(unsigned int *)&v75[7] )
              v56 = 0xFFFFFFFFFFFFFF0LL;
            v57 = v56 & 0xFFFFFFFFFFFFFFF0uLL;
            v58 = alloca(v57);
            v59 = alloca(v57);
            if ( (unsigned int)Feature_3952555321__private_IsEnabledDeviceUsageNoInline() )
            {
              v60 = RtlWow64GetCpuAreaEnabledFeatures(&v79);
              RtlInitializeExtendedContext2((__int64)&v74, v79, &v82, v60);
              v61 = PspWow64ReadOrWriteThreadCpuArea(BugCheckParameter1, v55, v72, (__int64)&Threada, (__int64)v75);
            }
            else
            {
              LODWORD(Size) = v55;
              v61 = PspWow64ReadOrWriteThreadCpuAreaOld(
                      (_KPROCESS *)BugCheckParameter1,
                      (__int64)Thread,
                      1,
                      &v74,
                      Size,
                      v72,
                      &Threada,
                      v75);
            }
            ExtendedContextLength2 = v61;
            if ( v61 >= 0 )
            {
              v62 = 0;
              v76 = 0;
              if ( v75[0] )
              {
                ExtendedContextLength2 = RtlCopyContext((__int64)&v74, *(unsigned int *)&v75[3], (__int64)v44);
                if ( ExtendedContextLength2 < 0 )
                  goto LABEL_63;
                goto LABEL_55;
              }
              if ( (_WORD)v83 == 35 )
              {
                ExtendedContextLength2 = RtlpWow64CtxToAmd64(*(unsigned int *)&v75[3], v44, &v74);
                if ( ExtendedContextLength2 < 0 )
                  goto LABEL_63;
                v62 = 1;
                goto LABEL_59;
              }
              v63 = (int)Threada;
              if ( ((unsigned __int8)Threada & 1) == 0 )
              {
                v64 = v80 != 0;
                v80 = -v80;
                ExtendedContextLength2 = RtlpWow64CtxFromAmd64(v64 ? 65656 : 65592, &v74, &v74);
                if ( ExtendedContextLength2 < 0 )
                  goto LABEL_63;
                memset_0((char *)&a32 + 4, 0, 0x60uLL);
                LODWORD(Threada) = v63 | 1;
              }
              v65 = *(_DWORD *)&v75[3];
              ExtendedContextLength2 = RtlCopyContext((__int64)&v74, *(unsigned int *)&v75[3], (__int64)v44);
              if ( ExtendedContextLength2 >= 0 )
              {
                if ( (v65 & 0x10010) == 0x10010 )
                {
                  ExtendedContextLength2 = RtlpWow64CtxToAmd64(65552LL, v44, &v74);
                  if ( ExtendedContextLength2 < 0 )
                    goto LABEL_63;
                  v62 = 1;
                  LODWORD(v82) = 1048592;
                }
                else
                {
                  v62 = v76;
                }
LABEL_55:
                IsEnabledDeviceUsageNoInline = Feature_3952555321__private_IsEnabledDeviceUsageNoInline();
                LODWORD(Sizea) = *(_DWORD *)&v75[7];
                if ( IsEnabledDeviceUsageNoInline )
                  v67 = PspWow64ReadOrWriteThreadCpuArea(
                          BugCheckParameter1,
                          *(int *)&v75[7],
                          v73,
                          (__int64)&Threada,
                          0LL);
                else
                  v67 = PspWow64ReadOrWriteThreadCpuAreaOld(
                          (_KPROCESS *)BugCheckParameter1,
                          (__int64)Thread,
                          0,
                          &v74,
                          Sizea,
                          v73,
                          &Threada,
                          0LL);
                ExtendedContextLength2 = v67;
                if ( v67 < 0 )
                  goto LABEL_63;
LABEL_59:
                if ( !v62
                  || (ExtendedContextLength2 = PspSetContextThreadInternal(Thread, (__int64)&v74, 0, 1, 1),
                      ExtendedContextLength2 >= 0) )
                {
                  if ( v77 )
                  {
                    v68 = KeGetCurrentThread();
                    LOBYTE(v68) = v68->PreviousMode;
                    EtwTiLogSetContextThread(v68, Thread, v44, *(unsigned int *)&v75[3], Sizea);
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LABEL_63:
  if ( v74 )
  {
    PsMultiResumeThread((__int64)Thread, 0LL, 1u);
    KeLeaveCriticalRegion();
  }
  return (unsigned int)ExtendedContextLength2;
}
