/*
 * XREFs of NvmeAdapterSetDevicePowerCompletionRoutine @ 0x1401312A0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x140052DF0 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140052EC8 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x1400569AC (McTemplateK0pqd_EtwWriteTransfer.c)
 *     GetNvmeAdapter @ 0x14006B1A0 (GetNvmeAdapter.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 */

void __fastcall NvmeAdapterSetDevicePowerCompletionRoutine(__int64 a1, __int64 a2, __int64 a3, IRP *a4, int *a5)
{
  PEX_RUNDOWN_REF_CACHE_AWARE *NvmeAdapter; // rax
  __int64 v7; // r9
  PEX_RUNDOWN_REF_CACHE_AWARE *v8; // rbp
  PEX_RUNDOWN_REF_CACHE_AWARE v9; // rdx
  int v10; // ecx
  int v11; // r8d
  int v12; // ebx
  bool v13; // zf
  int v14; // ecx
  unsigned __int64 v15; // rcx
  __int64 CurrentStackLocation; // rdx
  int *Information; // rax
  const EVENT_DESCRIPTOR *v18; // rdx
  unsigned __int64 v19; // rdx
  char v20; // r14
  _BYTE *v21; // r9
  unsigned __int8 v22; // r10
  char v23; // si
  char v24; // r11
  char v25; // r15
  char *v26; // r11
  unsigned int v27; // r13d
  unsigned int *v28; // r12
  __int64 v29; // rax
  unsigned __int64 v30; // rbp
  char v31; // cl
  char v32; // r8
  _BYTE *v33; // rax
  unsigned int v34; // eax
  char v35; // al
  char v36; // [rsp+60h] [rbp-68h]
  char v37; // [rsp+61h] [rbp-67h]
  PEX_RUNDOWN_REF_CACHE_AWARE *v38; // [rsp+68h] [rbp-60h]
  unsigned int v39; // [rsp+70h] [rbp-58h]
  GUID v40; // [rsp+78h] [rbp-50h] BYREF

  NvmeAdapter = (PEX_RUNDOWN_REF_CACHE_AWARE *)GetNvmeAdapter(a1);
  v38 = NvmeAdapter;
  v8 = NvmeAdapter;
  v9 = NvmeAdapter[20];
  v10 = *((_DWORD *)v9 + 19);
  if ( v11 == 1 )
  {
    *((_DWORD *)v9 + 19) = v10 & 0xFFFFFFFD;
    *((_DWORD *)NvmeAdapter[20] + 19) &= ~0x20u;
    return;
  }
  *((_DWORD *)v9 + 19) = v10 & 0xFFFFFFFB;
  v12 = 0;
  v13 = StorEtwLoggingEnabled == 0;
  v14 = *a5;
  *(_BYTE *)(v7 + 141) = -84;
  *(_DWORD *)(v7 + 48) = v14;
  if ( v13 )
    goto LABEL_69;
  v40 = 0LL;
  IoGetActivityIdIrp(a4, &v40);
  CurrentStackLocation = (__int64)a4->Tail.Overlay.CurrentStackLocation;
  if ( *(_BYTE *)CurrentStackLocation == 14 )
  {
    if ( (byte_140171462 & 8) == 0 )
      goto LABEL_69;
    v18 = &EventNonReadWriteRequestComplete;
    goto LABEL_68;
  }
  if ( *(_BYTE *)CurrentStackLocation != 15 )
  {
    if ( *(_BYTE *)CurrentStackLocation != 27 )
      goto LABEL_69;
    if ( *(_BYTE *)(CurrentStackLocation + 1) == 7 && !*(_DWORD *)(CurrentStackLocation + 8) )
    {
      if ( (byte_140171462 & 0x40) != 0 )
      {
        Information = (int *)a4->IoStatus.Information;
        if ( Information )
          v12 = *Information;
        McTemplateK0pqd_EtwWriteTransfer(v15, CurrentStackLocation, &v40, a4, v12, a4->IoStatus.Status);
      }
      goto LABEL_69;
    }
    if ( (byte_140171462 & 0x20) == 0 )
      goto LABEL_69;
    v18 = &EventPnpRequestComplete;
LABEL_68:
    McTemplateK0pd_EtwWriteTransfer(v15, v18, &v40, a4, a4->IoStatus.Status);
    goto LABEL_69;
  }
  if ( byte_140171461 >= 0 )
    goto LABEL_69;
  v19 = *(_QWORD *)(CurrentStackLocation + 8);
  v20 = 0;
  v21 = 0LL;
  v36 = 0;
  v22 = 0;
  v23 = 0;
  v24 = 0;
  v25 = 0;
  if ( *(_BYTE *)(v19 + 2) != 40 )
  {
    v31 = *(_BYTE *)(v19 + 72);
    v21 = *(_BYTE **)(v19 + 32);
    v22 = *(_BYTE *)(v19 + 11);
    v20 = *(_BYTE *)(v19 + 4);
    if ( !*(_BYTE *)(v19 + 2) )
      goto LABEL_45;
    goto LABEL_69;
  }
  v26 = 0LL;
  v37 = 0;
  if ( *(_DWORD *)(v19 + 20) )
    goto LABEL_69;
  v27 = 0;
  v39 = *(_DWORD *)(v19 + 56);
  if ( !v39 )
    goto LABEL_42;
  v28 = (unsigned int *)(v19 + 120);
  while ( 1 )
  {
    v29 = *v28;
    if ( (unsigned int)v29 >= 0x80 )
    {
      v30 = *(unsigned int *)(v19 + 16);
      if ( (unsigned int)v29 < (unsigned int)v30 )
        break;
    }
LABEL_35:
    ++v27;
    ++v28;
    if ( v27 >= v39 )
      goto LABEL_41;
  }
  if ( *(_DWORD *)(v29 + v19) != 64 )
  {
    v15 = (unsigned int)(*(_DWORD *)(v29 + v19) - 65);
    if ( *(_DWORD *)(v29 + v19) == 65 )
    {
      v15 = v29 + 56;
      if ( v29 + 56 <= v30 )
      {
        v37 = 1;
        if ( *(_BYTE *)(v29 + v19 + 10) )
          v26 = (char *)(v29 + v19 + 24);
        v20 = *(_BYTE *)(v29 + v19 + 8);
        v21 = *(_BYTE **)(v29 + v19 + 16);
        v22 = *(_BYTE *)(v29 + v19 + 9);
      }
    }
    else if ( *(_DWORD *)(v29 + v19) == 66 )
    {
      v15 = v29 + 40;
      if ( v29 + 40 <= v30 )
      {
        if ( *(_DWORD *)(v29 + v19 + 12) )
          v26 = (char *)(v29 + v19 + 32);
        v21 = *(_BYTE **)(v29 + v19 + 24);
        goto LABEL_40;
      }
    }
    goto LABEL_34;
  }
  v15 = v29 + 40;
  if ( v29 + 40 > v30 )
  {
LABEL_34:
    if ( v37 )
      goto LABEL_41;
    goto LABEL_35;
  }
  if ( *(_BYTE *)(v29 + v19 + 10) )
    v26 = (char *)(v29 + v19 + 24);
  v21 = *(_BYTE **)(v29 + v19 + 16);
LABEL_40:
  v22 = *(_BYTE *)(v29 + v19 + 9);
  v20 = *(_BYTE *)(v29 + v19 + 8);
LABEL_41:
  v8 = v38;
LABEL_42:
  if ( v26 )
  {
    v31 = *v26;
    v24 = 0;
LABEL_45:
    LOBYTE(v15) = v31 - 8;
    if ( (v15 & 0x5D) == 0 )
    {
      v32 = *(_BYTE *)(v19 + 3);
      if ( v32 == 1 || !v21 || !v22 )
        goto LABEL_64;
      LOBYTE(v19) = 0;
      v15 = (unsigned __int64)&v21[v22];
      v33 = v21 + 8;
      if ( (unsigned __int8)((*v21 & 0x7F) - 114) <= 1u )
      {
        if ( (unsigned __int64)v33 <= v15 )
        {
          LOBYTE(v19) = 1;
          v24 = v21[2];
          v23 = v21[1] & 0xF;
          v25 = v21[3];
        }
      }
      else
      {
        if ( (unsigned __int64)v33 <= v15 )
        {
          v23 = v21[2] & 0xF;
          v34 = v22;
          if ( (unsigned int)(unsigned __int8)v21[7] + 8 <= v22 )
            v34 = (unsigned __int8)v21[7] + 8;
          v15 = (unsigned __int64)(v21 + 13);
          v19 = (unsigned __int64)&v21[v34];
          if ( (unsigned __int64)(v21 + 13) > v19 )
            v36 = 0;
          else
            v36 = v21[12];
          if ( (unsigned __int64)(v21 + 14) <= v19 )
            v25 = *(_BYTE *)v15;
          LOBYTE(v19) = 1;
        }
        v24 = v36;
      }
      if ( (_BYTE)v19 )
      {
        LOBYTE(v12) = v24;
        v35 = v25;
      }
      else
      {
LABEL_64:
        v23 = 0;
        v35 = 0;
      }
      McTemplateK0pduuuuup_EtwWriteTransfer(v15, v19, &v40, a4, a4->IoStatus.Status, v32, v20, v23, v12, v35, a4);
    }
  }
LABEL_69:
  IofCompleteRequest(a4, 0);
  ExReleaseRundownProtectionCacheAware(v8[19]);
}
