/*
 * XREFs of NvmeNamespaceSetSystemPowerIrp @ 0x140135BF8
 * Callers:
 *     NvmeNamespaceSetPowerIrp @ 0x1401354D8 (NvmeNamespaceSetPowerIrp.c)
 * Callees:
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x140052DF0 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140052EC8 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x1400569AC (McTemplateK0pqd_EtwWriteTransfer.c)
 *     NvmeNamespaceAcquireRemoveLock @ 0x1400FB9D8 (NvmeNamespaceAcquireRemoveLock.c)
 *     NvmeSetSystemPowerState @ 0x140136C18 (NvmeSetSystemPowerState.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 */

__int64 __fastcall NvmeNamespaceSetSystemPowerIrp(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v5; // rdx
  POWER_STATE v6; // ebx
  REQUEST_POWER_COMPLETE *v7; // r14
  void *v8; // r15
  __int64 v9; // rcx
  int v10; // eax
  int v11; // eax
  int v12; // edi
  NTSTATUS v13; // eax
  __int64 v14; // rdx
  unsigned int v15; // ecx
  int v16; // r13d
  int v17; // eax
  __int64 v18; // rcx
  int v19; // eax
  unsigned int v20; // eax
  bool v21; // zf
  unsigned __int64 v22; // rcx
  __int64 v23; // rdx
  int *v24; // rax
  const EVENT_DESCRIPTOR *v25; // rdx
  unsigned __int64 v26; // rdx
  char v27; // r14
  _BYTE *v28; // r9
  unsigned __int8 v29; // r10
  char v30; // r11
  char v31; // r12
  char v32; // r15
  char *v33; // rbx
  unsigned int *v34; // r13
  __int64 v35; // rax
  unsigned __int64 v36; // rbp
  char v37; // cl
  char v38; // r8
  _BYTE *v39; // rax
  unsigned int v40; // eax
  char v41; // al
  PVOID Context; // [rsp+20h] [rbp-A8h]
  PIRP *Irp; // [rsp+28h] [rbp-A0h]
  char v45; // [rsp+60h] [rbp-68h]
  int v46; // [rsp+64h] [rbp-64h]
  int v47; // [rsp+68h] [rbp-60h]
  unsigned int v48; // [rsp+6Ch] [rbp-5Ch]
  GUID v49; // [rsp+70h] [rbp-58h] BYREF

  v2 = *(_QWORD *)(a2 + 184);
  v5 = *(int *)(v2 + 24);
  v6.SystemState = (_SYSTEM_POWER_STATE)DevicePowerStateTable[v5];
  if ( (*(_DWORD *)(v2 + 8) & 0x400000) != 0 && (_DWORD)v5 == 6 && v6.SystemState == PowerSystemSleeping3 )
    *(_DWORD *)(*(_QWORD *)(a1 + 128) + 80LL) |= 8u;
  NvmeSetSystemPowerState(*(_QWORD *)(a1 + 128) + 68LL, v5, *(unsigned int *)(*(_QWORD *)(a2 + 184) + 32LL));
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 128) + 80LL) & 1) != 0 )
  {
    v7 = (REQUEST_POWER_COMPLETE *)NvmeNamespaceSetDevicePowerDownCompletion;
    v8 = (void *)a2;
    *(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) |= 1u;
  }
  else
  {
    v7 = (REQUEST_POWER_COMPLETE *)NvmeNamespaceDeviceStackPowerUpCompletion;
    v8 = (void *)a1;
  }
  NvmeNamespaceAcquireRemoveLock(a1, a2);
  v9 = *(_QWORD *)(a1 + 128);
  v10 = *(_DWORD *)(v9 + 80);
  if ( v6.SystemState == PowerSystemWorking )
    v11 = v10 | 2;
  else
    v11 = v10 | 4;
  *(_DWORD *)(v9 + 80) = v11;
  v12 = 0;
  v13 = PoRequestPowerIrp(*(PDEVICE_OBJECT *)(a1 + 8), 2u, v6, v7, v8, 0LL);
  v14 = *(_QWORD *)(a1 + 128);
  v15 = 259;
  v16 = 0;
  if ( v13 != 259 )
    v16 = v13;
  v17 = *(_DWORD *)(v14 + 80);
  v46 = v16;
  if ( v16 < 0 )
  {
    *(_DWORD *)(v14 + 80) = v17 | 0x10;
    v18 = *(_QWORD *)(a1 + 128);
    v19 = *(_DWORD *)(v18 + 80);
    if ( v6.SystemState == PowerSystemWorking )
      v20 = v19 & 0xFFFFFFFD;
    else
      v20 = v19 & 0xFFFFFFFB;
    *(_DWORD *)(v18 + 80) = v20;
    ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 120));
  }
  else if ( (v17 & 1) != 0 )
  {
    return v15;
  }
  v21 = StorEtwLoggingEnabled == 0;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = v16;
  if ( v21 )
    goto LABEL_85;
  v49 = 0LL;
  IoGetActivityIdIrp(a2, &v49);
  v23 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)v23 == 14 )
  {
    if ( (byte_140171462 & 8) == 0 )
      goto LABEL_85;
    v25 = &EventNonReadWriteRequestComplete;
    goto LABEL_84;
  }
  if ( *(_BYTE *)v23 != 15 )
  {
    if ( *(_BYTE *)v23 != 27 )
      goto LABEL_85;
    if ( *(_BYTE *)(v23 + 1) == 7 && !*(_DWORD *)(v23 + 8) )
    {
      if ( (byte_140171462 & 0x40) != 0 )
      {
        v24 = *(int **)(a2 + 56);
        if ( v24 )
          v12 = *v24;
        LODWORD(Irp) = *(_DWORD *)(a2 + 48);
        LODWORD(Context) = v12;
        McTemplateK0pqd_EtwWriteTransfer(v22, v23, &v49, a2, Context, Irp);
      }
      goto LABEL_85;
    }
    if ( (byte_140171462 & 0x20) == 0 )
      goto LABEL_85;
    v25 = &EventPnpRequestComplete;
LABEL_84:
    LODWORD(Context) = *(_DWORD *)(a2 + 48);
    McTemplateK0pd_EtwWriteTransfer(v22, v25, &v49, a2, Context);
    goto LABEL_85;
  }
  if ( byte_140171461 >= 0 )
    goto LABEL_85;
  v26 = *(_QWORD *)(v23 + 8);
  v27 = 0;
  v28 = 0LL;
  v29 = 0;
  v30 = 0;
  v31 = 0;
  v32 = 0;
  if ( *(_BYTE *)(v26 + 2) == 40 )
  {
    v33 = 0LL;
    v45 = 0;
    if ( *(_DWORD *)(v26 + 20) )
      goto LABEL_85;
    v22 = 0LL;
    v47 = 0;
    v48 = *(_DWORD *)(v26 + 56);
    if ( !v48 )
      goto LABEL_60;
    v34 = (unsigned int *)(v26 + 120);
    while ( 1 )
    {
      v35 = *v34;
      if ( (unsigned int)v35 >= 0x80 )
      {
        v36 = *(unsigned int *)(v26 + 16);
        if ( (unsigned int)v35 < (unsigned int)v36 )
        {
          if ( *(_DWORD *)(v35 + v26) == 64 )
          {
            v22 = v35 + 40;
            if ( v35 + 40 <= v36 )
            {
              if ( *(_BYTE *)(v35 + v26 + 10) )
                v33 = (char *)(v35 + v26 + 24);
              v28 = *(_BYTE **)(v35 + v26 + 16);
LABEL_58:
              v29 = *(_BYTE *)(v35 + v26 + 9);
              v27 = *(_BYTE *)(v35 + v26 + 8);
LABEL_59:
              v16 = v46;
LABEL_60:
              if ( v33 )
              {
                v37 = *v33;
                goto LABEL_63;
              }
              goto LABEL_85;
            }
          }
          else
          {
            v22 = (unsigned int)(*(_DWORD *)(v35 + v26) - 65);
            if ( *(_DWORD *)(v35 + v26) == 65 )
            {
              v22 = v35 + 56;
              if ( v35 + 56 <= v36 )
              {
                v45 = 1;
                if ( *(_BYTE *)(v35 + v26 + 10) )
                  v33 = (char *)(v35 + v26 + 24);
                v27 = *(_BYTE *)(v35 + v26 + 8);
                v28 = *(_BYTE **)(v35 + v26 + 16);
                v29 = *(_BYTE *)(v35 + v26 + 9);
              }
            }
            else if ( *(_DWORD *)(v35 + v26) == 66 )
            {
              v22 = v35 + 40;
              if ( v35 + 40 <= v36 )
              {
                if ( *(_DWORD *)(v35 + v26 + 12) )
                  v33 = (char *)(v35 + v26 + 32);
                v28 = *(_BYTE **)(v35 + v26 + 24);
                goto LABEL_58;
              }
            }
          }
          if ( v45 )
            goto LABEL_59;
          LODWORD(v22) = v47;
        }
      }
      v22 = (unsigned int)(v22 + 1);
      ++v34;
      v47 = v22;
      if ( (unsigned int)v22 >= v48 )
        goto LABEL_59;
    }
  }
  v37 = *(_BYTE *)(v26 + 72);
  v28 = *(_BYTE **)(v26 + 32);
  v29 = *(_BYTE *)(v26 + 11);
  v27 = *(_BYTE *)(v26 + 4);
  if ( *(_BYTE *)(v26 + 2) )
    goto LABEL_85;
