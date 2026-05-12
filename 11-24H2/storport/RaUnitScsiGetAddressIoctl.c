/*
 * XREFs of RaUnitScsiGetAddressIoctl @ 0x1401B5DF8
 * Callers:
 *     RaUnitDeviceControlIrp @ 0x14002C620 (RaUnitDeviceControlIrp.c)
 * Callees:
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x140052DF0 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140052EC8 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x1400569AC (McTemplateK0pqd_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 */

__int64 __fastcall RaUnitScsiGetAddressIoctl(__int64 a1, __int64 a2)
{
  int v3; // ebx
  __int64 v4; // rdx
  unsigned int v5; // ebp
  bool v6; // zf
  unsigned __int64 v7; // rcx
  __int64 v8; // rdx
  const EVENT_DESCRIPTOR *v10; // rdx
  int *v11; // rax
  unsigned __int64 v12; // rdx
  char v13; // r14
  _BYTE *v14; // r9
  unsigned __int8 v15; // r10
  char v16; // si
  char v17; // r11
  char v18; // r15
  char *v19; // r11
  unsigned int v20; // r13d
  unsigned int *v21; // r12
  __int64 v22; // rax
  unsigned __int64 v23; // rbp
  char v24; // cl
  char v25; // r8
  _BYTE *v26; // rax
  unsigned int v27; // eax
  char v28; // al
  int v29; // [rsp+20h] [rbp-98h]
  char v30; // [rsp+60h] [rbp-58h]
  char v31; // [rsp+61h] [rbp-57h]
  unsigned int v32; // [rsp+64h] [rbp-54h]
  unsigned int v33; // [rsp+68h] [rbp-50h]
  GUID v34; // [rsp+70h] [rbp-48h] BYREF

  v3 = 0;
  v4 = *(_QWORD *)(a2 + 24);
  if ( *(_DWORD *)(*(_QWORD *)(a2 + 184) + 8LL) < 8u )
  {
    v5 = -1073741789;
  }
  else
  {
    *(_DWORD *)v4 = 8;
    v5 = 0;
    *(_BYTE *)(v4 + 4) = *(_BYTE *)(*(_QWORD *)(a1 + 24) + 56LL);
    *(_BYTE *)(v4 + 5) = *(_BYTE *)(a1 + 104);
    *(_BYTE *)(v4 + 6) = *(_BYTE *)(a1 + 105);
    *(_BYTE *)(v4 + 7) = *(_BYTE *)(a1 + 106);
    *(_QWORD *)(a2 + 56) = 8LL;
  }
  v6 = StorEtwLoggingEnabled == 0;
  v32 = v5;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = v5;
  if ( v6 )
    goto LABEL_7;
  v34 = 0LL;
  IoGetActivityIdIrp(a2, &v34);
  v8 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)v8 == 14 )
  {
    if ( (byte_140171462 & 8) == 0 )
      goto LABEL_7;
    v29 = *(_DWORD *)(a2 + 48);
    v10 = &EventNonReadWriteRequestComplete;
    goto LABEL_11;
  }
  if ( *(_BYTE *)v8 != 15 )
  {
    if ( *(_BYTE *)v8 != 27 )
      goto LABEL_7;
    if ( *(_BYTE *)(v8 + 1) == 7 && !*(_DWORD *)(v8 + 8) )
    {
      if ( (byte_140171462 & 0x40) != 0 )
      {
        v11 = *(int **)(a2 + 56);
        if ( v11 )
          v3 = *v11;
        McTemplateK0pqd_EtwWriteTransfer(v7, v8, &v34, a2, v3, *(_DWORD *)(a2 + 48));
      }
      goto LABEL_7;
    }
    if ( (byte_140171462 & 0x20) == 0 )
      goto LABEL_7;
    v10 = &EventPnpRequestComplete;
    v29 = *(_DWORD *)(a2 + 48);
LABEL_11:
    McTemplateK0pd_EtwWriteTransfer(v7, v10, &v34, a2, v29);
    goto LABEL_7;
  }
  if ( byte_140171461 >= 0 )
    goto LABEL_7;
  v12 = *(_QWORD *)(v8 + 8);
  v13 = 0;
  v14 = 0LL;
  v30 = 0;
  v15 = 0;
  v16 = 0;
  v17 = 0;
  v18 = 0;
  if ( *(_BYTE *)(v12 + 2) != 40 )
  {
    v24 = *(_BYTE *)(v12 + 72);
    v14 = *(_BYTE **)(v12 + 32);
    v15 = *(_BYTE *)(v12 + 11);
    v13 = *(_BYTE *)(v12 + 4);
    if ( !*(_BYTE *)(v12 + 2) )
      goto LABEL_50;
    goto LABEL_7;
  }
  v19 = 0LL;
  v31 = 0;
  if ( *(_DWORD *)(v12 + 20) )
    goto LABEL_7;
  v20 = 0;
  v33 = *(_DWORD *)(v12 + 56);
  if ( !v33 )
    goto LABEL_47;
  v21 = (unsigned int *)(v12 + 120);
  while ( 1 )
  {
    v22 = *v21;
    if ( (unsigned int)v22 >= 0x80 )
    {
      v23 = *(unsigned int *)(v12 + 16);
      if ( (unsigned int)v22 < (unsigned int)v23 )
        break;
    }
LABEL_39:
    ++v20;
    ++v21;
    if ( v20 >= v33 )
      goto LABEL_46;
  }
  if ( *(_DWORD *)(v22 + v12) != 64 )
  {
    v7 = (unsigned int)(*(_DWORD *)(v22 + v12) - 65);
    if ( *(_DWORD *)(v22 + v12) == 65 )
    {
      v7 = v22 + 56;
      if ( v22 + 56 <= v23 )
      {
        v31 = 1;
        if ( *(_BYTE *)(v22 + v12 + 10) )
          v19 = (char *)(v22 + v12 + 24);
        v13 = *(_BYTE *)(v22 + v12 + 8);
        v14 = *(_BYTE **)(v22 + v12 + 16);
        v15 = *(_BYTE *)(v22 + v12 + 9);
      }
    }
    else if ( *(_DWORD *)(v22 + v12) == 66 )
    {
      v7 = v22 + 40;
      if ( v22 + 40 <= v23 )
      {
        if ( *(_DWORD *)(v22 + v12 + 12) )
          v19 = (char *)(v22 + v12 + 32);
        v14 = *(_BYTE **)(v22 + v12 + 24);
        goto LABEL_45;
      }
    }
    goto LABEL_38;
  }
  v7 = v22 + 40;
  if ( v22 + 40 > v23 )
  {
LABEL_38:
    if ( v31 )
      goto LABEL_46;
    goto LABEL_39;
  }
  if ( *(_BYTE *)(v22 + v12 + 10) )
    v19 = (char *)(v22 + v12 + 24);
  v14 = *(_BYTE **)(v22 + v12 + 16);
