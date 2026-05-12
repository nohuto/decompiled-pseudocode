/*
 * XREFs of RaidAdapterPassThrough @ 0x1401B53BC
 * Callers:
 *     RaidAdapterDeviceControlIrp @ 0x14002B3B0 (RaidAdapterDeviceControlIrp.c)
 * Callees:
 *     RaidAdapterFindUnit @ 0x14001BA70 (RaidAdapterFindUnit.c)
 *     RaidRecordPassthroughData @ 0x140036D58 (RaidRecordPassthroughData.c)
 *     PortPassThroughExBasicValidation @ 0x140042A00 (PortPassThroughExBasicValidation.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x140052DF0 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140052EC8 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x1400569AC (McTemplateK0pqd_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 *     PortPassThroughExSendAsync @ 0x1401B5774 (PortPassThroughExSendAsync.c)
 */

__int64 __fastcall RaidAdapterPassThrough(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  int v3; // ebx
  char v6; // si
  unsigned int v7; // esi
  bool v8; // zf
  unsigned __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v12; // rdx
  char v13; // al
  unsigned __int8 *v14; // rax
  _BYTE *v15; // rdx
  unsigned __int8 v16; // si
  __int64 *Unit; // r11
  __int64 v18; // rax
  __int64 v19; // r11
  int v20; // r9d
  int v21; // r10d
  const EVENT_DESCRIPTOR *v22; // rdx
  int *v23; // rax
  char v24; // r8
  _BYTE *v25; // rax
  char v26; // bp
  unsigned int v27; // eax
  unsigned __int64 v28; // r8
  char v29; // r13
  char v30; // r12
  char v31; // al
  __int64 v32; // rcx
  __int64 v33; // rdx
  char v34; // r15
  _BYTE *v35; // r9
  unsigned __int8 v36; // r10
  char *v37; // r11
  unsigned int v38; // r8d
  unsigned int *v39; // rax
  __int64 v40; // rax
  unsigned __int64 v41; // r14
  char v42; // cl
  int v43; // [rsp+20h] [rbp-A8h]
  char v44; // [rsp+60h] [rbp-68h]
  int v45; // [rsp+64h] [rbp-64h]
  int v46; // [rsp+68h] [rbp-60h]
  __int64 v47; // [rsp+70h] [rbp-58h]
  GUID v48; // [rsp+78h] [rbp-50h] BYREF

  v2 = *(_QWORD *)(a2 + 184);
  v3 = 0;
  HIBYTE(v45) = 0;
  if ( ((*(_DWORD *)(v2 + 24) - 315460) & 0xFFFFFFFB) != 0 )
  {
    v6 = 0;
    if ( *(_DWORD *)(v2 + 16) < (IoIs32bitProcess((PIRP)a2) != 0 ? 44 : 56) )
    {
LABEL_3:
      v7 = -1073741810;
      goto LABEL_4;
    }
  }
  else
  {
    v6 = 1;
    if ( (int)PortPassThroughExBasicValidation((IRP *)a2) < 0 )
      goto LABEL_3;
  }
  v12 = *(_QWORD *)(a2 + 24);
  if ( v6 )
  {
    v32 = v12 + *(unsigned int *)(v12 + 24);
    if ( *(_WORD *)v32 != 1 || *(_DWORD *)(v32 + 4) < 4u )
      goto LABEL_3;
    LOWORD(v45) = *(_WORD *)(v32 + 8);
    v13 = *(_BYTE *)(v32 + 10);
  }
  else
  {
    LOWORD(v45) = *(_WORD *)(v12 + 3);
    v13 = *(_BYTE *)(v12 + 5);
  }
  BYTE2(v45) = v13;
  if ( ((*(_DWORD *)(*(_QWORD *)(a2 + 184) + 24LL) - 315460) & 0xFFFFFFFB) != 0 )
  {
    v14 = (unsigned __int8 *)(v12 + 36);
    v15 = (_BYTE *)(v12 + 37);
  }
  else
  {
    v14 = (unsigned __int8 *)(v12 + 56);
    v15 = (_BYTE *)(v12 + 57);
  }
  v16 = *v14;
  if ( DisableIEEE1667 && (v16 == 0xA2 || v16 == 0xB5) && *v15 == 0xEE )
  {
    v7 = -1073741637;
  }
  else
  {
    Unit = RaidAdapterFindUnit(a1, v45);
    if ( !Unit )
      goto LABEL_3;
    v18 = *(_QWORD *)(a2 + 184);
    if ( *(_BYTE *)(v18 + 1) || (Unit[63] & 1) == 0 )
    {
      *(_BYTE *)(v18 + 3) |= 1u;
      RaidRecordPassthroughData(v16);
      PortPassThroughExSendAsync(*(_QWORD *)(v19 + 8), a2, v21, v20, (__int64)StorASyncScsiPassThroughCompletion, v19);
      return 259LL;
    }
    v7 = -1073741808;
  }
LABEL_4:
  v8 = StorEtwLoggingEnabled == 0;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = v7;
  if ( v8 )
    goto LABEL_8;
  v48 = 0LL;
  IoGetActivityIdIrp(a2, &v48);
  v10 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)v10 == 14 )
  {
    if ( (byte_140171462 & 8) == 0 )
      goto LABEL_8;
    v9 = *(unsigned int *)(a2 + 48);
    v22 = &EventNonReadWriteRequestComplete;
    v43 = *(_DWORD *)(a2 + 48);
    goto LABEL_23;
  }
  if ( *(_BYTE *)v10 != 15 )
  {
    if ( *(_BYTE *)v10 != 27 )
      goto LABEL_8;
    if ( *(_BYTE *)(v10 + 1) == 7 && !*(_DWORD *)(v10 + 8) )
    {
      if ( (byte_140171462 & 0x40) != 0 )
      {
        v23 = *(int **)(a2 + 56);
        if ( v23 )
          v3 = *v23;
        McTemplateK0pqd_EtwWriteTransfer(v9, v10, &v48, a2, v3, *(_DWORD *)(a2 + 48));
      }
      goto LABEL_8;
    }
    if ( (byte_140171462 & 0x20) == 0 )
      goto LABEL_8;
    v22 = &EventPnpRequestComplete;
    v43 = *(_DWORD *)(a2 + 48);
LABEL_23:
    McTemplateK0pd_EtwWriteTransfer(v9, v22, &v48, a2, v43);
    goto LABEL_8;
  }
  if ( byte_140171461 >= 0 )
    goto LABEL_8;
  v33 = *(_QWORD *)(v10 + 8);
  v34 = 0;
  v35 = 0LL;
  v36 = 0;
  v26 = 0;
  v29 = 0;
  v30 = 0;
  if ( *(_BYTE *)(v33 + 2) == 40 )
  {
    v37 = 0LL;
    v44 = 0;
    if ( *(_DWORD *)(v33 + 20) )
      goto LABEL_8;
    v9 = 0LL;
    v46 = 0;
    if ( !*(_DWORD *)(v33 + 56) )
      goto LABEL_84;
    v38 = *(_DWORD *)(v33 + 56);
    v39 = (unsigned int *)(v33 + 120);
    v47 = v33 + 120;
    while ( 1 )
    {
      v40 = *v39;
      if ( (unsigned int)v40 >= 0x80 )
      {
        v41 = *(unsigned int *)(v33 + 16);
        if ( (unsigned int)v40 < (unsigned int)v41 )
        {
          if ( *(_DWORD *)(v40 + v33) == 64 )
          {
            v9 = v40 + 40;
            if ( v40 + 40 <= v41 )
            {
              if ( *(_BYTE *)(v40 + v33 + 10) )
                v37 = (char *)(v40 + v33 + 24);
              v35 = *(_BYTE **)(v40 + v33 + 16);
LABEL_83:
              v36 = *(_BYTE *)(v40 + v33 + 9);
              v34 = *(_BYTE *)(v40 + v33 + 8);
LABEL_84:
              if ( v37 )
              {
                v42 = *v37;
                goto LABEL_87;
              }
              goto LABEL_8;
            }
          }
          else
          {
            v9 = (unsigned int)(*(_DWORD *)(v40 + v33) - 65);
            if ( *(_DWORD *)(v40 + v33) == 65 )
            {
              v9 = v40 + 56;
              if ( v40 + 56 <= v41 )
              {
                v44 = 1;
                if ( *(_BYTE *)(v40 + v33 + 10) )
                  v37 = (char *)(v40 + v33 + 24);
                v34 = *(_BYTE *)(v40 + v33 + 8);
                v35 = *(_BYTE **)(v40 + v33 + 16);
                v36 = *(_BYTE *)(v40 + v33 + 9);
              }
            }
            else if ( *(_DWORD *)(v40 + v33) == 66 )
            {
              v9 = v40 + 40;
              if ( v40 + 40 <= v41 )
              {
                if ( *(_DWORD *)(v40 + v33 + 12) )
                  v37 = (char *)(v40 + v33 + 32);
                v35 = *(_BYTE **)(v40 + v33 + 24);
                goto LABEL_83;
              }
            }
          }
          if ( v44 )
            goto LABEL_84;
          LODWORD(v9) = v46;
          v38 = *(_DWORD *)(v33 + 56);
        }
      }
      v9 = (unsigned int)(v9 + 1);
      v39 = (unsigned int *)(v47 + 4);
      v46 = v9;
      v47 += 4LL;
      if ( (unsigned int)v9 >= v38 )
        goto LABEL_84;
    }
  }
  v42 = *(_BYTE *)(v33 + 72);
  v35 = *(_BYTE **)(v33 + 32);
  v36 = *(_BYTE *)(v33 + 11);
  v34 = *(_BYTE *)(v33 + 4);
  if ( *(_BYTE *)(v33 + 2) )
    goto LABEL_8;
