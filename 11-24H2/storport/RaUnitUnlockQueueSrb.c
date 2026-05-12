/*
 * XREFs of RaUnitUnlockQueueSrb @ 0x140001EC8
 * Callers:
 *     RaUnitScsiIrp @ 0x140002710 (RaUnitScsiIrp.c)
 *     RaDriverScsiIrp @ 0x1400038A0 (RaDriverScsiIrp.c)
 * Callees:
 *     RaidUnitRestartQueue @ 0x140001B70 (RaidUnitRestartQueue.c)
 *     RaidIsUnitControlSupported @ 0x14001DD30 (RaidIsUnitControlSupported.c)
 *     RaCallMiniportUnitControl @ 0x14001DEE0 (RaCallMiniportUnitControl.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x140052DF0 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140052EC8 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x1400569AC (McTemplateK0pqd_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 */

__int64 __fastcall RaUnitUnlockQueueSrb(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  int v4; // ebx
  __int64 v6; // rcx
  bool v7; // zf
  char *v8; // rcx
  __int64 v9; // rdx
  void *v11; // rdx
  KIRQL v12; // r14
  __int64 v13; // rdx
  int *v14; // rax
  unsigned __int64 v15; // rdx
  char *v16; // rax
  char v17; // si
  unsigned int v18; // eax
  char v19; // r13
  char v20; // r12
  char v21; // al
  __int64 v22; // rcx
  __int64 v23; // rcx
  char v24; // r15
  _BYTE *v25; // r9
  unsigned __int8 v26; // r10
  char *v27; // r11
  unsigned int v28; // r8d
  unsigned int *v29; // rax
  __int64 v30; // rax
  unsigned __int64 v31; // r14
  char v32; // cl
  char v33; // r8
  char v34; // [rsp+60h] [rbp-49h]
  int v35; // [rsp+68h] [rbp-41h]
  unsigned __int64 v36; // [rsp+70h] [rbp-39h]
  __int128 v37; // [rsp+78h] [rbp-31h] BYREF
  _OWORD v38[2]; // [rsp+88h] [rbp-21h] BYREF
  __int128 v39; // [rsp+A8h] [rbp-1h]
  __int64 v40; // [rsp+B8h] [rbp+Fh]

  v2 = *(_QWORD *)(a2 + 184);
  LOBYTE(v4) = 0;
  memset(v38, 0, sizeof(v38));
  v6 = *(_QWORD *)(v2 + 8);
  v40 = 0LL;
  v39 = 0LL;
  *(_BYTE *)(v6 + 3) = 1;
  *(_BYTE *)(a1 + 757) = 0;
  if ( *(_QWORD *)(a1 + 32) && (unsigned __int8)RaidIsUnitControlSupported(a1, 31LL) )
  {
    v12 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(*(_QWORD *)(a1 + 32) + 24LL));
    *(_DWORD *)(*(_QWORD *)(a1 + 32) + 80LL) &= ~0x20u;
    v13 = *(_QWORD *)(a1 + 32);
    if ( (*(_DWORD *)(v13 + 80) & 0x1E0) == 0 && *(int *)(v13 + 84) <= 0 )
    {
      v22 = *(_QWORD *)(a1 + 24);
      *(_QWORD *)&v38[0] = 0x3800000038LL;
      DWORD2(v38[0]) = 3;
      WORD4(v39) = 1;
      HIDWORD(v39) = 4;
      WORD5(v39) = *(_WORD *)(v22 + 56);
      LOWORD(v40) = *(_WORD *)(a1 + 104);
      BYTE2(v40) = *(_BYTE *)(a1 + 106);
      if ( *(_DWORD *)v22 == 1094997074 )
      {
        v23 = v22 + 376;
      }
      else if ( *(_DWORD *)v22 == 1314275652 )
      {
        v23 = v22 + 168;
      }
      else
      {
        v23 = 0LL;
      }
      RaCallMiniportUnitControl(v23, 31LL, v38);
    }
    KeReleaseSpinLock((PKSPIN_LOCK)(*(_QWORD *)(a1 + 32) + 24LL), v12);
  }
  RaidUnitRestartQueue(a1, 0);
  v7 = StorEtwLoggingEnabled == 0;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = 0;
  if ( v7 )
    goto LABEL_6;
  v37 = 0LL;
  IoGetActivityIdIrp(a2, &v37);
  v9 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)v9 == 14 )
  {
    if ( (byte_140171462 & 8) == 0 )
      goto LABEL_6;
    v11 = &EventNonReadWriteRequestComplete;
    goto LABEL_9;
  }
  if ( *(_BYTE *)v9 != 15 )
  {
    if ( *(_BYTE *)v9 != 27 )
      goto LABEL_6;
    if ( *(_BYTE *)(v9 + 1) == 7 && !*(_DWORD *)(v9 + 8) )
    {
      if ( (byte_140171462 & 0x40) != 0 )
      {
        v14 = *(int **)(a2 + 56);
        if ( v14 )
          v4 = *v14;
        McTemplateK0pqd_EtwWriteTransfer((_DWORD)v8, v9, (unsigned int)&v37, a2, v4, *(_DWORD *)(a2 + 48));
      }
      goto LABEL_6;
    }
    if ( (byte_140171462 & 0x20) == 0 )
      goto LABEL_6;
    v11 = &EventPnpRequestComplete;
LABEL_9:
    McTemplateK0pd_EtwWriteTransfer(v8, v11, &v37, a2, *(_DWORD *)(a2 + 48));
    goto LABEL_6;
  }
  if ( byte_140171461 >= 0 )
    goto LABEL_6;
  v15 = *(_QWORD *)(v9 + 8);
  v24 = 0;
  v25 = 0LL;
  v26 = 0;
  v17 = 0;
  v19 = 0;
  v20 = 0;
  if ( *(_BYTE *)(v15 + 2) != 40 )
  {
    v32 = *(_BYTE *)(v15 + 72);
    v25 = *(_BYTE **)(v15 + 32);
    v26 = *(_BYTE *)(v15 + 11);
    v24 = *(_BYTE *)(v15 + 4);
    if ( *(_BYTE *)(v15 + 2) )
      goto LABEL_6;
LABEL_75:
    LOBYTE(v8) = v32 - 8;
    if ( ((unsigned __int8)v8 & 0x5D) != 0 )
      goto LABEL_6;
    v33 = *(_BYTE *)(v15 + 3);
    if ( v33 == 1 || !v25 || !v26 )
      goto LABEL_34;
    LOBYTE(v15) = 0;
    v8 = &v25[v26];
    v16 = v25 + 8;
    if ( (unsigned __int8)((*v25 & 0x7F) - 114) <= 1u )
    {
      if ( v16 > v8 )
      {
LABEL_32:
        if ( (_BYTE)v15 )
        {
          LOBYTE(v4) = v19;
          v21 = v20;
LABEL_35:
          McTemplateK0pduuuuup_EtwWriteTransfer(
            (_DWORD)v8,
            v15,
            (unsigned int)&v37,
            a2,
            *(_DWORD *)(a2 + 48),
            v33,
            v24,
            v17,
            v4,
            v21,
            a2);
          goto LABEL_6;
        }
LABEL_34:
        v17 = 0;
        v21 = 0;
        goto LABEL_35;
      }
      v19 = v25[2];
      v17 = v25[1] & 0xF;
      v20 = v25[3];
    }
    else
    {
      if ( v16 > v8 )
        goto LABEL_32;
      v17 = v25[2] & 0xF;
      v18 = v26;
      if ( (unsigned int)(unsigned __int8)v25[7] + 8 <= v26 )
        v18 = (unsigned __int8)v25[7] + 8;
      v8 = v25 + 13;
      v15 = (unsigned __int64)&v25[v18];
      if ( (unsigned __int64)(v25 + 13) <= v15 )
        v19 = v25[12];
      if ( (unsigned __int64)(v25 + 14) <= v15 )
        v20 = *v8;
    }
    LOBYTE(v15) = 1;
    goto LABEL_32;
  }
  v27 = 0LL;
  v34 = 0;
  if ( *(_DWORD *)(v15 + 20) )
    goto LABEL_6;
  LODWORD(v8) = 0;
  v35 = 0;
  if ( !*(_DWORD *)(v15 + 56) )
    goto LABEL_72;
  v28 = *(_DWORD *)(v15 + 56);
  v29 = (unsigned int *)(v15 + 120);
  v36 = v15 + 120;
  while ( 1 )
  {
    v30 = *v29;
    if ( (unsigned int)v30 >= 0x80 )
    {
      v31 = *(unsigned int *)(v15 + 16);
      if ( (unsigned int)v30 < (unsigned int)v31 )
        break;
    }
LABEL_65:
    LODWORD(v8) = (_DWORD)v8 + 1;
    v29 = (unsigned int *)(v36 + 4);
    v35 = (int)v8;
    v36 += 4LL;
    if ( (unsigned int)v8 >= v28 )
      goto LABEL_72;
  }
  if ( *(_DWORD *)(v30 + v15) != 64 )
  {
    LODWORD(v8) = *(_DWORD *)(v30 + v15) - 65;
    if ( *(_DWORD *)(v30 + v15) == 65 )
    {
      LODWORD(v8) = v30 + 56;
      if ( v30 + 56 <= v31 )
      {
        v34 = 1;
        if ( *(_BYTE *)(v30 + v15 + 10) )
          v27 = (char *)(v30 + v15 + 24);
        v24 = *(_BYTE *)(v30 + v15 + 8);
        v25 = *(_BYTE **)(v30 + v15 + 16);
        v26 = *(_BYTE *)(v30 + v15 + 9);
      }
    }
    else if ( *(_DWORD *)(v30 + v15) == 66 )
    {
      LODWORD(v8) = v30 + 40;
      if ( v30 + 40 <= v31 )
      {
        if ( *(_DWORD *)(v30 + v15 + 12) )
          v27 = (char *)(v30 + v15 + 32);
        v25 = *(_BYTE **)(v30 + v15 + 24);
        goto LABEL_71;
      }
    }
    goto LABEL_63;
  }
  LODWORD(v8) = v30 + 40;
  if ( v30 + 40 > v31 )
  {
LABEL_63:
    if ( v34 )
      goto LABEL_72;
    LODWORD(v8) = v35;
    v28 = *(_DWORD *)(v15 + 56);
    goto LABEL_65;
  }
  if ( *(_BYTE *)(v30 + v15 + 10) )
    v27 = (char *)(v30 + v15 + 24);
  v25 = *(_BYTE **)(v30 + v15 + 16);
LABEL_71:
  v26 = *(_BYTE *)(v30 + v15 + 9);
  v24 = *(_BYTE *)(v30 + v15 + 8);
LABEL_72:
  if ( v27 )
  {
    v32 = *v27;
    goto LABEL_75;
  }
LABEL_6:
  IofCompleteRequest((PIRP)a2, 0);
  return 0LL;
}
