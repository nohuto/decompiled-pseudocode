/*
 * XREFs of StorUnitQueryBypassIOProperty @ 0x1400A1F8C
 * Callers:
 *     RaUnitStorageInternalQueryPropertyIoctl @ 0x1401896B8 (RaUnitStorageInternalQueryPropertyIoctl.c)
 * Callees:
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x140052DF0 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140052EC8 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x1400569AC (McTemplateK0pqd_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 *     memset_0 @ 0x140143A80 (memset_0.c)
 */

__int64 __fastcall StorUnitQueryBypassIOProperty(__int64 a1, __int64 a2, _BYTE *a3)
{
  int v3; // ebx
  _DWORD *v4; // rsi
  size_t v8; // rbp
  unsigned int v9; // esi
  __int64 v10; // rax
  bool v11; // zf
  unsigned __int64 v12; // rcx
  __int64 v13; // rdx
  int *v14; // rax
  const EVENT_DESCRIPTOR *v15; // rdx
  unsigned __int64 v16; // rdx
  char v17; // r15
  _BYTE *v18; // r9
  unsigned __int8 v19; // r10
  char v20; // bp
  char v21; // r11
  char v22; // r12
  char *v23; // r11
  unsigned int *v24; // r13
  __int64 v25; // rax
  unsigned __int64 v26; // r14
  char v27; // cl
  char v28; // r8
  _BYTE *v29; // rax
  unsigned int v30; // eax
  char v31; // al
  int v33; // [rsp+20h] [rbp-A8h]
  char v34; // [rsp+60h] [rbp-68h]
  char v35; // [rsp+61h] [rbp-67h]
  int v36; // [rsp+64h] [rbp-64h]
  unsigned int v37; // [rsp+68h] [rbp-60h]
  GUID v38; // [rsp+70h] [rbp-58h] BYREF

  v3 = 0;
  v4 = *(_DWORD **)(a2 + 24);
  v8 = *(unsigned int *)(*(_QWORD *)(a2 + 184) + 8LL);
  if ( a3 )
  {
    *a3 = 0;
    if ( *(_BYTE *)(a2 + 64) )
    {
      v9 = -1073741790;
    }
    else
    {
      if ( (unsigned int)v8 >= 8 )
      {
        memset_0(v4, 0, v8);
        *v4 = 40;
        v4[1] = 40;
        if ( (unsigned int)v8 >= 0x28 )
        {
          if ( (*(_DWORD *)(a1 + 1952) & 0x40) == 0 )
          {
            v9 = -1073741637;
            goto LABEL_3;
          }
          *((_QWORD *)v4 + 1) = *(_QWORD *)(a1 + 8);
          *((_QWORD *)v4 + 2) = StorUnitDereferenceDeviceObject;
          *((_QWORD *)v4 + 3) = &StorUnitStartBypassIo;
          v10 = 40LL;
          *a3 = 1;
        }
        else
        {
          v10 = 8LL;
        }
        v9 = 0;
        goto LABEL_14;
      }
      v9 = -1073741789;
    }
  }
  else
  {
    v9 = -1073741811;
  }
LABEL_3:
  v10 = 0LL;
LABEL_14:
  v11 = StorEtwLoggingEnabled == 0;
  *(_QWORD *)(a2 + 56) = v10;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = v9;
  if ( v11 )
    goto LABEL_80;
  v38 = 0LL;
  IoGetActivityIdIrp(a2, &v38);
  v13 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)v13 == 14 )
  {
    if ( (byte_140171462 & 8) == 0 )
      goto LABEL_80;
    v33 = *(_DWORD *)(a2 + 48);
    v15 = (const EVENT_DESCRIPTOR *)&EventNonReadWriteRequestComplete;
    goto LABEL_79;
  }
  if ( *(_BYTE *)v13 != 15 )
  {
    if ( *(_BYTE *)v13 != 27 )
      goto LABEL_80;
    if ( *(_BYTE *)(v13 + 1) == 7 && !*(_DWORD *)(v13 + 8) )
    {
      if ( (byte_140171462 & 0x40) != 0 )
      {
        v14 = *(int **)(a2 + 56);
        if ( v14 )
          v3 = *v14;
        McTemplateK0pqd_EtwWriteTransfer(v12, v13, &v38, a2, v3, *(_DWORD *)(a2 + 48));
      }
      goto LABEL_80;
    }
    if ( (byte_140171462 & 0x20) == 0 )
      goto LABEL_80;
    v15 = &EventPnpRequestComplete;
    v33 = *(_DWORD *)(a2 + 48);
LABEL_79:
    McTemplateK0pd_EtwWriteTransfer(v12, v15, &v38, a2, v33);
    goto LABEL_80;
  }
  if ( byte_140171461 >= 0 )
    goto LABEL_80;
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
      goto LABEL_56;
    goto LABEL_80;
  }
  v23 = 0LL;
  v35 = 0;
  if ( *(_DWORD *)(v16 + 20) )
    goto LABEL_80;
  v12 = 0LL;
  v36 = 0;
  v37 = *(_DWORD *)(v16 + 56);
  if ( !v37 )
    goto LABEL_53;
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
LABEL_47:
    v12 = (unsigned int)(v12 + 1);
    ++v24;
    v36 = v12;
    if ( (unsigned int)v12 >= v37 )
      goto LABEL_53;
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
        goto LABEL_52;
      }
    }
    goto LABEL_45;
  }
  v12 = v25 + 40;
  if ( v25 + 40 > v26 )
  {
LABEL_45:
    if ( v35 )
      goto LABEL_53;
    LODWORD(v12) = v36;
    goto LABEL_47;
  }
  if ( *(_BYTE *)(v25 + v16 + 10) )
    v23 = (char *)(v25 + v16 + 24);
  v18 = *(_BYTE **)(v25 + v16 + 16);
LABEL_52:
  v19 = *(_BYTE *)(v25 + v16 + 9);
  v17 = *(_BYTE *)(v25 + v16 + 8);
LABEL_53:
  if ( v23 )
  {
    v27 = *v23;
    v21 = 0;
LABEL_56:
    LOBYTE(v12) = v27 - 8;
    if ( (v12 & 0x5D) == 0 )
    {
      v28 = *(_BYTE *)(v16 + 3);
      if ( v28 == 1 || !v18 || !v19 )
        goto LABEL_75;
      LOBYTE(v16) = 0;
      v12 = (unsigned __int64)&v18[v19];
      v29 = v18 + 8;
      if ( (unsigned __int8)((*v18 & 0x7F) - 114) <= 1u )
      {
        if ( (unsigned __int64)v29 <= v12 )
        {
          LOBYTE(v16) = 1;
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
          v16 = (unsigned __int64)&v18[v30];
          if ( (unsigned __int64)(v18 + 13) > v16 )
            v34 = 0;
          else
            v34 = v18[12];
          if ( (unsigned __int64)(v18 + 14) <= v16 )
            v22 = *(_BYTE *)v12;
          LOBYTE(v16) = 1;
        }
        v21 = v34;
      }
      if ( (_BYTE)v16 )
      {
        LOBYTE(v3) = v21;
        v31 = v22;
      }
      else
      {
LABEL_75:
        v20 = 0;
        v31 = 0;
      }
      McTemplateK0pduuuuup_EtwWriteTransfer(v12, v16, &v38, a2, *(_DWORD *)(a2 + 48), v28, v17, v20, v3, v31, a2);
    }
  }
LABEL_80:
  IofCompleteRequest((PIRP)a2, 0);
  return v9;
}
