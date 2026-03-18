/*
 * XREFs of ?FxIFRGetDriverMultiString@@YAJKPEAGPEAK@Z @ 0x14008CC68
 * Callers:
 *     ?FxIFRReplay@@YAX_K@Z @ 0x14008CE0C (-FxIFRReplay@@YAX_K@Z.c)
 * Callees:
 *     ?_OpenKey@FxRegKey@@SAJPEAXPEBU_UNICODE_STRING@@PEAPEAXK@Z @ 0x140053388 (-_OpenKey@FxRegKey@@SAJPEAXPEBU_UNICODE_STRING@@PEAPEAXK@Z.c)
 *     ?_QueryValue@FxRegKey@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAXPEBU_UNICODE_STRING@@K1PEAK3@Z @ 0x1400533E0 (-_QueryValue@FxRegKey@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAXPEBU_UNICODE_STRING@@K1PEAK3@Z.c)
 *     ??1FxAutoRegKey@@QEAA@XZ @ 0x140069E3C (--1FxAutoRegKey@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1400AC640 (__security_check_cookie.c)
 */

__int64 __fastcall FxIFRGetDriverMultiString(
        unsigned int ValueLength,
        wchar_t *Value,
        unsigned int *ValueLengthQueried)
{
  int v6; // ebx
  unsigned int v7; // edx
  unsigned int type; // [rsp+40h] [rbp-C0h] BYREF
  FxAutoRegKey hWdf; // [rsp+48h] [rbp-B8h] BYREF
  _UNICODE_STRING path; // [rsp+50h] [rbp-B0h] BYREF
  _UNICODE_STRING driverListToReplay; // [rsp+60h] [rbp-A0h] BYREF
  wchar_t driverListToReplay_buffer[32]; // [rsp+70h] [rbp-90h] BYREF
  wchar_t path_buffer[56]; // [rsp+B0h] [rbp-50h] BYREF

  wcscpy(path_buffer, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Wdf");
  path.Buffer = path_buffer;
  wcscpy(driverListToReplay_buffer, L"WdfIfrCaptureServiceList");
  hWdf.m_Key = 0LL;
  *(_QWORD *)&path.Length = 7209068LL;
  *(_QWORD *)&driverListToReplay.Length = 3276848LL;
  driverListToReplay.Buffer = driverListToReplay_buffer;
  type = 0;
  v6 = FxRegKey::_OpenKey(0LL, &path, &hWdf.m_Key, 0x20019u);
  if ( v6 >= 0 )
  {
    v6 = FxRegKey::_QueryValue(0LL, hWdf.m_Key, &driverListToReplay, ValueLength, Value, ValueLengthQueried, &type);
    if ( v6 >= 0 )
    {
      if ( type != 7
        || (v7 = *ValueLengthQueried >> 1, (*ValueLengthQueried & 1) != 0)
        || v7 < 2
        || Value[v7 - 1]
        || Value[v7 - 2] )
      {
        v6 = -1073741788;
      }
    }
  }
  FxAutoRegKey::~FxAutoRegKey(&hWdf);
  return (unsigned int)v6;
}
