/*
 * XREFs of AccelSubmitWorkAsync @ 0x1404030C8
 * Callers:
 *     AccelpSubmitWork @ 0x140403070 (AccelpSubmitWork.c)
 * Callees:
 *     AccelpInternalOperationHandler @ 0x140402C8C (AccelpInternalOperationHandler.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall AccelSubmitWorkAsync(__int64 *a1)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 v4; // rax
  _DWORD v6[2]; // [rsp+20h] [rbp-78h] BYREF
  __int64 v7; // [rsp+28h] [rbp-70h]
  int v8; // [rsp+30h] [rbp-68h]
  __int64 v9; // [rsp+38h] [rbp-60h]
  __int64 v10; // [rsp+40h] [rbp-58h]
  __int64 v11; // [rsp+48h] [rbp-50h]
  __int64 v12; // [rsp+50h] [rbp-48h]

  v6[1] = 0;
  memset_0(v6, 0, 0x6CuLL);
  if ( !a1 )
    return 3221225485LL;
  v2 = *a1;
  v3 = *(_QWORD *)(*a1 + 32);
  if ( !v3 )
    return 3221225485LL;
  v11 = 0LL;
  v7 = v2;
  v8 = *((_DWORD *)a1 + 4);
  v9 = a1[3];
  v4 = a1[4];
  v12 = v3;
  v10 = v4;
  v6[0] = 1;
  return AccelpInternalOperationHandler((__int64)v6);
}
