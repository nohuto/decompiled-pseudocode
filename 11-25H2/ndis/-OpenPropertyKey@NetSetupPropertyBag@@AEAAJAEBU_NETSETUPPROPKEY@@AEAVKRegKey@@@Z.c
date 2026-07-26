/*
 * XREFs of ?OpenPropertyKey@NetSetupPropertyBag@@AEAAJAEBU_NETSETUPPROPKEY@@AEAVKRegKey@@@Z @ 0x140169780
 * Callers:
 *     ?ReadConfigurationPath@NetSetupPropertyBag@@QEAAJAEAUNetSetupConfigurationPath@@@Z @ 0x1401409B0 (-ReadConfigurationPath@NetSetupPropertyBag@@QEAAJAEAUNetSetupConfigurationPath@@@Z.c)
 *     ?ReadGuid@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEAU_GUID@@@Z @ 0x14014DDF0 (-ReadGuid@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEAU_GUID@@@Z.c)
 *     ?ReadStringArray@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEAV?$KArray@V?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@$00@Rtl@@@Z @ 0x14014DEAC (-ReadStringArray@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEAV-$KArray@V-$unique_ptr@UKSt.c)
 *     ?ReadUint64@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEA_K@Z @ 0x1401693F0 (-ReadUint64@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEA_K@Z.c)
 *     ?ReadUint32@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEAI@Z @ 0x1401694D0 (-ReadUint32@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEAI@Z.c)
 *     ?ReadString@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEAV?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@@Z @ 0x1401695A0 (-ReadString@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEAV-$unique_ptr@UKString@Rtl@@U-$de.c)
 *     ?ReadBoolean@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEA_N@Z @ 0x1401696A0 (-ReadBoolean@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEA_N@Z.c)
 * Callees:
 *     RtlUnicodeStringInitWorker @ 0x1400A0BEC (RtlUnicodeStringInitWorker.c)
 *     __security_check_cookie @ 0x1400EDF40 (__security_check_cookie.c)
 *     ?Open@KRegKey@@QEAAJKPEBU_UNICODE_STRING@@PEAX@Z @ 0x140169240 (-Open@KRegKey@@QEAAJKPEBU_UNICODE_STRING@@PEAX@Z.c)
 *     GetPkeyName @ 0x140169820 (GetPkeyName.c)
 */

NTSTATUS __fastcall NetSetupPropertyBag::OpenPropertyKey(
        void ***this,
        const struct _NETSETUPPROPKEY *a2,
        struct KRegKey *a3)
{
  void **v5; // rax
  void *v6; // rbx
  size_t v7; // r8
  ULONG v8; // r9d
  NTSTATUS result; // eax
  _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-88h] BYREF
  wchar_t pszSrc[48]; // [rsp+30h] [rbp-78h] BYREF

  GetPkeyName(a2, pszSrc);
  v5 = *this;
  DestinationString = 0LL;
  v6 = *v5;
  result = RtlUnicodeStringInitWorker(&DestinationString, pszSrc, v7, v8);
  if ( result >= 0 )
    return KRegKey::Open(a3, 1u, &DestinationString, v6);
  return result;
}
