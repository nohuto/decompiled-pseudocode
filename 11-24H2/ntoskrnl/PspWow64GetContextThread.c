/*
 * XREFs of PspWow64GetContextThread @ 0x1409A90C0
 * Callers:
 *     WbGetWowTrapFrame @ 0x140800AF0 (WbGetWowTrapFrame.c)
 *     WbSetWowTrapFrame @ 0x1408FE6DC (WbSetWowTrapFrame.c)
 *     NtQueryInformationThread @ 0x1409A7C80 (NtQueryInformationThread.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140257E40 (KeLeaveCriticalRegion.c)
 *     RtlInitializeExtendedContext2 @ 0x14027FCB0 (RtlInitializeExtendedContext2.c)
 *     RtlGetExtendedContextLength2 @ 0x14027FF40 (RtlGetExtendedContextLength2.c)
 *     PsMultiResumeThread @ 0x14046086C (PsMultiResumeThread.c)
 *     Feature_3952555321__private_IsEnabledDeviceUsageNoInline @ 0x1405E6EA0 (Feature_3952555321__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     _alloca_probe @ 0x1406B3C80 (_alloca_probe.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     PspWow64ReadOrWriteThreadCpuAreaOld @ 0x14077A5B0 (PspWow64ReadOrWriteThreadCpuAreaOld.c)
 *     PsWow64GetProcessMachine @ 0x1408FB0E0 (PsWow64GetProcessMachine.c)
 *     PspGetContextThreadInternal @ 0x1408FD570 (PspGetContextThreadInternal.c)
 *     RtlpWriteExtendedContext @ 0x1408FD85C (RtlpWriteExtendedContext.c)
 *     RtlCopyContext @ 0x1408FE830 (RtlCopyContext.c)
 *     RtlpReadExtendedContext @ 0x1408FF0C0 (RtlpReadExtendedContext.c)
 *     PsSuspendThread @ 0x14093A4F0 (PsSuspendThread.c)
 *     RtlpWow64SanitizeContextFlags @ 0x1409E6274 (RtlpWow64SanitizeContextFlags.c)
 *     RtlWow64GetCpuAreaEnabledFeatures @ 0x1409E6328 (RtlWow64GetCpuAreaEnabledFeatures.c)
 *     RtlpWow64CtxFromAmd64 @ 0x140A004D0 (RtlpWow64CtxFromAmd64.c)
 *     PspWow64ReadOrWriteThreadCpuArea @ 0x140AD198C (PspWow64ReadOrWriteThreadCpuArea.c)
 */

