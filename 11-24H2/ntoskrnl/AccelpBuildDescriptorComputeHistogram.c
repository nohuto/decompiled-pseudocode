/*
 * XREFs of AccelpBuildDescriptorComputeHistogram @ 0x140664598
 * Callers:
 *     AccelpComputeHistogram @ 0x140664930 (AccelpComputeHistogram.c)
 * Callees:
 *     AccelpInternalOperationHandler @ 0x140402C8C (AccelpInternalOperationHandler.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall AccelpBuildDescriptorComputeHistogram(__int64 *a1, __int64 a2, int a3, __int64 a4, __int64 a5)
{
  _DWORD v10[2]; // [rsp+28h] [rbp-21h] BYREF
  __int64 v11; // [rsp+30h] [rbp-19h]
  int v12; // [rsp+38h] [rbp-11h]
  __int64 v13; // [rsp+40h] [rbp-9h]
  __int64 v14; // [rsp+48h] [rbp-1h]
  __int64 v15; // [rsp+50h] [rbp+7h]
  __int64 v16; // [rsp+58h] [rbp+Fh]
  int v17; // [rsp+60h] [rbp+17h]
  __int64 v18; // [rsp+68h] [rbp+1Fh]

  v10[1] = 0;
  memset_0(v10, 0, 0x6CuLL);
  if ( !a1 || !a2 || !a4 )
    return 3221225485LL;
  memset_0((void *)a1[3], 0, *(unsigned int *)(*(_QWORD *)(*a1 + 16) + 268LL));
  memset_0((void *)a1[4], 0, *(unsigned int *)(*(_QWORD *)(*a1 + 16) + 272LL));
  v11 = *a1;
  v12 = *((_DWORD *)a1 + 4);
  v13 = a1[3];
  v14 = a1[4];
  v15 = a5;
  v10[0] = 14;
  v16 = a2;
  v17 = a3;
  v18 = a4;
  return AccelpInternalOperationHandler((__int64)v10);
}
