/*
 * XREFs of RaidCancelIrp @ 0x14008B3DC
 * Callers:
 *     RaidUnitCancelPendingRequests @ 0x14009E028 (RaidUnitCancelPendingRequests.c)
 * Callees:
 *     RaidSrbStatusToNtStatus @ 0x14001EF94 (RaidSrbStatusToNtStatus.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x140052DF0 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140052EC8 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x1400569AC (McTemplateK0pqd_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 */

void __fastcall RaidCancelIrp(__int64 a1, char a2, __int64 a3)
{
  __int64 v4; // rsi
  __int64 v5; // r8
  int v6; // ebx
  unsigned __int64 v7; // r9
  signed __int32 v8; // eax
  signed __int32 v9; // ett
  _QWORD *v10; // rcx
  bool v11; // zf
  unsigned __int64 v12; // rcx
  __int64 v13; // rdx
  int *v14; // rax
  const EVENT_DESCRIPTOR *v15; // rdx
  unsigned __int64 v16; // rdx
  char v17; // r14
  _BYTE *v18; // r9
  unsigned __int8 v19; // r10
  char v20; // r11
  char v21; // r13
  char v22; // r12
  char *v23; // rsi
  unsigned int v24; // r15d
  unsigned __int64 v25; // rbp
  __int64 v26; // r8
  int v27; // ecx
  char v28; // cl
  char v29; // r8
  _BYTE *v30; // rax
  unsigned int v31; // eax
  char v32; // al
  char v33; // [rsp+60h] [rbp-58h]
  unsigned int v34; // [rsp+64h] [rbp-54h]
  GUID v35; // [rsp+68h] [rbp-50h] BYREF

  v4 = *(_QWORD *)(*(_QWORD *)(a3 + 184) + 8LL);
  *(_BYTE *)(v4 + 3) = a2;
  *(_DWORD *)(a3 + 48) = RaidSrbStatusToNtStatus(a2);
  v6 = 0;
  *(_QWORD *)(a3 + 56) = 0LL;
  v7 = (unsigned __int64)HIDWORD(KeGetPcr()[1].LockArray) << 6;
  v8 = *(_DWORD *)(v7 + *(_QWORD *)(v5 + 40));
  while ( (v8 & 1) == 0 )
  {
    v9 = v8;
    v8 = _InterlockedCompareExchange((volatile signed __int32 *)(v7 + *(_QWORD *)(v5 + 40)), v8 - 2, v8);
    if ( v9 == v8 )
      goto LABEL_6;
  }
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v5 + 1032), 0xFFFFFFFF) == 1 )
    KeSetEvent((PRKEVENT)(v5 + 520), 0, 0);
