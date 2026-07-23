/*
 * XREFs of DrvDbGetDriverPackageSignerScore @ 0x140925458
 * Callers:
 *     DrvDbGetDriverPackageMappedPropertyKeys @ 0x140822954 (DrvDbGetDriverPackageMappedPropertyKeys.c)
 *     DrvDbSetDriverPackageMappedProperty @ 0x140823668 (DrvDbSetDriverPackageMappedProperty.c)
 *     DrvDbGetDriverPackageMappedProperty @ 0x14092644C (DrvDbGetDriverPackageMappedProperty.c)
 * Callees:
 *     DrvDbGetDriverPackageMappedProperty @ 0x14092644C (DrvDbGetDriverPackageMappedProperty.c)
 */

__int64 __fastcall DrvDbGetDriverPackageSignerScore(int a1, int a2, int a3, wchar_t *a4)
{
  __int64 result; // rax
  int v5; // [rsp+40h] [rbp-18h] BYREF
  _DWORD v6[5]; // [rsp+44h] [rbp-14h] BYREF

  v5 = 0;
  v6[0] = 0;
  result = DrvDbGetDriverPackageMappedProperty(
             a1,
             a2,
             a3,
             (int)&DEVPKEY_DriverPackage_SignerScore,
             (int)&v5,
             a4,
             4,
             (__int64)v6);
  if ( (int)result >= 0 && (v5 != 7 || v6[0] != 4) )
    return 3221225473LL;
  return result;
}
