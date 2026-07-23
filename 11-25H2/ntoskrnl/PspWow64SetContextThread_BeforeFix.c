/*
 * XREFs of PspWow64SetContextThread_BeforeFix @ 0x14076D0C0
 * Callers:
 *     PspWow64SetContextThread @ 0x1408B96E4 (PspWow64SetContextThread.c)
 * Callees:
 *     RtlInitializeExtendedContext2 @ 0x140258C20 (RtlInitializeExtendedContext2.c)
 *     RtlGetExtendedContextLength2 @ 0x14025D850 (RtlGetExtendedContextLength2.c)
 *     IoThreadToProcess @ 0x140442EB0 (IoThreadToProcess.c)
 *     PsGetThreadTeb @ 0x140456940 (PsGetThreadTeb.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     _alloca_probe @ 0x1406A89B0 (_alloca_probe.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     RtlpReadExtendedContext @ 0x140859000 (RtlpReadExtendedContext.c)
 *     PsWow64GetProcessMachine @ 0x140907610 (PsWow64GetProcessMachine.c)
 *     PspSetContextThreadInternal @ 0x1409095F0 (PspSetContextThreadInternal.c)
 *     PspGetContextThreadInternal @ 0x140909940 (PspGetContextThreadInternal.c)
 *     RtlCopyContext @ 0x14090AD80 (RtlCopyContext.c)
 *     RtlWow64GetCpuAreaEnabledFeatures @ 0x1409EBAB0 (RtlWow64GetCpuAreaEnabledFeatures.c)
 *     PspWow64ReadOrWriteThreadCpuArea @ 0x1409EBC24 (PspWow64ReadOrWriteThreadCpuArea.c)
 *     RtlpWow64SanitizeContextFlags @ 0x1409EBFD0 (RtlpWow64SanitizeContextFlags.c)
 *     RtlpWow64CtxFromAmd64 @ 0x140A02040 (RtlpWow64CtxFromAmd64.c)
 *     EtwTiLogSetContextThread @ 0x140A1A8D4 (EtwTiLogSetContextThread.c)
 *     RtlGuardIsValidWow64StackPointer @ 0x140A42694 (RtlGuardIsValidWow64StackPointer.c)
 *     RtlpWow64CtxToAmd64 @ 0x140A51994 (RtlpWow64CtxToAmd64.c)
 */

