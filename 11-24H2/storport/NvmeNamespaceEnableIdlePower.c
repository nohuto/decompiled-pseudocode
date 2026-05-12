/*
 * XREFs of NvmeNamespaceEnableIdlePower @ 0x1400FF5A0
 * Callers:
 *     NvmeNamespaceDeviceControlIrp @ 0x1401A2234 (NvmeNamespaceDeviceControlIrp.c)
 * Callees:
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x140052DF0 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140052EC8 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x1400569AC (McTemplateK0pqd_EtwWriteTransfer.c)
 *     NvmeNamespaceRegisterForIdleDetection @ 0x140134C3C (NvmeNamespaceRegisterForIdleDetection.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 */

__int64 __fastcall NvmeNamespaceEnableIdlePower(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  int v3; // ebx
  unsigned int v5; // ebp
  bool v6; // zf
  unsigned __int64 v7; // rcx
  __int64 v8; // rdx
  int *v9; // rax
  const EVENT_DESCRIPTOR *v10; // rdx
  unsigned __int64 v11; // rdx
  char v12; // r15
  _BYTE *v13; // r9
  unsigned __int8 v14; // r10
  char v15; // si
  char v16; // r11
  char v17; // r12
  char *v18; // r11
  char v19; // r13
  unsigned int v20; // r14d
  unsigned __int64 v21; // rbp
  __int64 v22; // r8
  int v23; // ecx
  char v24; // cl
  char v25; // r8
  _BYTE *v26; // rax
  unsigned int v27; // eax
  char v28; // al
  char v30; // [rsp+60h] [rbp-68h]
  unsigned int v31; // [rsp+64h] [rbp-64h]
  unsigned int v32; // [rsp+68h] [rbp-60h]
  GUID v33; // [rsp+70h] [rbp-58h] BYREF

  v2 = *(_QWORD *)(a2 + 184);
  v3 = 0;
  *(_QWORD *)(a2 + 56) = 0LL;
  if ( *(_DWORD *)(v2 + 16) < 0x10u )
    v5 = -1073741811;
  else
    v5 = NvmeNamespaceRegisterForIdleDetection(a1, *(_QWORD *)(a2 + 24));
  v6 = StorEtwLoggingEnabled == 0;
  v31 = v5;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = v5;
  if ( v6 )
    goto LABEL_69;
  v33 = 0LL;
  IoGetActivityIdIrp(a2, &v33);
  v8 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)v8 == 14 )
  {
    if ( (byte_140171462 & 8) == 0 )
      goto LABEL_69;
    v10 = (const EVENT_DESCRIPTOR *)&EventNonReadWriteRequestComplete;
    goto LABEL_68;
  }
  if ( *(_BYTE *)v8 != 15 )
  {
    if ( *(_BYTE *)v8 != 27 )
      goto LABEL_69;
    if ( *(_BYTE *)(v8 + 1) == 7 && !*(_DWORD *)(v8 + 8) )
    {
      if ( (byte_140171462 & 0x40) != 0 )
      {
        v9 = *(int **)(a2 + 56);
        if ( v9 )
          v3 = *v9;
        McTemplateK0pqd_EtwWriteTransfer(v7, v8, &v33, a2, v3, *(_DWORD *)(a2 + 48));
      }
      goto LABEL_69;
    }
    if ( (byte_140171462 & 0x20) == 0 )
      goto LABEL_69;
    v10 = &EventPnpRequestComplete;
LABEL_68:
    McTemplateK0pd_EtwWriteTransfer(v7, v10, &v33, a2, *(_DWORD *)(a2 + 48));
    goto LABEL_69;
  }
  if ( byte_140171461 >= 0 )
    goto LABEL_69;
  v11 = *(_QWORD *)(v8 + 8);
  v12 = 0;
  v13 = 0LL;
  v30 = 0;
  v14 = 0;
  v15 = 0;
  v16 = 0;
  v17 = 0;
  if ( *(_BYTE *)(v11 + 2) != 40 )
  {
    v24 = *(_BYTE *)(v11 + 72);
    v13 = *(_BYTE **)(v11 + 32);
    v14 = *(_BYTE *)(v11 + 11);
    v12 = *(_BYTE *)(v11 + 4);
    if ( !*(_BYTE *)(v11 + 2) )
      goto LABEL_45;
    goto LABEL_69;
  }
  v18 = 0LL;
  v19 = 0;
  if ( *(_DWORD *)(v11 + 20) )
    goto LABEL_69;
  v20 = 0;
  v32 = *(_DWORD *)(v11 + 56);
  if ( !v32 )
    goto LABEL_42;
  while ( 1 )
  {
    v7 = *(unsigned int *)(v11 + 4LL * v20 + 120);
    if ( (unsigned int)v7 >= 0x80 )
    {
      v21 = *(unsigned int *)(v11 + 16);
      if ( (unsigned int)v7 < (unsigned int)v21 )
        break;
    }
LABEL_35:
    if ( ++v20 >= v32 )
      goto LABEL_41;
  }
  v22 = (unsigned int)v7;
  v23 = *(_DWORD *)(v7 + v11) - 64;
  if ( v23 )
  {
    v7 = (unsigned int)(v23 - 1);
    if ( (_DWORD)v7 )
    {
      if ( (_DWORD)v7 == 1 )
      {
        v7 = v22 + 40;
        if ( v22 + 40 <= v21 )
        {
          if ( *(_DWORD *)(v22 + v11 + 12) )
            v18 = (char *)(v22 + v11 + 32);
          v13 = *(_BYTE **)(v22 + v11 + 24);
          goto LABEL_40;
        }
      }
    }
    else
    {
      v7 = v22 + 56;
      if ( v22 + 56 <= v21 )
      {
        v19 = 1;
        if ( *(_BYTE *)(v22 + v11 + 10) )
          v18 = (char *)(v22 + v11 + 24);
        v12 = *(_BYTE *)(v22 + v11 + 8);
        v13 = *(_BYTE **)(v22 + v11 + 16);
        v14 = *(_BYTE *)(v22 + v11 + 9);
      }
    }
    goto LABEL_34;
  }
  v7 = v22 + 40;
  if ( v22 + 40 > v21 )
  {
LABEL_34:
    if ( v19 )
      goto LABEL_41;
    goto LABEL_35;
  }
  if ( *(_BYTE *)(v22 + v11 + 10) )
    v18 = (char *)(v22 + v11 + 24);
  v13 = *(_BYTE **)(v22 + v11 + 16);
