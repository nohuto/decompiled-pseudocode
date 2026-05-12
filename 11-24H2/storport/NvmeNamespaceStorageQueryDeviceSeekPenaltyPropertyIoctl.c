/*
 * XREFs of NvmeNamespaceStorageQueryDeviceSeekPenaltyPropertyIoctl @ 0x1401AEC0C
 * Callers:
 *     NvmeNamespaceStorageQueryPropertyIoctl @ 0x1401AF820 (NvmeNamespaceStorageQueryPropertyIoctl.c)
 * Callees:
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x140052DF0 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140052EC8 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x1400569AC (McTemplateK0pqd_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 *     memset_0 @ 0x140143A80 (memset_0.c)
 */

__int64 __fastcall NvmeNamespaceStorageQueryDeviceSeekPenaltyPropertyIoctl(__int64 a1, __int64 a2)
{
  _DWORD *v2; // rsi
  int v3; // ebx
  __int64 v4; // rax
  int v6; // ecx
  unsigned int v7; // edx
  unsigned int v8; // esi
  bool v9; // zf
  unsigned __int64 v10; // rcx
  __int64 v11; // rdx
  int *v12; // rax
  const EVENT_DESCRIPTOR *v13; // rdx
  unsigned __int64 v14; // rdx
  char v15; // r15
  _BYTE *v16; // r9
  unsigned __int8 v17; // r10
  char v18; // bp
  char v19; // r11
  char v20; // r12
  char *v21; // r11
  unsigned int *v22; // r13
  __int64 v23; // rax
  unsigned __int64 v24; // r14
  char v25; // cl
  char v26; // r8
  _BYTE *v27; // rax
  unsigned int v28; // eax
  char v29; // al
  int v31; // [rsp+20h] [rbp-98h]
  char v32; // [rsp+60h] [rbp-58h]
  char v33; // [rsp+61h] [rbp-57h]
  int v34; // [rsp+64h] [rbp-54h]
  unsigned int v35; // [rsp+68h] [rbp-50h]
  GUID v36; // [rsp+70h] [rbp-48h] BYREF

  v2 = *(_DWORD **)(a2 + 24);
  v3 = 0;
  v4 = *(_QWORD *)(a2 + 184);
  v6 = v2[1];
  v7 = *(_DWORD *)(v4 + 8);
  if ( !v6 )
  {
    if ( v7 < 8 )
    {
      v8 = -1073741789;
      *(_QWORD *)(a2 + 56) = 0LL;
      goto LABEL_10;
    }
    if ( v7 >= 0xC )
    {
      memset_0(v2, 0, *(unsigned int *)(v4 + 8));
      *v2 = 12;
      v2[1] = 12;
      *((_BYTE *)v2 + 8) = 0;
      *(_QWORD *)(a2 + 56) = 12LL;
    }
    else
    {
      *v2 = 12;
      v2[1] = 12;
      *(_QWORD *)(a2 + 56) = 8LL;
    }
LABEL_9:
    v8 = 0;
    goto LABEL_10;
  }
  *(_QWORD *)(a2 + 56) = 0LL;
  if ( v6 == 1 )
    goto LABEL_9;
  v8 = -1073741637;
LABEL_10:
  v9 = StorEtwLoggingEnabled == 0;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = v8;
  if ( v9 )
    goto LABEL_76;
  v36 = 0LL;
  IoGetActivityIdIrp(a2, &v36);
  v11 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)v11 == 14 )
  {
    if ( (byte_140171462 & 8) == 0 )
      goto LABEL_76;
    v31 = *(_DWORD *)(a2 + 48);
    v13 = &EventNonReadWriteRequestComplete;
    goto LABEL_75;
  }
  if ( *(_BYTE *)v11 != 15 )
  {
    if ( *(_BYTE *)v11 != 27 )
      goto LABEL_76;
    if ( *(_BYTE *)(v11 + 1) == 7 && !*(_DWORD *)(v11 + 8) )
    {
      if ( (byte_140171462 & 0x40) != 0 )
      {
        v12 = *(int **)(a2 + 56);
        if ( v12 )
          v3 = *v12;
        McTemplateK0pqd_EtwWriteTransfer(v10, v11, &v36, a2, v3, *(_DWORD *)(a2 + 48));
      }
      goto LABEL_76;
    }
    if ( (byte_140171462 & 0x20) == 0 )
      goto LABEL_76;
    v13 = &EventPnpRequestComplete;
    v31 = *(_DWORD *)(a2 + 48);
LABEL_75:
    McTemplateK0pd_EtwWriteTransfer(v10, v13, &v36, a2, v31);
    goto LABEL_76;
  }
  if ( byte_140171461 >= 0 )
    goto LABEL_76;
  v14 = *(_QWORD *)(v11 + 8);
  v15 = 0;
  v16 = 0LL;
  v32 = 0;
  v17 = 0;
  v18 = 0;
  v19 = 0;
  v20 = 0;
  if ( *(_BYTE *)(v14 + 2) != 40 )
  {
    v25 = *(_BYTE *)(v14 + 72);
    v16 = *(_BYTE **)(v14 + 32);
    v17 = *(_BYTE *)(v14 + 11);
    v15 = *(_BYTE *)(v14 + 4);
    if ( !*(_BYTE *)(v14 + 2) )
      goto LABEL_52;
    goto LABEL_76;
  }
  v21 = 0LL;
  v33 = 0;
  if ( *(_DWORD *)(v14 + 20) )
    goto LABEL_76;
  v10 = 0LL;
  v34 = 0;
  v35 = *(_DWORD *)(v14 + 56);
  if ( !v35 )
    goto LABEL_49;
  v22 = (unsigned int *)(v14 + 120);
  while ( 1 )
  {
    v23 = *v22;
    if ( (unsigned int)v23 >= 0x80 )
    {
      v24 = *(unsigned int *)(v14 + 16);
      if ( (unsigned int)v23 < (unsigned int)v24 )
        break;
    }
LABEL_43:
    v10 = (unsigned int)(v10 + 1);
    ++v22;
    v34 = v10;
    if ( (unsigned int)v10 >= v35 )
      goto LABEL_49;
  }
  if ( *(_DWORD *)(v23 + v14) != 64 )
  {
    v10 = (unsigned int)(*(_DWORD *)(v23 + v14) - 65);
    if ( *(_DWORD *)(v23 + v14) == 65 )
    {
      v10 = v23 + 56;
      if ( v23 + 56 <= v24 )
      {
        v33 = 1;
        if ( *(_BYTE *)(v23 + v14 + 10) )
          v21 = (char *)(v23 + v14 + 24);
        v15 = *(_BYTE *)(v23 + v14 + 8);
        v16 = *(_BYTE **)(v23 + v14 + 16);
        v17 = *(_BYTE *)(v23 + v14 + 9);
      }
    }
    else if ( *(_DWORD *)(v23 + v14) == 66 )
    {
      v10 = v23 + 40;
      if ( v23 + 40 <= v24 )
      {
        if ( *(_DWORD *)(v23 + v14 + 12) )
          v21 = (char *)(v23 + v14 + 32);
        v16 = *(_BYTE **)(v23 + v14 + 24);
        goto LABEL_48;
      }
    }
    goto LABEL_41;
  }
  v10 = v23 + 40;
  if ( v23 + 40 > v24 )
  {
LABEL_41:
    if ( v33 )
      goto LABEL_49;
    LODWORD(v10) = v34;
    goto LABEL_43;
  }
  if ( *(_BYTE *)(v23 + v14 + 10) )
    v21 = (char *)(v23 + v14 + 24);
  v16 = *(_BYTE **)(v23 + v14 + 16);