LABEL_45:
  v15 = *(_BYTE *)(v22 + v12 + 9);
  v13 = *(_BYTE *)(v22 + v12 + 8);
LABEL_46:
  v5 = v32;
LABEL_47:
  if ( v19 )
  {
    v24 = *v19;
    v17 = 0;
LABEL_50:
    LOBYTE(v7) = v24 - 8;
    if ( (v7 & 0x5D) == 0 )
    {
      v25 = *(_BYTE *)(v12 + 3);
      if ( v25 == 1 || !v14 || !v15 )
        goto LABEL_69;
      LOBYTE(v12) = 0;
      v7 = (unsigned __int64)&v14[v15];
      v26 = v14 + 8;
      if ( (unsigned __int8)((*v14 & 0x7F) - 114) <= 1u )
      {
        if ( (unsigned __int64)v26 <= v7 )
        {
          LOBYTE(v12) = 1;
          v17 = v14[2];
          v16 = v14[1] & 0xF;
          v18 = v14[3];
        }
      }
      else
      {
        if ( (unsigned __int64)v26 <= v7 )
        {
          v16 = v14[2] & 0xF;
          v27 = v15;
          if ( (unsigned int)(unsigned __int8)v14[7] + 8 <= v15 )
            v27 = (unsigned __int8)v14[7] + 8;
          v7 = (unsigned __int64)(v14 + 13);
          v12 = (unsigned __int64)&v14[v27];
          if ( (unsigned __int64)(v14 + 13) > v12 )
            v30 = 0;
          else
            v30 = v14[12];
          if ( (unsigned __int64)(v14 + 14) <= v12 )
            v18 = *(_BYTE *)v7;
          LOBYTE(v12) = 1;
        }
        v17 = v30;
      }
      if ( (_BYTE)v12 )
      {
        LOBYTE(v3) = v17;
        v28 = v18;
      }
      else
      {
LABEL_69:
        v16 = 0;
        v28 = 0;
      }
      McTemplateK0pduuuuup_EtwWriteTransfer(v7, v12, &v34, a2, *(_DWORD *)(a2 + 48), v25, v13, v16, v3, v28, a2);
    }
  }
LABEL_7:
  IofCompleteRequest((PIRP)a2, 0);
  return v5;
}
