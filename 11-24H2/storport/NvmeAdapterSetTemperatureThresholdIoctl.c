/*
 * XREFs of NvmeAdapterSetTemperatureThresholdIoctl @ 0x1400D74F4
 * Callers:
 *     NvmeAdapterDeviceControlIrpFromNamespace @ 0x1400CE6CC (NvmeAdapterDeviceControlIrpFromNamespace.c)
 *     NvmeAdapterDeviceControlIrp @ 0x140195438 (NvmeAdapterDeviceControlIrp.c)
 * Callees:
 *     RaIsDeviceDFxPoweredDown @ 0x140045E40 (RaIsDeviceDFxPoweredDown.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x140052DF0 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140052EC8 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x1400569AC (McTemplateK0pqd_EtwWriteTransfer.c)
 *     NvmeControllerGetExtendedCommand @ 0x14012949C (NvmeControllerGetExtendedCommand.c)
 *     NvmeControllerProcessCommand @ 0x140129520 (NvmeControllerProcessCommand.c)
 *     NvmeControllerReclaimExtendedCommand @ 0x140129B08 (NvmeControllerReclaimExtendedCommand.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 */

__int64 __fastcall NvmeAdapterSetTemperatureThresholdIoctl(__int64 a1, __int64 a2, _BYTE *a3)
{
  int v3; // ebx
  unsigned int v7; // edx
  int v8; // esi
  __int64 v9; // rsi
  __int16 v10; // ax
  unsigned __int16 v11; // ax
  __int64 v12; // rcx
  __int16 v13; // r12
  __int16 v14; // r12
  __int64 ExtendedCommand; // rax
  __int64 v16; // r14
  __int64 v17; // r9
  unsigned __int8 v18; // cl
  char v19; // dl
  int v20; // eax
  int v21; // r8d
  unsigned int v22; // r8d
  bool v24; // zf
  unsigned __int64 v25; // rcx
  __int64 v26; // rdx
  int *v27; // rax
  const EVENT_DESCRIPTOR *v28; // rdx
  __int64 v29; // rdx
  char v30; // bp
  _BYTE *v31; // r9
  unsigned __int8 v32; // r10
  char v33; // r11
  char v34; // r14
  char v35; // r13
  char *v36; // r14
  unsigned int v37; // r12d
  unsigned __int64 v38; // r15
  __int64 v39; // r8
  int v40; // ecx
  char v41; // cl
  char v42; // r8
  _BYTE *v43; // rax
  char *v44; // r13
  unsigned int v45; // eax
  char v46; // al
  int v47; // [rsp+20h] [rbp-98h]
  char v48; // [rsp+60h] [rbp-58h]
  char v49; // [rsp+61h] [rbp-57h]
  unsigned int v50; // [rsp+64h] [rbp-54h]
  GUID v51; // [rsp+68h] [rbp-50h] BYREF

  v3 = 0;
  if ( a3 )
    *a3 = 1;
  *(_QWORD *)(a2 + 56) = 0LL;
  if ( !RaIsDeviceDFxPoweredDown(*(_QWORD *)(a1 + 8)) || (*(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) & 1) != 0 )
  {
    if ( v7 < 0x10 )
      goto LABEL_25;
    v9 = *(_QWORD *)(a2 + 24);
    v10 = *(_WORD *)(v9 + 8);
    if ( (v10 & 1) == 0 )
      *(_WORD *)(v9 + 8) = v10 | 1;
    if ( (v11 = *(_WORD *)(v9 + 10), v11 <= 8u)
      && (v12 = *(_QWORD *)(*(_QWORD *)(a1 + 1136) + 592LL)) != 0
      && (v11 || *(_BYTE *)(v9 + 14) || *(_WORD *)(v12 + 266))
      && (v13 = *(_WORD *)(v9 + 12), v13 >= -273) )
    {
      v14 = v13 + 273;
      ExtendedCommand = NvmeControllerGetExtendedCommand(*(_QWORD *)(a1 + 1136));
      v16 = ExtendedCommand;
      if ( ExtendedCommand )
      {
        *(_DWORD *)(*(_QWORD *)ExtendedCommand + 4256LL) |= 1u;
        *(_DWORD *)(*(_QWORD *)ExtendedCommand + 4256LL) |= 0x20u;
        *(_DWORD *)(*(_QWORD *)ExtendedCommand + 4256LL) &= ~2u;
        *(_DWORD *)(*(_QWORD *)ExtendedCommand + 4256LL) &= ~0x40u;
        *(_WORD *)(*(_QWORD *)ExtendedCommand + 4252LL) = 0;
        *(_QWORD *)(*(_QWORD *)ExtendedCommand + 4184LL) = a2;
        *(_QWORD *)(*(_QWORD *)ExtendedCommand + 4224LL) = a1;
        *(_QWORD *)(*(_QWORD *)ExtendedCommand + 4192LL) = NvmeAdapterSetTemperatureThresholdIoctlCommandCompletion;
        *(_QWORD *)(*(_QWORD *)ExtendedCommand + 4200LL) = ExtendedCommand;
        *(_QWORD *)(*(_QWORD *)ExtendedCommand + 4160LL) = 0LL;
        *(_QWORD *)(*(_QWORD *)ExtendedCommand + 4168LL) = 0LL;
        *(_DWORD *)(*(_QWORD *)ExtendedCommand + 4248LL) = 0;
        v17 = *(_QWORD *)ExtendedCommand;
        v18 = *(_BYTE *)(v9 + 10) - 1;
        v19 = *(_BYTE *)(v9 + 14);
        v20 = *(_DWORD *)(*(_QWORD *)ExtendedCommand + 4140LL);
        *(_BYTE *)(v17 + 4096) = 9;
        v21 = v20 ^ (v20 ^ (v18 << 16)) & 0xF0000;
        *(_BYTE *)(v17 + 4136) = 4;
        if ( v19 )
          v22 = v21 & 0xFFCFFFFF;
        else
          v22 = v21 & 0xFFCFFFFF | 0x100000;
        *(_DWORD *)(v17 + 4140) = v22;
        *(_WORD *)(v17 + 4140) = v14;
        v8 = NvmeControllerProcessCommand(*(_QWORD *)(a1 + 1136), v16);
        if ( v8 >= 0 )
        {
          if ( a3 )
            *a3 = 0;
          return 259LL;
        }
        _interlockedbittestandreset((volatile signed __int32 *)(*(_QWORD *)v16 + 4256LL), 3u);
        NvmeControllerReclaimExtendedCommand(*(_QWORD *)(a1 + 1136), v16);
      }
      else
      {
        v8 = -1073741670;
      }
    }
    else
    {
LABEL_25:
      v8 = -1056964602;
    }
  }
  else
  {
    v8 = -1073741822;
  }
  v24 = StorEtwLoggingEnabled == 0;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = v8;
  if ( v24 )
    goto LABEL_91;
  v51 = 0LL;
  IoGetActivityIdIrp(a2, &v51);
  v26 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)v26 == 14 )
  {
    if ( (byte_140171462 & 8) == 0 )
      goto LABEL_91;
    v47 = *(_DWORD *)(a2 + 48);
    v28 = (const EVENT_DESCRIPTOR *)&EventNonReadWriteRequestComplete;
    goto LABEL_90;
  }
  if ( *(_BYTE *)v26 != 15 )
  {
    if ( *(_BYTE *)v26 != 27 )
      goto LABEL_91;
    if ( *(_BYTE *)(v26 + 1) == 7 && !*(_DWORD *)(v26 + 8) )
    {
      if ( (byte_140171462 & 0x40) != 0 )
      {
        v27 = *(int **)(a2 + 56);
        if ( v27 )
          v3 = *v27;
        McTemplateK0pqd_EtwWriteTransfer(v25, v26, &v51, a2, v3, *(_DWORD *)(a2 + 48));
      }
      goto LABEL_91;
    }
    if ( (byte_140171462 & 0x20) == 0 )
      goto LABEL_91;
    v28 = &EventPnpRequestComplete;
    v47 = *(_DWORD *)(a2 + 48);
LABEL_90:
    McTemplateK0pd_EtwWriteTransfer(v25, v28, &v51, a2, v47);
    goto LABEL_91;
  }
  if ( byte_140171461 >= 0 )
    goto LABEL_91;
  v29 = *(_QWORD *)(v26 + 8);
  v30 = 0;
  v31 = 0LL;
  v48 = 0;
  v32 = 0;
  v33 = 0;
  v34 = 0;
  v35 = 0;
  if ( *(_BYTE *)(v29 + 2) != 40 )
  {
    v41 = *(_BYTE *)(v29 + 72);
    v31 = *(_BYTE **)(v29 + 32);
    v32 = *(_BYTE *)(v29 + 11);
    v30 = *(_BYTE *)(v29 + 4);
    if ( !*(_BYTE *)(v29 + 2) )
      goto LABEL_66;
    goto LABEL_91;
  }
  v36 = 0LL;
  v49 = 0;
  if ( *(_DWORD *)(v29 + 20) )
    goto LABEL_91;
  v37 = 0;
  v50 = *(_DWORD *)(v29 + 56);
  if ( !v50 )
    goto LABEL_63;
  while ( 1 )
  {
    v25 = *(unsigned int *)(v29 + 4LL * v37 + 120);
    if ( (unsigned int)v25 >= 0x80 )
    {
      v38 = *(unsigned int *)(v29 + 16);
      if ( (unsigned int)v25 < (unsigned int)v38 )
        break;
    }
LABEL_57:
    if ( ++v37 >= v50 )
      goto LABEL_63;
  }
  v39 = (unsigned int)v25;
  v40 = *(_DWORD *)(v25 + v29) - 64;
  if ( v40 )
  {
    v25 = (unsigned int)(v40 - 1);
    if ( (_DWORD)v25 )
    {
      if ( (_DWORD)v25 == 1 )
      {
        v25 = v39 + 40;
        if ( v39 + 40 <= v38 )
        {
          if ( *(_DWORD *)(v39 + v29 + 12) )
            v36 = (char *)(v39 + v29 + 32);
          v31 = *(_BYTE **)(v39 + v29 + 24);
          goto LABEL_62;
        }
      }
    }
    else
    {
      v25 = v39 + 56;
      if ( v39 + 56 <= v38 )
      {
        v49 = 1;
        if ( *(_BYTE *)(v39 + v29 + 10) )
          v36 = (char *)(v39 + v29 + 24);
        v30 = *(_BYTE *)(v39 + v29 + 8);
        v31 = *(_BYTE **)(v39 + v29 + 16);
        v32 = *(_BYTE *)(v39 + v29 + 9);
      }
    }
    goto LABEL_56;
  }
  v25 = v39 + 40;
  if ( v39 + 40 > v38 )
  {
LABEL_56:
    if ( v49 )
      goto LABEL_63;
    goto LABEL_57;
  }
  if ( *(_BYTE *)(v39 + v29 + 10) )
    v36 = (char *)(v39 + v29 + 24);
  v31 = *(_BYTE **)(v39 + v29 + 16);
