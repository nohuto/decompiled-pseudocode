/*
 * XREFs of DpiEnablePowerManagement @ 0x14022F2DC
 * Callers:
 *     ?InitializePowerManagement@DXGADAPTER@@AEAAJXZ @ 0x14036DEB0 (-InitializePowerManagement@DXGADAPTER@@AEAAJXZ.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 */

__int64 __fastcall DpiEnablePowerManagement(__int64 a1, __int64 a2, char a3)
{
  __int64 v3; // rcx
  __int64 v4; // rdi
  NTSTATUS v5; // eax

  v3 = *(_QWORD *)(a1 + 64);
  LODWORD(v4) = 0;
  *(_BYTE *)(v3 + 482) = 1;
  *(_QWORD *)(v3 + 488) = a2;
  *(_BYTE *)(v3 + 5816) = a3;
  if ( a3 )
  {
    v5 = IoRegisterDeviceInterface(
           *(PDEVICE_OBJECT *)(v3 + 152),
           &GUID_DEVINTERFACE_GRAPHICSPOWER,
           0LL,
           (PUNICODE_STRING)(v3 + 5800));
    v4 = v5;
    if ( v5 < 0 )
    {
      WdLogSingleEntry2(2LL, v5, 8LL);
      WdLogGlobalForLineNumber = 4012;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        0xFFFFFFFFLL,
        L"InitializePowerManagement failed to register GRAPHICSPOWER interface:0x%I64x",
        v4,
        8LL,
        0LL,
        0LL,
        0LL);
    }
  }
  return (unsigned int)v4;
}
