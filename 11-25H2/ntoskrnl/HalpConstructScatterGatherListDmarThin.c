/*
 * XREFs of HalpConstructScatterGatherListDmarThin @ 0x14045FBC0
 * Callers:
 *     HalGetScatterGatherListDmarThin @ 0x14045F870 (HalGetScatterGatherListDmarThin.c)
 *     HalpBuildScatterGatherListDmarThin @ 0x14045F9B8 (HalpBuildScatterGatherListDmarThin.c)
 *     HalpConstructScatterGatherListDmarThin @ 0x14045FBC0 (HalpConstructScatterGatherListDmarThin.c)
 *     HalpDmaReturnEmergencyLogicalAddressResources @ 0x14053A118 (HalpDmaReturnEmergencyLogicalAddressResources.c)
 * Callees:
 *     HalpPutScatterGatherListDmarThin @ 0x14026D5F4 (HalpPutScatterGatherListDmarThin.c)
 *     HalpConstructScatterGatherListDmarThin @ 0x14045FBC0 (HalpConstructScatterGatherListDmarThin.c)
 *     HalpDmaUseEmergencyLogicalAddressResources @ 0x14053A1F4 (HalpDmaUseEmergencyLogicalAddressResources.c)
 *     Feature_DmarThinSGListSectorRoundUp__private_IsEnabledDeviceUsageNoInline @ 0x14054EE50 (Feature_DmarThinSGListSectorRoundUp__private_IsEnabledDeviceUsageNoInline.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpConstructScatterGatherListDmarThin(__int64 a1, __int64 a2)
{
  __int64 v2; // r11
  _DWORD *v3; // r14
  __int64 v4; // r10
  __int64 v5; // r13
  int v6; // edi
  __int64 *v7; // r15
  __int64 v8; // rbx
  unsigned int v9; // r12d
  __int64 v10; // r8
  __int64 v11; // rsi
  unsigned int v12; // eax
  int v13; // r9d
  unsigned __int64 v14; // r13
  __int64 v15; // rax
  __int64 v17; // [rsp+40h] [rbp-49h]
  __int64 v18; // [rsp+48h] [rbp-41h]
  __int64 v19; // [rsp+68h] [rbp-21h]
  __int64 v20; // [rsp+70h] [rbp-19h]
  __int64 v21; // [rsp+78h] [rbp-11h]
  char v22; // [rsp+F0h] [rbp+67h]
  int v23; // [rsp+F8h] [rbp+6Fh]
  __int64 v24; // [rsp+100h] [rbp+77h]
  __int64 v25; // [rsp+108h] [rbp+7Fh]

  v2 = *(_QWORD *)(a1 + 24);
  v24 = 0LL;
  v3 = *(_DWORD **)(a1 + 88);
  v4 = 0LL;
  v5 = *(_QWORD *)(a1 + 64);
  v6 = 0;
  v7 = *(__int64 **)(a1 + 48);
  v8 = a1;
  v9 = *(_DWORD *)(a1 + 56);
  v10 = *(unsigned int *)(a1 + 60);
  v11 = *(_QWORD *)(a1 + 80);
  v17 = v2;
  v18 = v5;
  v25 = 0LL;
  v19 = *(_QWORD *)(v2 + 512);
  v22 = *(_BYTE *)(a1 + 96);
  if ( v3 )
  {
    _m_prefetchw(v3);
    a1 = *v3 | 4u;
    if ( (_InterlockedOr(v3, 4u) & 2) != 0 )
      goto LABEL_3;
  }
  *(_DWORD *)v11 = 0;
  *(_QWORD *)(v11 + 8) = v8;
  if ( v7 )
  {
    a1 = 0LL;
    do
    {
      if ( !v9 )
        break;
      v12 = *((_DWORD *)v7 + 10) - v10;
      v21 = 3LL * (unsigned int)a1;
      a2 = v9;
      if ( v12 <= v9 )
        a2 = v12;
      v13 = v10 + *((_DWORD *)v7 + 11);
      v9 -= a2;
      v23 = a2;
      if ( (_DWORD)a2 )
      {
        v14 = ((v13 & 0xFFF) + (unsigned __int64)(unsigned int)a2 + 4095) >> 12;
        v20 = v13 & 0xFFF;
        if ( *(_BYTE *)(v8 + 98) )
        {
          v6 = guard_dispatch_icall_no_overrides(*(_QWORD *)(v2 + 560), v4);
          if ( v6 < 0 )
            goto LABEL_28;
          v2 = v17;
          v15 = v25 + **(_QWORD **)(v17 + 560);
          v4 = v14 + v25;
          v24 = v15;
          v25 += v14;
        }
        else
        {
          v6 = guard_dispatch_icall_no_overrides(*(_QWORD *)(v19 + 40), 3LL);
          if ( v6 < 0 )
            goto LABEL_28;
          v15 = v24;
          v4 = v25;
          v2 = v17;
        }
        *(_QWORD *)(v11 + 8 * v21 + 32) = 0LL;
        *(_QWORD *)(v11 + 8 * v21 + 16) = v20 + v15;
        *(_DWORD *)(v11 + 8 * v21 + 24) = v23;
        a1 = (unsigned int)++*(_DWORD *)v11;
      }
      v7 = (__int64 *)*v7;
      v10 = 0LL;
    }
    while ( v7 );
    v5 = v18;
  }
  if ( (unsigned int)Feature_DmarThinSGListSectorRoundUp__private_IsEnabledDeviceUsageNoInline(a1, a2, v10)
    && !v7
    && v9
    && *(_DWORD *)v11 )
  {
    *(_DWORD *)(v11 + 24 * ((unsigned int)(*(_DWORD *)v11 - 1) + 1LL)) += v9;
  }
  if ( v3 && (_m_prefetchw(v3), (_InterlockedOr(v3, 1u) & 2) != 0) )
  {
LABEL_3:
    v6 = -1073741536;
LABEL_28:
    if ( *(_DWORD *)v11 )
      HalpPutScatterGatherListDmarThin(*(_QWORD *)(v8 + 24), (_DWORD *)v11);
    if ( v6 != -1073741536 && !*(_BYTE *)(v8 + 98) )
    {
      *(_BYTE *)(v8 + 98) = 1;
      LOBYTE(v10) = v22 == 0;
      if ( (unsigned __int8)HalpDmaUseEmergencyLogicalAddressResources(v17, v8, v10) )
        return (unsigned int)HalpConstructScatterGatherListDmarThin(v8);
      else
        return v22 != 0 ? (unsigned int)v6 : 0;
    }
  }
  else if ( v5 )
  {
    guard_dispatch_icall_no_overrides(*(_QWORD *)(v8 + 32), *(_QWORD *)(v8 + 40));
  }
  return (unsigned int)v6;
}
