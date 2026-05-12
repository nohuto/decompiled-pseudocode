/*
 * XREFs of NvmeNamespaceRemoveDeviceIrp @ 0x14010C0D0
 * Callers:
 *     NvmeNamespacePnpIrp @ 0x140105C68 (NvmeNamespacePnpIrp.c)
 * Callees:
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x140052DF0 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140052EC8 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x1400569AC (McTemplateK0pqd_EtwWriteTransfer.c)
 *     NvmeNamespaceDeleteDeviceIrp @ 0x1400FD7E8 (NvmeNamespaceDeleteDeviceIrp.c)
 *     NvmeNamespaceDisableDeviceIrp @ 0x1400FE41C (NvmeNamespaceDisableDeviceIrp.c)
 *     NvmeNamespaceTerminateSystemThread @ 0x140114E48 (NvmeNamespaceTerminateSystemThread.c)
 *     NvmeNamespaceWaitForPendingRequestsDrain @ 0x14011536C (NvmeNamespaceWaitForPendingRequestsDrain.c)
 *     NvmeNamespaceDeregisterFromPoFx @ 0x140133000 (NvmeNamespaceDeregisterFromPoFx.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 */

__int64 __fastcall NvmeNamespaceRemoveDeviceIrp(__int64 a1, __int64 a2, _BYTE *a3)
{
  int v6; // ebx
  bool v7; // zf
  unsigned __int64 v8; // rcx
  __int64 v9; // rdx
  int *v10; // rax
  const EVENT_DESCRIPTOR *v11; // rdx
  unsigned __int64 v12; // rdx
  char v13; // r15
  _BYTE *v14; // r9
  unsigned __int8 v15; // r10
  char v16; // si
  char v17; // r11
  char v18; // r12
  char *v19; // r11
  char v20; // r13
  unsigned int v21; // r14d
  unsigned __int64 v22; // rbp
  __int64 v23; // r8
  int v24; // ecx
  char v25; // cl
  char v26; // r8
  _BYTE *v27; // rax
  unsigned int v28; // eax
  char v29; // al
  unsigned __int64 v31; // r8
  int v32; // [rsp+20h] [rbp-98h]
  char v33; // [rsp+60h] [rbp-58h]
  unsigned int v34; // [rsp+64h] [rbp-54h]
  GUID v35; // [rsp+68h] [rbp-50h] BYREF

  if ( *(_DWORD *)(a1 + 96) != 6 )
  {
    v31 = *(_QWORD *)(a1 + 112) & 0xFFFFFFFFFFFFFBFFuLL;
    *(_QWORD *)(a1 + 112) = v31;
    LOBYTE(v31) = (v31 & 2) == 0;
    NvmeNamespaceWaitForPendingRequestsDrain(a1, a2, v31);
    NvmeNamespaceTerminateSystemThread(a1);
    NvmeNamespaceDeregisterFromPoFx(a1);
    if ( (*(_BYTE *)(a1 + 112) & 2) != 0 )
      return NvmeNamespaceDisableDeviceIrp(a1, a2, a3);
    else
      return NvmeNamespaceDeleteDeviceIrp(a1, a2, a3);
  }
  v6 = 0;
  *(_BYTE *)(a2 + 141) = -84;
  v7 = StorEtwLoggingEnabled == 0;
  *(_DWORD *)(a2 + 48) = -1073741810;
  if ( v7 )
    goto LABEL_66;
  v35 = 0LL;
  IoGetActivityIdIrp(a2, &v35);
  v9 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)v9 == 14 )
  {
    if ( (byte_140171462 & 8) == 0 )
      goto LABEL_66;
    v8 = *(unsigned int *)(a2 + 48);
    v11 = &EventNonReadWriteRequestComplete;
    v32 = *(_DWORD *)(a2 + 48);
    goto LABEL_65;
  }
  if ( *(_BYTE *)v9 != 15 )
  {
    if ( *(_BYTE *)v9 != 27 )
      goto LABEL_66;
    if ( *(_BYTE *)(v9 + 1) == 7 && !*(_DWORD *)(v9 + 8) )
    {
      if ( (byte_140171462 & 0x40) != 0 )
      {
        v10 = *(int **)(a2 + 56);
        if ( v10 )
          v6 = *v10;
        McTemplateK0pqd_EtwWriteTransfer(v8, v9, &v35, a2, v6, *(_DWORD *)(a2 + 48));
      }
      goto LABEL_66;
    }
    if ( (byte_140171462 & 0x20) == 0 )
      goto LABEL_66;
    v11 = &EventPnpRequestComplete;
    v32 = *(_DWORD *)(a2 + 48);
LABEL_65:
    McTemplateK0pd_EtwWriteTransfer(v8, v11, &v35, a2, v32);
    goto LABEL_66;
  }
  if ( byte_140171461 >= 0 )
    goto LABEL_66;
  v12 = *(_QWORD *)(v9 + 8);
  v13 = 0;
  v14 = 0LL;
  v33 = 0;
  v15 = 0;
  v16 = 0;
  v17 = 0;
  v18 = 0;
  if ( *(_BYTE *)(v12 + 2) != 40 )
  {
    v25 = *(_BYTE *)(v12 + 72);
    v14 = *(_BYTE **)(v12 + 32);
    v15 = *(_BYTE *)(v12 + 11);
    v13 = *(_BYTE *)(v12 + 4);
    if ( !*(_BYTE *)(v12 + 2) )
      goto LABEL_42;
    goto LABEL_66;
  }
  v19 = 0LL;
  v20 = 0;
  if ( *(_DWORD *)(v12 + 20) )
    goto LABEL_66;
  v21 = 0;
  v34 = *(_DWORD *)(v12 + 56);
  if ( !v34 )
    goto LABEL_39;
  while ( 1 )
  {
    v8 = *(unsigned int *)(v12 + 4LL * v21 + 120);
    if ( (unsigned int)v8 >= 0x80 )
    {
      v22 = *(unsigned int *)(v12 + 16);
      if ( (unsigned int)v8 < (unsigned int)v22 )
        break;
    }
LABEL_33:
    if ( ++v21 >= v34 )
      goto LABEL_39;
  }
  v23 = (unsigned int)v8;
  v24 = *(_DWORD *)(v8 + v12) - 64;
  if ( v24 )
  {
    v8 = (unsigned int)(v24 - 1);
    if ( (_DWORD)v8 )
    {
      if ( (_DWORD)v8 == 1 )
      {
        v8 = v23 + 40;
        if ( v23 + 40 <= v22 )
        {
          if ( *(_DWORD *)(v23 + v12 + 12) )
            v19 = (char *)(v23 + v12 + 32);
          v14 = *(_BYTE **)(v23 + v12 + 24);
          goto LABEL_38;
        }
      }
    }
    else
    {
      v8 = v23 + 56;
      if ( v23 + 56 <= v22 )
      {
        v20 = 1;
        if ( *(_BYTE *)(v23 + v12 + 10) )
          v19 = (char *)(v23 + v12 + 24);
        v13 = *(_BYTE *)(v23 + v12 + 8);
        v14 = *(_BYTE **)(v23 + v12 + 16);
        v15 = *(_BYTE *)(v23 + v12 + 9);
      }
    }
    goto LABEL_32;
  }
  v8 = v23 + 40;
  if ( v23 + 40 > v22 )
  {
LABEL_32:
    if ( v20 )
      goto LABEL_39;
    goto LABEL_33;
  }
  if ( *(_BYTE *)(v23 + v12 + 10) )
    v19 = (char *)(v23 + v12 + 24);
  v14 = *(_BYTE **)(v23 + v12 + 16);
