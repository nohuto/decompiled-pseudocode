/*
 * XREFs of ?reset@?$unique_ptr@VAssignedAccessConfigStoreHelper@AssignedAccess@Internal@Windows@@U?$default_delete@VAssignedAccessConfigStoreHelper@AssignedAccess@Internal@Windows@@@wistd@@@wistd@@QEAAXPEAVAssignedAccessConfigStoreHelper@AssignedAccess@Internal@Windows@@@Z @ 0x18001C108
 * Callers:
 *     GetAssignedAccessTypeForUser @ 0x18001BE84 (GetAssignedAccessTypeForUser.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180010D60 (--3@YAXPEAX@Z.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18001DA94 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 */

void __fastcall wistd::unique_ptr<Windows::Internal::AssignedAccess::AssignedAccessConfigStoreHelper,wistd::default_delete<Windows::Internal::AssignedAccess::AssignedAccessConfigStoreHelper>>::reset(
        void **a1)
{
  void *v1; // rbx

  v1 = *a1;
  *a1 = 0LL;
  if ( v1 )
  {
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v1);
    operator delete(v1);
  }
}