__int64 __fastcall PspWow64GetContextThread(
        __int64 a1,
        unsigned int *a2,
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
  __int64 CpuAreaEnabledFeatures; // r13
  __int64 v30; // rax
  unsigned __int64 v31; // rax
  void *v32; // rsp
  bool *v33; // r12
  __int64 v34; // rcx
  int v35; // r15d
  unsigned __int64 v36; // rcx
  unsigned __int64 v37; // rcx
  void *v38; // rsp
  void *v39; // rsp
  struct _KTHREAD *CurrentThread; // rax
  __int64 v41; // rcx
  int v42; // ebx
  unsigned __int64 v43; // rcx
  unsigned __int64 v44; // rcx
  void *v45; // rsp
  void *v46; // rsp
  __int64 v47; // rax
  int v48; // eax
  unsigned int v49; // r14d
  int v50; // eax
  __int64 v51; // rcx
  int v52; // r14d
  int v53; // edx
  int IsEnabledDeviceUsageNoInline; // eax
  int v55; // eax
  size_t Size; // [rsp+20h] [rbp-30h]
  size_t Sizea; // [rsp+20h] [rbp-30h]
  int v59; // [rsp+28h] [rbp-28h]
  int v60; // [rsp+28h] [rbp-28h]
  bool v61; // [rsp+50h] [rbp+0h] BYREF
  char v62; // [rsp+51h] [rbp+1h]
  char v63; // [rsp+52h] [rbp+2h]
  unsigned int v64; // [rsp+54h] [rbp+4h] BYREF
  unsigned int v65; // [rsp+58h] [rbp+8h] BYREF
  char v66; // [rsp+5Ch] [rbp+Ch]
  __int64 v67; // [rsp+60h] [rbp+10h] BYREF
  ULONG_PTR BugCheckParameter1; // [rsp+68h] [rbp+18h]
  unsigned int *v69; // [rsp+70h] [rbp+20h] BYREF
  __int64 v70; // [rsp+78h] [rbp+28h] BYREF
  int v71; // [rsp+80h] [rbp+30h]
  bool *v72; // [rsp+88h] [rbp+38h]
  __int64 v73; // [rsp+90h] [rbp+40h]
  unsigned int *v74; // [rsp+98h] [rbp+48h]
  __int64 v75; // [rsp+A0h] [rbp+50h] BYREF
  _OWORD v76[2]; // [rsp+A8h] [rbp+58h] BYREF

  v66 = a4;
  v74 = a2;
  v73 = a1;
  v63 = 0;
  if ( a3 != 716 )
  {
    ExtendedContextLength2 = -1073741820;
    goto LABEL_56;
  }
  BugCheckParameter1 = *(_QWORD *)(a1 + 544);
  if ( (unsigned __int16)PsWow64GetProcessMachine(BugCheckParameter1) != 332 )
  {
    ExtendedContextLength2 = -1073741811;
    goto LABEL_56;
  }
  v64 = 0x10000;
  CpuAreaEnabledFeatures = RtlWow64GetCpuAreaEnabledFeatures(&v64);
  if ( a4 )
  {
    v30 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)a2 < 0x7FFFFFFF0000LL )
      v30 = (__int64)a2;
    v64 = *(_DWORD *)v30;
  }
  else
  {
    v64 = *a2;
  }
  LOBYTE(v28) = a4;
  ExtendedContextLength2 = RtlpWow64SanitizeContextFlags(&v64, v28);
  if ( ExtendedContextLength2 >= 0 )
  {
    v65 = 0;
    v69 = 0LL;
    memset(v76, 0, sizeof(v76));
    if ( a4 )
    {
      ExtendedContextLength2 = RtlGetExtendedContextLength2(v64, &v65, CpuAreaEnabledFeatures);
      if ( ExtendedContextLength2 < 0 )
        goto LABEL_56;
      v31 = v65 + 15LL;
      if ( v31 <= v65 )
        v31 = 0xFFFFFFFFFFFFFF0LL;
      v32 = alloca(v31 & 0xFFFFFFFFFFFFFFF0uLL);
      v33 = &v61;
      memset_0(&v61, 0, v65);
      ExtendedContextLength2 = RtlInitializeExtendedContext2((__int64)&v61, v64, &v69, CpuAreaEnabledFeatures);
      if ( ExtendedContextLength2 < 0 )
        goto LABEL_56;
      ExtendedContextLength2 = RtlpReadExtendedContext(v34, 0, (__int64)v69, v64, (__int64)a2, v76);
      if ( ExtendedContextLength2 < 0 )
        goto LABEL_56;
    }
    else
    {
      v33 = (bool *)a2;
      v69 = a2 + 179;
    }
    v35 = CpuAreaEnabledFeatures != 0 ? 0x40 : 0;
    v65 = 0;
    ExtendedContextLength2 = RtlGetExtendedContextLength2(
                               (unsigned int)(v35 + 1074790431),
                               &v65,
                               CpuAreaEnabledFeatures);
    if ( ExtendedContextLength2 >= 0 )
    {
      v36 = v65 + 15LL;
      if ( v36 <= v65 )
        v36 = 0xFFFFFFFFFFFFFF0LL;
      v37 = v36 & 0xFFFFFFFFFFFFFFF0uLL;
      v38 = alloca(v37);
      v39 = alloca(v37);
      v72 = &v61;
      ExtendedContextLength2 = RtlInitializeExtendedContext2(
                                 (__int64)&v61,
                                 v35 + 1074790431,
                                 &v70,
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
            v63 = 1;
        }
        ExtendedContextLength2 = PspGetContextThreadInternal(a1, (__int64)v72, 0, 1, 1);
        if ( ExtendedContextLength2 >= 0 )
        {
          v41 = 65599LL;
          if ( CpuAreaEnabledFeatures )
            v41 = 65663LL;
          LODWORD(v70) = v41;
          v65 = 0;
          ExtendedContextLength2 = RtlGetExtendedContextLength2(v41, &v65, CpuAreaEnabledFeatures);
          if ( ExtendedContextLength2 >= 0 )
          {
            v61 = 0;
            LODWORD(v67) = 0;
            v42 = v65;
            v43 = v65 + 15LL;
            if ( v43 <= v65 )
              v43 = 0xFFFFFFFFFFFFFF0LL;
            v44 = v43 & 0xFFFFFFFFFFFFFFF0uLL;
            v45 = alloca(v44);
            v46 = alloca(v44);
            if ( (unsigned int)Feature_3952555321__private_IsEnabledDeviceUsageNoInline() )
            {
              v47 = RtlWow64GetCpuAreaEnabledFeatures(&v70);
              RtlInitializeExtendedContext2((__int64)&v61, v70, &v75, v47);
              v48 = PspWow64ReadOrWriteThreadCpuArea(BugCheckParameter1, v42, v59, (__int64)&v67, (__int64)&v61);
            }
            else
            {
              LODWORD(Size) = v42;
              v48 = PspWow64ReadOrWriteThreadCpuAreaOld(
                      (_KPROCESS *)BugCheckParameter1,
                      a1,
                      1,
                      &v61,
                      Size,
                      v59,
                      &v67,
                      &v61);
            }
            ExtendedContextLength2 = v48;
            if ( v48 >= 0 )
            {
              v62 = 0;
              if ( v61 )
              {
                v49 = v64;
                v50 = RtlCopyContext((__int64)v33, v64, (__int64)&v61);
LABEL_48:
                ExtendedContextLength2 = v50;
                if ( v50 < 0 )
                  goto LABEL_56;
                goto LABEL_49;
              }
              if ( *((_WORD *)v72 + 28) == 35 )
              {
                v49 = v64;
                v50 = RtlpWow64CtxFromAmd64(v64, v72, v33);
                goto LABEL_48;
              }
              v52 = v67;
              if ( (v67 & 1) == 0 )
              {
                ExtendedContextLength2 = RtlpWow64CtxFromAmd64(CpuAreaEnabledFeatures != 0 ? 65656 : 65592, v72, &v61);
                if ( ExtendedContextLength2 < 0 )
                  goto LABEL_56;
                memset_0((char *)&a24 + 4, 0, 0x60uLL);
                LODWORD(v67) = v52 | 1;
                v62 = 1;
              }
              v49 = v64;
              ExtendedContextLength2 = RtlCopyContext((__int64)v33, v64, (__int64)&v61);
              if ( ExtendedContextLength2 >= 0 )
              {
                if ( (v49 & 0x40000000) != 0 )
                {
                  v51 = *(unsigned int *)v33;
                  *(_DWORD *)v33 &= 0x67FFFFFFu;
                  v53 = *((_DWORD *)v72 + 12) ^ (v51 ^ *((_DWORD *)v72 + 12)) & 0x67FFFFFF;
                  *(_DWORD *)v33 = v53;
                  if ( (v53 & 0x18000000) == 0 )
                    *(_DWORD *)v33 = v53 | 0x88000000;
                }
LABEL_49:
                if ( !v62
                  || ((IsEnabledDeviceUsageNoInline = Feature_3952555321__private_IsEnabledDeviceUsageNoInline(),
                       LODWORD(Sizea) = v65,
                       !IsEnabledDeviceUsageNoInline)
                    ? (v55 = PspWow64ReadOrWriteThreadCpuAreaOld(
                               (_KPROCESS *)BugCheckParameter1,
                               a1,
                               0,
                               &v61,
                               Sizea,
                               v60,
                               &v67,
                               0LL))
                    : (v55 = PspWow64ReadOrWriteThreadCpuArea(BugCheckParameter1, v65, v60, (__int64)&v67, 0LL)),
                      ExtendedContextLength2 = v55,
                      v55 >= 0) )
                {
                  if ( v66 )
                  {
                    ExtendedContextLength2 = RtlpWriteExtendedContext(v51, (__int64)(v74 + 179), v76, v49, (__int64)v69);
                    v71 = ExtendedContextLength2;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LABEL_56:
  if ( v63 )
  {
    PsMultiResumeThread(a1, 0LL, 1u);
    KeLeaveCriticalRegion();
  }
  return (unsigned int)ExtendedContextLength2;
}
