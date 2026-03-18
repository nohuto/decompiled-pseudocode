/*
 * XREFs of FxVerifierQueryStateSeparationDetection @ 0x140096460
 * Callers:
 *     FxDriverGlobalsInitializeDebugExtension @ 0x140095E0C (FxDriverGlobalsInitializeDebugExtension.c)
 * Callees:
 *     ?_QueryULong@FxRegKey@@SAJPEAXPEBU_UNICODE_STRING@@PEAK@Z @ 0x140052D40 (-_QueryULong@FxRegKey@@SAJPEAXPEBU_UNICODE_STRING@@PEAK@Z.c)
 *     __security_check_cookie @ 0x1400AC640 (__security_check_cookie.c)
 */

void __fastcall FxVerifierQueryStateSeparationDetection(
        void *Key,
        FxStateSeparationDetectionOption *StateSeparationDetection)
{
  unsigned int value; // [rsp+20h] [rbp-60h] BYREF
  _UNICODE_STRING valueName; // [rsp+28h] [rbp-58h] BYREF
  wchar_t valueName_buffer[28]; // [rsp+38h] [rbp-48h] BYREF

  value = 0;
  wcscpy(valueName_buffer, L"StateSeparationDetection");
  *(_QWORD *)&valueName.Length = 3276848LL;
  valueName.Buffer = valueName_buffer;
  if ( FxRegKey::_QueryULong(Key, &valueName, &value) < 0 || value >= 3 )
    *StateSeparationDetection = FxStateSeparationDetectionNone;
  else
    *StateSeparationDetection = value;
}
