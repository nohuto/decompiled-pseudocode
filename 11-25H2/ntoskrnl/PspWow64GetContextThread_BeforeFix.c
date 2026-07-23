/*
 * XREFs of PspWow64GetContextThread_BeforeFix @ 0x14076CC9C
 * Callers:
 *     PspWow64GetContextThread @ 0x1409C4730 (PspWow64GetContextThread.c)
 * Callees:
 *     RtlInitializeExtendedContext2 @ 0x140258C20 (RtlInitializeExtendedContext2.c)
 *     RtlGetExtendedContextLength2 @ 0x14025D850 (RtlGetExtendedContextLength2.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     _alloca_probe @ 0x1406A89B0 (_alloca_probe.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     RtlpReadExtendedContext @ 0x140859000 (RtlpReadExtendedContext.c)
 *     PsWow64GetProcessMachine @ 0x140907610 (PsWow64GetProcessMachine.c)
 *     PspGetContextThreadInternal @ 0x140909940 (PspGetContextThreadInternal.c)
 *     RtlpWriteExtendedContext @ 0x140909C2C (RtlpWriteExtendedContext.c)
 *     RtlCopyContext @ 0x14090AD80 (RtlCopyContext.c)
 *     RtlWow64GetCpuAreaEnabledFeatures @ 0x1409EBAB0 (RtlWow64GetCpuAreaEnabledFeatures.c)
 *     PspWow64ReadOrWriteThreadCpuArea @ 0x1409EBC24 (PspWow64ReadOrWriteThreadCpuArea.c)
 *     RtlpWow64SanitizeContextFlags @ 0x1409EBFD0 (RtlpWow64SanitizeContextFlags.c)
 *     RtlpWow64CtxFromAmd64 @ 0x140A02040 (RtlpWow64CtxFromAmd64.c)
 */

