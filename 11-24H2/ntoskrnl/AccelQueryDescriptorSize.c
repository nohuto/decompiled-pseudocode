/*
 * XREFs of AccelQueryDescriptorSize @ 0x1406644E4
 * Callers:
 *     AccelInitializeDescriptor @ 0x1406643A0 (AccelInitializeDescriptor.c)
 *     SmHwAcceleratorCreate @ 0x14079BD4C (SmHwAcceleratorCreate.c)
 *     MiQueryAcceleratorHandle @ 0x1408008B0 (MiQueryAcceleratorHandle.c)
 * Callees:
 *     AccelpInternalOperationHandler @ 0x140402C8C (AccelpInternalOperationHandler.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall AccelQueryDescriptorSize(__int64 a1, _DWORD *a2)
{
  __int64 result; // rax
  _DWORD v5[2]; // [rsp+30h] [rbp-19h] BYREF
  __int64 v6; // [rsp+38h] [rbp-11h]
  int v7; // [rsp+40h] [rbp-9h]
  __int64 v8; // [rsp+48h] [rbp-1h]
  __int64 v9; // [rsp+50h] [rbp+7h]
  __int64 v10; // [rsp+58h] [rbp+Fh]

  v5[1] = 0;
  memset_0(v5, 0, 0x6CuLL);
  if ( !a1 || !a2 )
    return 3221225485LL;
  v5[0] = 0;
  v7 = 0;
  v8 = 0LL;
  v9 = 0LL;
  v10 = 0LL;
  v6 = a1;
  result = AccelpInternalOperationHandler((__int64)v5);
  if ( (int)result >= 0 )
    *a2 = 39;
  return result;
}
