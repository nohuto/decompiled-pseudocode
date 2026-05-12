/*
 * XREFs of RaUnitSurpriseRemovalIrp @ 0x14018B11C
 * Callers:
 *     RaUnitPnpIrp @ 0x140015D70 (RaUnitPnpIrp.c)
 * Callees:
 *     RaidIsUnitControlSupported @ 0x14001DD30 (RaidIsUnitControlSupported.c)
 *     RaCallMiniportUnitControl @ 0x14001DEE0 (RaCallMiniportUnitControl.c)
 *     McTemplateK0zqjuuujsssztt_EtwWriteTransfer @ 0x1400237C4 (McTemplateK0zqjuuujsssztt_EtwWriteTransfer.c)
 *     StorpLogPerUnitStatistics @ 0x14003C190 (StorpLogPerUnitStatistics.c)
 *     RaUnitWaitForRemoveLock @ 0x14003E098 (RaUnitWaitForRemoveLock.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x140052DF0 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140052EC8 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x1400569AC (McTemplateK0pqd_EtwWriteTransfer.c)
 *     RaUnitDeregisterFromIdleDetection @ 0x14007705C (RaUnitDeregisterFromIdleDetection.c)
 *     RaidUnitCancelPendingRequests @ 0x14009E028 (RaidUnitCancelPendingRequests.c)
 *     RaidUnitConvertToZombieUnit @ 0x14009E190 (RaidUnitConvertToZombieUnit.c)
 *     RaidUnitUnRegisterInterfaces @ 0x1400A1400 (RaidUnitUnRegisterInterfaces.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401436D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall RaUnitSurpriseRemovalIrp(__int64 a1, __int64 a2)
{
  int v2; // esi
  __int32 v5; // eax
  void (__fastcall *v6)(_QWORD, __int64 *); // r8
  __int64 v7; // rcx
  char v8; // dl
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rdi
  const wchar_t *v12; // r10
  unsigned __int64 v13; // r8
  signed __int32 v14; // eax
  signed __int32 v15; // ett
  bool v16; // zf
  unsigned __int64 v17; // rcx
  __int64 v18; // rdx
  int *v19; // rax
  const EVENT_DESCRIPTOR *v20; // rdx
  __int64 v21; // rdx
  char v22; // bl
  char v23; // r14
  _BYTE *v24; // r9
  unsigned __int8 v25; // r10
  char v26; // r11
  char v27; // r13
  char *v28; // rbx
  unsigned int v29; // r12d
  unsigned __int64 v30; // rdi
  __int64 v31; // r8
  int v32; // ecx
  char v33; // cl
  char v34; // r8
  _BYTE *v35; // rax
  unsigned int v36; // eax
  unsigned __int64 v37; // r8
  char v38; // al
  __int64 v40; // [rsp+20h] [rbp-79h]
  __int64 v41; // [rsp+28h] [rbp-71h]
  __int64 v42; // [rsp+30h] [rbp-69h]
  __int64 v43; // [rsp+38h] [rbp-61h]
  __int64 v44; // [rsp+40h] [rbp-59h]
  __int64 v45; // [rsp+48h] [rbp-51h]
  char v46; // [rsp+80h] [rbp-19h]
  char v47; // [rsp+81h] [rbp-18h]
  __int32 v48; // [rsp+84h] [rbp-15h]
  unsigned int v49; // [rsp+84h] [rbp-15h]
  __int64 v50; // [rsp+88h] [rbp-11h] BYREF
  union _LARGE_INTEGER Interval; // [rsp+90h] [rbp-9h] BYREF
  __int128 v52; // [rsp+98h] [rbp-1h]
  GUID v53; // [rsp+A8h] [rbp+Fh] BYREF

  v2 = 0;
  v50 = 0LL;
  Interval.QuadPart = 0LL;
  v5 = _InterlockedExchange((volatile __int32 *)(a1 + 56), 5);
  v6 = *(void (__fastcall **)(_QWORD, __int64 *))(a1 + 3520);
  v48 = v5;
  if ( v6 )
  {
    v7 = *(_QWORD *)(a1 + 24);
    LODWORD(v50) = 8;
    v8 = *(_BYTE *)(v7 + 56);
    *(_WORD *)((char *)&v50 + 5) = *(_WORD *)(a1 + 104);
    HIBYTE(v50) = *(_BYTE *)(a1 + 106);
    BYTE4(v50) = v8;
    v6(0LL, &v50);
    v5 = v48;
    *(_QWORD *)(a1 + 3520) = 0LL;
  }
  if ( (unsigned int)(v5 - 6) > 1 )
    RaidUnitUnRegisterInterfaces(a1);
  RaidUnitCancelPendingRequests((_QWORD *)a1);
  if ( RaidIsUnitControlSupported(a1, 10) )
  {
    v9 = *(_QWORD *)(a1 + 24);
    v52 = 0LL;
    LOWORD(v52) = 1;
    WORD1(v52) = *(_WORD *)(v9 + 56);
    WORD4(v52) = *(_WORD *)(a1 + 104);
    BYTE10(v52) = *(_BYTE *)(a1 + 106);
    DWORD1(v52) = 4;
    if ( *(_DWORD *)v9 == 1094997074 )
    {
      v10 = v9 + 376;
    }
    else if ( *(_DWORD *)v9 == 1314275652 )
    {
      v10 = v9 + 168;
    }
    else
    {
      v10 = 0LL;
    }
    RaCallMiniportUnitControl(v10);
  }
  if ( (byte_140171465 & 8) != 0 )
  {
    v11 = *(_QWORD *)(a1 + 24);
    v12 = (const wchar_t *)&unk_140151214;
    if ( *(_QWORD *)(v11 + 5080) )
      v12 = *(const wchar_t **)(v11 + 5080);
    McTemplateK0zqjuuujsssztt_EtwWriteTransfer(
      a1 + 177,
      a1 + 168,
      a1 + 2104,
      *(const wchar_t **)(v11 + 4720),
      *(_DWORD *)(v11 + 56),
      v11 + 5064,
      *(_BYTE *)(a1 + 104),
      *(_BYTE *)(a1 + 105),
      *(_BYTE *)(a1 + 106),
      a1 + 2104,
      (const char *)(a1 + 168),
      (const char *)(a1 + 177),
      (const char *)(a1 + 242),
      v12,
      (*(_BYTE *)(a1 + 506) & 0x40) != 0,
      *(_BYTE *)(a1 + 506) >> 7);
  }
  StorpLogPerUnitStatistics(a1, 52);
  v13 = (unsigned __int64)HIDWORD(KeGetPcr()[1].LockArray) << 6;
  v14 = *(_DWORD *)(v13 + *(_QWORD *)(a1 + 40));
  while ( (v14 & 1) == 0 )
  {
    v15 = v14;
    v14 = _InterlockedCompareExchange((volatile signed __int32 *)(v13 + *(_QWORD *)(a1 + 40)), v14 - 2, v14);
    if ( v15 == v14 )
      goto LABEL_21;
  }
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 1032), 0xFFFFFFFF) == 1 )
    KeSetEvent((PRKEVENT)(a1 + 520), 0, 0);
LABEL_21:
  if ( (*(_DWORD *)(a1 + 512) & 0x80u) == 0 )
  {
    RaUnitWaitForRemoveLock(a1);
  }
  else
  {
    Interval.QuadPart = -10000000LL;
    KeDelayExecutionThread(0, 0, &Interval);
  }
  RaUnitDeregisterFromIdleDetection(a1);
  RaidUnitConvertToZombieUnit(a1);
  v16 = StorEtwLoggingEnabled == 0;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = 0;
  if ( v16 )
    goto LABEL_88;
  v53 = 0LL;
  IoGetActivityIdIrp(a2, &v53);
  v18 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)v18 == 14 )
  {
    if ( (byte_140171462 & 8) == 0 )
      goto LABEL_88;
    v20 = &EventNonReadWriteRequestComplete;
    goto LABEL_87;
  }
  if ( *(_BYTE *)v18 != 15 )
  {
    if ( *(_BYTE *)v18 != 27 )
      goto LABEL_88;
    if ( *(_BYTE *)(v18 + 1) == 7 && !*(_DWORD *)(v18 + 8) )
    {
      if ( (byte_140171462 & 0x40) != 0 )
      {
        v19 = *(int **)(a2 + 56);
        if ( v19 )
          v2 = *v19;
        LODWORD(v41) = *(_DWORD *)(a2 + 48);
        LODWORD(v40) = v2;
        McTemplateK0pqd_EtwWriteTransfer(v17, v18, &v53, a2, v40, v41);
      }
      goto LABEL_88;
    }
    if ( (byte_140171462 & 0x20) == 0 )
      goto LABEL_88;
    v20 = &EventPnpRequestComplete;
LABEL_87:
    LODWORD(v40) = *(_DWORD *)(a2 + 48);
    McTemplateK0pd_EtwWriteTransfer(v17, v20, &v53, a2, v40);
    goto LABEL_88;
  }
  if ( byte_140171461 >= 0 )
    goto LABEL_88;
  v21 = *(_QWORD *)(v18 + 8);
  v22 = 0;
  v23 = 0;
  v46 = 0;
  v24 = 0LL;
  v25 = 0;
  v26 = 0;
  v27 = 0;
  if ( *(_BYTE *)(v21 + 2) != 40 )
  {
    v33 = *(_BYTE *)(v21 + 72);
    v24 = *(_BYTE **)(v21 + 32);
    v25 = *(_BYTE *)(v21 + 11);
    v23 = *(_BYTE *)(v21 + 4);
    if ( !*(_BYTE *)(v21 + 2) )
      goto LABEL_64;
    goto LABEL_88;
  }
  v28 = 0LL;
  v47 = 0;
  if ( *(_DWORD *)(v21 + 20) )
    goto LABEL_88;
  v29 = 0;
  v49 = *(_DWORD *)(v21 + 56);
  if ( !v49 )
    goto LABEL_61;
  while ( 1 )
  {
    v17 = *(unsigned int *)(v21 + 4LL * v29 + 120);
    if ( (unsigned int)v17 >= 0x80 )
    {
      v30 = *(unsigned int *)(v21 + 16);
      if ( (unsigned int)v17 < (unsigned int)v30 )
        break;
    }
LABEL_55:
    if ( ++v29 >= v49 )
      goto LABEL_61;
  }
  v31 = (unsigned int)v17;
  v32 = *(_DWORD *)(v17 + v21) - 64;
  if ( v32 )
  {
    v17 = (unsigned int)(v32 - 1);
    if ( (_DWORD)v17 )
    {
      if ( (_DWORD)v17 == 1 )
      {
        v17 = v31 + 40;
        if ( v31 + 40 <= v30 )
        {
          if ( *(_DWORD *)(v31 + v21 + 12) )
            v28 = (char *)(v31 + v21 + 32);
          v24 = *(_BYTE **)(v31 + v21 + 24);
          goto LABEL_60;
        }
      }
    }
    else
    {
      v17 = v31 + 56;
      if ( v31 + 56 <= v30 )
      {
        v47 = 1;
        if ( *(_BYTE *)(v31 + v21 + 10) )
          v28 = (char *)(v31 + v21 + 24);
        v23 = *(_BYTE *)(v31 + v21 + 8);
        v24 = *(_BYTE **)(v31 + v21 + 16);
        v25 = *(_BYTE *)(v31 + v21 + 9);
      }
    }
    goto LABEL_54;
  }
  v17 = v31 + 40;
  if ( v31 + 40 > v30 )
  {
LABEL_54:
    if ( v47 )
      goto LABEL_61;
    goto LABEL_55;
  }
  if ( *(_BYTE *)(v31 + v21 + 10) )
    v28 = (char *)(v31 + v21 + 24);
  v24 = *(_BYTE **)(v31 + v21 + 16);
LABEL_60:
  v25 = *(_BYTE *)(v31 + v21 + 9);
  v23 = *(_BYTE *)(v31 + v21 + 8);
LABEL_61:
  if ( v28 )
  {
    v33 = *v28;
    v22 = 0;
LABEL_64:
    LOBYTE(v17) = v33 - 8;
    if ( (v17 & 0x5D) == 0 )
    {
      if ( *(_BYTE *)(v21 + 3) == 1 || !v24 || !v25 )
        goto LABEL_83;
      v34 = 0;
      v17 = (unsigned __int64)&v24[v25];
      v35 = v24 + 8;
      if ( (unsigned __int8)((*v24 & 0x7F) - 114) <= 1u )
      {
        if ( (unsigned __int64)v35 <= v17 )
        {
          v34 = 1;
          v22 = v24[2];
          v26 = v24[1] & 0xF;
          v27 = v24[3];
        }
      }
      else
      {
        if ( (unsigned __int64)v35 <= v17 )
        {
          v26 = v24[2] & 0xF;
          v36 = v25;
          if ( (unsigned int)(unsigned __int8)v24[7] + 8 <= v25 )
            v36 = (unsigned __int8)v24[7] + 8;
          v17 = (unsigned __int64)(v24 + 13);
          v37 = (unsigned __int64)&v24[v36];
          if ( (unsigned __int64)(v24 + 13) > v37 )
            v46 = 0;
          else
            v46 = v24[12];
          if ( (unsigned __int64)(v24 + 14) <= v37 )
            v27 = *(_BYTE *)v17;
          v34 = 1;
        }
        v22 = v46;
      }
      if ( v34 )
      {
        LOBYTE(v2) = v22;
        v38 = v27;
      }
      else
      {
LABEL_83:
        v26 = 0;
        v38 = 0;
      }
      LOBYTE(v45) = v38;
      LOBYTE(v44) = v2;
      LOBYTE(v43) = v26;
      LOBYTE(v42) = v23;
      LOBYTE(v41) = *(_BYTE *)(v21 + 3);
      LODWORD(v40) = *(_DWORD *)(a2 + 48);
      McTemplateK0pduuuuup_EtwWriteTransfer(v17, v21, &v53, a2, v40, v41, v42, v43, v44, v45, a2);
    }
  }
LABEL_88:
  IofCompleteRequest((PIRP)a2, 0);
  return 0LL;
}
