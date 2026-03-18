/*
 * XREFs of HalpConstructScatterGatherListDmarThin @ 0x14045EE40
 * Callers:
 *     HalGetScatterGatherListDmarThin @ 0x14045EAF0 (HalGetScatterGatherListDmarThin.c)
 *     HalpBuildScatterGatherListDmarThin @ 0x14045EC38 (HalpBuildScatterGatherListDmarThin.c)
 *     HalpConstructScatterGatherListDmarThin @ 0x14045EE40 (HalpConstructScatterGatherListDmarThin.c)
 *     HalpDmaReturnEmergencyLogicalAddressResources @ 0x14053C948 (HalpDmaReturnEmergencyLogicalAddressResources.c)
 * Callees:
 *     HalpPutScatterGatherListDmarThin @ 0x1403AD3B4 (HalpPutScatterGatherListDmarThin.c)
 *     HalpConstructScatterGatherListDmarThin @ 0x14045EE40 (HalpConstructScatterGatherListDmarThin.c)
 *     HalpDmaUseEmergencyLogicalAddressResources @ 0x14053CA24 (HalpDmaUseEmergencyLogicalAddressResources.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpConstructScatterGatherListDmarThin(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r11
  void *v5; // r14
  __int64 v6; // r10
  __int64 v7; // r13
  int v8; // edi
  __int64 *v9; // r12
  unsigned int v11; // r15d
  __int64 v12; // r8
  __int64 v13; // rsi
  unsigned int v14; // ecx
  int v15; // r9d
  unsigned int v16; // eax
  unsigned int v17; // edx
  unsigned __int64 v18; // r13
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v23; // [rsp+40h] [rbp-49h]
  __int64 v24; // [rsp+48h] [rbp-41h]
  __int128 v25; // [rsp+50h] [rbp-39h] BYREF
  unsigned __int64 v26; // [rsp+60h] [rbp-29h]
  __int64 v27; // [rsp+68h] [rbp-21h]
  __int64 v28; // [rsp+70h] [rbp-19h]
  __int64 v29; // [rsp+78h] [rbp-11h]
  __int128 v30; // [rsp+80h] [rbp-9h]
  __int64 v31; // [rsp+90h] [rbp+7h]
  char v32; // [rsp+F0h] [rbp+67h]
  unsigned int v33; // [rsp+F8h] [rbp+6Fh]
  __int64 v34; // [rsp+100h] [rbp+77h]
  __int64 v35; // [rsp+108h] [rbp+7Fh]

  v4 = *(_QWORD *)(a1 + 24);
  v34 = 0LL;
  v5 = *(void **)(a1 + 88);
  v6 = 0LL;
  v7 = *(_QWORD *)(a1 + 64);
  v8 = 0;
  v9 = *(__int64 **)(a1 + 48);
  v11 = *(_DWORD *)(a1 + 56);
  v12 = *(unsigned int *)(a1 + 60);
  v13 = *(_QWORD *)(a1 + 80);
  v31 = 0LL;
  LODWORD(v26) = 0;
  v23 = v4;
  v24 = v7;
  v35 = 0LL;
  v30 = 0LL;
  v25 = 0LL;
  v27 = *(_QWORD *)(v4 + 512);
  v32 = *(_BYTE *)(a1 + 96);
  if ( v5 )
  {
    _m_prefetchw(v5);
    if ( (_InterlockedOr((volatile signed __int32 *)v5, 4u) & 2) != 0 )
      goto LABEL_3;
  }
  *(_DWORD *)v13 = 0;
  v14 = 0;
  *(_QWORD *)(v13 + 8) = a1;
  if ( v9 )
  {
    while ( v11 )
    {
      v15 = *((_DWORD *)v9 + 11);
      v16 = *((_DWORD *)v9 + 10) - v12;
      v29 = 3LL * v14;
      v17 = v11;
      if ( v16 <= v11 )
        v17 = v16;
      a4 = (unsigned int)(v12 + v15);
      v11 -= v17;
      v33 = v17;
      if ( v17 )
      {
        v18 = ((a4 & 0xFFF) + (unsigned __int64)v17 + 4095) >> 12;
        v28 = a4 & 0xFFF;
        LODWORD(v25) = 2;
        v26 = v18;
        *((_QWORD *)&v25 + 1) = &v9[((unsigned __int64)(unsigned int)a4 >> 12) + 6];
        if ( *(_BYTE *)(a1 + 98) )
        {
          v8 = guard_dispatch_icall_no_overrides(*(_QWORD *)(v4 + 560), v6, 3LL, &v25);
          if ( v8 < 0 )
            goto LABEL_26;
          v4 = v23;
          v19 = v35 + **(_QWORD **)(v23 + 560);
          v6 = v18 + v35;
          v34 = v19;
          v35 += v18;
        }
        else
        {
          v8 = guard_dispatch_icall_no_overrides(*(_QWORD *)(v27 + 40), 3LL, &v25, 0LL);
          if ( v8 < 0 )
            goto LABEL_26;
          v19 = v34;
          v6 = v35;
          v4 = v23;
        }
        v20 = v29;
        v21 = v28 + v19;
        *(_QWORD *)(v13 + 8 * v29 + 32) = 0LL;
        *(_QWORD *)(v13 + 8 * v20 + 16) = v21;
        *(_DWORD *)(v13 + 8 * v20 + 24) = v33;
        v14 = ++*(_DWORD *)v13;
      }
      v9 = (__int64 *)*v9;
      v12 = 0LL;
      if ( !v9 )
      {
        v7 = v24;
        goto LABEL_17;
      }
    }
    v7 = v24;
  }
  else
  {
LABEL_17:
    if ( v11 && v14 )
      *(_DWORD *)(v13 + 24 * (v14 - 1 + 1LL)) += v11;
  }
  if ( v5 && (_m_prefetchw(v5), (_InterlockedOr((volatile signed __int32 *)v5, 1u) & 2) != 0) )
  {
LABEL_3:
    v8 = -1073741536;
LABEL_26:
    if ( *(_DWORD *)v13 )
      HalpPutScatterGatherListDmarThin(*(_QWORD *)(a1 + 24), (_DWORD *)v13, v12, a4);
    if ( v8 != -1073741536 && !*(_BYTE *)(a1 + 98) )
    {
      *(_BYTE *)(a1 + 98) = 1;
      LOBYTE(v12) = v32 == 0;
      if ( (unsigned __int8)HalpDmaUseEmergencyLogicalAddressResources(v23, a1, v12) )
        return (unsigned int)HalpConstructScatterGatherListDmarThin(a1);
      else
        return v32 != 0 ? (unsigned int)v8 : 0;
    }
  }
  else if ( v7 )
  {
    guard_dispatch_icall_no_overrides(*(_QWORD *)(a1 + 32), *(_QWORD *)(a1 + 40), v13, *(_QWORD *)(a1 + 72));
  }
  return (unsigned int)v8;
}
