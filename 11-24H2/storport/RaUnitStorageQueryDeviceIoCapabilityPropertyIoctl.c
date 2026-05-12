/*
 * XREFs of RaUnitStorageQueryDeviceIoCapabilityPropertyIoctl @ 0x1401BA518
 * Callers:
 *     RaUnitStorageQueryPropertyIoctl @ 0x1401BEAB0 (RaUnitStorageQueryPropertyIoctl.c)
 * Callees:
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x140052DF0 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140052EC8 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x1400569AC (McTemplateK0pqd_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 *     memset_0 @ 0x140143A80 (memset_0.c)
 */

__int64 __fastcall RaUnitStorageQueryDeviceIoCapabilityPropertyIoctl(__int64 a1, __int64 a2)
{
  _DWORD *v3; // rsi
  int v4; // ebx
  size_t v6; // r8
  int v7; // edx
  unsigned int v8; // esi
  bool v9; // zf
  unsigned __int64 v10; // rcx
  __int64 v11; // rdx
  const EVENT_DESCRIPTOR *v13; // rdx
  int *v14; // rax
  unsigned __int64 v15; // rdx
  _BYTE *v16; // rax
  char v17; // bp
  unsigned int v18; // eax
  char v19; // r12
  char v20; // r11
  char v21; // al
  _DWORD *v22; // rax
  _DWORD *v23; // rax
  char v24; // r15
  _BYTE *v25; // r9
  unsigned __int8 v26; // r10
  char *v27; // r11
  unsigned int *v28; // r13
  _DWORD *v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  unsigned __int64 v32; // r14
  char v33; // cl
  char v34; // r8
  int v35; // [rsp+20h] [rbp-98h]
  char v36; // [rsp+60h] [rbp-58h]
  char v37; // [rsp+61h] [rbp-57h]
  int v38; // [rsp+64h] [rbp-54h]
  unsigned int v39; // [rsp+68h] [rbp-50h]
  GUID v40; // [rsp+70h] [rbp-48h] BYREF

  v3 = *(_DWORD **)(a2 + 24);
  v4 = 0;
  v6 = *(unsigned int *)(*(_QWORD *)(a2 + 184) + 8LL);
  v7 = v3[1];
  if ( v7 )
  {
    if ( v7 == 1 )
    {
LABEL_5:
      v8 = 0;
      goto LABEL_6;
    }
    v8 = -1073741637;
  }
  else
  {
    if ( (unsigned int)v6 >= 8 )
    {
      if ( (unsigned int)v6 >= 0x10 )
      {
        memset_0(v3, 0, v6);
        *v3 = 16;
        v3[1] = 16;
        v22 = *(_DWORD **)(a1 + 24);
        if ( v22 )
        {
          if ( *v22 == 1094997074 )
          {
            v23 = v22 + 94;
          }
          else if ( *v22 == 1314275652 )
          {
            v23 = v22 + 42;
          }
          else
          {
            v23 = 0LL;
          }
          v3[2] = v23[54];
          v29 = *(_DWORD **)(a1 + 24);
          if ( *v29 == 1094997074 )
          {
            v30 = (__int64)(v29 + 147);
          }
          else if ( *v29 == 1314275652 )
          {
            v30 = (__int64)(v29 + 95);
          }
          else
          {
            v30 = 212LL;
          }
          v3[3] = *(_DWORD *)v30;
        }
        *(_QWORD *)(a2 + 56) = 16LL;
      }
      else
      {
        *v3 = 16;
        v3[1] = 16;
        *(_QWORD *)(a2 + 56) = 8LL;
      }
      goto LABEL_5;
    }
    v8 = -1073741789;
    *(_QWORD *)(a2 + 56) = 0LL;
  }
LABEL_6:
  v9 = StorEtwLoggingEnabled == 0;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = v8;
  if ( v9 )
    goto LABEL_10;
  v40 = 0LL;
  IoGetActivityIdIrp(a2, &v40);
  v11 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)v11 == 14 )
  {
    if ( (byte_140171462 & 8) == 0 )
      goto LABEL_10;
    v35 = *(_DWORD *)(a2 + 48);
    v13 = &EventNonReadWriteRequestComplete;
    goto LABEL_15;
  }
  if ( *(_BYTE *)v11 != 15 )
  {
    if ( *(_BYTE *)v11 != 27 )
      goto LABEL_10;
    if ( *(_BYTE *)(v11 + 1) == 7 && !*(_DWORD *)(v11 + 8) )
    {
      if ( (byte_140171462 & 0x40) != 0 )
      {
        v14 = *(int **)(a2 + 56);
        if ( v14 )
          v4 = *v14;
        McTemplateK0pqd_EtwWriteTransfer(v10, v11, &v40, a2, v4, *(_DWORD *)(a2 + 48));
      }
      goto LABEL_10;
    }
    if ( (byte_140171462 & 0x20) == 0 )
      goto LABEL_10;
    v13 = &EventPnpRequestComplete;
    v35 = *(_DWORD *)(a2 + 48);
LABEL_15:
    McTemplateK0pd_EtwWriteTransfer(v10, v13, &v40, a2, v35);
    goto LABEL_10;
  }
  if ( byte_140171461 >= 0 )
    goto LABEL_10;
  v15 = *(_QWORD *)(v11 + 8);
  v24 = 0;
  v25 = 0LL;
  v36 = 0;
  v26 = 0;
  v17 = 0;
  v20 = 0;
  v19 = 0;
  if ( *(_BYTE *)(v15 + 2) != 40 )
  {
    v33 = *(_BYTE *)(v15 + 72);
    v25 = *(_BYTE **)(v15 + 32);
    v26 = *(_BYTE *)(v15 + 11);
    v24 = *(_BYTE *)(v15 + 4);
    if ( !*(_BYTE *)(v15 + 2) )
      goto LABEL_87;
    goto LABEL_10;
  }
  v27 = 0LL;
  v37 = 0;
  if ( *(_DWORD *)(v15 + 20) )
    goto LABEL_10;
  v10 = 0LL;
  v38 = 0;
  v39 = *(_DWORD *)(v15 + 56);
  if ( !v39 )
    goto LABEL_84;
  v28 = (unsigned int *)(v15 + 120);
  while ( 1 )
  {
    v31 = *v28;
    if ( (unsigned int)v31 >= 0x80 )
    {
      v32 = *(unsigned int *)(v15 + 16);
      if ( (unsigned int)v31 < (unsigned int)v32 )
        break;
    }
LABEL_77:
    v10 = (unsigned int)(v10 + 1);
    ++v28;
    v38 = v10;
    if ( (unsigned int)v10 >= v39 )
      goto LABEL_84;
  }
  if ( *(_DWORD *)(v31 + v15) != 64 )
  {
    v10 = (unsigned int)(*(_DWORD *)(v31 + v15) - 65);
    if ( *(_DWORD *)(v31 + v15) == 65 )
    {
      v10 = v31 + 56;
      if ( v31 + 56 <= v32 )
      {
        v37 = 1;
        if ( *(_BYTE *)(v31 + v15 + 10) )
          v27 = (char *)(v31 + v15 + 24);
        v24 = *(_BYTE *)(v31 + v15 + 8);
        v25 = *(_BYTE **)(v31 + v15 + 16);
        v26 = *(_BYTE *)(v31 + v15 + 9);
      }
    }
    else if ( *(_DWORD *)(v31 + v15) == 66 )
    {
      v10 = v31 + 40;
      if ( v31 + 40 <= v32 )
      {
        if ( *(_DWORD *)(v31 + v15 + 12) )
          v27 = (char *)(v31 + v15 + 32);
        v25 = *(_BYTE **)(v31 + v15 + 24);
        goto LABEL_83;
      }
    }
    goto LABEL_75;
  }
  v10 = v31 + 40;
  if ( v31 + 40 > v32 )
  {
LABEL_75:
    if ( v37 )
      goto LABEL_84;
    LODWORD(v10) = v38;
    goto LABEL_77;
  }
  if ( *(_BYTE *)(v31 + v15 + 10) )
    v27 = (char *)(v31 + v15 + 24);
  v25 = *(_BYTE **)(v31 + v15 + 16);
