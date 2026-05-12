/*
 * XREFs of RaUnitReleaseQueueSrb @ 0x140095AA4
 * Callers:
 *     RaUnitScsiIrp @ 0x140002710 (RaUnitScsiIrp.c)
 *     RaDriverScsiIrp @ 0x1400038A0 (RaDriverScsiIrp.c)
 * Callees:
 *     RaidUnitRestartQueue @ 0x140001B70 (RaidUnitRestartQueue.c)
 *     RaUnitUnlockForwardIo @ 0x14002B180 (RaUnitUnlockForwardIo.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x140052DF0 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140052EC8 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x1400569AC (McTemplateK0pqd_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 */

__int64 __fastcall RaUnitReleaseQueueSrb(__int64 a1, __int64 a2)
{
  int v2; // edi
  bool v5; // zf
  unsigned __int64 v6; // rcx
  __int64 v7; // rdx
  int *v8; // rax
  const EVENT_DESCRIPTOR *v9; // rdx
  unsigned __int64 v10; // rdx
  char v11; // r14
  _BYTE *v12; // r9
  unsigned __int8 v13; // r10
  char v14; // bl
  char v15; // r11
  char v16; // r15
  char *v17; // r11
  unsigned int v18; // r13d
  unsigned int *v19; // r12
  __int64 v20; // rax
  unsigned __int64 v21; // rbp
  char v22; // cl
  char v23; // r8
  _BYTE *v24; // rax
  unsigned int v25; // eax
  char v26; // al
  char v28; // [rsp+60h] [rbp-58h]
  char v29; // [rsp+61h] [rbp-57h]
  unsigned int v30; // [rsp+64h] [rbp-54h]
  GUID v31; // [rsp+68h] [rbp-50h] BYREF

  v2 = 0;
  *(_BYTE *)(a1 + 756) = 0;
  RaUnitUnlockForwardIo(a1, 3);
  RaidUnitRestartQueue(a1, 0);
  v5 = StorEtwLoggingEnabled == 0;
  *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a2 + 184) + 8LL) + 3LL) = 1;
  *(_QWORD *)(a2 + 56) = 0LL;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = 0;
  if ( v5 )
    goto LABEL_66;
  v31 = 0LL;
  IoGetActivityIdIrp(a2, &v31);
  v7 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)v7 == 14 )
  {
    if ( (byte_140171462 & 8) == 0 )
      goto LABEL_66;
    v9 = (const EVENT_DESCRIPTOR *)&EventNonReadWriteRequestComplete;
    goto LABEL_65;
  }
  if ( *(_BYTE *)v7 != 15 )
  {
    if ( *(_BYTE *)v7 != 27 )
      goto LABEL_66;
    if ( *(_BYTE *)(v7 + 1) == 7 && !*(_DWORD *)(v7 + 8) )
    {
      if ( (byte_140171462 & 0x40) != 0 )
      {
        v8 = *(int **)(a2 + 56);
        if ( v8 )
          v2 = *v8;
        McTemplateK0pqd_EtwWriteTransfer(v6, v7, &v31, a2, v2, *(_DWORD *)(a2 + 48));
      }
      goto LABEL_66;
    }
    if ( (byte_140171462 & 0x20) == 0 )
      goto LABEL_66;
    v9 = &EventPnpRequestComplete;
LABEL_65:
    McTemplateK0pd_EtwWriteTransfer(v6, v9, &v31, a2, *(_DWORD *)(a2 + 48));
    goto LABEL_66;
  }
  if ( byte_140171461 >= 0 )
    goto LABEL_66;
  v10 = *(_QWORD *)(v7 + 8);
  v11 = 0;
  v12 = 0LL;
  v28 = 0;
  v13 = 0;
  v14 = 0;
  v15 = 0;
  v16 = 0;
  if ( *(_BYTE *)(v10 + 2) != 40 )
  {
    v22 = *(_BYTE *)(v10 + 72);
    v12 = *(_BYTE **)(v10 + 32);
    v13 = *(_BYTE *)(v10 + 11);
    v11 = *(_BYTE *)(v10 + 4);
    if ( !*(_BYTE *)(v10 + 2) )
      goto LABEL_42;
    goto LABEL_66;
  }
  v17 = 0LL;
  v29 = 0;
  if ( *(_DWORD *)(v10 + 20) )
    goto LABEL_66;
  v18 = 0;
  v30 = *(_DWORD *)(v10 + 56);
  if ( !v30 )
    goto LABEL_39;
  v19 = (unsigned int *)(v10 + 120);
  while ( 1 )
  {
    v20 = *v19;
    if ( (unsigned int)v20 >= 0x80 )
    {
      v21 = *(unsigned int *)(v10 + 16);
      if ( (unsigned int)v20 < (unsigned int)v21 )
        break;
    }
LABEL_33:
    ++v18;
    ++v19;
    if ( v18 >= v30 )
      goto LABEL_39;
  }
  if ( *(_DWORD *)(v20 + v10) != 64 )
  {
    v6 = (unsigned int)(*(_DWORD *)(v20 + v10) - 65);
    if ( *(_DWORD *)(v20 + v10) == 65 )
    {
      v6 = v20 + 56;
      if ( v20 + 56 <= v21 )
      {
        v29 = 1;
        if ( *(_BYTE *)(v20 + v10 + 10) )
          v17 = (char *)(v20 + v10 + 24);
        v11 = *(_BYTE *)(v20 + v10 + 8);
        v12 = *(_BYTE **)(v20 + v10 + 16);
        v13 = *(_BYTE *)(v20 + v10 + 9);
      }
    }
    else if ( *(_DWORD *)(v20 + v10) == 66 )
    {
      v6 = v20 + 40;
      if ( v20 + 40 <= v21 )
      {
        if ( *(_DWORD *)(v20 + v10 + 12) )
          v17 = (char *)(v20 + v10 + 32);
        v12 = *(_BYTE **)(v20 + v10 + 24);
        goto LABEL_38;
      }
    }
    goto LABEL_32;
  }
  v6 = v20 + 40;
  if ( v20 + 40 > v21 )
  {
LABEL_32:
    if ( v29 )
      goto LABEL_39;
    goto LABEL_33;
  }
  if ( *(_BYTE *)(v20 + v10 + 10) )
    v17 = (char *)(v20 + v10 + 24);
  v12 = *(_BYTE **)(v20 + v10 + 16);
