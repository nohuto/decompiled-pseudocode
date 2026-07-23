/*
 * XREFs of AccelGetStatusFromCompletionRecord @ 0x140402A28
 * Callers:
 *     AccelpSubmitWork @ 0x140403070 (AccelpSubmitWork.c)
 *     SmHwAcceleratorWaitForRequest @ 0x14060E02C (SmHwAcceleratorWaitForRequest.c)
 * Callees:
 *     AccelpInternalOperationHandler @ 0x140402C8C (AccelpInternalOperationHandler.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall AccelGetStatusFromCompletionRecord(__int64 *a1)
{
  __int64 v2; // rax
  _DWORD v4[2]; // [rsp+20h] [rbp-78h] BYREF
  __int64 v5; // [rsp+28h] [rbp-70h]
  int v6; // [rsp+30h] [rbp-68h]
  __int64 v7; // [rsp+38h] [rbp-60h]
  __int64 v8; // [rsp+40h] [rbp-58h]
  __int64 v9; // [rsp+48h] [rbp-50h]

  v4[1] = 0;
  memset_0(v4, 0, 0x6CuLL);
  if ( !a1 )
    return 3221225485LL;
  v2 = *a1;
  v9 = 0LL;
  v5 = v2;
  v6 = *((_DWORD *)a1 + 4);
  v7 = a1[3];
  v8 = a1[4];
  v4[0] = 3;
  return AccelpInternalOperationHandler(v4, 0LL);
}
