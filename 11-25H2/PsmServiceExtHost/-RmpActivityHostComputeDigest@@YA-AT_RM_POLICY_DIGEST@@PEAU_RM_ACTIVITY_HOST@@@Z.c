/*
 * XREFs of ?RmpActivityHostComputeDigest@@YA?AT_RM_POLICY_DIGEST@@PEAU_RM_ACTIVITY_HOST@@@Z @ 0x18002A290
 * Callers:
 *     ?RmpActivityHostResourceSetsChanged@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180029F90 (-RmpActivityHostResourceSetsChanged@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 * Callees:
 *     ?RmpPolicyDigestCompute@@YA?AT_RM_POLICY_DIGEST@@PEAVResourceSet@ExecutionModel@@@Z @ 0x18002A42C (-RmpPolicyDigestCompute@@YA-AT_RM_POLICY_DIGEST@@PEAVResourceSet@ExecutionModel@@@Z.c)
 */

__int64 __fastcall RmpActivityHostComputeDigest(__int64 a1)
{
  unsigned __int16 v1; // di
  __int64 v2; // rbx
  __int64 v3; // rbx
  __int16 v4; // r9
  __int16 v5; // ax
  __int16 v6; // r9
  __int16 v7; // di
  __int16 v8; // r8
  __int16 v9; // di
  __int64 v10; // r8
  __int16 v11; // ax
  __int16 v12; // di
  __int16 v13; // ax
  __int16 v14; // di
  __int16 v15; // ax

  v1 = 102;
  v2 = *(_QWORD *)(a1 + 1160);
  if ( v2 == a1 + 1160 )
    return 102LL;
  v3 = v2 - 1296;
  if ( !v3 )
    return 102LL;
  do
  {
    v4 = RmpPolicyDigestCompute(v3);
    v5 = v1 & v4;
    v6 = v1 | v4;
    v7 = 0;
    v8 = (_bittest16(&v5, 1u) != 0 ? 2 : 0) | (_bittest16(&v5, 2u) != 0 ? 4 : 0) | (_bittest16(&v5, 5u) != 0 ? 0x20 : 0) | (_bittest16(&v5, 6u) != 0 ? 0x40 : 0);
    if ( _bittest16(&v6, 8u) )
      v7 = 256;
    v9 = v8 | v7;
    v10 = *(_QWORD *)(v3 + 1296);
    v11 = 0;
    if ( (v6 & 0x80) != 0 )
      v11 = 128;
    v12 = v11 | v9;
    v13 = 0;
    if ( (v6 & 0x10) != 0 )
      v13 = 16;
    v14 = v13 | v12;
    v15 = 0;
    if ( (v6 & 8) != 0 )
      v15 = 8;
    v1 = ((v6 & 1) != 0) | v15 | v14;
    if ( v10 == *(_QWORD *)(v3 + 1320) + 8 * (3LL * *(int *)(v3 + 1328) + 142) )
      break;
    v3 = v10 - 1296;
  }
  while ( v10 != 1296 );
  return v1;
}