NTSTATUS __fastcall PspWow64GetContextThread_BeforeFix(
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
        __int64 a24,
        __int64 a25,
        __int64 a26)
{
  int v28; // r13d
  NTSTATUS result; // eax
  __int64 v30; // rdx
  ULONG64 CpuAreaEnabledFeatures; // r15
  __int64 v32; // rax
  bool v33; // zf
  ULONG v34; // ebx
  unsigned __int64 v35; // rax
  void *v36; // rsp
  _CONTEXT *v37; // rsi
  int v38; // ecx
  int v39; // r12d
  unsigned __int64 v40; // rcx
  unsigned __int64 v41; // rcx
  void *v42; // rsp
  void *v43; // rsp
  int v44; // r9d
  unsigned __int64 v45; // rcx
  unsigned __int64 v46; // rcx
  void *v47; // rsp
  void *v48; // rsp
  int P1Home; // ecx
  NTSTATUS v50; // edx
  int v51; // edi
  int v52; // r8d
  SIZE_T Length; // [rsp+20h] [rbp-30h]
  SIZE_T Lengtha; // [rsp+20h] [rbp-30h]
  int v55; // [rsp+28h] [rbp-28h]
  int v56; // [rsp+28h] [rbp-28h]
  char v57; // [rsp+50h] [rbp+0h] BYREF
  char v58; // [rsp+51h] [rbp+1h]
  char v59; // [rsp+52h] [rbp+2h]
  PCONTEXT_EX ContextFlags; // [rsp+58h] [rbp+8h] BYREF
  ULONG ContextLength; // [rsp+60h] [rbp+10h] BYREF
  __int64 v62; // [rsp+68h] [rbp+18h]
  PCONTEXT_EX ContextEx; // [rsp+70h] [rbp+20h] BYREF
  NTSTATUS v64; // [rsp+78h] [rbp+28h]
  ULONG_PTR BugCheckParameter1; // [rsp+80h] [rbp+30h]
  int v66[4]; // [rsp+88h] [rbp+38h] BYREF
  __int128 v67; // [rsp+98h] [rbp+48h]

  v59 = a4;
  v28 = a1;
  v62 = a1;
  if ( a3 != 716 )
    return -1073741820;
  BugCheckParameter1 = *(_QWORD *)(a1 + 544);
  if ( (unsigned __int16)PsWow64GetProcessMachine(BugCheckParameter1) != 332 )
    return -1073741811;
  LODWORD(ContextFlags) = 0x10000;
  CpuAreaEnabledFeatures = RtlWow64GetCpuAreaEnabledFeatures(&ContextFlags);
  if ( a4 )
  {
    v32 = 0x7FFFFFFF0000LL;
    if ( a2 < 0x7FFFFFFF0000LL )
      v32 = a2;
    LODWORD(ContextFlags) = *(_DWORD *)v32;
  }
  else
  {
    LODWORD(ContextFlags) = *(_DWORD *)a2;
  }
  LOBYTE(v30) = a4;
  result = RtlpWow64SanitizeContextFlags(&ContextFlags, v30);
  if ( result >= 0 )
  {
    ContextLength = 0;
    ContextEx = 0LL;
    *(_OWORD *)v66 = 0LL;
    v67 = 0LL;
    v33 = a4 == 0;
    v34 = (unsigned int)ContextFlags;
    if ( v33 )
    {
      v37 = (_CONTEXT *)a2;
      ContextEx = (PCONTEXT_EX)(a2 + 716);
    }
    else
    {
      result = RtlGetExtendedContextLength2((ULONG)ContextFlags, &ContextLength, CpuAreaEnabledFeatures);
      if ( result < 0 )
        return result;
      v35 = ContextLength + 15LL;
      if ( v35 <= ContextLength )
        v35 = 0xFFFFFFFFFFFFFF0LL;
      v36 = alloca(v35 & 0xFFFFFFFFFFFFFFF0uLL);
      v37 = (_CONTEXT *)&v57;
      memset_0(&v57, 0, ContextLength);
      result = RtlInitializeExtendedContext2((PCONTEXT)&v57, v34, &ContextEx, CpuAreaEnabledFeatures);
      if ( result < 0 )
        return result;
      result = RtlpReadExtendedContext(v38, 0, (_DWORD)ContextEx, v34, a2, (__int64)v66);
      if ( result < 0 )
        return result;
      v28 = v62;
    }
    v39 = CpuAreaEnabledFeatures != 0 ? 0x40 : 0;
    ContextLength = 0;
    result = RtlGetExtendedContextLength2(v39 + 1074790431, &ContextLength, CpuAreaEnabledFeatures);
    if ( result >= 0 )
    {
      v40 = ContextLength + 15LL;
      if ( v40 <= ContextLength )
        v40 = 0xFFFFFFFFFFFFFF0LL;
      v41 = v40 & 0xFFFFFFFFFFFFFFF0uLL;
      v42 = alloca(v41);
      v43 = alloca(v41);
      result = RtlInitializeExtendedContext2((PCONTEXT)&v57, v39 + 1074790431, &ContextFlags, CpuAreaEnabledFeatures);
      if ( result >= 0 )
      {
        LOBYTE(v44) = 1;
        result = PspGetContextThreadInternal(v28, (unsigned int)&v57, 0, v44, 1);
        if ( result >= 0 )
        {
          ContextLength = 0;
          result = RtlGetExtendedContextLength2(
                     CpuAreaEnabledFeatures != 0 ? 65663 : 65599,
                     &ContextLength,
                     CpuAreaEnabledFeatures);
          if ( result >= 0 )
          {
            v57 = 0;
            LODWORD(ContextFlags) = 0;
            v45 = ContextLength + 15LL;
            if ( v45 <= ContextLength )
              v45 = 0xFFFFFFFFFFFFFF0LL;
            v46 = v45 & 0xFFFFFFFFFFFFFFF0uLL;
            v47 = alloca(v46);
            v48 = alloca(v46);
            LODWORD(Length) = ContextLength;
            result = PspWow64ReadOrWriteThreadCpuArea(
                       BugCheckParameter1,
                       Length,
                       v55,
                       (__int64)&ContextFlags,
                       (__int64)&v57);
            if ( result >= 0 )
            {
              v58 = 0;
              if ( v57 )
              {
                result = RtlCopyContext(v37, v34, (PCONTEXT)&v57);
LABEL_30:
                v50 = result;
                if ( result < 0 )
                  return result;
                goto LABEL_41;
              }
              if ( LOWORD(v66[0]) == 35 )
              {
                result = RtlpWow64CtxFromAmd64(v34, &v57, v37);
                goto LABEL_30;
              }
              v51 = (int)ContextFlags;
              if ( ((unsigned __int8)ContextFlags & 1) == 0 )
              {
                result = RtlpWow64CtxFromAmd64(CpuAreaEnabledFeatures != 0 ? 65656 : 65592, &v57, &v57);
                if ( result < 0 )
                  return result;
                memset_0((char *)&a26 + 4, 0, 0x60uLL);
                LODWORD(ContextFlags) = v51 | 1;
                v58 = 1;
              }
              result = RtlCopyContext(v37, v34, (PCONTEXT)&v57);
              v50 = result;
              if ( result >= 0 )
              {
                if ( (v34 & 0x40000000) != 0 )
                {
                  P1Home = v37->P1Home;
                  LODWORD(v37->P1Home) &= 0x67FFFFFFu;
                  v52 = BugCheckParameter1 ^ (P1Home ^ BugCheckParameter1) & 0x67FFFFFF;
                  LODWORD(v37->P1Home) = v52;
                  if ( (v52 & 0x18000000) == 0 )
                    LODWORD(v37->P1Home) = v52 | 0x88000000;
                }
LABEL_41:
                if ( !v58
                  || (LODWORD(Lengtha) = ContextLength,
                      result = PspWow64ReadOrWriteThreadCpuArea(
                                 BugCheckParameter1,
                                 Lengtha,
                                 v56,
                                 (__int64)&ContextFlags,
                                 0LL),
                      v50 = result,
                      result >= 0) )
                {
                  if ( v59 )
                  {
                    v50 = RtlpWriteExtendedContext(P1Home, (int)a2 + 716, (unsigned int)v66, v34, (__int64)ContextEx);
                    v64 = v50;
                  }
                  return v50;
                }
              }
            }
          }
        }
      }
    }
  }
  return result;
}
