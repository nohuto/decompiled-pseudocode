/*
 * XREFs of AccelWaitForWorkCompletion @ 0x140403150
 * Callers:
 *     AccelpSubmitWork @ 0x140403070 (AccelpSubmitWork.c)
 *     SmHwAcceleratorWaitForRequest @ 0x14060E02C (SmHwAcceleratorWaitForRequest.c)
 * Callees:
 *     AccelpInternalOperationHandler @ 0x140402C8C (AccelpInternalOperationHandler.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall AccelWaitForWorkCompletion(__int64 *a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rdi
  char v5; // dl
  __int64 v7; // rax
  _DWORD v8[2]; // [rsp+20h] [rbp-78h] BYREF
  __int64 v9; // [rsp+28h] [rbp-70h]
  int v10; // [rsp+30h] [rbp-68h]
  __int64 v11; // [rsp+38h] [rbp-60h]
  __int64 v12; // [rsp+40h] [rbp-58h]
  __int64 v13; // [rsp+48h] [rbp-50h]
  __int64 v14; // [rsp+50h] [rbp-48h]

  v3 = a3;
  v8[1] = 0;
  memset_0(v8, 0, 0x6CuLL);
  v5 = 0;
  if ( !a1 || (v3 & 0xFFFFFFFC) != 0 )
    return 3221225485LL;
  v7 = *a1;
  if ( (v3 & 1) != 0 )
  {
    if ( *(_DWORD *)(*(_QWORD *)(v7 + 16) + 188LL) == 1 || *(_DWORD *)(*(_QWORD *)(v7 + 16) + 188LL) == 2 )
      v5 = *(_BYTE *)a1[4] & 0x3F;
    return v5 == 0 ? 0xC0000001 : 0;
  }
  else
  {
    v9 = *a1;
    v10 = *((_DWORD *)a1 + 4);
    v11 = a1[3];
    v12 = a1[4];
    v8[0] = 2;
    v13 = v3;
    v14 = 0LL;
    return AccelpInternalOperationHandler((__int64)v8);
  }
}