LABEL_6:
  if ( (*(_BYTE *)(a3 + 142) & 0x20) != 0 )
  {
    if ( *(_BYTE *)(v4 + 2) == 40 )
    {
      v10 = *(_QWORD **)(v4 + 96);
      *(_QWORD *)(v4 + 96) = v10[2];
    }
    else
    {
      v10 = *(_QWORD **)(v4 + 48);
      *(_QWORD *)(v4 + 48) = v10[2];
      *(_QWORD *)(v4 + 56) = 0LL;
      *(_QWORD *)(v4 + 40) = 0LL;
    }
    ExFreePoolWithTag(v10, 0x54436152u);
  }
  v11 = StorEtwLoggingEnabled == 0;
  *(_BYTE *)(a3 + 141) = -84;
  if ( v11 )
    goto LABEL_73;
  v35 = 0LL;
  IoGetActivityIdIrp(a3, &v35);
  v13 = *(_QWORD *)(a3 + 184);
  if ( *(_BYTE *)v13 == 14 )
  {
    if ( (byte_140171462 & 8) == 0 )
      goto LABEL_73;
    v15 = (const EVENT_DESCRIPTOR *)&EventNonReadWriteRequestComplete;
    goto LABEL_72;
  }
  if ( *(_BYTE *)v13 != 15 )
  {
    if ( *(_BYTE *)v13 != 27 )
      goto LABEL_73;
    if ( *(_BYTE *)(v13 + 1) == 7 && !*(_DWORD *)(v13 + 8) )
    {
      if ( (byte_140171462 & 0x40) != 0 )
      {
        v14 = *(int **)(a3 + 56);
        if ( v14 )
          v6 = *v14;
        McTemplateK0pqd_EtwWriteTransfer(v12, v13, &v35, a3, v6, *(_DWORD *)(a3 + 48));
      }
      goto LABEL_73;
    }
    if ( (byte_140171462 & 0x20) == 0 )
      goto LABEL_73;
    v15 = &EventPnpRequestComplete;
LABEL_72:
    McTemplateK0pd_EtwWriteTransfer(v12, v15, &v35, a3, *(_DWORD *)(a3 + 48));
    goto LABEL_73;
  }
  if ( byte_140171461 >= 0 )
    goto LABEL_73;
  v16 = *(_QWORD *)(v13 + 8);
  v17 = 0;
  v18 = 0LL;
  v19 = 0;
  v20 = 0;
  v21 = 0;
  v22 = 0;
  if ( *(_BYTE *)(v16 + 2) != 40 )
  {
    v28 = *(_BYTE *)(v16 + 72);
    v18 = *(_BYTE **)(v16 + 32);
    v19 = *(_BYTE *)(v16 + 11);
    v17 = *(_BYTE *)(v16 + 4);
    if ( *(_BYTE *)(v16 + 2) )
      goto LABEL_73;
LABEL_51:
    LOBYTE(v12) = v28 - 8;
    if ( (v12 & 0x5D) != 0 )
      goto LABEL_73;
    v29 = *(_BYTE *)(v16 + 3);
    if ( v29 == 1 || !v18 || !v19 )
      goto LABEL_68;
    LOBYTE(v16) = 0;
    v12 = (unsigned __int64)&v18[v19];
    v30 = v18 + 8;
    if ( (unsigned __int8)((*v18 & 0x7F) - 114) <= 1u )
    {
      if ( (unsigned __int64)v30 > v12 )
        goto LABEL_66;
      v21 = v18[2];
      v20 = v18[1] & 0xF;
      v22 = v18[3];
    }
    else
    {
      if ( (unsigned __int64)v30 > v12 )
        goto LABEL_66;
      v20 = v18[2] & 0xF;
      v31 = v19;
      if ( (unsigned int)(unsigned __int8)v18[7] + 8 <= v19 )
        v31 = (unsigned __int8)v18[7] + 8;
      v12 = (unsigned __int64)(v18 + 13);
      v16 = (unsigned __int64)&v18[v31];
      if ( (unsigned __int64)(v18 + 13) <= v16 )
        v21 = v18[12];
      if ( (unsigned __int64)(v18 + 14) <= v16 )
        v22 = *(_BYTE *)v12;
    }
    LOBYTE(v16) = 1;
LABEL_66:
    if ( (_BYTE)v16 )
    {
      LOBYTE(v6) = v21;
      v32 = v22;
LABEL_69:
      McTemplateK0pduuuuup_EtwWriteTransfer(v12, v16, &v35, a3, *(_DWORD *)(a3 + 48), v29, v17, v20, v6, v32, a3);
      goto LABEL_73;
    }
LABEL_68:
    v20 = 0;
    v32 = 0;
    goto LABEL_69;
  }
  v23 = 0LL;
  v33 = 0;
  if ( *(_DWORD *)(v16 + 20) )
    goto LABEL_73;
  v24 = 0;
  v34 = *(_DWORD *)(v16 + 56);
  if ( !v34 )
    goto LABEL_48;
  while ( 1 )
  {
    v12 = *(unsigned int *)(v16 + 4LL * v24 + 120);
    if ( (unsigned int)v12 >= 0x80 )
    {
      v25 = *(unsigned int *)(v16 + 16);
      if ( (unsigned int)v12 < (unsigned int)v25 )
        break;
    }
LABEL_42:
    if ( ++v24 >= v34 )
      goto LABEL_48;
  }
  v26 = (unsigned int)v12;
  v27 = *(_DWORD *)(v12 + v16) - 64;
  if ( v27 )
  {
    v12 = (unsigned int)(v27 - 1);
    if ( (_DWORD)v12 )
    {
      if ( (_DWORD)v12 == 1 )
      {
        v12 = v26 + 40;
        if ( v26 + 40 <= v25 )
        {
          if ( *(_DWORD *)(v26 + v16 + 12) )
            v23 = (char *)(v26 + v16 + 32);
          v18 = *(_BYTE **)(v26 + v16 + 24);
          goto LABEL_47;
        }
      }
    }
    else
    {
      v12 = v26 + 56;
      if ( v26 + 56 <= v25 )
      {
        v33 = 1;
        if ( *(_BYTE *)(v26 + v16 + 10) )
          v23 = (char *)(v26 + v16 + 24);
        v17 = *(_BYTE *)(v26 + v16 + 8);
        v18 = *(_BYTE **)(v26 + v16 + 16);
        v19 = *(_BYTE *)(v26 + v16 + 9);
      }
    }
    goto LABEL_41;
  }
  v12 = v26 + 40;
  if ( v26 + 40 > v25 )
  {
LABEL_41:
    if ( v33 )
      goto LABEL_48;
    goto LABEL_42;
  }
  if ( *(_BYTE *)(v26 + v16 + 10) )
    v23 = (char *)(v26 + v16 + 24);
  v18 = *(_BYTE **)(v26 + v16 + 16);
LABEL_47:
  v19 = *(_BYTE *)(v26 + v16 + 9);
  v17 = *(_BYTE *)(v26 + v16 + 8);
LABEL_48:
  if ( v23 )
  {
    v28 = *v23;
    goto LABEL_51;
  }
LABEL_73:
  IofCompleteRequest((PIRP)a3, 0);
}
