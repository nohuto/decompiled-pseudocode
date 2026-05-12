/*
 * XREFs of NvmeAdapterQuerySystemPowerIrp @ 0x140130D58
 * Callers:
 *     NvmeAdapterQueryPowerIrp @ 0x1401308A0 (NvmeAdapterQueryPowerIrp.c)
 * Callees:
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x140052DF0 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140052EC8 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x1400569AC (McTemplateK0pqd_EtwWriteTransfer.c)
 *     NvmeAdapterAcquireRemoveLock @ 0x1400CC668 (NvmeAdapterAcquireRemoveLock.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 */

__int64 __fastcall NvmeAdapterQuerySystemPowerIrp(__int64 a1, __int64 a2)
{
  int v4; // eax
  int v5; // ebx
  unsigned int v6; // ebp
  bool v7; // zf
  unsigned __int64 v8; // rcx
  __int64 v9; // rdx
  int *v10; // rax
  const EVENT_DESCRIPTOR *v11; // rdx
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
  __int64 v30; // rax
  __int64 v31; // rax
  NTSTATUS v32; // edi
  char v33; // [rsp+60h] [rbp-68h]
  char v34; // [rsp+61h] [rbp-67h]
  int v35; // [rsp+64h] [rbp-64h]
  unsigned int v36; // [rsp+68h] [rbp-60h]
  GUID v37; // [rsp+70h] [rbp-58h] BYREF

  v4 = NvmeAdapterAcquireRemoveLock(a1);
  v5 = 0;
  v35 = v4;
  v6 = v4;
  if ( v4 >= 0 )
  {
    *(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) |= 1u;
    v30 = *(_QWORD *)(a2 + 184);
    *(_OWORD *)(v30 - 72) = *(_OWORD *)v30;
    *(_OWORD *)(v30 - 56) = *(_OWORD *)(v30 + 16);
    *(_OWORD *)(v30 - 40) = *(_OWORD *)(v30 + 32);
    *(_QWORD *)(v30 - 24) = *(_QWORD *)(v30 + 48);
    *(_BYTE *)(v30 - 69) = 0;
    v31 = *(_QWORD *)(a2 + 184);
    *(_QWORD *)(v31 - 16) = NvmeAdapterQuerySystemPowerCompletionRoutine;
    *(_QWORD *)(v31 - 8) = 0LL;
    *(_BYTE *)(v31 - 69) = -32;
    v32 = IofCallDriver(*(PDEVICE_OBJECT *)(a1 + 24), (PIRP)a2);
    if ( v32 < 0 )
      ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 152));
    return (unsigned int)v32;
  }
  v7 = StorEtwLoggingEnabled == 0;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = v4;
  if ( v7 )
    goto LABEL_68;
  v37 = 0LL;
  IoGetActivityIdIrp(a2, &v37);
  v9 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)v9 == 14 )
  {
    if ( (byte_140171462 & 8) == 0 )
      goto LABEL_68;
    v11 = &EventNonReadWriteRequestComplete;
    goto LABEL_67;
  }
  if ( *(_BYTE *)v9 != 15 )
  {
    if ( *(_BYTE *)v9 != 27 )
      goto LABEL_68;
    if ( *(_BYTE *)(v9 + 1) == 7 && !*(_DWORD *)(v9 + 8) )
    {
      if ( (byte_140171462 & 0x40) != 0 )
      {
        v10 = *(int **)(a2 + 56);
        if ( v10 )
          v5 = *v10;
        McTemplateK0pqd_EtwWriteTransfer(v8, v9, &v37, a2, v5, *(_DWORD *)(a2 + 48));
      }
      goto LABEL_68;
    }
    if ( (byte_140171462 & 0x20) == 0 )
      goto LABEL_68;
    v11 = &EventPnpRequestComplete;
LABEL_67:
    McTemplateK0pd_EtwWriteTransfer(v8, v11, &v37, a2, *(_DWORD *)(a2 + 48));
    goto LABEL_68;
  }
  if ( byte_140171461 >= 0 )
    goto LABEL_68;
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
    v24 = *(_BYTE *)(v12 + 72);
    v14 = *(_BYTE **)(v12 + 32);
    v15 = *(_BYTE *)(v12 + 11);
    v13 = *(_BYTE *)(v12 + 4);
    if ( !*(_BYTE *)(v12 + 2) )
      goto LABEL_44;
    goto LABEL_68;
  }
  v19 = 0LL;
  v34 = 0;
  if ( *(_DWORD *)(v12 + 20) )
    goto LABEL_68;
  v20 = 0;
  v36 = *(_DWORD *)(v12 + 56);
  if ( !v36 )
    goto LABEL_41;
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
LABEL_34:
    ++v20;
    ++v21;
    if ( v20 >= v36 )
      goto LABEL_40;
  }
  if ( *(_DWORD *)(v22 + v12) != 64 )
  {
    v8 = (unsigned int)(*(_DWORD *)(v22 + v12) - 65);
    if ( *(_DWORD *)(v22 + v12) == 65 )
    {
      v8 = v22 + 56;
      if ( v22 + 56 <= v23 )
      {
        v34 = 1;
        if ( *(_BYTE *)(v22 + v12 + 10) )
          v19 = (char *)(v22 + v12 + 24);
        v13 = *(_BYTE *)(v22 + v12 + 8);
        v14 = *(_BYTE **)(v22 + v12 + 16);
        v15 = *(_BYTE *)(v22 + v12 + 9);
      }
    }
    else if ( *(_DWORD *)(v22 + v12) == 66 )
    {
      v8 = v22 + 40;
      if ( v22 + 40 <= v23 )
      {
        if ( *(_DWORD *)(v22 + v12 + 12) )
          v19 = (char *)(v22 + v12 + 32);
        v14 = *(_BYTE **)(v22 + v12 + 24);
        goto LABEL_39;
      }
    }
    goto LABEL_33;
  }
  v8 = v22 + 40;
  if ( v22 + 40 > v23 )
  {
LABEL_33:
    if ( v34 )
      goto LABEL_40;
    goto LABEL_34;
  }
  if ( *(_BYTE *)(v22 + v12 + 10) )
    v19 = (char *)(v22 + v12 + 24);
  v14 = *(_BYTE **)(v22 + v12 + 16);
