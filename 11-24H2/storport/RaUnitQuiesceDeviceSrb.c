/*
 * XREFs of RaUnitQuiesceDeviceSrb @ 0x1400014CC
 * Callers:
 *     RaUnitScsiIrp @ 0x140002710 (RaUnitScsiIrp.c)
 *     RaDriverScsiIrp @ 0x1400038A0 (RaDriverScsiIrp.c)
 * Callees:
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x140052DF0 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140052EC8 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x1400569AC (McTemplateK0pqd_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 */

__int64 __fastcall RaUnitQuiesceDeviceSrb(__int64 a1, __int64 a2)
{
  __int64 v3; // rdx
  unsigned int v4; // ebx
  bool v5; // zf
  __int64 v6; // rcx
  __int64 v7; // rdx
  int *v8; // rax
  int v9; // ecx
  unsigned __int64 v10; // rdx
  char v11; // r15
  _BYTE *v12; // r9
  unsigned __int8 v13; // r10
  char v14; // si
  char v15; // r11
  unsigned __int8 v16; // r12
  char *v17; // r11
  char v18; // r13
  unsigned int v19; // r14d
  __int64 v20; // rcx
  unsigned __int64 v21; // rbp
  __int64 v22; // r8
  int v23; // ecx
  int v24; // ecx
  char v25; // cl
  char v26; // r8
  _BYTE *v27; // rcx
  _BYTE *v28; // rax
  unsigned int v29; // eax
  char v30; // al
  int v31; // ecx
  char v33; // [rsp+60h] [rbp-58h]
  unsigned int v34; // [rsp+64h] [rbp-54h]
  __int128 v35; // [rsp+68h] [rbp-50h] BYREF

  v3 = *(_QWORD *)(*(_QWORD *)(a2 + 184) + 8LL);
  if ( ((*(__int64 *)(a1 + 808) >> 2) & 0x3FFFFFFF) != 0 && (*(_DWORD *)(a1 + 512) & 0x40) == 0 )
  {
    *(_QWORD *)(a1 + 1984) = a2;
    *(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) |= 1u;
    IoQueueWorkItem(
      *(PIO_WORKITEM *)(a1 + 1976),
      RaidUnitQuiesceDeviceWorkRoutine,
      CriticalWorkQueue,
      (PVOID)(a1 + 1976));
    return 259;
  }
  v4 = 0;
  *(_BYTE *)(v3 + 3) = 1;
  v5 = StorEtwLoggingEnabled == 0;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = 0;
  if ( v5 )
    goto LABEL_68;
  v35 = 0LL;
  IoGetActivityIdIrp(a2, &v35);
  v7 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)v7 == 14 )
  {
    if ( (byte_140171462 & 8) != 0 )
      McTemplateK0pd_EtwWriteTransfer(v6, &EventNonReadWriteRequestComplete, &v35, a2, *(_DWORD *)(a2 + 48));
    goto LABEL_68;
  }
  if ( *(_BYTE *)v7 != 15 )
  {
    if ( *(_BYTE *)v7 == 27 )
    {
      if ( *(_BYTE *)(v7 + 1) != 7 || *(_DWORD *)(v7 + 8) )
      {
        if ( (byte_140171462 & 0x20) != 0 )
          McTemplateK0pd_EtwWriteTransfer(v6, &EventPnpRequestComplete, &v35, a2, *(_DWORD *)(a2 + 48));
      }
      else if ( (byte_140171462 & 0x40) != 0 )
      {
        v8 = *(int **)(a2 + 56);
        if ( v8 )
          v9 = *v8;
        else
          v9 = 0;
        McTemplateK0pqd_EtwWriteTransfer(v9, v7, (unsigned int)&v35, a2, v9, *(_DWORD *)(a2 + 48));
      }
    }
    goto LABEL_68;
  }
  if ( byte_140171461 >= 0 )
    goto LABEL_68;
  v10 = *(_QWORD *)(v7 + 8);
  v11 = 0;
  v12 = 0LL;
  v33 = 0;
  v13 = 0;
  v14 = 0;
  v15 = 0;
  v16 = 0;
  if ( *(_BYTE *)(v10 + 2) != 40 )
  {
    v25 = *(_BYTE *)(v10 + 72);
    v12 = *(_BYTE **)(v10 + 32);
    v13 = *(_BYTE *)(v10 + 11);
    v11 = *(_BYTE *)(v10 + 4);
    if ( !*(_BYTE *)(v10 + 2) )
      goto LABEL_45;
    goto LABEL_68;
  }
  v17 = 0LL;
  v18 = 0;
  if ( *(_DWORD *)(v10 + 20) )
    goto LABEL_68;
  v19 = 0;
  v34 = *(_DWORD *)(v10 + 56);
  if ( !v34 )
    goto LABEL_42;
  while ( 1 )
  {
    v20 = *(unsigned int *)(v10 + 4LL * v19 + 120);
    if ( (unsigned int)v20 >= 0x80 )
    {
      v21 = *(unsigned int *)(v10 + 16);
      if ( (unsigned int)v20 < (unsigned int)v21 )
        break;
    }
LABEL_36:
    if ( ++v19 >= v34 )
      goto LABEL_42;
  }
  v22 = (unsigned int)v20;
  v23 = *(_DWORD *)(v20 + v10) - 64;
  if ( v23 )
  {
    v24 = v23 - 1;
    if ( v24 )
    {
      if ( v24 == 1 && v22 + 40 <= v21 )
      {
        if ( *(_DWORD *)(v22 + v10 + 12) )
          v17 = (char *)(v22 + v10 + 32);
        v12 = *(_BYTE **)(v22 + v10 + 24);
        goto LABEL_41;
      }
    }
    else if ( v22 + 56 <= v21 )
    {
      v18 = 1;
      if ( *(_BYTE *)(v22 + v10 + 10) )
        v17 = (char *)(v22 + v10 + 24);
      v11 = *(_BYTE *)(v22 + v10 + 8);
      v12 = *(_BYTE **)(v22 + v10 + 16);
      v13 = *(_BYTE *)(v22 + v10 + 9);
    }
    goto LABEL_35;
  }
  if ( v22 + 40 > v21 )
  {
LABEL_35:
    if ( v18 )
      goto LABEL_42;
    goto LABEL_36;
  }
  if ( *(_BYTE *)(v22 + v10 + 10) )
    v17 = (char *)(v22 + v10 + 24);
  v12 = *(_BYTE **)(v22 + v10 + 16);
