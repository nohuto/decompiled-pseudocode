/*
 * XREFs of RaUnitLockQueueSrb @ 0x140002170
 * Callers:
 *     RaUnitScsiIrp @ 0x140002710 (RaUnitScsiIrp.c)
 *     RaDriverScsiIrp @ 0x1400038A0 (RaDriverScsiIrp.c)
 * Callees:
 *     RaidIsUnitControlSupported @ 0x14001DD30 (RaidIsUnitControlSupported.c)
 *     RaCallMiniportUnitControl @ 0x14001DEE0 (RaCallMiniportUnitControl.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x140052DF0 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140052EC8 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x1400569AC (McTemplateK0pqd_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 */

__int64 __fastcall RaUnitLockQueueSrb(__int64 a1, __int64 a2)
{
  signed __int64 v4; // rax
  signed __int64 v5; // rtt
  int v6; // ebx
  bool v7; // zf
  char *v8; // rcx
  __int64 v9; // rdx
  void *v11; // rdx
  int *v12; // rax
  unsigned __int64 v13; // rdx
  char *v14; // rax
  char v15; // r11
  unsigned int v16; // eax
  char v17; // r13
  char v18; // r12
  char v19; // al
  KIRQL v20; // r14
  __int64 v21; // rdx
  char v22; // al
  char v23; // cl
  char v24; // al
  __int64 v25; // rcx
  char v26; // r15
  _BYTE *v27; // r9
  unsigned __int8 v28; // r10
  char *v29; // rsi
  unsigned int v30; // r8d
  unsigned int *v31; // rax
  __int64 v32; // rax
  unsigned __int64 v33; // r14
  char v34; // cl
  char v35; // r8
  char v36; // [rsp+60h] [rbp-49h]
  int v37; // [rsp+68h] [rbp-41h]
  unsigned __int64 v38; // [rsp+70h] [rbp-39h]
  __int128 v39; // [rsp+78h] [rbp-31h] BYREF
  _OWORD v40[2]; // [rsp+88h] [rbp-21h] BYREF
  __int128 v41; // [rsp+A8h] [rbp-1h]
  __int64 v42; // [rsp+B8h] [rbp+Fh]

  *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a2 + 184) + 8LL) + 3LL) = 1;
  *(_BYTE *)(a1 + 757) = 1;
  v4 = *(_QWORD *)(a1 + 808);
  do
  {
    if ( (v4 & 3) != 0 )
      break;
    v5 = v4;
    v4 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 808), v4 | 2, v4);
  }
  while ( v5 != v4 );
  LOBYTE(v6) = 0;
  v42 = 0LL;
  memset(v40, 0, sizeof(v40));
  v41 = 0LL;
  if ( *(_QWORD *)(a1 + 32) && (unsigned __int8)RaidIsUnitControlSupported(a1, 31LL) )
  {
    v20 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(*(_QWORD *)(a1 + 32) + 24LL));
    *(_DWORD *)(*(_QWORD *)(a1 + 32) + 80LL) |= 0x20u;
    v21 = *(_QWORD *)(a1 + 24);
    *(_QWORD *)&v40[0] = 0x3800000038LL;
    v22 = *(_BYTE *)(a1 + 105);
    DWORD2(v40[0]) = 2;
    WORD4(v41) = 1;
    HIDWORD(v41) = 4;
    WORD5(v41) = *(_WORD *)(v21 + 56);
    v23 = *(_BYTE *)(a1 + 104);
    BYTE1(v42) = v22;
    v24 = *(_BYTE *)(a1 + 106);
    LOBYTE(v42) = v23;
    BYTE2(v42) = v24;
    if ( *(_DWORD *)v21 == 1094997074 )
    {
      v25 = v21 + 376;
    }
    else
    {
      v25 = v21 + 168;
      if ( *(_DWORD *)v21 != 1314275652 )
        v25 = 0LL;
    }
    RaCallMiniportUnitControl(v25, 31LL, v40);
    KeReleaseSpinLock((PKSPIN_LOCK)(*(_QWORD *)(a1 + 32) + 24LL), v20);
  }
  v7 = StorEtwLoggingEnabled == 0;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = 0;
  if ( v7 )
    goto LABEL_9;
  v39 = 0LL;
  IoGetActivityIdIrp(a2, &v39);
  v9 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)v9 == 14 )
  {
    if ( (byte_140171462 & 8) == 0 )
      goto LABEL_9;
    v11 = &EventNonReadWriteRequestComplete;
    goto LABEL_12;
  }
  if ( *(_BYTE *)v9 != 15 )
  {
    if ( *(_BYTE *)v9 != 27 )
      goto LABEL_9;
    if ( *(_BYTE *)(v9 + 1) == 7 && !*(_DWORD *)(v9 + 8) )
    {
      if ( (byte_140171462 & 0x40) != 0 )
      {
        v12 = *(int **)(a2 + 56);
        if ( v12 )
          v6 = *v12;
        McTemplateK0pqd_EtwWriteTransfer((_DWORD)v8, v9, (unsigned int)&v39, a2, v6, *(_DWORD *)(a2 + 48));
      }
      goto LABEL_9;
    }
    if ( (byte_140171462 & 0x20) == 0 )
      goto LABEL_9;
    v11 = &EventPnpRequestComplete;
LABEL_12:
    McTemplateK0pd_EtwWriteTransfer(v8, v11, &v39, a2, *(_DWORD *)(a2 + 48));
    goto LABEL_9;
  }
  if ( byte_140171461 >= 0 )
    goto LABEL_9;
  v13 = *(_QWORD *)(v9 + 8);
  v26 = 0;
  v27 = 0LL;
  v28 = 0;
  v15 = 0;
  v17 = 0;
  v18 = 0;
  if ( *(_BYTE *)(v13 + 2) != 40 )
  {
    v34 = *(_BYTE *)(v13 + 72);
    v27 = *(_BYTE **)(v13 + 32);
    v28 = *(_BYTE *)(v13 + 11);
    v26 = *(_BYTE *)(v13 + 4);
    if ( *(_BYTE *)(v13 + 2) )
      goto LABEL_9;
LABEL_74:
    LOBYTE(v8) = v34 - 8;
    if ( ((unsigned __int8)v8 & 0x5D) != 0 )
      goto LABEL_9;
    v35 = *(_BYTE *)(v13 + 3);
    if ( v35 == 1 || !v27 || !v28 )
      goto LABEL_34;
    LOBYTE(v13) = 0;
    v8 = &v27[v28];
    v14 = v27 + 8;
    if ( (unsigned __int8)((*v27 & 0x7F) - 114) <= 1u )
    {
      if ( v14 > v8 )
      {
LABEL_32:
        if ( (_BYTE)v13 )
        {
          LOBYTE(v6) = v17;
          v19 = v18;
LABEL_35:
          McTemplateK0pduuuuup_EtwWriteTransfer(
            (_DWORD)v8,
            v13,
            (unsigned int)&v39,
            a2,
            *(_DWORD *)(a2 + 48),
            v35,
            v26,
            v15,
            v6,
            v19,
            a2);
          goto LABEL_9;
        }
LABEL_34:
        v15 = 0;
        v19 = 0;
        goto LABEL_35;
      }
      v17 = v27[2];
      v15 = v27[1] & 0xF;
      v18 = v27[3];
    }
    else
    {
      if ( v14 > v8 )
        goto LABEL_32;
      v15 = v27[2] & 0xF;
      v16 = v28;
      if ( (unsigned int)(unsigned __int8)v27[7] + 8 <= v28 )
        v16 = (unsigned __int8)v27[7] + 8;
      v8 = v27 + 13;
      v13 = (unsigned __int64)&v27[v16];
      if ( (unsigned __int64)(v27 + 13) <= v13 )
        v17 = v27[12];
      if ( (unsigned __int64)(v27 + 14) <= v13 )
        v18 = *v8;
    }
    LOBYTE(v13) = 1;
    goto LABEL_32;
  }
  v29 = 0LL;
  v36 = 0;
  if ( *(_DWORD *)(v13 + 20) )
    goto LABEL_9;
  LODWORD(v8) = 0;
  v37 = 0;
  if ( !*(_DWORD *)(v13 + 56) )
    goto LABEL_71;
  v30 = *(_DWORD *)(v13 + 56);
  v31 = (unsigned int *)(v13 + 120);
  v38 = v13 + 120;
  while ( 1 )
  {
    v32 = *v31;
    if ( (unsigned int)v32 >= 0x80 )
    {
      v33 = *(unsigned int *)(v13 + 16);
      if ( (unsigned int)v32 < (unsigned int)v33 )
        break;
    }
LABEL_64:
    LODWORD(v8) = (_DWORD)v8 + 1;
    v31 = (unsigned int *)(v38 + 4);
    v37 = (int)v8;
    v38 += 4LL;
    if ( (unsigned int)v8 >= v30 )
      goto LABEL_71;
  }
  if ( *(_DWORD *)(v32 + v13) != 64 )
  {
    LODWORD(v8) = *(_DWORD *)(v32 + v13) - 65;
    if ( *(_DWORD *)(v32 + v13) == 65 )
    {
      LODWORD(v8) = v32 + 56;
      if ( v32 + 56 <= v33 )
      {
        v36 = 1;
        if ( *(_BYTE *)(v32 + v13 + 10) )
          v29 = (char *)(v32 + v13 + 24);
        v26 = *(_BYTE *)(v32 + v13 + 8);
        v27 = *(_BYTE **)(v32 + v13 + 16);
        v28 = *(_BYTE *)(v32 + v13 + 9);
      }
    }
    else if ( *(_DWORD *)(v32 + v13) == 66 )
    {
      LODWORD(v8) = v32 + 40;
      if ( v32 + 40 <= v33 )
      {
        if ( *(_DWORD *)(v32 + v13 + 12) )
          v29 = (char *)(v32 + v13 + 32);
        v27 = *(_BYTE **)(v32 + v13 + 24);
        goto LABEL_70;
      }
    }
    goto LABEL_62;
  }
  LODWORD(v8) = v32 + 40;
  if ( v32 + 40 > v33 )
  {
LABEL_62:
    if ( v36 )
      goto LABEL_71;
    LODWORD(v8) = v37;
    v30 = *(_DWORD *)(v13 + 56);
    goto LABEL_64;
  }
  if ( *(_BYTE *)(v32 + v13 + 10) )
    v29 = (char *)(v32 + v13 + 24);
  v27 = *(_BYTE **)(v32 + v13 + 16);
LABEL_70:
  v28 = *(_BYTE *)(v32 + v13 + 9);
  v26 = *(_BYTE *)(v32 + v13 + 8);
LABEL_71:
  if ( v29 )
  {
    v34 = *v29;
    goto LABEL_74;
  }
LABEL_9:
  IofCompleteRequest((PIRP)a2, 0);
  return 0LL;
}