LABEL_38:
  v15 = *(_BYTE *)(v23 + v12 + 9);
  v13 = *(_BYTE *)(v23 + v12 + 8);
LABEL_39:
  if ( v19 )
  {
    v25 = *v19;
    v17 = 0;
LABEL_42:
    LOBYTE(v8) = v25 - 8;
    if ( (v8 & 0x5D) == 0 )
    {
      v26 = *(_BYTE *)(v12 + 3);
      if ( v26 == 1 || !v14 || !v15 )
        goto LABEL_61;
      LOBYTE(v12) = 0;
      v8 = (unsigned __int64)&v14[v15];
      v27 = v14 + 8;
      if ( (unsigned __int8)((*v14 & 0x7F) - 114) <= 1u )
      {
        if ( (unsigned __int64)v27 <= v8 )
        {
          LOBYTE(v12) = 1;
          v17 = v14[2];
          v16 = v14[1] & 0xF;
          v18 = v14[3];
        }
      }
      else
      {
        if ( (unsigned __int64)v27 <= v8 )
        {
          v16 = v14[2] & 0xF;
          v28 = v15;
          if ( (unsigned int)(unsigned __int8)v14[7] + 8 <= v15 )
            v28 = (unsigned __int8)v14[7] + 8;
          v8 = (unsigned __int64)(v14 + 13);
          v12 = (unsigned __int64)&v14[v28];
          if ( (unsigned __int64)(v14 + 13) > v12 )
            v33 = 0;
          else
            v33 = v14[12];
          if ( (unsigned __int64)(v14 + 14) <= v12 )
            v18 = *(_BYTE *)v8;
          LOBYTE(v12) = 1;
        }
        v17 = v33;
      }
      if ( (_BYTE)v12 )
      {
        LOBYTE(v6) = v17;
        v29 = v18;
      }
      else
      {
LABEL_61:
        v16 = 0;
        v29 = 0;
      }
      McTemplateK0pduuuuup_EtwWriteTransfer(v8, v12, &v35, a2, *(_DWORD *)(a2 + 48), v26, v13, v16, v6, v29, a2);
    }
  }
LABEL_66:
  IofCompleteRequest((PIRP)a2, 0);
  return 3221225486LL;
}
