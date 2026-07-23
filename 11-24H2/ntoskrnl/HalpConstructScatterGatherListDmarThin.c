/*
 * XREFs of HalpConstructScatterGatherListDmarThin @ 0x140453D00
 * Callers:
 *     HalGetScatterGatherListDmarThin @ 0x1404539B0 (HalGetScatterGatherListDmarThin.c)
 *     HalpBuildScatterGatherListDmarThin @ 0x140453AF8 (HalpBuildScatterGatherListDmarThin.c)
 *     HalpConstructScatterGatherListDmarThin @ 0x140453D00 (HalpConstructScatterGatherListDmarThin.c)
 *     HalpDmaReturnEmergencyLogicalAddressResources @ 0x14053A1C0 (HalpDmaReturnEmergencyLogicalAddressResources.c)
 * Callees:
 *     HalpPutScatterGatherListDmarThin @ 0x14039BBC4 (HalpPutScatterGatherListDmarThin.c)
 *     HalpConstructScatterGatherListDmarThin @ 0x140453D00 (HalpConstructScatterGatherListDmarThin.c)
 *     HalpDmaUseEmergencyLogicalAddressResources @ 0x14053A29C (HalpDmaUseEmergencyLogicalAddressResources.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpConstructScatterGatherListDmarThin(__int64 a1)
{
  __int64 v1; // r11
  void *v2; // r14
  __int64 v3; // r10
  __int64 v4; // r13
  int v5; // edi
  __int64 *v6; // r12
  unsigned int v8; // r15d
  __int64 v9; // r8
  __int64 v10; // rsi
  unsigned int v11; // ecx
  unsigned int v12; // edx
  int v13; // r9d
  unsigned __int64 v14; // r13
  __int64 v15; // rax
  __int64 v17; // [rsp+40h] [rbp-49h]
  __int64 v18; // [rsp+48h] [rbp-41h]
  __int64 v19; // [rsp+68h] [rbp-21h]
  __int64 v20; // [rsp+70h] [rbp-19h]
  __int64 v21; // [rsp+78h] [rbp-11h]
  char v22; // [rsp+F0h] [rbp+67h]
  unsigned int v23; // [rsp+F8h] [rbp+6Fh]
  __int64 v24; // [rsp+100h] [rbp+77h]
  __int64 v25; // [rsp+108h] [rbp+7Fh]

  v1 = *(_QWORD *)(a1 + 24);
  v24 = 0LL;
  v2 = *(void **)(a1 + 88);
  v3 = 0LL;
  v4 = *(_QWORD *)(a1 + 64);
  v5 = 0;
  v6 = *(__int64 **)(a1 + 48);
  v8 = *(_DWORD *)(a1 + 56);
  v9 = *(unsigned int *)(a1 + 60);
  v10 = *(_QWORD *)(a1 + 80);
  v17 = v1;
  v18 = v4;
  v25 = 0LL;
  v19 = *(_QWORD *)(v1 + 512);
  v22 = *(_BYTE *)(a1 + 96);
  if ( v2 )
  {
    _m_prefetchw(v2);
    if ( (_InterlockedOr((volatile signed __int32 *)v2, 4u) & 2) != 0 )
      goto LABEL_3;
  }
  *(_DWORD *)v10 = 0;
  v11 = 0;
  *(_QWORD *)(v10 + 8) = a1;
  if ( v6 )
  {
    while ( v8 )
    {
      v21 = 3LL * v11;
      v12 = v8;
      if ( *((_DWORD *)v6 + 10) - (int)v9 <= v8 )
        v12 = *((_DWORD *)v6 + 10) - v9;
      v13 = v9 + *((_DWORD *)v6 + 11);
      v8 -= v12;
      v23 = v12;
      if ( v12 )
      {
        v14 = ((v13 & 0xFFF) + (unsigned __int64)v12 + 4095) >> 12;
        v20 = v13 & 0xFFF;
        if ( *(_BYTE *)(a1 + 98) )
        {
          v5 = guard_dispatch_icall_no_overrides(*(_QWORD *)(v1 + 560), v3);
          if ( v5 < 0 )
            goto LABEL_26;
          v1 = v17;
          v15 = v25 + **(_QWORD **)(v17 + 560);
          v3 = v14 + v25;
          v24 = v15;
          v25 += v14;
        }
        else
        {
          v5 = guard_dispatch_icall_no_overrides(*(_QWORD *)(v19 + 40), 3LL);
          if ( v5 < 0 )
            goto LABEL_26;
          v15 = v24;
          v3 = v25;
          v1 = v17;
        }
        *(_QWORD *)(v10 + 8 * v21 + 32) = 0LL;
        *(_QWORD *)(v10 + 8 * v21 + 16) = v20 + v15;
        *(_DWORD *)(v10 + 8 * v21 + 24) = v23;
        v11 = ++*(_DWORD *)v10;
      }
      v6 = (__int64 *)*v6;
      v9 = 0LL;
      if ( !v6 )
      {
        v4 = v18;
        goto LABEL_17;
      }
    }
    v4 = v18;
  }
  else
  {
LABEL_17:
    if ( v8 && v11 )
      *(_DWORD *)(v10 + 24 * (v11 - 1 + 1LL)) += v8;
  }
  if ( v2 && (_m_prefetchw(v2), (_InterlockedOr((volatile signed __int32 *)v2, 1u) & 2) != 0) )
  {
LABEL_3:
    v5 = -1073741536;
LABEL_26:
    if ( *(_DWORD *)v10 )
      HalpPutScatterGatherListDmarThin(*(_QWORD *)(a1 + 24), (_DWORD *)v10);
    if ( v5 != -1073741536 && !*(_BYTE *)(a1 + 98) )
    {
      *(_BYTE *)(a1 + 98) = 1;
      LOBYTE(v9) = v22 == 0;
      if ( (unsigned __int8)HalpDmaUseEmergencyLogicalAddressResources(v17, a1, v9) )
        return (unsigned int)HalpConstructScatterGatherListDmarThin(a1);
      else
        return v22 != 0 ? (unsigned int)v5 : 0;
    }
  }
  else if ( v4 )
  {
    guard_dispatch_icall_no_overrides(*(_QWORD *)(a1 + 32), *(_QWORD *)(a1 + 40));
  }
  return (unsigned int)v5;
}
