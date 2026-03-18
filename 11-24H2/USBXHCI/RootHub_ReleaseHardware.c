/*
 * XREFs of RootHub_ReleaseHardware @ 0x14007EA88
 * Callers:
 *     Controller_WdfEvtDeviceReleaseHardware @ 0x14007A0C0 (Controller_WdfEvtDeviceReleaseHardware.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140058B00 (_guard_dispatch_icall.c)
 */

void __fastcall RootHub_ReleaseHardware(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int i; // edi
  __int64 v5; // rsi
  __int64 v6; // rdx
  __int64 v7; // rdx
  __int64 v8; // rdx

  if ( *(_QWORD *)(a1 + 48) )
  {
    for ( i = 0; i < *(_DWORD *)(a1 + 16); ++i )
    {
      v5 = 120LL * i;
      v6 = *(_QWORD *)(v5 + *(_QWORD *)(a1 + 48) + 40);
      if ( v6 )
      {
        LOBYTE(a3) = 1;
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64))(WdfFunctions_01033 + 2560))(
          WdfDriverGlobals,
          v6,
          a3);
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01033 + 1664))(
          WdfDriverGlobals,
          *(_QWORD *)(*(_QWORD *)(a1 + 48) + v5 + 40));
      }
      v7 = *(_QWORD *)(*(_QWORD *)(a1 + 48) + v5 + 72);
      if ( v7 )
      {
        LOBYTE(a3) = 1;
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64))(WdfFunctions_01033 + 2560))(
          WdfDriverGlobals,
          v7,
          a3);
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01033 + 1664))(
          WdfDriverGlobals,
          *(_QWORD *)(*(_QWORD *)(a1 + 48) + v5 + 72));
      }
      v8 = *(_QWORD *)(*(_QWORD *)(a1 + 48) + v5 + 80);
      if ( v8 )
      {
        LOBYTE(a3) = 1;
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64))(WdfFunctions_01033 + 2560))(
          WdfDriverGlobals,
          v8,
          a3);
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01033 + 1664))(
          WdfDriverGlobals,
          *(_QWORD *)(*(_QWORD *)(a1 + 48) + v5 + 80));
      }
    }
    ExFreePoolWithTag(*(PVOID *)(a1 + 48), 0x49434858u);
    *(_QWORD *)(a1 + 48) = 0LL;
  }
}
