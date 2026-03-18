/*
 * XREFs of PopPluginQuerySocSubsystemBlockingTime @ 0x1409822C4
 * Callers:
 *     PopFxLogSocSubsystemBlockingTimes @ 0x14098210C (PopFxLogSocSubsystemBlockingTimes.c)
 * Callees:
 *     PopFxBugCheck @ 0x14034E260 (PopFxBugCheck.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     RtlHashUnicodeString @ 0x1409823A0 (RtlHashUnicodeString.c)
 */

char __fastcall PopPluginQuerySocSubsystemBlockingTime(__int64 a1, int a2, __int64 a3)
{
  ULONG_PTR v4; // rsi
  char v6; // di
  __int64 v7; // rcx
  __int128 v9; // [rsp+20h] [rbp-18h]
  ULONG HashValue; // [rsp+40h] [rbp+8h] BYREF
  int v11; // [rsp+44h] [rbp+Ch]

  v11 = HIDWORD(a1);
  HashValue = 0;
  v4 = PopFxProcessorPlugin;
  v9 = *(_OWORD *)*(_QWORD *)(a3 + 16);
  v6 = guard_dispatch_icall_no_overrides(39LL);
  if ( !v6 )
    PopFxBugCheck(0x605uLL, 0x27uLL, PopFxProcessorPlugin, 0LL);
  RtlHashUnicodeString(*(PCUNICODE_STRING *)(a3 + 16), 0, 0, &HashValue);
  v7 = *(_QWORD *)(a3 + 16);
  if ( *(_DWORD *)v7 != (_DWORD)v9 || *(_QWORD *)(v7 + 8) != *((_QWORD *)&v9 + 1) || HashValue != a2 )
    PopFxBugCheck(0x705uLL, v4, 0x27uLL, 0x4E616D65uLL);
  return v6;
}
