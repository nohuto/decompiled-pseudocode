/*
 * XREFs of RaidAdapterHwFirmwareActivateIoctl @ 0x14005A5E4
 * Callers:
 *     RaidAdapterDeviceControlIrp @ 0x14002B3B0 (RaidAdapterDeviceControlIrp.c)
 * Callees:
 *     RaidAdapterSendSrbIoControlSynchronously @ 0x140010664 (RaidAdapterSendSrbIoControlSynchronously.c)
 *     RaidDriverGetName @ 0x14003E03C (RaidDriverGetName.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x140052DF0 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140052EC8 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x1400569AC (McTemplateK0pqd_EtwWriteTransfer.c)
 *     McTemplateK0qjzssshhqq_EtwWriteTransfer @ 0x140056B84 (McTemplateK0qjzssshhqq_EtwWriteTransfer.c)
 *     RaAdapterUpdateAssociatedUnitsIdentity @ 0x140058D34 (RaAdapterUpdateAssociatedUnitsIdentity.c)
 *     RaBuildHwFirmwareActivateBufferForMiniport @ 0x140089260 (RaBuildHwFirmwareActivateBufferForMiniport.c)
 *     StorLogIoError @ 0x14008F74C (StorLogIoError.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 */

__int64 __fastcall RaidAdapterHwFirmwareActivateIoctl(__int64 a1, __int64 a2)
{
  int v2; // ebx
  PVOID v5; // r14
  int v6; // r15d
  __int64 v7; // rcx
  __int128 v8; // xmm0
  unsigned __int16 *v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // r8
  bool v13; // zf
  unsigned __int64 v14; // rcx
  __int64 v15; // rdx
  int *v16; // rax
  const EVENT_DESCRIPTOR *v17; // rdx
  unsigned __int64 v18; // rdx
  char v19; // r12
  _BYTE *v20; // r9
  unsigned __int8 v21; // r10
  char v22; // si
  char v23; // r11
  char v24; // r13
  char *v25; // r11
  ULONG v26; // eax
  unsigned int v27; // r8d
  unsigned int *v28; // rax
  __int64 v29; // rax
  unsigned __int64 v30; // r14
  char v31; // cl
  char v32; // r8
  _BYTE *v33; // rax
  unsigned int v34; // eax
  char v35; // al
  __int64 v36; // [rsp+20h] [rbp-B9h]
  __int64 v37; // [rsp+28h] [rbp-B1h]
  __int64 v38; // [rsp+30h] [rbp-A9h]
  __int64 v39; // [rsp+38h] [rbp-A1h]
  __int64 v40; // [rsp+40h] [rbp-99h]
  __int64 v41; // [rsp+48h] [rbp-91h]
  char v42; // [rsp+70h] [rbp-69h]
  char v43; // [rsp+71h] [rbp-68h]
  ULONG v44; // [rsp+74h] [rbp-65h] BYREF
  GUID v45; // [rsp+78h] [rbp-61h] BYREF
  PVOID P[2]; // [rsp+88h] [rbp-51h] BYREF
  unsigned __int64 v47; // [rsp+98h] [rbp-41h] BYREF
  char v48; // [rsp+A0h] [rbp-39h]
  __int128 v49; // [rsp+A8h] [rbp-31h] BYREF
  int v50; // [rsp+B8h] [rbp-21h]
  char v51; // [rsp+BCh] [rbp-1Dh]
  __int128 v52; // [rsp+C0h] [rbp-19h] BYREF
  __int128 v53; // [rsp+D0h] [rbp-9h]
  __int64 v54; // [rsp+E0h] [rbp+7h]
  char v55; // [rsp+E8h] [rbp+Fh]

  v2 = 0;
  v5 = 0LL;
  P[0] = 0LL;
  v44 = 0;
  if ( !*(_QWORD *)(a1 + 608) || !*(_QWORD *)(a1 + 616) )
  {
    v6 = -1073741823;
    goto LABEL_9;
  }
  if ( *(_DWORD *)(*(_QWORD *)(a2 + 184) + 16LL) >= 0x10u )
  {
    RaBuildHwFirmwareActivateBufferForMiniport(*(_QWORD *)(a1 + 8), a2, P, &v44);
    v5 = P[0];
    if ( !P[0] )
    {
      v6 = -1073741801;
      goto LABEL_11;
    }
    v6 = RaidAdapterSendSrbIoControlSynchronously(
           a1,
           (IRP *)a2,
           (unsigned int *)P[0],
           v44,
           (__int64 (__fastcall *)(_QWORD))PortSrbTranslateFirmwareIoctlStatusToNtStatus,
           1,
           128,
           *(_DWORD *)(a1 + 6176));
LABEL_9:
    if ( v5 )
      ExFreePoolWithTag(v5, 0x72536152u);
    goto LABEL_11;
  }
  v6 = -1073741820;
LABEL_11:
  if ( StorEtwLoggingEnabled )
  {
    v7 = *(_QWORD *)(a1 + 16);
    v45 = 0LL;
    v50 = 0;
    v52 = 0LL;
    v51 = 0;
    v53 = 0LL;
    v54 = 0LL;
    v8 = *(_OWORD *)(a1 + 5064);
    v55 = 0;
    v47 = 0LL;
    *(_OWORD *)P = v8;
    v48 = 0;
    v49 = 0LL;
    RaidDriverGetName(v7, (__int64)&v45);
    v9 = *(unsigned __int16 **)(a1 + 6000);
    if ( v9 )
    {
      v52 = *(_OWORD *)(v9 + 12);
      v53 = *(_OWORD *)(v9 + 20);
      v54 = *((_QWORD *)v9 + 7);
      v47 = *((_QWORD *)v9 + 8);
      v49 = *(_OWORD *)(v9 + 2);
      v50 = *((_DWORD *)v9 + 5);
    }
    if ( (byte_140171467 & 0x20) != 0 )
    {
      if ( v9 )
      {
        v10 = v9[1];
        v11 = *v9;
      }
      else
      {
        v10 = 0LL;
        v11 = 0LL;
      }
      McTemplateK0qjzssshhqq_EtwWriteTransfer(
        (__int64)v9,
        v10,
        v11,
        *(_DWORD *)(a1 + 56),
        (__int64)P,
        *(const wchar_t **)v45.Data4,
        (const char *)&v49,
        (const char *)&v52,
        (const char *)&v47,
        v11,
        v10,
        *(_DWORD *)(a1 + 6176),
        v6);
    }
  }
  if ( v6 >= 0 )
  {
    StorLogIoError(a1, 0LL, 1074004128LL, 5LL);
    if ( (*(_BYTE *)(a1 + 110) & 2) != 0 )
    {
      if ( RaAdapterUpdateAssociatedUnitsIdentity(a1, (struct _IO_WORKITEM *)a2) )
      {
        *(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) |= 1u;
        return 259LL;
      }
    }
  }
  v13 = StorEtwLoggingEnabled == 0;
  *(_QWORD *)(a2 + 56) = 0LL;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = v6;
  if ( v13 )
    goto LABEL_89;
  v45 = 0LL;
  IoGetActivityIdIrp(a2, &v45);
  v15 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)v15 == 14 )
  {
    if ( (byte_140171462 & 8) == 0 )
      goto LABEL_89;
    v17 = (const EVENT_DESCRIPTOR *)&EventNonReadWriteRequestComplete;
    goto LABEL_88;
  }
  if ( *(_BYTE *)v15 != 15 )
  {
    if ( *(_BYTE *)v15 != 27 )
      goto LABEL_89;
    if ( *(_BYTE *)(v15 + 1) == 7 && !*(_DWORD *)(v15 + 8) )
    {
      if ( (byte_140171462 & 0x40) != 0 )
      {
        v16 = *(int **)(a2 + 56);
        if ( v16 )
          v2 = *v16;
        LODWORD(v37) = *(_DWORD *)(a2 + 48);
        LODWORD(v36) = v2;
        McTemplateK0pqd_EtwWriteTransfer(v14, v15, &v45, a2, v36, v37);
      }
      goto LABEL_89;
    }
    if ( (byte_140171462 & 0x20) == 0 )
      goto LABEL_89;
    v17 = (const EVENT_DESCRIPTOR *)&EventPnpRequestComplete;
LABEL_88:
    LODWORD(v36) = *(_DWORD *)(a2 + 48);
    McTemplateK0pd_EtwWriteTransfer(v14, v17, &v45, a2, v36);
    goto LABEL_89;
  }
  if ( byte_140171461 >= 0 )
    goto LABEL_89;
  v18 = *(_QWORD *)(v15 + 8);
  v19 = 0;
  v20 = 0LL;
  v42 = 0;
  v21 = 0;
  v22 = 0;
  v23 = 0;
  v24 = 0;
  if ( *(_BYTE *)(v18 + 2) != 40 )
  {
    v31 = *(_BYTE *)(v18 + 72);
    v20 = *(_BYTE **)(v18 + 32);
    v21 = *(_BYTE *)(v18 + 11);
    v19 = *(_BYTE *)(v18 + 4);
    if ( !*(_BYTE *)(v18 + 2) )
      goto LABEL_65;
    goto LABEL_89;
  }
  v25 = 0LL;
  v43 = 0;
  if ( *(_DWORD *)(v18 + 20) )
    goto LABEL_89;
  v26 = *(_DWORD *)(v18 + 56);
  v14 = 0LL;
  LODWORD(P[0]) = 0;
  v44 = v26;
  if ( !v26 )
    goto LABEL_62;
  v27 = v44;
  v28 = (unsigned int *)(v18 + 120);
  v47 = v18 + 120;
  while ( 1 )
  {
    v29 = *v28;
    if ( (unsigned int)v29 >= 0x80 )
    {
      v30 = *(unsigned int *)(v18 + 16);
      if ( (unsigned int)v29 < (unsigned int)v30 )
        break;
    }
LABEL_56:
    v14 = (unsigned int)(v14 + 1);
    v28 = (unsigned int *)(v47 + 4);
    LODWORD(P[0]) = v14;
    v47 += 4LL;
    if ( (unsigned int)v14 >= v27 )
      goto LABEL_62;
  }
  if ( *(_DWORD *)(v29 + v18) != 64 )
  {
    v14 = (unsigned int)(*(_DWORD *)(v29 + v18) - 65);
    if ( *(_DWORD *)(v29 + v18) == 65 )
    {
      v14 = v29 + 56;
      if ( v29 + 56 <= v30 )
      {
        v43 = 1;
        if ( *(_BYTE *)(v29 + v18 + 10) )
          v25 = (char *)(v29 + v18 + 24);
        v19 = *(_BYTE *)(v29 + v18 + 8);
        v20 = *(_BYTE **)(v29 + v18 + 16);
        v21 = *(_BYTE *)(v29 + v18 + 9);
      }
    }
    else if ( *(_DWORD *)(v29 + v18) == 66 )
    {
      v14 = v29 + 40;
      if ( v29 + 40 <= v30 )
      {
        if ( *(_DWORD *)(v29 + v18 + 12) )
          v25 = (char *)(v29 + v18 + 32);
        v20 = *(_BYTE **)(v29 + v18 + 24);
        goto LABEL_61;
      }
    }
    goto LABEL_54;
  }
  v14 = v29 + 40;
  if ( v29 + 40 > v30 )
  {
LABEL_54:
    if ( v43 )
      goto LABEL_62;
    LODWORD(v14) = P[0];
    v27 = v44;
    goto LABEL_56;
  }
  if ( *(_BYTE *)(v29 + v18 + 10) )
    v25 = (char *)(v29 + v18 + 24);
  v20 = *(_BYTE **)(v29 + v18 + 16);
