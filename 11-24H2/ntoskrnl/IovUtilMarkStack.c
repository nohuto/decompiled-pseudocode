/*
 * XREFs of IovUtilMarkStack @ 0x1404A78B4
 * Callers:
 *     PipCallDriverAddDevice @ 0x140980ED0 (PipCallDriverAddDevice.c)
 * Callees:
 *     IovUtilMarkDeviceObject @ 0x1404A7930 (IovUtilMarkDeviceObject.c)
 *     VfDevObjAdjustFdoForVerifierFilters @ 0x140B94204 (VfDevObjAdjustFdoForVerifierFilters.c)
 */

__int64 __fastcall IovUtilMarkStack(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 result; // rax
  __int64 v5; // r8
  __int64 v6; // r10
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // [rsp+38h] [rbp+10h] BYREF

  result = a3;
  v5 = a2;
  v6 = a1;
  if ( a2 )
    result = IovUtilMarkDeviceObject(a2, 1LL);
  if ( !result )
  {
    if ( !a4 )
      return result;
    IovUtilMarkDeviceObject(v6, 2LL);
    v7 = 3LL;
    return IovUtilMarkDeviceObject(v8, v7);
  }
  v9 = result;
  if ( IovUtilVerifierEnabled )
  {
    VfDevObjAdjustFdoForVerifierFilters(&v9, a2, v5);
    result = v9;
  }
  if ( result )
  {
    v7 = 2LL;
    v8 = result;
    return IovUtilMarkDeviceObject(v8, v7);
  }
  return result;
}
