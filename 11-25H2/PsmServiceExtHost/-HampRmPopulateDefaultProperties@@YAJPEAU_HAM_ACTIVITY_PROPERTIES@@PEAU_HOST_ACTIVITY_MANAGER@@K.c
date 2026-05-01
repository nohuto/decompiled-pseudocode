/*
 * XREFs of ?HampRmPopulateDefaultProperties@@YAJPEAU_HAM_ACTIVITY_PROPERTIES@@PEAU_HOST_ACTIVITY_MANAGER@@K@Z @ 0x1800115B4
 * Callers:
 *     ?HamSrvCreateActivity@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEBGPEAEKKK_KPEAU_HAM_ACTIVITY_PROPERTIES@@PEAXPEA_K@Z @ 0x180017620 (-HamSrvCreateActivity@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEBGPEAEKKK_KPEAU_HAM_ACTIVITY_PROPERTIES@@PE.c)
 *     ?HampActCreate@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_ACTIVITY_PROPERTIES@@K_KPEAPEAU_HAM_ACTIVITY@@@Z @ 0x18001E53C (-HampActCreate@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_HAM_ACTIVITY_HOS.c)
 *     ?HampDepGroupAddDonationDependency@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAU_RM_HAM_ACTIVITY_HOST@@_K1PEAU_HAM_ACTIVITY_PROPERTIES@@PEAPEAU_HAM_ACTIVITY@@@Z @ 0x18006DDE8 (-HampDepGroupAddDonationDependency@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAU_RM_HAM_ACTIVITY_HOST@@_K1PE.c)
 * Callees:
 *     ??0_ResourceSetInfo@ExecutionModel@@QEAA@XZ @ 0x1800117B0 (--0_ResourceSetInfo@ExecutionModel@@QEAA@XZ.c)
 *     ?RmpResourceSetPropertiesFromDefaultsAndOverrides@ExecutionModel@@YAXPEAU_RM_RESOURCE_SET_PROPERTIES@@PEAU_ResourceSetInfo@1@@Z @ 0x180011A60 (-RmpResourceSetPropertiesFromDefaultsAndOverrides@ExecutionModel@@YAXPEAU_RM_RESOURCE_SET_PROPER.c)
 *     __security_check_cookie @ 0x1800A7850 (__security_check_cookie.c)
 */

__int64 __fastcall HampRmPopulateDefaultProperties(
        struct _HAM_ACTIVITY_PROPERTIES *a1,
        struct _HOST_ACTIVITY_MANAGER *a2,
        char a3)
{
  __int64 v6; // rdx
  _BYTE *v7; // rcx
  _OWORD *v8; // rax
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  __int64 v22; // rax
  __int64 v23; // rcx
  ULONG v24; // edi
  int *v25; // rsi
  __int64 result; // rax
  _RTL_BITMAP BitMapHeader; // [rsp+20h] [rbp-338h] BYREF
  _BYTE v28[164]; // [rsp+30h] [rbp-328h] BYREF
  char v29; // [rsp+D4h] [rbp-284h] BYREF
  _BYTE v30[384]; // [rsp+1B0h] [rbp-1A8h] BYREF

  ExecutionModel::_ResourceSetInfo::_ResourceSetInfo((ExecutionModel::_ResourceSetInfo *)v28);
  ExecutionModel::_ResourceSetInfo::_ResourceSetInfo((ExecutionModel::_ResourceSetInfo *)v30);
  if ( !*((_WORD *)a1 + 70)
    || (result = RmRpsQueryResourceSetInfo(*((_QWORD *)a2 - 198), (char *)a1 + 140, v30), (int)result >= 0) )
  {
    v6 = 2LL;
    v7 = v28;
    v8 = v30;
    do
    {
      v9 = v8[1];
      *(_OWORD *)v7 = *v8;
      v10 = v8[2];
      *((_OWORD *)v7 + 1) = v9;
      v11 = v8[3];
      *((_OWORD *)v7 + 2) = v10;
      v12 = v8[4];
      *((_OWORD *)v7 + 3) = v11;
      v13 = v8[5];
      *((_OWORD *)v7 + 4) = v12;
      v14 = v8[6];
      *((_OWORD *)v7 + 5) = v13;
      v15 = v8[7];
      v8 += 8;
      *((_OWORD *)v7 + 6) = v14;
      v7 += 128;
      *((_OWORD *)v7 - 1) = v15;
      --v6;
    }
    while ( v6 );
    v16 = v8[1];
    *(_OWORD *)v7 = *v8;
    v17 = v8[2];
    *((_OWORD *)v7 + 1) = v16;
    v18 = v8[3];
    *((_OWORD *)v7 + 2) = v17;
    v19 = v8[4];
    *((_OWORD *)v7 + 3) = v18;
    v20 = v8[5];
    *((_OWORD *)v7 + 4) = v19;
    v21 = v8[6];
    v22 = *((_QWORD *)v8 + 14);
    *((_OWORD *)v7 + 5) = v20;
    *((_OWORD *)v7 + 6) = v21;
    *((_QWORD *)v7 + 14) = v22;
    ExecutionModel::RmpResourceSetPropertiesFromDefaultsAndOverrides(
      (struct _HAM_ACTIVITY_PROPERTIES *)((char *)a1 + 280),
      (struct _RM_RESOURCE_SET_PROPERTIES *)v28,
      (struct ExecutionModel::_ResourceSetInfo *)0x80);
    if ( (*(_BYTE *)(v23 + 40) & 0x10) != 0 && *(_QWORD *)(v23 + 80) < *(_QWORD *)(v23 + 64) )
    {
      return 3221225485LL;
    }
    else
    {
      BitMapHeader = 0LL;
      RtlInitializeBitMap(&BitMapHeader, (PULONG)a1 + 96, 0x2Fu);
      v24 = 0;
      v25 = (int *)&v29;
      do
      {
        if ( *v25 < 101 )
          RtlSetBit(&BitMapHeader, v24);
        ++v24;
        ++v25;
      }
      while ( v24 < 0x2F );
      if ( (v28[42] & 7) == 4 )
        *(_DWORD *)a1 |= 0x80000u;
      if ( (a3 & 1) == 0 )
        *(_DWORD *)a1 &= ~0x80000u;
      return 0LL;
    }
  }
  return result;
}
