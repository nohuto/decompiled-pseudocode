/*
 * XREFs of NvmeNamespaceQueryPnpDeviceStateIrp @ 0x1401A7790
 * Callers:
 *     NvmeNamespacePnpIrp @ 0x140105C68 (NvmeNamespacePnpIrp.c)
 * Callees:
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x140052DF0 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140052EC8 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x1400569AC (McTemplateK0pqd_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 */

__int64 __fastcall NvmeNamespaceQueryPnpDeviceStateIrp(__int64 a1, __int64 a2)
{
  int v2; // ebx
  bool v4; // zf
  unsigned __int64 v5; // rcx
  __int64 v6; // rdx
  int *v7; // rax
  const EVENT_DESCRIPTOR *v8; // rdx
  unsigned __int64 v9; // rdx
  char v10; // r15
  _BYTE *v11; // r9
  unsigned __int8 v12; // r10
  char v13; // si
  char v14; // r11
  char v15; // r12
  char *v16; // r11
  char v17; // r13
  unsigned int v18; // r14d
  unsigned __int64 v19; // rbp
  __int64 v20; // r8
  int v21; // ecx
  char v22; // cl
  char v23; // r8
  _BYTE *v24; // rax
  unsigned int v25; // eax
  char v26; // al
  char v28; // [rsp+60h] [rbp-58h]
  unsigned int v29; // [rsp+64h] [rbp-54h]
  GUID v30; // [rsp+68h] [rbp-50h] BYREF

  *(_QWORD *)(a1 + 112) |= 0x400uLL;
  v2 = 0;
  if ( *(_DWORD *)(a1 + 272) || *(_DWORD *)(a1 + 276) || *(_DWORD *)(a1 + 280) )
    *(_DWORD *)(a2 + 56) |= 0x20u;
  v4 = StorEtwLoggingEnabled == 0;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = 0;
  if ( v4 )
    goto LABEL_69;
  v30 = 0LL;
  IoGetActivityIdIrp(a2, &v30);
  v6 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)v6 == 14 )
  {
    if ( (byte_140171462 & 8) == 0 )
      goto LABEL_69;
    v8 = &EventNonReadWriteRequestComplete;
    goto LABEL_68;
  }
  if ( *(_BYTE *)v6 != 15 )
  {
    if ( *(_BYTE *)v6 != 27 )
      goto LABEL_69;
    if ( *(_BYTE *)(v6 + 1) == 7 && !*(_DWORD *)(v6 + 8) )
    {
      if ( (byte_140171462 & 0x40) != 0 )
      {
        v7 = *(int **)(a2 + 56);
        if ( v7 )
          v2 = *v7;
        McTemplateK0pqd_EtwWriteTransfer(v5, v6, &v30, a2, v2, *(_DWORD *)(a2 + 48));
      }
      goto LABEL_69;
    }
    if ( (byte_140171462 & 0x20) == 0 )
      goto LABEL_69;
    v8 = &EventPnpRequestComplete;
LABEL_68:
    McTemplateK0pd_EtwWriteTransfer(v5, v8, &v30, a2, *(_DWORD *)(a2 + 48));
    goto LABEL_69;
  }
  if ( byte_140171461 >= 0 )
    goto LABEL_69;
  v9 = *(_QWORD *)(v6 + 8);
  v10 = 0;
  v11 = 0LL;
  v28 = 0;
  v12 = 0;
  v13 = 0;
  v14 = 0;
  v15 = 0;
  if ( *(_BYTE *)(v9 + 2) != 40 )
  {
    v22 = *(_BYTE *)(v9 + 72);
    v11 = *(_BYTE **)(v9 + 32);
    v12 = *(_BYTE *)(v9 + 11);
    v10 = *(_BYTE *)(v9 + 4);
    if ( !*(_BYTE *)(v9 + 2) )
      goto LABEL_45;
    goto LABEL_69;
  }
  v16 = 0LL;
  v17 = 0;
  if ( *(_DWORD *)(v9 + 20) )
    goto LABEL_69;
  v18 = 0;
  v29 = *(_DWORD *)(v9 + 56);
  if ( !v29 )
    goto LABEL_42;
  while ( 1 )
  {
    v5 = *(unsigned int *)(v9 + 4LL * v18 + 120);
    if ( (unsigned int)v5 >= 0x80 )
    {
      v19 = *(unsigned int *)(v9 + 16);
      if ( (unsigned int)v5 < (unsigned int)v19 )
        break;
    }
LABEL_36:
    if ( ++v18 >= v29 )
      goto LABEL_42;
  }
  v20 = (unsigned int)v5;
  v21 = *(_DWORD *)(v5 + v9) - 64;
  if ( v21 )
  {
    v5 = (unsigned int)(v21 - 1);
    if ( (_DWORD)v5 )
    {
      if ( (_DWORD)v5 == 1 )
      {
        v5 = v20 + 40;
        if ( v20 + 40 <= v19 )
        {
          if ( *(_DWORD *)(v20 + v9 + 12) )
            v16 = (char *)(v20 + v9 + 32);
          v11 = *(_BYTE **)(v20 + v9 + 24);
          goto LABEL_41;
        }
      }
    }
    else
    {
      v5 = v20 + 56;
      if ( v20 + 56 <= v19 )
      {
        v17 = 1;
        if ( *(_BYTE *)(v20 + v9 + 10) )
          v16 = (char *)(v20 + v9 + 24);
        v10 = *(_BYTE *)(v20 + v9 + 8);
        v11 = *(_BYTE **)(v20 + v9 + 16);
        v12 = *(_BYTE *)(v20 + v9 + 9);
      }
    }
    goto LABEL_35;
  }
  v5 = v20 + 40;
  if ( v20 + 40 > v19 )
  {
LABEL_35:
    if ( v17 )
      goto LABEL_42;
    goto LABEL_36;
  }
  if ( *(_BYTE *)(v20 + v9 + 10) )
    v16 = (char *)(v20 + v9 + 24);
  v11 = *(_BYTE **)(v20 + v9 + 16);