LABEL_41:
  v13 = *(_BYTE *)(v22 + v10 + 9);
  v11 = *(_BYTE *)(v22 + v10 + 8);
LABEL_42:
  if ( v17 )
  {
    v25 = *v17;
    v15 = 0;
LABEL_45:
    if ( ((v25 - 8) & 0x5D) == 0 )
    {
      v26 = *(_BYTE *)(v10 + 3);
      if ( v26 == 1 || !v12 || !v13 )
        goto LABEL_64;
      LOBYTE(v10) = 0;
      v27 = &v12[v13];
      v28 = v12 + 8;
      if ( (unsigned __int8)((*v12 & 0x7F) - 114) <= 1u )
      {
        if ( v28 <= v27 )
        {
          LOBYTE(v10) = 1;
          v15 = v12[2];
          v14 = v12[1] & 0xF;
          v16 = v12[3];
        }
      }
      else
      {
        if ( v28 <= v27 )
        {
          v14 = v12[2] & 0xF;
          v29 = v13;
          if ( (unsigned int)(unsigned __int8)v12[7] + 8 <= v13 )
            v29 = (unsigned __int8)v12[7] + 8;
          v10 = (unsigned __int64)&v12[v29];
          if ( (unsigned __int64)(v12 + 13) > v10 )
            v33 = 0;
          else
            v33 = v12[12];
          if ( (unsigned __int64)(v12 + 14) <= v10 )
            v16 = v12[13];
          LOBYTE(v10) = 1;
        }
        v15 = v33;
      }
      if ( (_BYTE)v10 )
      {
        v30 = v15;
        v31 = v16;
      }
      else
      {
LABEL_64:
        v14 = 0;
        v30 = 0;
        v31 = 0;
      }
      McTemplateK0pduuuuup_EtwWriteTransfer(
        v31,
        v10,
        (unsigned int)&v35,
        a2,
        *(_DWORD *)(a2 + 48),
        v26,
        v11,
        v14,
        v30,
        v31,
        a2);
    }
  }
LABEL_68:
  IofCompleteRequest((PIRP)a2, 0);
  return v4;
}
