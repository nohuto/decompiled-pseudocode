/*
 * XREFs of AccelBuildDescriptorNop @ 0x140663F40
 * Callers:
 *     AccelpSiovDsaOperationHandler @ 0x140402E10 (AccelpSiovDsaOperationHandler.c)
 * Callees:
 *     AccelpInternalOperationHandler @ 0x140402C8C (AccelpInternalOperationHandler.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall AccelBuildDescriptorNop(__int64 *a1)
{
  __int64 v3; // rax
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
  memset_0((void *)a1[3], 0, *(unsigned int *)(*(_QWORD *)(*a1 + 16) + 268LL));
  memset_0((void *)a1[4], 0, *(unsigned int *)(*(_QWORD *)(*a1 + 16) + 272LL));
  v3 = *a1;
  v9 = 0LL;
  v5 = v3;
  v6 = *((_DWORD *)a1 + 4);
  v7 = a1[3];
  v8 = a1[4];
  v4[0] = 9;
  return AccelpInternalOperationHandler((__int64)v4);
}