LABEL_38:
  v13 = *(_BYTE *)(v20 + v10 + 9);
  v11 = *(_BYTE *)(v20 + v10 + 8);
LABEL_39:
  if ( v17 )
  {
    v22 = *v17;
    v15 = 0;
LABEL_42:
    LOBYTE(v6) = v22 - 8;
    if ( (v6 & 0x5D) == 0 )
    {
      v23 = *(_BYTE *)(v10 + 3);
      if ( v23 == 1 || !v12 || !v13 )
        goto LABEL_61;
      LOBYTE(v10) = 0;
      v6 = (unsigned __int64)&v12[v13];
      v24 = v12 + 8;
      if ( (unsigned __int8)((*v12 & 0x7F) - 114) <= 1u )
      {
        if ( (unsigned __int64)v24 <= v6 )
        {
          LOBYTE(v10) = 1;
          v15 = v12[2];
          v14 = v12[1] & 0xF;
          v16 = v12[3];
        }
      }
      else
      {
        if ( (unsigned __int64)v24 <= v6 )
        {
          v14 = v12[2] & 0xF;
          v25 = v13;
          if ( (unsigned int)(unsigned __int8)v12[7] + 8 <= v13 )
            v25 = (unsigned __int8)v12[7] + 8;
          v6 = (unsigned __int64)(v12 + 13);
          v10 = (unsigned __int64)&v12[v25];
          if ( (unsigned __int64)(v12 + 13) > v10 )
            v28 = 0;
          else
            v28 = v12[12];
          if ( (unsigned __int64)(v12 + 14) <= v10 )
            v16 = *(_BYTE *)v6;
          LOBYTE(v10) = 1;
        }
        v15 = v28;
      }
      if ( (_BYTE)v10 )
      {
        LOBYTE(v2) = v15;
        v26 = v16;
      }
      else
      {
LABEL_61:
        v14 = 0;
        v26 = 0;
      }
      McTemplateK0pduuuuup_EtwWriteTransfer(v6, v10, &v31, a2, *(_DWORD *)(a2 + 48), v23, v11, v14, v2, v26, a2);
    }
  }
LABEL_66:
  IofCompleteRequest((PIRP)a2, 0);
  return 0LL;
}
