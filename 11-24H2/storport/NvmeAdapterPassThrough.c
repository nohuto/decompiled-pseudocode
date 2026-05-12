/*
 * XREFs of NvmeAdapterPassThrough @ 0x14019A9EC
 * Callers:
 *     NvmeAdapterDeviceControlIrp @ 0x140195438 (NvmeAdapterDeviceControlIrp.c)
 * Callees:
 *     IsScsiPassThroughEx @ 0x140032488 (IsScsiPassThroughEx.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x140052DF0 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140052EC8 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x1400569AC (McTemplateK0pqd_EtwWriteTransfer.c)
 *     NvmeControllerGetNamespace @ 0x1400EEC74 (NvmeControllerGetNamespace.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 *     PortPassThroughExSendAsync @ 0x1401B5774 (PortPassThroughExSendAsync.c)
 *     PortPassThroughGetAddress @ 0x1401B85E0 (PortPassThroughGetAddress.c)
 */

__int64 __fastcall NvmeAdapterPassThrough(__int64 a1, __int64 a2)
{
  int v4; // ebx
  unsigned int v5; // esi
  char *v6; // rdx
  char *v7; // rax
  _BYTE *v8; // rdx
  char v9; // si
  __int64 Namespace; // rax
  __int64 v11; // r9
  __int64 v12; // rdx
  bool v13; // zf
  unsigned __int64 v14; // rcx
  __int64 v15; // rdx
  int *v16; // rax
  const EVENT_DESCRIPTOR *v17; // rdx
  unsigned __int64 v18; // rdx
  char v19; // r12
  _BYTE *v20; // r9
  unsigned __int8 v21; // r10
  char v22; // bp
  char v23; // r11
  char v24; // r13
  char *v25; // r11
  unsigned int v26; // r15d
  unsigned __int64 v27; // r14
  __int64 v28; // r8
  int v29; // ecx
  char v30; // cl
  char v31; // r8
  _BYTE *v32; // rax
  unsigned int v33; // eax
  char v34; // al
  int v36; // ecx
  int v37; // eax
  int v38; // [rsp+20h] [rbp-98h]
  char v39; // [rsp+60h] [rbp-58h]
  char v40; // [rsp+61h] [rbp-57h]
  unsigned int v41; // [rsp+64h] [rbp-54h] BYREF
  GUID v42; // [rsp+68h] [rbp-50h] BYREF

  v4 = 0;
  v41 = 0;
  if ( (int)PortPassThroughGetAddress(a2, &v41, (char *)&v41 + 1, (char *)&v41 + 2) < 0 )
    goto LABEL_2;
  if ( IsScsiPassThroughEx(a2) )
  {
    v7 = v6 + 56;
    v8 = v6 + 57;
  }
  else
  {
    v7 = v6 + 36;
    v8 = v6 + 37;
  }
  v9 = *v7;
  if ( DisableIEEE1667 && (v9 == -94 || v9 == -75) && *v8 == 0xEE )
  {
LABEL_10:
    v5 = -1073741637;
    goto LABEL_18;
  }
  Namespace = NvmeControllerGetNamespace(*(_QWORD *)(a1 + 1136), BYTE2(v41));
  v11 = Namespace;
  if ( Namespace )
  {
    if ( v9 != 72 || (*(_BYTE *)(Namespace + 112) & 0x40) == 0 || g_InWinPE )
    {
      v12 = *(_QWORD *)(a2 + 184);
      if ( *(_BYTE *)(v12 + 1) || (*(_BYTE *)(Namespace + 112) & 8) == 0 )
      {
        v36 = *(_DWORD *)(a1 + 204);
        v37 = *(_DWORD *)(a1 + 200);
        *(_BYTE *)(v12 + 3) |= 1u;
        PortPassThroughExSendAsync(*(_QWORD *)(v11 + 8), a2, v36, v37, (__int64)NvmeAsyncScsiPassThroughCompletion, v11);
        return 259LL;
      }
      v5 = -1073741808;
      goto LABEL_18;
    }
    goto LABEL_10;
  }
LABEL_2:
  v5 = -1073741810;
LABEL_18:
  v13 = StorEtwLoggingEnabled == 0;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = v5;
  if ( v13 )
    goto LABEL_82;
  v42 = 0LL;
  IoGetActivityIdIrp(a2, &v42);
  v15 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)v15 == 14 )
  {
    if ( (byte_140171462 & 8) == 0 )
      goto LABEL_82;
    v38 = *(_DWORD *)(a2 + 48);
    v17 = &EventNonReadWriteRequestComplete;
    goto LABEL_81;
  }
  if ( *(_BYTE *)v15 != 15 )
  {
    if ( *(_BYTE *)v15 != 27 )
      goto LABEL_82;
    if ( *(_BYTE *)(v15 + 1) == 7 && !*(_DWORD *)(v15 + 8) )
    {
      if ( (byte_140171462 & 0x40) != 0 )
      {
        v16 = *(int **)(a2 + 56);
        if ( v16 )
          v4 = *v16;
        McTemplateK0pqd_EtwWriteTransfer(v14, v15, &v42, a2, v4, *(_DWORD *)(a2 + 48));
      }
      goto LABEL_82;
    }
    if ( (byte_140171462 & 0x20) == 0 )
      goto LABEL_82;
    v17 = &EventPnpRequestComplete;
    v38 = *(_DWORD *)(a2 + 48);
LABEL_81:
    McTemplateK0pd_EtwWriteTransfer(v14, v17, &v42, a2, v38);
    goto LABEL_82;
  }
  if ( byte_140171461 >= 0 )
    goto LABEL_82;
  v18 = *(_QWORD *)(v15 + 8);
  v19 = 0;
  v20 = 0LL;
  v39 = 0;
  v21 = 0;
  v22 = 0;
  v23 = 0;
  v24 = 0;
  if ( *(_BYTE *)(v18 + 2) != 40 )
  {
    v30 = *(_BYTE *)(v18 + 72);
    v20 = *(_BYTE **)(v18 + 32);
    v21 = *(_BYTE *)(v18 + 11);
    v19 = *(_BYTE *)(v18 + 4);
    if ( !*(_BYTE *)(v18 + 2) )
      goto LABEL_58;
    goto LABEL_82;
  }
  v25 = 0LL;
  v40 = 0;
  if ( *(_DWORD *)(v18 + 20) )
    goto LABEL_82;
  v26 = 0;
  v41 = *(_DWORD *)(v18 + 56);
  if ( !v41 )
    goto LABEL_55;
  while ( 1 )
  {
    v14 = *(unsigned int *)(v18 + 4LL * v26 + 120);
    if ( (unsigned int)v14 >= 0x80 )
    {
      v27 = *(unsigned int *)(v18 + 16);
      if ( (unsigned int)v14 < (unsigned int)v27 )
        break;
    }
LABEL_49:
    if ( ++v26 >= v41 )
      goto LABEL_55;
  }
  v28 = (unsigned int)v14;
  v29 = *(_DWORD *)(v14 + v18) - 64;
  if ( v29 )
  {
    v14 = (unsigned int)(v29 - 1);
    if ( (_DWORD)v14 )
    {
      if ( (_DWORD)v14 == 1 )
      {
        v14 = v28 + 40;
        if ( v28 + 40 <= v27 )
        {
          if ( *(_DWORD *)(v28 + v18 + 12) )
            v25 = (char *)(v28 + v18 + 32);
          v20 = *(_BYTE **)(v28 + v18 + 24);
          goto LABEL_54;
        }
      }
    }
    else
    {
      v14 = v28 + 56;
      if ( v28 + 56 <= v27 )
      {
        v40 = 1;
        if ( *(_BYTE *)(v28 + v18 + 10) )
          v25 = (char *)(v28 + v18 + 24);
        v19 = *(_BYTE *)(v28 + v18 + 8);
        v20 = *(_BYTE **)(v28 + v18 + 16);
        v21 = *(_BYTE *)(v28 + v18 + 9);
      }
    }
    goto LABEL_48;
  }
  v14 = v28 + 40;
  if ( v28 + 40 > v27 )
  {
LABEL_48:
    if ( v40 )
      goto LABEL_55;
    goto LABEL_49;
  }
  if ( *(_BYTE *)(v28 + v18 + 10) )
    v25 = (char *)(v28 + v18 + 24);
  v20 = *(_BYTE **)(v28 + v18 + 16);
