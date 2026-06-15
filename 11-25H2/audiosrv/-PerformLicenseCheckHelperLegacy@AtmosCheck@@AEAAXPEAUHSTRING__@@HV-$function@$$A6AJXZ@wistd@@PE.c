/*
 * XREFs of ?PerformLicenseCheckHelperLegacy@AtmosCheck@@AEAAXPEAUHSTRING__@@HV?$function@$$A6AJXZ@wistd@@PEAUEndpointSpecificSpatialTechInfo@1@@Z @ 0x180148BE4
 * Callers:
 *     ?PerformLicenseCheckInternalLegacy@AtmosCheck@@AEAAJPEA_N@Z @ 0x180013568 (-PerformLicenseCheckInternalLegacy@AtmosCheck@@AEAAJPEA_N@Z.c)
 * Callees:
 *     ?IsLicenseValidForPackage@AtmosCheck@@AEAAJPEAUHSTRING__@@@Z @ 0x18014856C (-IsLicenseValidForPackage@AtmosCheck@@AEAAJPEAUHSTRING__@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall AtmosCheck::PerformLicenseCheckHelperLegacy(__int64 a1, HSTRING a2, int a3, __int64 a4, __int64 a5)
{
  __int64 v6; // rsi
  __int64 v9; // rcx
  AtmosCheck *v10; // rcx
  int v11; // eax

  v6 = a3;
  v9 = *(_QWORD *)(a4 + 112);
  if ( !v9 )
    __fastfail(7u);
  v10 = (AtmosCheck *)(*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v9 + 32LL))(v9);
  if ( !*(_BYTE *)(a1 + 99)
    || ((v11 = *(_DWORD *)(a1 + 184), v11 != 2) || (int)v10 < 0)
    && (v11 != 4 || (int)v10 < 0)
    && (v11 != 3 || (int)v10 >= 0) )
  {
    LODWORD(v10) = AtmosCheck::IsLicenseValidForPackage(v10, a2);
  }
  *(_DWORD *)(32 * v6 + a5 + 4) = (_DWORD)v10;
  return wistd::function<void (enum Microsoft::Bluetooth::Audio::Internal::BluetoothLEAudioSupportedState const &)>::~function<void (enum Microsoft::Bluetooth::Audio::Internal::BluetoothLEAudioSupportedState const &)>(a4);
}
