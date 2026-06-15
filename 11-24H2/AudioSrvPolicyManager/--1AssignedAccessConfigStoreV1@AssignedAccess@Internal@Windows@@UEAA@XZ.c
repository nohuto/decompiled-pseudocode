/*
 * XREFs of ??1AssignedAccessConfigStoreV1@AssignedAccess@Internal@Windows@@UEAA@XZ @ 0x18004801C
 * Callers:
 *     ??_GAssignedAccessConfigStoreV1@AssignedAccess@Internal@Windows@@UEAAPEAXI@Z @ 0x180048050 (--_GAssignedAccessConfigStoreV1@AssignedAccess@Internal@Windows@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18001DA28 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 */

void __fastcall Windows::Internal::AssignedAccess::AssignedAccessConfigStoreV1::~AssignedAccessConfigStoreV1(
        Windows::Internal::AssignedAccess::AssignedAccessConfigStoreV1 *this)
{
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)this + 8);
  *(_QWORD *)this = &Windows::Internal::AssignedAccess::AssignedAccessConfigStoreBase::`vftable';
}