LABEL_40:
  v14 = *(_BYTE *)(v22 + v11 + 9);
  v12 = *(_BYTE *)(v22 + v11 + 8);
LABEL_41:
  v5 = v31;
LABEL_42:
  if ( v18 )
  {
    v24 = *v18;
    v16 = 0;
LABEL_45:
    LOBYTE(v7) = v24 - 8;
    if ( (v7 & 0x5D) == 0 )
    {
      v25 = *(_BYTE *)(v11 + 3);
      if ( v25 == 1 || !v13 || !v14 )
        goto LABEL_64;
      LOBYTE(v11) = 0;
      v7 = (unsigned __int64)&v13[v14];
      v26 = v13 + 8;
      if ( (unsigned __int8)((*v13 & 0x7F) - 114) <= 1u )
      {
        if ( (unsigned __int64)v26 <= v7 )
        {
          LOBYTE(v11) = 1;
          v16 = v13[2];
          v15 = v13[1] & 0xF;
          v17 = v13[3];
        }
      }
      else
      {
        if ( (unsigned __int64)v26 <= v7 )
        {
          v15 = v13[2] & 0xF;
          v27 = v14;
          if ( (unsigned int)(unsigned __int8)v13[7] + 8 <= v14 )
            v27 = (unsigned __int8)v13[7] + 8;
          v7 = (unsigned __int64)(v13 + 13);
          v11 = (unsigned __int64)&v13[v27];
          if ( (unsigned __int64)(v13 + 13) > v11 )
            v30 = 0;
          else
            v30 = v13[12];
          if ( (unsigned __int64)(v13 + 14) <= v11 )
            v17 = *(_BYTE *)v7;
          LOBYTE(v11) = 1;
        }
        v16 = v30;
      }
      if ( (_BYTE)v11 )
      {
        LOBYTE(v3) = v16;
        v28 = v17;
      }
      else
      {
LABEL_64:
        v15 = 0;
        v28 = 0;
      }
      McTemplateK0pduuuuup_EtwWriteTransfer(v7, v11, &v33, a2, *(_DWORD *)(a2 + 48), v25, v12, v15, v3, v28, a2);
    }
  }
LABEL_69:
  IofCompleteRequest((PIRP)a2, 0);
  return v5;
}
