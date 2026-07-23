/*
 * XREFs of CarInitializeTelemetryData @ 0x140615160
 * Callers:
 *     CarReportDifPluginRuleViolation @ 0x140615800 (CarReportDifPluginRuleViolation.c)
 * Callees:
 *     RtlCaptureStackBackTrace @ 0x140231C20 (RtlCaptureStackBackTrace.c)
 *     wcsncpy_s @ 0x140502240 (wcsncpy_s.c)
 *     CarGetDriverInfoFromDriverName @ 0x140614400 (CarGetDriverInfoFromDriverName.c)
 *     CarGetDriverInfoFromViolationStack @ 0x140614488 (CarGetDriverInfoFromViolationStack.c)
 *     AppendUlongAsHexadecimalW @ 0x140617DB4 (AppendUlongAsHexadecimalW.c)
 *     CarEtwCopyDriverName @ 0x140617E6C (CarEtwCopyDriverName.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CarInitializeTelemetryData(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        unsigned __int16 **a4,
        __int64 a5)
{
  _QWORD *v10; // rsi
  unsigned __int16 *v11; // rdx
  __int64 v12; // rcx
  unsigned __int64 v13; // r8
  wchar_t *v14; // rcx
  unsigned __int16 *v15; // rdi
  wchar_t *Pool2; // rax
  wchar_t *v17; // rsi

  if ( !a1 )
    return 3221225711LL;
  *(_DWORD *)(a1 + 1120) = a3;
  v10 = (_QWORD *)(a1 + 1128);
  *(_DWORD *)a1 = CarTipTag;
  RtlCaptureStackBackTrace(5u, 0x14u, (PVOID *)(a1 + 1128), 0LL);
  *(_QWORD *)(a1 + 1112) = a5;
  if ( !a4 )
    goto LABEL_13;
  *(_DWORD *)(a1 + 1124) = *((_DWORD *)a4 + 19);
  v11 = a4[6];
  if ( v11 )
  {
    v12 = CarDriverInfo;
    if ( CarDriverInfo )
    {
      do
      {
        v13 = *(_QWORD *)(v12 + 72);
        if ( (unsigned __int64)v11 >= v13 && (unsigned __int64)v11 < v13 + *(unsigned int *)(v12 + 80) )
          break;
        v12 = *(_QWORD *)v12;
      }
      while ( v12 );
      if ( v12 )
      {
        *(_OWORD *)(a1 + 4) = *(_OWORD *)(v12 + 8);
        *(_OWORD *)(a1 + 20) = *(_OWORD *)(v12 + 24);
        *(_OWORD *)(a1 + 36) = *(_OWORD *)(v12 + 40);
        *(_OWORD *)(a1 + 52) = *(_OWORD *)(v12 + 56);
        *(_QWORD *)(a1 + 72) = *(_QWORD *)(v12 + 72);
        *(_DWORD *)(a1 + 80) = *(_DWORD *)(v12 + 80);
        *(_DWORD *)(a1 + 68) = *(_DWORD *)(v12 + 88);
      }
    }
    goto LABEL_20;
  }
  v14 = a4[7];
  if ( v14 )
  {
    CarGetDriverInfoFromDriverName(v14, a1);
  }
  else
  {
LABEL_13:
    if ( a3 - 8195 <= 2 )
    {
      v15 = *a4;
      if ( !v15 )
        return 3221225712LL;
      Pool2 = (wchar_t *)ExAllocatePool2(0x40uLL, 2LL * *v15 + 2, 0x4E726143u);
      v17 = Pool2;
      if ( !Pool2 )
        return 3221225495LL;
      wcsncpy_s(Pool2, *v15 + 1LL, *((const wchar_t **)v15 + 1), 0xFFFFFFFFFFFFFFFFuLL);
      CarGetDriverInfoFromDriverName(v17, a1);
      ExFreePoolWithTag(v17, 0x4E726143u);
    }
    else
    {
      CarGetDriverInfoFromViolationStack(
        v10,
        a1 + 80,
        a1 + 4,
        (_QWORD *)(a1 + 72),
        (_DWORD *)(a1 + 80),
        (_DWORD *)(a1 + 68));
    }
  }
LABEL_20:
  if ( a1 == -88 )
    return 3221225485LL;
  AppendUlongAsHexadecimalW(a1 + 88, a2);
  *(_WORD *)(a1 + 104) = 95;
  AppendUlongAsHexadecimalW(a1 + 106, a3);
  *(_WORD *)(a1 + 122) = 95;
  return CarEtwCopyDriverName(a1 + 124, a1 + 4, 494LL);
}
