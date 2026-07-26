/*
 * XREFs of ?QueryValueString@KRegKey@@QEAAJPEBU_UNICODE_STRING@@AEAV?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@@Z @ 0x140174B50
 * Callers:
 *     ?ndisCheckIfDeviceNeedsFullMigration@@YAJAEAVKRegKey@@AEAV?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@AEA_N@Z @ 0x1401401B0 (-ndisCheckIfDeviceNeedsFullMigration@@YAJAEAVKRegKey@@AEAV-$unique_ptr@UKString@Rtl@@U-$default_.c)
 *     ?Open@InterfaceProfileKnobCollection@@UEBAJKAEAUKnobTransaction@@@Z @ 0x140167770 (-Open@InterfaceProfileKnobCollection@@UEBAJKAEAUKnobTransaction@@@Z.c)
 *     ?QueryValueString@KRegKey@@QEAAJPEB_WAEAV?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@@Z @ 0x140173E10 (-QueryValueString@KRegKey@@QEAAJPEB_WAEAV-$unique_ptr@UKString@Rtl@@U-$default_delete@UKString@R.c)
 * Callees:
 *     ?reset@?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@QEAAXPEAUKString@Rtl@@@Z @ 0x14006CDB0 (-reset@-$unique_ptr@UKString@Rtl@@U-$default_delete@UKString@Rtl@@@wistd@@@wistd@@QEAAXPEAUKStri.c)
 *     ??$reset@PEAE@?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@wistd@@@wistd@@QEAAXPEAE@Z @ 0x140099380 (--$reset@PEAE@-$unique_ptr@$$BY0A@EU-$default_delete@$$BY0A@E@wistd@@@wistd@@QEAAXPEAE@Z.c)
 *     __security_check_cookie @ 0x1400EDF40 (__security_check_cookie.c)
 *     memset @ 0x1400EE380 (memset.c)
 *     ??_V@YAXPEAX@Z @ 0x140141060 (--_V@YAXPEAX@Z.c)
 *     ?Initialize@KString@Rtl@@SAPEAU12@PEBU_UNICODE_STRING@@@Z @ 0x140171E40 (-Initialize@KString@Rtl@@SAPEAU12@PEBU_UNICODE_STRING@@@Z.c)
 */

NTSTATUS __fastcall KRegKey::QueryValueString(HANDLE *a1, _UNICODE_STRING *a2, void **a3)
{
  HANDLE v6; // rcx
  PVOID v7; // rbx
  _DWORD *v8; // rbp
  NTSTATUS result; // eax
  void *Pool2; // rax
  NTSTATUS v11; // edi
  void *v12; // rcx
  int v13; // edx
  struct Rtl::KString *v14; // rax
  ULONG ResultLength; // [rsp+30h] [rbp-158h] BYREF
  PVOID v16[2]; // [rsp+38h] [rbp-150h] BYREF
  _BYTE KeyValueInformation[256]; // [rsp+50h] [rbp-138h] BYREF

  memset(KeyValueInformation, 0, sizeof(KeyValueInformation));
  v6 = *a1;
  v7 = 0LL;
  v16[0] = 0LL;
  ResultLength = 0;
  v8 = KeyValueInformation;
  result = ZwQueryValueKey(v6, a2, KeyValuePartialInformation, KeyValueInformation, 0x100u, &ResultLength);
  if ( result == -2147483643 )
  {
    if ( ResultLength > 0x100000 )
      return -1073740757;
    Pool2 = (void *)ExAllocatePool2(256LL, ResultLength, 1920226130);
    wistd::unique_ptr<unsigned char [0],wistd::default_delete<unsigned char [0]>>::reset<unsigned char *>(v16, Pool2);
    v7 = v16[0];
    if ( !v16[0] )
      return -1073741670;
    v11 = ZwQueryValueKey(*a1, a2, KeyValuePartialInformation, v16[0], ResultLength, &ResultLength);
    if ( v11 < 0 )
    {
      if ( v7 )
        operator delete[](v7);
      return v11;
    }
    v8 = v7;
    v12 = v7;
  }
  else
  {
    v12 = 0LL;
    if ( result < 0 )
      return result;
  }
  if ( v8[1] != 1 )
  {
    if ( v12 )
      operator delete[](v12);
    return -1073741788;
  }
  v13 = v8[2];
  if ( (v13 & 1) != 0 )
  {
    if ( v12 )
      operator delete[](v12);
    return -1073741811;
  }
  HIDWORD(v16[0]) = 0;
  LOWORD(v16[0]) = v13;
  WORD1(v16[0]) = v13;
  for ( v16[1] = v8 + 3; (unsigned __int16)v13 >= 2u; LOWORD(v16[0]) = v13 )
  {
    if ( *((_WORD *)v8 + ((unsigned __int64)(unsigned __int16)v13 >> 1) + 5) )
      break;
    LOWORD(v13) = v13 - 2;
  }
  v14 = Rtl::KString::Initialize((const struct _UNICODE_STRING *)v16);
  wistd::unique_ptr<Rtl::KString,wistd::default_delete<Rtl::KString>>::reset(a3, v14);
  if ( !*a3 )
  {
    if ( v7 )
      operator delete[](v7);
    return -1073741670;
  }
  if ( v7 )
    operator delete[](v7);
  return 0;
}
