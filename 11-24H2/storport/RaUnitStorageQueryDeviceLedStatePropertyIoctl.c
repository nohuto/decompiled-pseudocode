/*
 * XREFs of RaUnitStorageQueryDeviceLedStatePropertyIoctl @ 0x14009B8D0
 * Callers:
 *     RaUnitStorageQueryPropertyIoctl @ 0x1401BEAB0 (RaUnitStorageQueryPropertyIoctl.c)
 * Callees:
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x140052DF0 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140052EC8 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x1400569AC (McTemplateK0pqd_EtwWriteTransfer.c)
 *     RaidQueryLedState @ 0x14008D944 (RaidQueryLedState.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 *     memset_0 @ 0x140143A80 (memset_0.c)
 */

__int64 __fastcall RaUnitStorageQueryDeviceLedStatePropertyIoctl(__int64 a1, __int64 a2)
{
  int v2; // ebx
  _DWORD *v4; // r14
  unsigned int v6; // esi
  size_t v7; // rbp
  int v8; // ecx
  __int64 v9; // rcx
  int LedState; // eax
  bool v11; // zf
  unsigned __int64 v12; // rcx
  __int64 v13; // rdx
  int *v14; // rax
  const EVENT_DESCRIPTOR *v15; // rdx
  __int64 v16; // rdx
  char v17; // r15
  _BYTE *v18; // r9
  unsigned __int8 v19; // r10
  char v20; // r11
  char v21; // bp
  char v22; // r12
  char *v23; // r14
  unsigned int *v24; // r13
  __int64 v25; // rax
  unsigned __int64 v26; // rbp
  char v27; // cl
  char v28; // r8
  _BYTE *v29; // rax
  unsigned int v30; // eax
  unsigned __int64 v31; // r8
  char v32; // al
  char v34; // [rsp+60h] [rbp-68h]
  char v35; // [rsp+61h] [rbp-67h]
  int v36; // [rsp+64h] [rbp-64h]
  unsigned int v37; // [rsp+68h] [rbp-60h]
  GUID v38; // [rsp+70h] [rbp-58h] BYREF

  v2 = 0;
  v4 = *(_DWORD **)(a2 + 24);
  v6 = 0;
  v7 = *(unsigned int *)(*(_QWORD *)(a2 + 184) + 8LL);
  if ( *(_DWORD *)(a1 + 3432) != 17 )
    goto LABEL_2;
  v8 = v4[1];
  if ( v8 )
  {
    if ( v8 != 1 )
    {
LABEL_2:
      v6 = -1073741637;
LABEL_13:
      *(_QWORD *)(a2 + 56) = 0LL;
    }
  }
  else if ( (unsigned int)v7 >= 0x10 )
  {
    v9 = *(_QWORD *)(a1 + 24);
    if ( *(char *)(v9 + 109) < 0
      || (LedState = RaidQueryLedState(*(_QWORD *)(v9 + 8), (unsigned int *)(v9 + 5776)), v6 = LedState, LedState >= 0) )
    {
      memset_0(v4, 0, v7);
      *v4 = 16;
      v4[1] = 16;
      *((_QWORD *)v4 + 1) = *(unsigned int *)(*(_QWORD *)(a1 + 24) + 5776LL);
      *(_QWORD *)(a2 + 56) = 16LL;
      goto LABEL_15;
    }
    if ( LedState != -2147483643 )
      goto LABEL_13;
  }
  else
  {
    if ( (unsigned int)v7 < 8 )
    {
      v6 = -1073741789;
      goto LABEL_13;
    }
    *v4 = 16;
    v4[1] = 16;
    *(_QWORD *)(a2 + 56) = 8LL;
  }
LABEL_15:
  v11 = StorEtwLoggingEnabled == 0;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = v6;
  if ( v11 )
    goto LABEL_82;
  v38 = 0LL;
  IoGetActivityIdIrp(a2, &v38);
  v13 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)v13 == 14 )
  {
    if ( (byte_140171462 & 8) == 0 )
      goto LABEL_82;
    v15 = (const EVENT_DESCRIPTOR *)&EventNonReadWriteRequestComplete;
    goto LABEL_81;
  }
  if ( *(_BYTE *)v13 != 15 )
  {
    if ( *(_BYTE *)v13 != 27 )
      goto LABEL_82;
    if ( *(_BYTE *)(v13 + 1) == 7 && !*(_DWORD *)(v13 + 8) )
    {
      if ( (byte_140171462 & 0x40) != 0 )
      {
        v14 = *(int **)(a2 + 56);
        if ( v14 )
          v2 = *v14;
        McTemplateK0pqd_EtwWriteTransfer(v12, v13, &v38, a2, v2, *(_DWORD *)(a2 + 48));
      }
      goto LABEL_82;
    }
    if ( (byte_140171462 & 0x20) == 0 )
      goto LABEL_82;
    v15 = &EventPnpRequestComplete;
LABEL_81:
    McTemplateK0pd_EtwWriteTransfer(v12, v15, &v38, a2, *(_DWORD *)(a2 + 48));
    goto LABEL_82;
  }
  if ( byte_140171461 >= 0 )
    goto LABEL_82;
  v16 = *(_QWORD *)(v13 + 8);
  v17 = 0;
  v18 = 0LL;
  v34 = 0;
  v19 = 0;
  v20 = 0;
  v21 = 0;
  v22 = 0;
  if ( *(_BYTE *)(v16 + 2) != 40 )
  {
    v27 = *(_BYTE *)(v16 + 72);
    v18 = *(_BYTE **)(v16 + 32);
    v19 = *(_BYTE *)(v16 + 11);
    v17 = *(_BYTE *)(v16 + 4);
    if ( !*(_BYTE *)(v16 + 2) )
      goto LABEL_58;
    goto LABEL_82;
  }
  v23 = 0LL;
  v35 = 0;
  if ( *(_DWORD *)(v16 + 20) )
    goto LABEL_82;
  v12 = 0LL;
  v36 = 0;
  v37 = *(_DWORD *)(v16 + 56);
  if ( !v37 )
    goto LABEL_55;
  v24 = (unsigned int *)(v16 + 120);
  while ( 1 )
  {
    v25 = *v24;
    if ( (unsigned int)v25 >= 0x80 )
    {
      v26 = *(unsigned int *)(v16 + 16);
      if ( (unsigned int)v25 < (unsigned int)v26 )
        break;
    }
LABEL_48:
    v12 = (unsigned int)(v12 + 1);
    ++v24;
    v36 = v12;
    if ( (unsigned int)v12 >= v37 )
      goto LABEL_54;
  }
  if ( *(_DWORD *)(v25 + v16) != 64 )
  {
    v12 = (unsigned int)(*(_DWORD *)(v25 + v16) - 65);
    if ( *(_DWORD *)(v25 + v16) == 65 )
    {
      v12 = v25 + 56;
      if ( v25 + 56 <= v26 )
      {
        v35 = 1;
        if ( *(_BYTE *)(v25 + v16 + 10) )
          v23 = (char *)(v25 + v16 + 24);
        v17 = *(_BYTE *)(v25 + v16 + 8);
        v18 = *(_BYTE **)(v25 + v16 + 16);
        v19 = *(_BYTE *)(v25 + v16 + 9);
      }
    }
    else if ( *(_DWORD *)(v25 + v16) == 66 )
    {
      v12 = v25 + 40;
      if ( v25 + 40 <= v26 )
      {
        if ( *(_DWORD *)(v25 + v16 + 12) )
          v23 = (char *)(v25 + v16 + 32);
        v18 = *(_BYTE **)(v25 + v16 + 24);
        goto LABEL_53;
      }
    }
    goto LABEL_46;
  }
  v12 = v25 + 40;
  if ( v25 + 40 > v26 )
  {
LABEL_46:
    if ( v35 )
      goto LABEL_54;
    LODWORD(v12) = v36;
    goto LABEL_48;
  }
  if ( *(_BYTE *)(v25 + v16 + 10) )
    v23 = (char *)(v25 + v16 + 24);
  v18 = *(_BYTE **)(v25 + v16 + 16);
