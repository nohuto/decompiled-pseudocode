/*
 * XREFs of NvmeNamespaceAttributeManagementIoctl @ 0x1400FBA28
 * Callers:
 *     NvmeNamespaceDeviceControlIrp @ 0x1401A2234 (NvmeNamespaceDeviceControlIrp.c)
 * Callees:
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x140052DF0 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140052EC8 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x1400569AC (McTemplateK0pqd_EtwWriteTransfer.c)
 *     NvmeNamespaceClearUnresponsiveAttribute @ 0x1400FC704 (NvmeNamespaceClearUnresponsiveAttribute.c)
 *     NvmeNamespaceSetUnresponsiveAttribute @ 0x140112140 (NvmeNamespaceSetUnresponsiveAttribute.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 */

__int64 __fastcall NvmeNamespaceAttributeManagementIoctl(__int64 a1, __int64 a2)
{
  int v2; // ebx
  unsigned int v4; // esi
  __int64 v5; // rdx
  unsigned int v6; // eax
  unsigned int v7; // eax
  bool v8; // zf
  unsigned __int64 v9; // rcx
  __int64 v10; // rdx
  int *v11; // rax
  const EVENT_DESCRIPTOR *v12; // rdx
  __int64 v13; // rdx
  char v14; // r12
  _BYTE *v15; // r9
  unsigned __int8 v16; // r10
  char v17; // bp
  char v18; // r11
  char v19; // r13
  char *v20; // r11
  unsigned int v21; // r15d
  unsigned __int64 v22; // r14
  __int64 v23; // r8
  int v24; // ecx
  char v25; // cl
  char v26; // r8
  _BYTE *v27; // rax
  unsigned int v28; // eax
  unsigned __int64 v29; // r8
  char v30; // al
  int v32; // [rsp+20h] [rbp-98h]
  char v33; // [rsp+60h] [rbp-58h]
  char v34; // [rsp+61h] [rbp-57h]
  unsigned int v35; // [rsp+64h] [rbp-54h]
  GUID v36; // [rsp+68h] [rbp-50h] BYREF

  v2 = 0;
  if ( *(_DWORD *)(*(_QWORD *)(a2 + 184) + 16LL) >= 0x10u )
  {
    v5 = *(_QWORD *)(a2 + 24);
    if ( !v5 )
    {
LABEL_4:
      v4 = -1073741811;
      goto LABEL_13;
    }
    if ( (*(_BYTE *)(*(_QWORD *)(a1 + 16) + 136LL) & 2) == 0 )
    {
      v6 = *(_DWORD *)(v5 + 8);
      if ( v6 > 1 )
        goto LABEL_4;
      if ( *(_DWORD *)(v5 + 12) == 0x80000000 )
      {
        if ( v6 == 1 )
          v7 = NvmeNamespaceSetUnresponsiveAttribute();
        else
          v7 = NvmeNamespaceClearUnresponsiveAttribute();
        v4 = v7;
        goto LABEL_13;
      }
    }
    v4 = -1073741637;
    goto LABEL_13;
  }
  v4 = -1073741820;
LABEL_13:
  v8 = StorEtwLoggingEnabled == 0;
  *(_QWORD *)(a2 + 56) = 0LL;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = v4;
  if ( v8 )
    goto LABEL_77;
  v36 = 0LL;
  IoGetActivityIdIrp(a2, &v36);
  v10 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)v10 == 14 )
  {
    if ( (byte_140171462 & 8) == 0 )
      goto LABEL_77;
    v32 = *(_DWORD *)(a2 + 48);
    v12 = (const EVENT_DESCRIPTOR *)&EventNonReadWriteRequestComplete;
    goto LABEL_76;
  }
  if ( *(_BYTE *)v10 != 15 )
  {
    if ( *(_BYTE *)v10 != 27 )
      goto LABEL_77;
    if ( *(_BYTE *)(v10 + 1) == 7 && !*(_DWORD *)(v10 + 8) )
    {
      if ( (byte_140171462 & 0x40) != 0 )
      {
        v11 = *(int **)(a2 + 56);
        if ( v11 )
          v2 = *v11;
        McTemplateK0pqd_EtwWriteTransfer(v9, v10, &v36, a2, v2, *(_DWORD *)(a2 + 48));
      }
      goto LABEL_77;
    }
    if ( (byte_140171462 & 0x20) == 0 )
      goto LABEL_77;
    v12 = &EventPnpRequestComplete;
    v32 = *(_DWORD *)(a2 + 48);
LABEL_76:
    McTemplateK0pd_EtwWriteTransfer(v9, v12, &v36, a2, v32);
    goto LABEL_77;
  }
  if ( byte_140171461 >= 0 )
    goto LABEL_77;
  v13 = *(_QWORD *)(v10 + 8);
  v14 = 0;
  v15 = 0LL;
  v33 = 0;
  v16 = 0;
  v17 = 0;
  v18 = 0;
  v19 = 0;
  if ( *(_BYTE *)(v13 + 2) != 40 )
  {
    v25 = *(_BYTE *)(v13 + 72);
    v15 = *(_BYTE **)(v13 + 32);
    v16 = *(_BYTE *)(v13 + 11);
    v14 = *(_BYTE *)(v13 + 4);
    if ( !*(_BYTE *)(v13 + 2) )
      goto LABEL_53;
    goto LABEL_77;
  }
  v20 = 0LL;
  v34 = 0;
  if ( *(_DWORD *)(v13 + 20) )
    goto LABEL_77;
  v21 = 0;
  v35 = *(_DWORD *)(v13 + 56);
  if ( !v35 )
    goto LABEL_50;
  while ( 1 )
  {
    v9 = *(unsigned int *)(v13 + 4LL * v21 + 120);
    if ( (unsigned int)v9 >= 0x80 )
    {
      v22 = *(unsigned int *)(v13 + 16);
      if ( (unsigned int)v9 < (unsigned int)v22 )
        break;
    }
LABEL_44:
    if ( ++v21 >= v35 )
      goto LABEL_50;
  }
  v23 = (unsigned int)v9;
  v24 = *(_DWORD *)(v9 + v13) - 64;
  if ( v24 )
  {
    v9 = (unsigned int)(v24 - 1);
    if ( (_DWORD)v9 )
    {
      if ( (_DWORD)v9 == 1 )
      {
        v9 = v23 + 40;
        if ( v23 + 40 <= v22 )
        {
          if ( *(_DWORD *)(v23 + v13 + 12) )
            v20 = (char *)(v23 + v13 + 32);
          v15 = *(_BYTE **)(v23 + v13 + 24);
          goto LABEL_49;
        }
      }
    }
    else
    {
      v9 = v23 + 56;
      if ( v23 + 56 <= v22 )
      {
        v34 = 1;
        if ( *(_BYTE *)(v23 + v13 + 10) )
          v20 = (char *)(v23 + v13 + 24);
        v14 = *(_BYTE *)(v23 + v13 + 8);
        v15 = *(_BYTE **)(v23 + v13 + 16);
        v16 = *(_BYTE *)(v23 + v13 + 9);
      }
    }
    goto LABEL_43;
  }
  v9 = v23 + 40;
  if ( v23 + 40 > v22 )
  {
LABEL_43:
    if ( v34 )
      goto LABEL_50;
    goto LABEL_44;
  }
  if ( *(_BYTE *)(v23 + v13 + 10) )
    v20 = (char *)(v23 + v13 + 24);
  v15 = *(_BYTE **)(v23 + v13 + 16);
