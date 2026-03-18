/*
 * XREFs of KiUnwindUserSspForApcContextCopyBypass @ 0x1403E6858
 * Callers:
 *     KiInitializeUserApc @ 0x1403E5264 (KiInitializeUserApc.c)
 * Callees:
 *     RtlLocateExtendedFeature @ 0x140281BD0 (RtlLocateExtendedFeature.c)
 *     RtlInitializeExtendedContext @ 0x1403E7270 (RtlInitializeExtendedContext.c)
 *     RtlGetExtendedContextLength @ 0x1403E72F0 (RtlGetExtendedContextLength.c)
 *     RtlpValidateContextFlags @ 0x1403E76B0 (RtlpValidateContextFlags.c)
 *     KiVerifyContextXStateCetUEnabled @ 0x1403E7F14 (KiVerifyContextXStateCetUEnabled.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     _alloca_probe @ 0x1406B3C80 (_alloca_probe.c)
 *     RtlpReadExtendedContext @ 0x1408FF0C0 (RtlpReadExtendedContext.c)
 */

__int64 __fastcall KiUnwindUserSspForApcContextCopyBypass(__int64 a1)
{
  unsigned int v1; // ebx
  __int64 result; // rax
  unsigned __int64 v4; // rcx
  unsigned __int64 v5; // rcx
  void *v6; // rsp
  void *v7; // rsp
  int v8; // edx
  int v9; // ecx
  __int64 ExtendedFeature; // rax
  __int64 v11; // rbx
  _DWORD v12[2]; // [rsp+30h] [rbp+0h] BYREF
  __int64 v13; // [rsp+38h] [rbp+8h] BYREF

  v1 = *(_DWORD *)(a1 + 48);
  v13 = 0LL;
  v12[0] = 0;
  result = RtlpValidateContextFlags(v1, 0LL);
  if ( (int)result < 0 )
  {
    if ( (_DWORD)result != -1073741811 )
      return result;
  }
  else if ( (v1 & 0x100000) != 0 )
  {
    goto LABEL_4;
  }
  v1 = v1 & 0xF800001F | 0x100000;
LABEL_4:
  if ( (v1 & 0x100040) != 0x100040 )
    return 3221225473LL;
  result = RtlGetExtendedContextLength(v1, v12);
  if ( (int)result >= 0 )
  {
    v4 = v12[0] + 15LL;
    if ( v4 <= v12[0] )
      v4 = 0xFFFFFFFFFFFFFF0LL;
    v5 = v4 & 0xFFFFFFFFFFFFFFF0uLL;
    v6 = alloca(v5);
    v7 = alloca(v5);
    result = RtlInitializeExtendedContext(v12, v1, &v13);
    if ( (int)result >= 0 )
    {
      LOBYTE(v8) = 1;
      result = RtlpReadExtendedContext(v9, v8, v13, v1, a1, 0LL);
      if ( (int)result >= 0 )
      {
        ExtendedFeature = RtlLocateExtendedFeature(v13, 11);
        v11 = ExtendedFeature;
        if ( ExtendedFeature && (*(_DWORD *)((char *)&v12[308] + SLODWORD(STACK[0x510])) & 0x800LL) != 0 )
        {
          *(_QWORD *)(ExtendedFeature + 8) -= 8LL;
          result = KiVerifyContextXStateCetUEnabled(ExtendedFeature, __readmsr(0x6A7u));
          if ( (int)result >= 0 )
          {
            __writemsr(0x6A7u, *(_QWORD *)(v11 + 8));
            return 0LL;
          }
          return result;
        }
        return 3221225473LL;
      }
    }
  }
  return result;
}