LABEL_54:
  v21 = *(_BYTE *)(v28 + v18 + 9);
  v19 = *(_BYTE *)(v28 + v18 + 8);
LABEL_55:
  if ( v25 )
  {
    v30 = *v25;
    v23 = 0;
LABEL_58:
    LOBYTE(v14) = v30 - 8;
    if ( (v14 & 0x5D) == 0 )
    {
      v31 = *(_BYTE *)(v18 + 3);
      if ( v31 == 1 || !v20 || !v21 )
        goto LABEL_77;
      LOBYTE(v18) = 0;
      v14 = (unsigned __int64)&v20[v21];
      v32 = v20 + 8;
      if ( (unsigned __int8)((*v20 & 0x7F) - 114) <= 1u )
      {
        if ( (unsigned __int64)v32 <= v14 )
        {
          LOBYTE(v18) = 1;
          v23 = v20[2];
          v22 = v20[1] & 0xF;
          v24 = v20[3];
        }
      }
      else
      {
        if ( (unsigned __int64)v32 <= v14 )
        {
          v22 = v20[2] & 0xF;
          v33 = v21;
          if ( (unsigned int)(unsigned __int8)v20[7] + 8 <= v21 )
            v33 = (unsigned __int8)v20[7] + 8;
          v14 = (unsigned __int64)(v20 + 13);
          v18 = (unsigned __int64)&v20[v33];
          if ( (unsigned __int64)(v20 + 13) > v18 )
            v39 = 0;
          else
            v39 = v20[12];
          if ( (unsigned __int64)(v20 + 14) <= v18 )
            v24 = *(_BYTE *)v14;
          LOBYTE(v18) = 1;
        }
        v23 = v39;
      }
      if ( (_BYTE)v18 )
      {
        LOBYTE(v4) = v23;
        v34 = v24;
      }
      else
      {
LABEL_77:
        v22 = 0;
        v34 = 0;
      }
      McTemplateK0pduuuuup_EtwWriteTransfer(v14, v18, &v42, a2, *(_DWORD *)(a2 + 48), v31, v19, v22, v4, v34, a2);
    }
  }
LABEL_82:
  IofCompleteRequest((PIRP)a2, 0);
  return v5;
}
