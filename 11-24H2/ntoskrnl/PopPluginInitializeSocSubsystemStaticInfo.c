/*
 * XREFs of PopPluginInitializeSocSubsystemStaticInfo @ 0x14074F75C
 * Callers:
 *     PopFxInitializeSocSubsystemStaticInfo @ 0x14074DC98 (PopFxInitializeSocSubsystemStaticInfo.c)
 * Callees:
 *     PopFxBugCheck @ 0x140377108 (PopFxBugCheck.c)
 *     wcsncmp @ 0x1404FFFD0 (wcsncmp.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     PopFxValidateReturnedUnicodeString @ 0x14074F4D8 (PopFxValidateReturnedUnicodeString.c)
 */

char __fastcall PopPluginInitializeSocSubsystemStaticInfo(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  const wchar_t **v5; // rdi
  char v6; // si
  __int128 v8; // [rsp+20h] [rbp-28h]
  __int128 v9; // [rsp+30h] [rbp-18h]

  v8 = *(_OWORD *)(a2 + 16);
  v9 = *(_OWORD *)(a2 + 32);
  if ( !(unsigned __int8)guard_dispatch_icall_no_overrides(37LL, a2, a3, a4) )
    PopFxBugCheck(0x605uLL, 0x25uLL, PopFxProcessorPlugin, 0LL);
  if ( !PopFxValidateReturnedUnicodeString((unsigned __int16 *)(a2 + 16), *((__int64 *)&v8 + 1), WORD1(v8)) )
    PopFxBugCheck(0x706uLL, 0x25uLL, 0x504E616DuLL, a2 + 24);
  v5 = (const wchar_t **)(a2 + 40);
  v6 = PopFxValidateReturnedUnicodeString((unsigned __int16 *)(a2 + 32), *((__int64 *)&v9 + 1), WORD1(v9));
  if ( !v6 )
    PopFxBugCheck(0x706uLL, 0x25uLL, 0x534E616DuLL, (ULONG_PTR)v5);
  if ( !wcsncmp(*v5, *(const wchar_t **)(a2 + 24), 0x40uLL) )
    PopFxBugCheck(0x706uLL, 0x25uLL, 0x4E616D65uLL, (ULONG_PTR)v5);
  if ( *(_DWORD *)(a2 + 48) > 0x3E8u )
    PopFxBugCheck(0x706uLL, 0x25uLL, 0x4D436F75uLL, a2 + 48);
  return v6;
}