LABEL_83:
  v26 = *(_BYTE *)(v31 + v15 + 9);
  v24 = *(_BYTE *)(v31 + v15 + 8);
LABEL_84:
  if ( v27 )
  {
    v33 = *v27;
    v20 = 0;
LABEL_87:
    LOBYTE(v10) = v33 - 8;
    if ( (v10 & 0x5D) == 0 )
    {
      v34 = *(_BYTE *)(v15 + 3);
      if ( v34 == 1 || !v25 || !v26 )
        goto LABEL_36;
      LOBYTE(v15) = 0;
      v10 = (unsigned __int64)&v25[v26];
      v16 = v25 + 8;
      if ( (unsigned __int8)((*v25 & 0x7F) - 114) <= 1u )
      {
        if ( (unsigned __int64)v16 <= v10 )
        {
          LOBYTE(v15) = 1;
          v20 = v25[2];
          v17 = v25[1] & 0xF;
          v19 = v25[3];
        }
      }
      else
      {
        if ( (unsigned __int64)v16 <= v10 )
        {
          v17 = v25[2] & 0xF;
          v18 = v26;
          if ( (unsigned int)(unsigned __int8)v25[7] + 8 <= v26 )
            v18 = (unsigned __int8)v25[7] + 8;
          v10 = (unsigned __int64)(v25 + 13);
          v15 = (unsigned __int64)&v25[v18];
          if ( (unsigned __int64)(v25 + 13) > v15 )
            v36 = 0;
          else
            v36 = v25[12];
          if ( (unsigned __int64)(v25 + 14) <= v15 )
            v19 = *(_BYTE *)v10;
          LOBYTE(v15) = 1;
        }
        v20 = v36;
      }
      if ( (_BYTE)v15 )
      {
        LOBYTE(v4) = v20;
        v21 = v19;
      }
      else
      {
LABEL_36:
        v17 = 0;
        v21 = 0;
      }
      McTemplateK0pduuuuup_EtwWriteTransfer(v10, v15, &v40, a2, *(_DWORD *)(a2 + 48), v34, v24, v17, v4, v21, a2);
    }
  }
LABEL_10:
  IofCompleteRequest((PIRP)a2, 0);
  return v8;
}
