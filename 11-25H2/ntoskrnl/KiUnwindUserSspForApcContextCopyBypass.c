/*
 * XREFs of KiUnwindUserSspForApcContextCopyBypass @ 0x1402626C8
 * Callers:
 *     KiInitializeUserApc @ 0x140260620 (KiInitializeUserApc.c)
 * Callees:
 *     RtlGetExtendedContextLength @ 0x140261030 (RtlGetExtendedContextLength.c)
 *     KiVerifyContextXStateCetUEnabled @ 0x1402622DC (KiVerifyContextXStateCetUEnabled.c)
 *     RtlpSanitizeContextFlags @ 0x140262830 (RtlpSanitizeContextFlags.c)
 *     RtlInitializeExtendedContext @ 0x140262930 (RtlInitializeExtendedContext.c)
 *     RtlLocateExtendedFeature2 @ 0x140262A60 (RtlLocateExtendedFeature2.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     _alloca_probe @ 0x1406A89B0 (_alloca_probe.c)
 *     RtlpReadExtendedContext @ 0x140859000 (RtlpReadExtendedContext.c)
 */

__int64 __fastcall KiUnwindUserSspForApcContextCopyBypass(__int64 a1, __int64 a2)
{
  int v2; // eax
  __int64 result; // rax
  unsigned int v5; // ebx
  unsigned __int64 v6; // rcx
  unsigned __int64 v7; // rcx
  void *v8; // rsp
  void *v9; // rsp
  int v10; // edx
  int v11; // ecx
  _QWORD *ExtendedFeature2; // rax
  _QWORD *v13; // rbx
  int v14; // [rsp+30h] [rbp+0h] BYREF
  unsigned int v15; // [rsp+34h] [rbp+4h] BYREF
  __int64 v16; // [rsp+38h] [rbp+8h] BYREF

  v2 = *(_DWORD *)(a1 + 48);
  v16 = 0LL;
  v15 = 0;
  LOBYTE(a2) = 1;
  v14 = v2;
  result = RtlpSanitizeContextFlags(&v14, a2);
  if ( (int)result >= 0 )
  {
    v5 = v14;
    if ( (v14 & 0x100040) != 0x100040 )
      return 3221225473LL;
    result = RtlGetExtendedContextLength(v14, &v15);
    if ( (int)result >= 0 )
    {
      v6 = v15 + 15LL;
      if ( v6 <= v15 )
        v6 = 0xFFFFFFFFFFFFFF0LL;
      v7 = v6 & 0xFFFFFFFFFFFFFFF0uLL;
      v8 = alloca(v7);
      v9 = alloca(v7);
      result = RtlInitializeExtendedContext(&v14, v5, &v16);
      if ( (int)result >= 0 )
      {
        LOBYTE(v10) = 1;
        result = RtlpReadExtendedContext(v11, v10, v16, v5, a1, 0LL);
        if ( (int)result >= 0 )
        {
          ExtendedFeature2 = (_QWORD *)RtlLocateExtendedFeature2(v16, 11LL, 0xFFFFF780000003D8uLL);
          v13 = ExtendedFeature2;
          if ( ExtendedFeature2 && (*(int *)((char *)&v14 + SLODWORD(STACK[0x510]) + 1232) & 0x800LL) != 0 )
          {
            ExtendedFeature2[1] -= 8LL;
            result = KiVerifyContextXStateCetUEnabled(ExtendedFeature2, (void *)__readmsr(0x6A7u));
            if ( (int)result >= 0 )
            {
              __writemsr(0x6A7u, v13[1]);
              return 0LL;
            }
            return result;
          }
          return 3221225473LL;
        }
      }
    }
  }
  return result;
}