LABEL_41:
  v12 = *(_BYTE *)(v20 + v9 + 9);
  v10 = *(_BYTE *)(v20 + v9 + 8);
LABEL_42:
  if ( v16 )
  {
    v22 = *v16;
    v14 = 0;
LABEL_45:
    LOBYTE(v5) = v22 - 8;
    if ( (v5 & 0x5D) == 0 )
    {
      v23 = *(_BYTE *)(v9 + 3);
      if ( v23 == 1 || !v11 || !v12 )
        goto LABEL_64;
      LOBYTE(v9) = 0;
      v5 = (unsigned __int64)&v11[v12];
      v24 = v11 + 8;
      if ( (unsigned __int8)((*v11 & 0x7F) - 114) <= 1u )
      {
        if ( (unsigned __int64)v24 <= v5 )
        {
          LOBYTE(v9) = 1;
          v14 = v11[2];
          v13 = v11[1] & 0xF;
          v15 = v11[3];
        }
      }
      else
      {
        if ( (unsigned __int64)v24 <= v5 )
        {
          v13 = v11[2] & 0xF;
          v25 = v12;
          if ( (unsigned int)(unsigned __int8)v11[7] + 8 <= v12 )
            v25 = (unsigned __int8)v11[7] + 8;
          v5 = (unsigned __int64)(v11 + 13);
          v9 = (unsigned __int64)&v11[v25];
          if ( (unsigned __int64)(v11 + 13) > v9 )
            v28 = 0;
          else
            v28 = v11[12];
          if ( (unsigned __int64)(v11 + 14) <= v9 )
            v15 = *(_BYTE *)v5;
          LOBYTE(v9) = 1;
        }
        v14 = v28;
      }
      if ( (_BYTE)v9 )
      {
        LOBYTE(v2) = v14;
        v26 = v15;
      }
      else
      {
LABEL_64:
        v13 = 0;
        v26 = 0;
      }
      McTemplateK0pduuuuup_EtwWriteTransfer(v5, v9, &v30, a2, *(_DWORD *)(a2 + 48), v23, v10, v13, v2, v26, a2);
    }
  }
LABEL_69:
  IofCompleteRequest((PIRP)a2, 0);
  return 0LL;
}