NTSTATUS __fastcall PspWow64SetContextThread_BeforeFix(
        PETHREAD Thread,
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
  NTSTATUS result; // eax
  __int64 v36; // rdx
  ULONG64 CpuAreaEnabledFeatures; // r13
  __int64 v38; // rax
  ULONG v39; // edi
  unsigned __int64 v40; // rcx
  unsigned __int64 v41; // rcx
  void *v42; // rsp
  void *v43; // rsp
  _CONTEXT *v44; // r15
  int v45; // edx
  int v46; // ecx
  struct _KPROCESS *v47; // rbx
  __int64 ThreadTeb; // rax
  int v49; // ebx
  unsigned __int64 v50; // rcx
  unsigned __int64 v51; // rcx
  void *v52; // rsp
  void *v53; // rsp
  int v54; // r9d
  unsigned __int64 v55; // rcx
  unsigned __int64 v56; // rcx
  void *v57; // rsp
  void *v58; // rsp
  char v59; // r14
  NTSTATUS v60; // ebx
  int v61; // ebx
  bool v62; // cf
  struct _KTHREAD *CurrentThread; // rcx
  SIZE_T Length; // [rsp+20h] [rbp-30h]
  SIZE_T Lengtha; // [rsp+20h] [rbp-30h]
  int v66; // [rsp+28h] [rbp-28h]
  int v67; // [rsp+28h] [rbp-28h]
  _BYTE v68[4]; // [rsp+50h] [rbp+0h] BYREF
  ULONG v69; // [rsp+54h] [rbp+4h] BYREF
  char v70; // [rsp+58h] [rbp+8h]
  unsigned int v71; // [rsp+5Ch] [rbp+Ch] BYREF
  PCONTEXT_EX ContextEx; // [rsp+60h] [rbp+10h] BYREF
  ULONG_PTR BugCheckParameter1; // [rsp+68h] [rbp+18h]
  ULONG64 v74; // [rsp+70h] [rbp+20h]
  PETHREAD Threada; // [rsp+78h] [rbp+28h] BYREF
  __int64 v76; // [rsp+80h] [rbp+30h]
  __int16 v77; // [rsp+88h] [rbp+38h]

  v70 = a4;
  if ( a3 != 716 )
    return -1073741820;
  Threada = KeGetCurrentThread();
  BugCheckParameter1 = (ULONG_PTR)Thread->Process;
  if ( (unsigned __int16)PsWow64GetProcessMachine(BugCheckParameter1) != 332 )
    return -1073741811;
  v71 = 0x10000;
  CpuAreaEnabledFeatures = RtlWow64GetCpuAreaEnabledFeatures(&v71);
  v74 = CpuAreaEnabledFeatures;
  if ( a4 )
  {
    v38 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)a2 < 0x7FFFFFFF0000LL )
      v38 = (__int64)a2;
    v71 = *(_DWORD *)v38;
  }
  else
  {
    v71 = *a2;
  }
  LOBYTE(v36) = a4;
  result = RtlpWow64SanitizeContextFlags(&v71, v36);
  if ( result < 0 )
    return result;
  v39 = v71 & 0x37FFFFFF;
  v71 &= 0x37FFFFFFu;
  v69 = 0;
  ContextEx = 0LL;
  if ( a4 )
  {
    result = RtlGetExtendedContextLength2(v39, &v69, CpuAreaEnabledFeatures);
    if ( result < 0 )
      return result;
    v40 = v69 + 15LL;
    if ( v40 <= v69 )
      v40 = 0xFFFFFFFFFFFFFF0LL;
    v41 = v40 & 0xFFFFFFFFFFFFFFF0uLL;
    v42 = alloca(v41);
    v43 = alloca(v41);
    v44 = (_CONTEXT *)v68;
    result = RtlInitializeExtendedContext2((PCONTEXT)v68, v39, &ContextEx, CpuAreaEnabledFeatures);
    if ( result < 0 )
      return result;
    LOBYTE(v45) = 1;
    result = RtlpReadExtendedContext(v46, v45, (_DWORD)ContextEx, v39, (__int64)a2, 0LL);
    if ( result < 0 )
      return result;
  }
  else
  {
    v44 = (_CONTEXT *)a2;
  }
  v47 = IoThreadToProcess(Threada);
  if ( IoThreadToProcess(Thread) == v47
    && (*(_DWORD *)(BugCheckParameter1 + 136) & 0x20) != 0
    && (v39 & 0x10001) == 0x10001 )
  {
    ThreadTeb = PsGetThreadTeb((__int64)Thread);
    if ( !(unsigned int)RtlGuardIsValidWow64StackPointer(HIDWORD(v44->R9), ThreadTeb) )
      return -1073741811;
  }
  v49 = CpuAreaEnabledFeatures != 0 ? 0x40 : 0;
  v69 = 0;
  result = RtlGetExtendedContextLength2(v49 + 1048607, &v69, CpuAreaEnabledFeatures);
  if ( result < 0 )
    return result;
  v50 = v69 + 15LL;
  if ( v50 <= v69 )
    v50 = 0xFFFFFFFFFFFFFF0LL;
  v51 = v50 & 0xFFFFFFFFFFFFFFF0uLL;
  v52 = alloca(v51);
  v53 = alloca(v51);
  result = RtlInitializeExtendedContext2((PCONTEXT)v68, v49 + 1048607, (PCONTEXT_EX *)&Threada, CpuAreaEnabledFeatures);
  if ( result < 0 )
    return result;
  LOBYTE(v54) = 1;
  result = PspGetContextThreadInternal((_DWORD)Thread, (unsigned int)v68, 0, v54, 1);
  if ( result < 0 )
    return result;
  v69 = 0;
  result = RtlGetExtendedContextLength2(CpuAreaEnabledFeatures != 0 ? 65663 : 65599, &v69, CpuAreaEnabledFeatures);
  if ( result < 0 )
    return result;
  v68[0] = 0;
  LODWORD(ContextEx) = 0;
  v55 = v69 + 15LL;
  if ( v55 <= v69 )
    v55 = 0xFFFFFFFFFFFFFF0LL;
  v56 = v55 & 0xFFFFFFFFFFFFFFF0uLL;
  v57 = alloca(v56);
  v58 = alloca(v56);
  LODWORD(Length) = v69;
  result = PspWow64ReadOrWriteThreadCpuArea(BugCheckParameter1, Length, v66, (__int64)&ContextEx, (__int64)v68);
  if ( result < 0 )
    return result;
  v59 = 0;
  if ( v68[0] )
  {
    result = RtlCopyContext((PCONTEXT)v68, v39, v44);
    if ( result < 0 )
      return result;
LABEL_43:
    LODWORD(Lengtha) = v69;
    result = PspWow64ReadOrWriteThreadCpuArea(BugCheckParameter1, Lengtha, v67, (__int64)&ContextEx, 0LL);
    v60 = result;
    if ( result < 0 )
      return result;
    goto LABEL_44;
  }
  if ( v77 == 35 )
  {
    result = RtlpWow64CtxToAmd64(v39, v44, v68);
    v60 = result;
    if ( result < 0 )
      return result;
    v59 = 1;
LABEL_44:
    if ( !v59 || (result = PspSetContextThreadInternal(Thread, 1), v60 = result, result >= 0) )
    {
      if ( v70 )
      {
        CurrentThread = KeGetCurrentThread();
        LOBYTE(CurrentThread) = CurrentThread->PreviousMode;
        EtwTiLogSetContextThread(CurrentThread, Thread, v44, v71);
      }
      return v60;
    }
    return result;
  }
  v61 = (int)ContextEx;
  if ( ((unsigned __int8)ContextEx & 1) == 0 )
  {
    v62 = v74 != 0;
    v74 = -(__int64)v74;
    result = RtlpWow64CtxFromAmd64(v62 ? 65656 : 65592, v68, v68);
    if ( result < 0 )
      return result;
    memset_0((char *)&a32 + 4, 0, 0x60uLL);
    LODWORD(ContextEx) = v61 | 1;
  }
  result = RtlCopyContext((PCONTEXT)v68, v39, v44);
  if ( result >= 0 )
  {
    if ( (v39 & 0x10010) == 0x10010 )
    {
      result = RtlpWow64CtxToAmd64(65552LL, v44, v68);
      if ( result < 0 )
        return result;
      v59 = 1;
      LODWORD(v76) = 1048592;
    }
    goto LABEL_43;
  }
  return result;
}