LABEL_48:
  v17 = *(_BYTE *)(v23 + v14 + 9);
  v15 = *(_BYTE *)(v23 + v14 + 8);
LABEL_49:
  if ( v21 )
  {
    v25 = *v21;
    v19 = 0;
LABEL_52:
    LOBYTE(v10) = v25 - 8;
    if ( (v10 & 0x5D) == 0 )
    {
      v26 = *(_BYTE *)(v14 + 3);
      if ( v26 == 1 || !v16 || !v17 )
        goto LABEL_71;
      LOBYTE(v14) = 0;
      v10 = (unsigned __int64)&v16[v17];
      v27 = v16 + 8;
      if ( (unsigned __int8)((*v16 & 0x7F) - 114) <= 1u )
      {
        if ( (unsigned __int64)v27 <= v10 )
        {
          LOBYTE(v14) = 1;
          v19 = v16[2];
          v18 = v16[1] & 0xF;
          v20 = v16[3];
        }
      }
      else
      {
        if ( (unsigned __int64)v27 <= v10 )
        {
          v18 = v16[2] & 0xF;
          v28 = v17;
          if ( (unsigned int)(unsigned __int8)v16[7] + 8 <= v17 )
            v28 = (unsigned __int8)v16[7] + 8;
          v10 = (unsigned __int64)(v16 + 13);
          v14 = (unsigned __int64)&v16[v28];
          if ( (unsigned __int64)(v16 + 13) > v14 )
            v32 = 0;
          else
            v32 = v16[12];
          if ( (unsigned __int64)(v16 + 14) <= v14 )
            v20 = *(_BYTE *)v10;
          LOBYTE(v14) = 1;
        }
        v19 = v32;
      }
      if ( (_BYTE)v14 )
      {
        LOBYTE(v3) = v19;
        v29 = v20;
      }
      else
      {
LABEL_71:
        v18 = 0;
        v29 = 0;
      }
      McTemplateK0pduuuuup_EtwWriteTransfer(v10, v14, &v36, a2, *(_DWORD *)(a2 + 48), v26, v15, v18, v3, v29, a2);
    }
  }
LABEL_76:
  IofCompleteRequest((PIRP)a2, 0);
  return v8;
}
