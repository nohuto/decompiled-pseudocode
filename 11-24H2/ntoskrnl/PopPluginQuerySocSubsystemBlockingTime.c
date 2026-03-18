/*
 * XREFs of PopPluginQuerySocSubsystemBlockingTime @ 0x1409861C4
 * Callers:
 *     PopFxLogSocSubsystemBlockingTimes @ 0x14098600C (PopFxLogSocSubsystemBlockingTimes.c)
 * Callees:
 *     PopFxBugCheck @ 0x140377108 (PopFxBugCheck.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     RtlHashUnicodeString @ 0x1409862A0 (RtlHashUnicodeString.c)
 */

char __fastcall PopPluginQuerySocSubsystemBlockingTime(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  ULONG_PTR v5; // rsi
  char v7; // di
  __int64 v8; // rcx
  __int128 v10; // [rsp+20h] [rbp-18h]
  ULONG HashValue; // [rsp+40h] [rbp+8h] BYREF
  int v12; // [rsp+44h] [rbp+Ch]

  v12 = HIDWORD(a1);
  HashValue = 0;
  v5 = PopFxProcessorPlugin;
  v10 = *(_OWORD *)*(_QWORD *)(a3 + 16);
  v7 = guard_dispatch_icall_no_overrides(39LL, a3, a3, a4);
  if ( !v7 )
    PopFxBugCheck(0x605uLL, 0x27uLL, PopFxProcessorPlugin, 0LL);
  RtlHashUnicodeString(*(PCUNICODE_STRING *)(a3 + 16), 0, 0, &HashValue);
  v8 = *(_QWORD *)(a3 + 16);
  if ( *(_DWORD *)v8 != (_DWORD)v10 || *(_QWORD *)(v8 + 8) != *((_QWORD *)&v10 + 1) || HashValue != a2 )
    PopFxBugCheck(0x705uLL, v5, 0x27uLL, 0x4E616D65uLL);
  return v7;
}
