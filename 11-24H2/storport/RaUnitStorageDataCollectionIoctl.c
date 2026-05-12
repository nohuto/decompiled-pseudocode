/*
 * XREFs of RaUnitStorageDataCollectionIoctl @ 0x140187D70
 * Callers:
 *     RaUnitDeviceControlIrp @ 0x14002C620 (RaUnitDeviceControlIrp.c)
 * Callees:
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x140052DF0 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140052EC8 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x1400569AC (McTemplateK0pqd_EtwWriteTransfer.c)
 *     StorpTelemetrySendUnitIoSizeDistributionData @ 0x1400BB4B0 (StorpTelemetrySendUnitIoSizeDistributionData.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 *     StorpInitializePerUnitIoSizeDistribution @ 0x14018C604 (StorpInitializePerUnitIoSizeDistribution.c)
 */

__int64 __fastcall RaUnitStorageDataCollectionIoctl(__int64 a1, __int64 a2)
{
  int v3; // ebx
  _DWORD *v4; // rdx
  unsigned int v5; // esi
  __int64 *v6; // rdi
  unsigned int v7; // r8d
  int v8; // r9d
  unsigned int v9; // eax
  int v10; // r8d
  char v11; // al
  bool v12; // zf
  unsigned __int64 v13; // rcx
  __int64 v14; // rdx
  int *v15; // rax
  const EVENT_DESCRIPTOR *v16; // rdx
  __int64 v17; // rdx
  char v18; // r15
  _BYTE *v19; // r9
  unsigned __int8 v20; // r10
  char v21; // di
  char v22; // r11
  char v23; // r12
  char *v24; // r11
  unsigned int *v25; // r13
  __int64 v26; // rax
  unsigned __int64 v27; // r14
  char v28; // cl
  char v29; // r8
  _BYTE *v30; // rax
  unsigned int v31; // eax
  unsigned __int64 v32; // r8
  char v33; // al
  char v35; // [rsp+60h] [rbp-68h]
  char v36; // [rsp+61h] [rbp-67h]
  int v37; // [rsp+64h] [rbp-64h]
  unsigned int v38; // [rsp+68h] [rbp-60h]
  GUID v39; // [rsp+70h] [rbp-58h] BYREF

  v3 = 0;
  v4 = *(_DWORD **)(a2 + 24);
  v5 = 0;
  v6 = (__int64 *)(a2 + 184);
  if ( !v4 )
    goto LABEL_20;
  v7 = *(_DWORD *)(*v6 + 16);
  if ( v7 < 0x14 || *v4 != 20 )
    goto LABEL_20;
  v8 = v4[3];
  v9 = v8 + 16;
  if ( (unsigned int)(v8 + 16) < 0x14 )
    v9 = 20;
  if ( v4[1] == v9 && v7 >= v9 && (v10 = v4[2], (unsigned int)(v10 - 1) <= 2) && !v8 )
  {
    if ( g_StorpTraceLoggingIoSizeDistributionEnabled )
    {
      v5 = -1073741637;
    }
    else
    {
      switch ( v10 )
      {
        case 1:
          if ( (*(_BYTE *)(a1 + 507) & 0x10) == 0 )
            v5 = StorpInitializePerUnitIoSizeDistribution();
          break;
        case 2:
          v11 = *(_BYTE *)(a1 + 507);
          if ( (v11 & 0x10) != 0 )
            *(_BYTE *)(a1 + 507) = v11 & 0xEF;
          break;
        case 3:
          StorpTelemetrySendUnitIoSizeDistributionData(a1);
          break;
      }
    }
  }
  else
  {
LABEL_20:
    v5 = -1073741811;
  }
  v12 = StorEtwLoggingEnabled == 0;
  *(_QWORD *)(a2 + 56) = 0LL;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = v5;
  if ( v12 )
    goto LABEL_87;
  v39 = 0LL;
  IoGetActivityIdIrp(a2, &v39);
  v14 = *v6;
  if ( *(_BYTE *)*v6 == 14 )
  {
    if ( (byte_140171462 & 8) == 0 )
      goto LABEL_87;
    v16 = &EventNonReadWriteRequestComplete;
    goto LABEL_86;
  }
  if ( *(_BYTE *)*v6 != 15 )
  {
    if ( *(_BYTE *)*v6 != 27 )
      goto LABEL_87;
    if ( *(_BYTE *)(v14 + 1) == 7 && !*(_DWORD *)(v14 + 8) )
    {
      if ( (byte_140171462 & 0x40) != 0 )
      {
        v15 = *(int **)(a2 + 56);
        if ( v15 )
          v3 = *v15;
        McTemplateK0pqd_EtwWriteTransfer(v13, v14, &v39, a2, v3, *(_DWORD *)(a2 + 48));
      }
      goto LABEL_87;
    }
    if ( (byte_140171462 & 0x20) == 0 )
      goto LABEL_87;
    v16 = &EventPnpRequestComplete;
LABEL_86:
    McTemplateK0pd_EtwWriteTransfer(v13, v16, &v39, a2, *(_DWORD *)(a2 + 48));
    goto LABEL_87;
  }
  if ( byte_140171461 >= 0 )
    goto LABEL_87;
  v17 = *(_QWORD *)(v14 + 8);
  v18 = 0;
  v19 = 0LL;
  v35 = 0;
  v20 = 0;
  v21 = 0;
  v22 = 0;
  v23 = 0;
  if ( *(_BYTE *)(v17 + 2) != 40 )
  {
    v28 = *(_BYTE *)(v17 + 72);
    v19 = *(_BYTE **)(v17 + 32);
    v20 = *(_BYTE *)(v17 + 11);
    v18 = *(_BYTE *)(v17 + 4);
    if ( !*(_BYTE *)(v17 + 2) )
      goto LABEL_63;
    goto LABEL_87;
  }
  v24 = 0LL;
  v36 = 0;
  if ( *(_DWORD *)(v17 + 20) )
    goto LABEL_87;
  v13 = 0LL;
  v37 = 0;
  v38 = *(_DWORD *)(v17 + 56);
  if ( !v38 )
    goto LABEL_60;
  v25 = (unsigned int *)(v17 + 120);
  while ( 1 )
  {
    v26 = *v25;
    if ( (unsigned int)v26 >= 0x80 )
    {
      v27 = *(unsigned int *)(v17 + 16);
      if ( (unsigned int)v26 < (unsigned int)v27 )
        break;
    }
LABEL_54:
    v13 = (unsigned int)(v13 + 1);
    ++v25;
    v37 = v13;
    if ( (unsigned int)v13 >= v38 )
      goto LABEL_60;
  }
  if ( *(_DWORD *)(v26 + v17) != 64 )
  {
    v13 = (unsigned int)(*(_DWORD *)(v26 + v17) - 65);
    if ( *(_DWORD *)(v26 + v17) == 65 )
    {
      v13 = v26 + 56;
      if ( v26 + 56 <= v27 )
      {
        v36 = 1;
        if ( *(_BYTE *)(v26 + v17 + 10) )
          v24 = (char *)(v26 + v17 + 24);
        v18 = *(_BYTE *)(v26 + v17 + 8);
        v19 = *(_BYTE **)(v26 + v17 + 16);
        v20 = *(_BYTE *)(v26 + v17 + 9);
      }
    }
    else if ( *(_DWORD *)(v26 + v17) == 66 )
    {
      v13 = v26 + 40;
      if ( v26 + 40 <= v27 )
      {
        if ( *(_DWORD *)(v26 + v17 + 12) )
          v24 = (char *)(v26 + v17 + 32);
        v19 = *(_BYTE **)(v26 + v17 + 24);
        goto LABEL_59;
      }
    }
    goto LABEL_52;
  }
  v13 = v26 + 40;
  if ( v26 + 40 > v27 )
  {
LABEL_52:
    if ( v36 )
      goto LABEL_60;
    LODWORD(v13) = v37;
    goto LABEL_54;
  }
  if ( *(_BYTE *)(v26 + v17 + 10) )
    v24 = (char *)(v26 + v17 + 24);
  v19 = *(_BYTE **)(v26 + v17 + 16);
LABEL_59:
  v20 = *(_BYTE *)(v26 + v17 + 9);
  v18 = *(_BYTE *)(v26 + v17 + 8);
LABEL_60:
  if ( v24 )
  {
    v28 = *v24;
    v22 = 0;
LABEL_63:
    LOBYTE(v13) = v28 - 8;
    if ( (v13 & 0x5D) == 0 )
    {
      if ( *(_BYTE *)(v17 + 3) == 1 || !v19 || !v20 )
        goto LABEL_82;
      v29 = 0;
      v13 = (unsigned __int64)&v19[v20];
      v30 = v19 + 8;
      if ( (unsigned __int8)((*v19 & 0x7F) - 114) <= 1u )
      {
        if ( (unsigned __int64)v30 <= v13 )
        {
          v29 = 1;
          v22 = v19[2];
          v21 = v19[1] & 0xF;
          v23 = v19[3];
        }
      }
      else
      {
        if ( (unsigned __int64)v30 <= v13 )
        {
          v21 = v19[2] & 0xF;
          v31 = v20;
          if ( (unsigned int)(unsigned __int8)v19[7] + 8 <= v20 )
            v31 = (unsigned __int8)v19[7] + 8;
          v13 = (unsigned __int64)(v19 + 13);
          v32 = (unsigned __int64)&v19[v31];
          if ( (unsigned __int64)(v19 + 13) > v32 )
            v35 = 0;
          else
            v35 = v19[12];
          if ( (unsigned __int64)(v19 + 14) <= v32 )
            v23 = *(_BYTE *)v13;
          v29 = 1;
        }
        v22 = v35;
      }
      if ( v29 )
      {
        LOBYTE(v3) = v22;
        v33 = v23;
      }
      else
      {
LABEL_82:
        v21 = 0;
        v33 = 0;
      }
      McTemplateK0pduuuuup_EtwWriteTransfer(
        v13,
        v17,
        &v39,
        a2,
        *(_DWORD *)(a2 + 48),
        *(_BYTE *)(v17 + 3),
        v18,
        v21,
        v3,
        v33,
        a2);
    }
  }
LABEL_87:
  IofCompleteRequest((PIRP)a2, 0);
  return v5;
}