LABEL_62:
  v32 = *(_BYTE *)(v39 + v29 + 9);
  v30 = *(_BYTE *)(v39 + v29 + 8);
LABEL_63:
  if ( v36 )
  {
    v41 = *v36;
    v34 = 0;
LABEL_66:
    LOBYTE(v25) = v41 - 8;
    if ( (v25 & 0x5D) == 0 )
    {
      if ( *(_BYTE *)(v29 + 3) == 1 || !v31 || !v32 )
        goto LABEL_86;
      v42 = 0;
      v25 = (unsigned __int64)&v31[v32];
      v43 = v31 + 8;
      if ( (unsigned __int8)((*v31 & 0x7F) - 114) <= 1u )
      {
        if ( (unsigned __int64)v43 <= v25 )
        {
          v42 = 1;
          v34 = v31[2];
          v33 = v31[1] & 0xF;
          v35 = v31[3];
        }
      }
      else
      {
        if ( (unsigned __int64)v43 <= v25 )
        {
          v44 = v31 + 13;
          v33 = v31[2] & 0xF;
          v45 = v32;
          if ( (unsigned int)(unsigned __int8)v31[7] + 8 <= v32 )
            v45 = (unsigned __int8)v31[7] + 8;
          v25 = (unsigned __int64)&v31[v45];
          if ( (unsigned __int64)v44 > v25 )
            v48 = 0;
          else
            v48 = v31[12];
          if ( (unsigned __int64)(v31 + 14) > v25 )
            v35 = 0;
          else
            v35 = *v44;
          v42 = 1;
        }
        v34 = v48;
      }
      if ( v42 )
      {
        LOBYTE(v3) = v34;
        v46 = v35;
      }
      else
      {
LABEL_86:
        v33 = 0;
        v46 = 0;
      }
      McTemplateK0pduuuuup_EtwWriteTransfer(
        v25,
        v29,
        &v51,
        a2,
        *(_DWORD *)(a2 + 48),
        *(_BYTE *)(v29 + 3),
        v30,
        v33,
        v3,
        v46,
        a2);
    }
  }
LABEL_91:
  IofCompleteRequest((PIRP)a2, 0);
  return (unsigned int)v8;
}
