/*
 * XREFs of DrvDbOpenDriverPackageRegKey @ 0x140930FB4
 * Callers:
 *     DrvDbGetDriverPackageMappedPropertyKeys @ 0x140812314 (DrvDbGetDriverPackageMappedPropertyKeys.c)
 *     DrvDbSetDriverPackageMappedProperty @ 0x140813028 (DrvDbSetDriverPackageMappedProperty.c)
 *     DrvDbDispatchDriverPackage @ 0x1409303A0 (DrvDbDispatchDriverPackage.c)
 *     DrvDbGetDriverPackageMappedProperty @ 0x1409305BC (DrvDbGetDriverPackageMappedProperty.c)
 * Callees:
 *     DrvDbOpenObjectRegKey @ 0x140931000 (DrvDbOpenObjectRegKey.c)
 */

__int64 __fastcall DrvDbOpenDriverPackageRegKey(int a1, int a2, int a3, char a4, __int64 a5, __int64 a6)
{
  return DrvDbOpenObjectRegKey(a1, 0, 2, a2, a3, a4, a5, a6, 0LL);
}
