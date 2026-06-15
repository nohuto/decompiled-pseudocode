/*
 * XREFs of ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18001DA28
 * Callers:
 *     _lambda_d1e543e32deb761d4b0a6b2d9b3a008a_::operator() @ 0x18001674C (_lambda_d1e543e32deb761d4b0a6b2d9b3a008a_--operator().c)
 *     ?InitializeFormat@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEBGZZ @ 0x180016930 (-InitializeFormat@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJ.c)
 *     GetAssignedAccessTypeForUser @ 0x18001BFB4 (GetAssignedAccessTypeForUser.c)
 *     ?reset@?$unique_ptr@VAssignedAccessConfigStoreHelper@AssignedAccess@Internal@Windows@@U?$default_delete@VAssignedAccessConfigStoreHelper@AssignedAccess@Internal@Windows@@@wistd@@@wistd@@QEAAXPEAVAssignedAccessConfigStoreHelper@AssignedAccess@Internal@Windows@@@Z @ 0x18001C238 (-reset@-$unique_ptr@VAssignedAccessConfigStoreHelper@AssignedAccess@Internal@Windows@@U-$default.c)
 *     _lambda_715f26a8cf03ec1bdf3d6747fabae5e9_::operator() @ 0x18001DF00 (_lambda_715f26a8cf03ec1bdf3d6747fabae5e9_--operator().c)
 *     ??1AssignedAccessConfigStoreV1@AssignedAccess@Internal@Windows@@UEAA@XZ @ 0x18004801C (--1AssignedAccessConfigStoreV1@AssignedAccess@Internal@Windows@@UEAA@XZ.c)
 *     _lambda_7a32b90734f372e87ecd5e5e89c702f7_::operator() @ 0x18004874C (_lambda_7a32b90734f372e87ecd5e5e89c702f7_--operator().c)
 * Callees:
 *     <none>
 */

void __fastcall Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(__int64 a1)
{
  void *v2; // rcx

  v2 = *(void **)a1;
  if ( v2 )
  {
    CoTaskMemFree(v2);
    *(_QWORD *)a1 = 0LL;
  }
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
}
