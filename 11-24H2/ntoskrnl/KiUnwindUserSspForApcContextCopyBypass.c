/*
 * XREFs of KiUnwindUserSspForApcContextCopyBypass @ 0x1403D43F8
 * Callers:
 *     KiInitializeUserApc @ 0x1403D2E04 (KiInitializeUserApc.c)
 * Callees:
 *     RtlLocateExtendedFeature @ 0x140237160 (RtlLocateExtendedFeature.c)
 *     RtlInitializeExtendedContext @ 0x1403D4E10 (RtlInitializeExtendedContext.c)
 *     RtlGetExtendedContextLength @ 0x1403D4E90 (RtlGetExtendedContextLength.c)
 *     RtlpValidateContextFlags @ 0x1403D5250 (RtlpValidateContextFlags.c)
 *     KiVerifyContextXStateCetUEnabled @ 0x1403D5AB4 (KiVerifyContextXStateCetUEnabled.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     _alloca_probe @ 0x1406B4C20 (_alloca_probe.c)
 *     RtlpReadExtendedContext @ 0x1409219A0 (RtlpReadExtendedContext.c)
 */

NTSTATUS __fastcall KiUnwindUserSspForApcContextCopyBypass(__int64 a1)
{
  ULONG v1; // ebx
  NTSTATUS result; // eax
  unsigned __int64 v4; // rcx
  unsigned __int64 v5; // rcx
  void *v6; // rsp
  void *v7; // rsp
  int v8; // edx
  int v9; // ecx
  _QWORD *ExtendedFeature; // rax
  _QWORD *v11; // rbx
  ULONG ContextLength[2]; // [rsp+30h] [rbp+0h] BYREF
  PCONTEXT_EX ContextEx; // [rsp+38h] [rbp+8h] BYREF

  v1 = *(_DWORD *)(a1 + 48);
  ContextEx = 0LL;
  ContextLength[0] = 0;
  result = RtlpValidateContextFlags(v1, 0LL);
  if ( result < 0 )
  {
    if ( result != -1073741811 )
      return result;
  }
  else if ( (v1 & 0x100000) != 0 )
  {
    goto LABEL_4;
  }
  v1 = v1 & 0xF800001F | 0x100000;
LABEL_4:
  if ( (v1 & 0x100040) != 0x100040 )
    return -1073741823;
  result = RtlGetExtendedContextLength(v1, ContextLength);
  if ( result >= 0 )
  {
    v4 = ContextLength[0] + 15LL;
    if ( v4 <= ContextLength[0] )
      v4 = 0xFFFFFFFFFFFFFF0LL;
    v5 = v4 & 0xFFFFFFFFFFFFFFF0uLL;
    v6 = alloca(v5);
    v7 = alloca(v5);
    result = RtlInitializeExtendedContext((PCONTEXT)ContextLength, v1, &ContextEx);
    if ( result >= 0 )
    {
      LOBYTE(v8) = 1;
      result = RtlpReadExtendedContext(v9, v8, (_DWORD)ContextEx, v1, a1, 0LL);
      if ( result >= 0 )
      {
        ExtendedFeature = RtlLocateExtendedFeature(ContextEx, 0xBu, 0LL);
        v11 = ExtendedFeature;
        if ( ExtendedFeature && (*(ULONG *)((char *)&ContextLength[308] + SLODWORD(STACK[0x510])) & 0x800LL) != 0 )
        {
          ExtendedFeature[1] -= 8LL;
          result = KiVerifyContextXStateCetUEnabled(ExtendedFeature, __readmsr(0x6A7u));
          if ( result >= 0 )
          {
            __writemsr(0x6A7u, v11[1]);
            return 0;
          }
          return result;
        }
        return -1073741823;
      }
    }
  }
  return result;
}
