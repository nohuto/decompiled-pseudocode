/*
 * XREFs of AccelQueryDescriptorSize @ 0x1406599B0
 * Callers:
 *     AccelInitializeDescriptor @ 0x14065986C (AccelInitializeDescriptor.c)
 *     SmHwAcceleratorCreate @ 0x14078C87C (SmHwAcceleratorCreate.c)
 *     MiQueryAcceleratorHandle @ 0x1407F02B0 (MiQueryAcceleratorHandle.c)
 * Callees:
 *     AccelpInternalOperationHandler @ 0x140659FB0 (AccelpInternalOperationHandler.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

__int64 __fastcall AccelQueryDescriptorSize(__int64 a1, _DWORD *a2)
{
  __int64 result; // rax
  __int128 v5; // [rsp+20h] [rbp-29h] BYREF
  _DWORD v6[2]; // [rsp+30h] [rbp-19h] BYREF
  __int64 v7; // [rsp+38h] [rbp-11h]
  int v8; // [rsp+40h] [rbp-9h]
  __int64 v9; // [rsp+48h] [rbp-1h]
  __int64 v10; // [rsp+50h] [rbp+7h]
  __int64 v11; // [rsp+58h] [rbp+Fh]

  v6[1] = 0;
  memset_0(v6, 0, 0x6CuLL);
  v5 = 0LL;
  if ( !a1 || !a2 )
    return 3221225485LL;
  v6[0] = 0;
  v8 = 0;
  v9 = 0LL;
  v10 = 0LL;
  v11 = 0LL;
  v7 = a1;
  result = AccelpInternalOperationHandler(v6, &v5);
  if ( (int)result >= 0 )
    *a2 = DWORD1(v5) + v5 + DWORD2(v5) + 39;
  return result;
}
