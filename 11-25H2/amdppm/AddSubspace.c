/*
 * XREFs of AddSubspace @ 0x140006748
 * Callers:
 *     RegisterSubspace @ 0x140026D70 (RegisterSubspace.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14000D700 (_guard_dispatch_icall.c)
 */

__int64 __fastcall AddSubspace(_QWORD *a1)
{
  _QWORD *v2; // rax
  union _LARGE_INTEGER Timeout; // [rsp+40h] [rbp+8h] BYREF

  Timeout.QuadPart = 0LL;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    qword_140014BE8,
    0LL);
  while ( 1 )
  {
    KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2528))(
      WdfDriverGlobals,
      qword_140014BE0);
    if ( KeWaitForSingleObject(&Event, Executive, 0, 0, &Timeout) >= 0 )
      break;
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2536))(
      WdfDriverGlobals,
      qword_140014BE0);
  }
  v2 = (_QWORD *)qword_140014BF8;
  if ( *(__int64 **)qword_140014BF8 != &qword_140014BF0 )
    __fastfail(3u);
  *a1 = &qword_140014BF0;
  a1[1] = v2;
  *v2 = a1;
  ++dword_140014C00;
  qword_140014BF8 = (__int64)a1;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2536))(WdfDriverGlobals, qword_140014BE0);
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(
           WdfDriverGlobals,
           qword_140014BE8);
}