LABEL_49:
  v16 = *(_BYTE *)(v23 + v13 + 9);
  v14 = *(_BYTE *)(v23 + v13 + 8);
LABEL_50:
  if ( v20 )
  {
    v25 = *v20;
    v18 = 0;
LABEL_53:
    LOBYTE(v9) = v25 - 8;
    if ( (v9 & 0x5D) == 0 )
    {
      if ( *(_BYTE *)(v13 + 3) == 1 || !v15 || !v16 )
        goto LABEL_72;
      v26 = 0;
      v9 = (unsigned __int64)&v15[v16];
      v27 = v15 + 8;
      if ( (unsigned __int8)((*v15 & 0x7F) - 114) <= 1u )
      {
        if ( (unsigned __int64)v27 <= v9 )
        {
          v26 = 1;
          v18 = v15[2];
          v17 = v15[1] & 0xF;
          v19 = v15[3];
        }
      }
      else
      {
        if ( (unsigned __int64)v27 <= v9 )
        {
          v17 = v15[2] & 0xF;
          v28 = v16;
          if ( (unsigned int)(unsigned __int8)v15[7] + 8 <= v16 )
            v28 = (unsigned __int8)v15[7] + 8;
          v9 = (unsigned __int64)(v15 + 13);
          v29 = (unsigned __int64)&v15[v28];
          if ( (unsigned __int64)(v15 + 13) > v29 )
            v33 = 0;
          else
            v33 = v15[12];
          if ( (unsigned __int64)(v15 + 14) <= v29 )
            v19 = *(_BYTE *)v9;
          v26 = 1;
        }
        v18 = v33;
      }
      if ( v26 )
      {
        LOBYTE(v2) = v18;
        v30 = v19;
      }
      else
      {
LABEL_72:
        v17 = 0;
        v30 = 0;
      }
      McTemplateK0pduuuuup_EtwWriteTransfer(
        v9,
        v13,
        &v36,
        a2,
        *(_DWORD *)(a2 + 48),
        *(_BYTE *)(v13 + 3),
        v14,
        v17,
        v2,
        v30,
        a2);
    }
  }
LABEL_77:
  IofCompleteRequest((PIRP)a2, 0);
  return v4;
}