LABEL_39:
  v15 = *(_BYTE *)(v22 + v12 + 9);
  v13 = *(_BYTE *)(v22 + v12 + 8);
LABEL_40:
  v6 = v35;
LABEL_41:
  if ( v19 )
  {
    v24 = *v19;
    v17 = 0;
LABEL_44:
    LOBYTE(v8) = v24 - 8;
    if ( (v8 & 0x5D) == 0 )
    {
      v25 = *(_BYTE *)(v12 + 3);
      if ( v25 == 1 || !v14 || !v15 )
        goto LABEL_63;
      LOBYTE(v12) = 0;
      v8 = (unsigned __int64)&v14[v15];
      v26 = v14 + 8;
      if ( (unsigned __int8)((*v14 & 0x7F) - 114) <= 1u )
      {
        if ( (unsigned __int64)v26 <= v8 )
        {
          LOBYTE(v12) = 1;
          v17 = v14[2];
          v16 = v14[1] & 0xF;
          v18 = v14[3];
        }
      }
      else
      {
        if ( (unsigned __int64)v26 <= v8 )
        {
          v16 = v14[2] & 0xF;
          v27 = v15;
          if ( (unsigned int)(unsigned __int8)v14[7] + 8 <= v15 )
            v27 = (unsigned __int8)v14[7] + 8;
          v8 = (unsigned __int64)(v14 + 13);
          v12 = (unsigned __int64)&v14[v27];
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
        LOBYTE(v5) = v17;
        v28 = v18;
      }
      else
      {
LABEL_63:
        v16 = 0;
        v28 = 0;
      }
      McTemplateK0pduuuuup_EtwWriteTransfer(v8, v12, &v37, a2, *(_DWORD *)(a2 + 48), v25, v13, v16, v5, v28, a2);
    }
  }
LABEL_68:
  IofCompleteRequest((PIRP)a2, 0);
  return v6;
}
