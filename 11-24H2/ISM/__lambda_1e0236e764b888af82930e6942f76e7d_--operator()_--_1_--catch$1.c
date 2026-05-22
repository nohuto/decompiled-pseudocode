/*
 * XREFs of __lambda_1e0236e764b888af82930e6942f76e7d_::operator()_::_1_::catch$1 @ 0x1801D9C34
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateU0sqq_EventWriteTransfer @ 0x18019CA38 (McTemplateU0sqq_EventWriteTransfer.c)
 */

__int64 __fastcall _lambda_1e0236e764b888af82930e6942f76e7d_::operator()_::_1_::catch_1(__int64 a1, __int64 a2)
{
  _DWORD *v2; // rcx

  v2 = *(_DWORD **)(*(_QWORD *)(a2 + 80) + 48LL);
  *v2 = -2147024882;
  if ( (Microsoft_WindowsPhone_InputEnableBits & 1) != 0 )
    McTemplateU0sqq_EventWriteTransfer(
      (__int64)v2,
      a2,
      "HotKeyProcessor::RegisterHotKey::<lambda_1e0236e764b888af82930e6942f76e7d>::operator ()",
      288LL,
      14);
  return 0LL;
}