LABEL_61:
  v21 = *(_BYTE *)(v29 + v18 + 9);
  v19 = *(_BYTE *)(v29 + v18 + 8);
LABEL_62:
  if ( v25 )
  {
    v31 = *v25;
    v23 = 0;
LABEL_65:
    LOBYTE(v14) = v31 - 8;
    if ( (v14 & 0x5D) == 0 )
    {
      v32 = *(_BYTE *)(v18 + 3);
      if ( v32 == 1 || !v20 || !v21 )
        goto LABEL_84;
      LOBYTE(v18) = 0;
      v14 = (unsigned __int64)&v20[v21];
      v33 = v20 + 8;
      if ( (unsigned __int8)((*v20 & 0x7F) - 114) <= 1u )
      {
        if ( (unsigned __int64)v33 <= v14 )
        {
          LOBYTE(v18) = 1;
          v23 = v20[2];
          v22 = v20[1] & 0xF;
          v24 = v20[3];
        }
      }
      else
      {
        if ( (unsigned __int64)v33 <= v14 )
        {
          v22 = v20[2] & 0xF;
          v34 = v21;
          if ( (unsigned int)(unsigned __int8)v20[7] + 8 <= v21 )
            v34 = (unsigned __int8)v20[7] + 8;
          v14 = (unsigned __int64)(v20 + 13);
          v18 = (unsigned __int64)&v20[v34];
          if ( (unsigned __int64)(v20 + 13) > v18 )
            v42 = 0;
          else
            v42 = v20[12];
          if ( (unsigned __int64)(v20 + 14) <= v18 )
            v24 = *(_BYTE *)v14;
          LOBYTE(v18) = 1;
        }
        v23 = v42;
      }
      if ( (_BYTE)v18 )
      {
        LOBYTE(v2) = v23;
        v35 = v24;
      }
      else
      {
LABEL_84:
        v22 = 0;
        v35 = 0;
      }
      LOBYTE(v41) = v35;
      LOBYTE(v40) = v2;
      LOBYTE(v39) = v22;
      LOBYTE(v38) = v19;
      LOBYTE(v37) = v32;
      LODWORD(v36) = *(_DWORD *)(a2 + 48);
      McTemplateK0pduuuuup_EtwWriteTransfer(v14, v18, &v45, a2, v36, v37, v38, v39, v40, v41, a2);
    }
  }
LABEL_89:
  IofCompleteRequest((PIRP)a2, 0);
  return (unsigned int)v6;
}