LABEL_87:
  LOBYTE(v9) = v42 - 8;
  if ( (v9 & 0x5D) == 0 )
  {
    if ( *(_BYTE *)(v33 + 3) == 1 || !v35 || !v36 )
      goto LABEL_45;
    v24 = 0;
    v9 = (unsigned __int64)&v35[v36];
    v25 = v35 + 8;
    if ( (unsigned __int8)((*v35 & 0x7F) - 114) <= 1u )
    {
      if ( (unsigned __int64)v25 > v9 )
      {
LABEL_43:
        if ( v24 )
        {
          LOBYTE(v3) = v29;
          v31 = v30;
LABEL_46:
          McTemplateK0pduuuuup_EtwWriteTransfer(
            v9,
            v33,
            &v48,
            a2,
            *(_DWORD *)(a2 + 48),
            *(_BYTE *)(v33 + 3),
            v34,
            v26,
            v3,
            v31,
            a2);
          goto LABEL_8;
        }
LABEL_45:
        v26 = 0;
        v31 = 0;
        goto LABEL_46;
      }
      v29 = v35[2];
      v26 = v35[1] & 0xF;
      v30 = v35[3];
    }
    else
    {
      if ( (unsigned __int64)v25 > v9 )
        goto LABEL_43;
      v26 = v35[2] & 0xF;
      v27 = v36;
      if ( (unsigned int)(unsigned __int8)v35[7] + 8 <= v36 )
        v27 = (unsigned __int8)v35[7] + 8;
      v9 = (unsigned __int64)(v35 + 13);
      v28 = (unsigned __int64)&v35[v27];
      if ( (unsigned __int64)(v35 + 13) <= v28 )
        v29 = v35[12];
      if ( (unsigned __int64)(v35 + 14) <= v28 )
        v30 = *(_BYTE *)v9;
    }
    v24 = 1;
    goto LABEL_43;
  }
LABEL_8:
  IofCompleteRequest((PIRP)a2, 0);
  return v7;
}
