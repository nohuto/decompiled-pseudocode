/*
 * XREFs of ?ReadConfigValue@TwoFingerGestureRecognizer@@UEAA_NW4GestureRecognizerConfigSetting@@PEAUGestureRecognizerConfigValue@@@Z @ 0x1801B5C90
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

bool __fastcall TwoFingerGestureRecognizer::ReadConfigValue(__int64 a1, unsigned int a2, __int64 a3)
{
  return (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)(a1 + 16) + 48LL))(a1 + 16)
      || (*(unsigned __int8 (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)(a1 + 88) + 48LL))(a1 + 88, a2, a3) != 0;
}
