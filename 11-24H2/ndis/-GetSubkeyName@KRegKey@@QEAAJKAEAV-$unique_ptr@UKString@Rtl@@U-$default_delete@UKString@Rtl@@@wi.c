/*
 * XREFs of ?GetSubkeyName@KRegKey@@QEAAJKAEAV?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@@Z @ 0x1401424B8
 * Callers:
 *     netsetupEnumerateObjectIds__lambda_3ed15a572a362cb111cc1d3010d8268d___ @ 0x140143FDC (netsetupEnumerateObjectIds__lambda_3ed15a572a362cb111cc1d3010d8268d___.c)
 *     netsetupEnumerateObjectIds__lambda_4b6b787b7067933e1bc6a008e906fab6___ @ 0x140144740 (netsetupEnumerateObjectIds__lambda_4b6b787b7067933e1bc6a008e906fab6___.c)
 *     netsetupEnumerateObjectIds__lambda_5d80e7093cc36aceb5a46cb23d7a8b09___ @ 0x140144898 (netsetupEnumerateObjectIds__lambda_5d80e7093cc36aceb5a46cb23d7a8b09___.c)
 *     netsetupEnumerateObjectIds__lambda_7c777a259d431027593b89f579a3c058___ @ 0x1401449F0 (netsetupEnumerateObjectIds__lambda_7c777a259d431027593b89f579a3c058___.c)
 *     netsetupEnumerateObjectIds__lambda_db34444a9d2aed31789eacdbaf52f617___ @ 0x140144B48 (netsetupEnumerateObjectIds__lambda_db34444a9d2aed31789eacdbaf52f617___.c)
 *     ?ndisWdfUpdateAddDeviceParameters@@YAJAEAVKRegKey@@AEAUNDIS_MINIPORT_CREATION_CONFIG@@@Z @ 0x140169500 (-ndisWdfUpdateAddDeviceParameters@@YAJAEAVKRegKey@@AEAUNDIS_MINIPORT_CREATION_CONFIG@@@Z.c)
 * Callees:
 *     ?reset@?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@QEAAXPEAUKString@Rtl@@@Z @ 0x140051410 (-reset@-$unique_ptr@UKString@Rtl@@U-$default_delete@UKString@Rtl@@@wistd@@@wistd@@QEAAXPEAUKStri.c)
 *     __security_check_cookie @ 0x1400E70B0 (__security_check_cookie.c)
 *     memset @ 0x1400E7500 (memset.c)
 *     ?Initialize@KString@Rtl@@SAPEAU12@PEBU_UNICODE_STRING@@@Z @ 0x140165940 (-Initialize@KString@Rtl@@SAPEAU12@PEBU_UNICODE_STRING@@@Z.c)
 */

NTSTATUS __fastcall KRegKey::GetSubkeyName(void **a1, ULONG a2, void **a3)
{
  void *v6; // rcx
  NTSTATUS result; // eax
  struct Rtl::KString *v8; // rax
  ULONG ResultLength; // [rsp+30h] [rbp-D0h] BYREF
  struct _UNICODE_STRING v10; // [rsp+38h] [rbp-C8h] BYREF
  _DWORD KeyInformation[136]; // [rsp+50h] [rbp-B0h] BYREF

  memset(KeyInformation, 0, 0x218uLL);
  v6 = *a1;
  ResultLength = 0;
  result = ZwEnumerateKey(v6, a2, KeyBasicInformation, KeyInformation, 0x218u, &ResultLength);
  if ( result >= 0 )
  {
    if ( KeyInformation[3] <= 0x200u )
    {
      *(_DWORD *)(&v10.MaximumLength + 1) = 0;
      *((_WORD *)&KeyInformation[4] + ((unsigned __int64)KeyInformation[3] >> 1)) = 0;
      v10.Length = KeyInformation[3];
      v10.MaximumLength = LOWORD(KeyInformation[3]) + 2;
      v10.Buffer = (wchar_t *)&KeyInformation[4];
      v8 = Rtl::KString::Initialize(&v10);
      wistd::unique_ptr<Rtl::KString,wistd::default_delete<Rtl::KString>>::reset(a3, v8);
      return *a3 == 0LL ? 0xC000009A : 0;
    }
    else
    {
      return -1073741562;
    }
  }
  return result;
}