LABEL_53:
  v19 = *(_BYTE *)(v25 + v16 + 9);
  v17 = *(_BYTE *)(v25 + v16 + 8);
LABEL_54:
  v21 = 0;
LABEL_55:
  if ( v23 )
  {
    v27 = *v23;
LABEL_58:
    LOBYTE(v12) = v27 - 8;
    if ( (v12 & 0x5D) == 0 )
    {
      if ( *(_BYTE *)(v16 + 3) == 1 || !v18 || !v19 )
        goto LABEL_77;
      v28 = 0;
      v12 = (unsigned __int64)&v18[v19];
      v29 = v18 + 8;
      if ( (unsigned __int8)((*v18 & 0x7F) - 114) <= 1u )
      {
        if ( (unsigned __int64)v29 <= v12 )
        {
          v28 = 1;
          v21 = v18[2];
          v20 = v18[1] & 0xF;
          v22 = v18[3];
        }
      }
      else
      {
        if ( (unsigned __int64)v29 <= v12 )
        {
          v20 = v18[2] & 0xF;
          v30 = v19;
          if ( (unsigned int)(unsigned __int8)v18[7] + 8 <= v19 )
            v30 = (unsigned __int8)v18[7] + 8;
          v12 = (unsigned __int64)(v18 + 13);
          v31 = (unsigned __int64)&v18[v30];
          if ( (unsigned __int64)(v18 + 13) > v31 )
            v34 = 0;
          else
            v34 = v18[12];
          if ( (unsigned __int64)(v18 + 14) <= v31 )
            v22 = *(_BYTE *)v12;
          v28 = 1;
        }
        v21 = v34;
      }
      if ( v28 )
      {
        LOBYTE(v2) = v21;
        v32 = v22;
      }
      else
      {
LABEL_77:
        v20 = 0;
        v32 = 0;
      }
      McTemplateK0pduuuuup_EtwWriteTransfer(
        v12,
        v16,
        &v38,
        a2,
        *(_DWORD *)(a2 + 48),
        *(_BYTE *)(v16 + 3),
        v17,
        v20,
        v2,
        v32,
        a2);
    }
  }
LABEL_82:
  IofCompleteRequest((PIRP)a2, 0);
  return v6;
}