LABEL_63:
  LOBYTE(v22) = v37 - 8;
  if ( (v22 & 0x5D) == 0 )
  {
    v38 = *(_BYTE *)(v26 + 3);
    if ( v38 == 1 || !v28 || !v29 )
      goto LABEL_80;
    LOBYTE(v26) = 0;
    v22 = (unsigned __int64)&v28[v29];
    v39 = v28 + 8;
    if ( (unsigned __int8)((*v28 & 0x7F) - 114) <= 1u )
    {
      if ( (unsigned __int64)v39 > v22 )
        goto LABEL_78;
      v31 = v28[2];
      v30 = v28[1] & 0xF;
      v32 = v28[3];
    }
    else
    {
      if ( (unsigned __int64)v39 > v22 )
        goto LABEL_78;
      v30 = v28[2] & 0xF;
      v40 = v29;
      if ( (unsigned int)(unsigned __int8)v28[7] + 8 <= v29 )
        v40 = (unsigned __int8)v28[7] + 8;
      v22 = (unsigned __int64)(v28 + 13);
      v26 = (unsigned __int64)&v28[v40];
      if ( (unsigned __int64)(v28 + 13) <= v26 )
        v31 = v28[12];
      if ( (unsigned __int64)(v28 + 14) <= v26 )
        v32 = *(_BYTE *)v22;
    }
    LOBYTE(v26) = 1;
LABEL_78:
    if ( (_BYTE)v26 )
    {
      LOBYTE(v12) = v31;
      v41 = v32;
LABEL_81:
      LOBYTE(Irp) = v38;
      LODWORD(Context) = *(_DWORD *)(a2 + 48);
      McTemplateK0pduuuuup_EtwWriteTransfer(v22, v26, &v49, a2, Context, Irp, v27, v30, v12, v41, a2);
      goto LABEL_85;
    }
LABEL_80:
    v30 = 0;
    v41 = 0;
    goto LABEL_81;
  }
LABEL_85:
  IofCompleteRequest((PIRP)a2, 0);
  return (unsigned int)v16;
}
