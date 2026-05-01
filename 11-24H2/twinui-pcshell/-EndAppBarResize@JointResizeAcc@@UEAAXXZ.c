/*
 * XREFs of ?EndAppBarResize@JointResizeAcc@@UEAAXXZ @ 0x18053CB10
 * Callers:
 *     <none>
 * Callees:
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18002AEA8 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?InitializeResFormat@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEAUHINSTANCE__@@HZZ @ 0x1801E5480 (-InitializeResFormat@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QE.c)
 *     _anonymous_namespace_::RaiseUiaNotificationFromString @ 0x18053CF18 (_anonymous_namespace_--RaiseUiaNotificationFromString.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall JointResizeAcc::EndAppBarResize(JointResizeAcc *this)
{
  _QWORD v1[5]; // [rsp+20h] [rbp-28h] BYREF

  memset(v1, 0, 24);
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::InitializeResFormat(
    v1,
    (__int64)&_ImageBase,
    2013LL);
  anonymous_namespace_::RaiseUiaNotificationFromString(v1);
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)v1);
}
