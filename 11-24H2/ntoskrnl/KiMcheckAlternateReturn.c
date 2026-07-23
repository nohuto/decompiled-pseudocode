/*
 * XREFs of KiMcheckAlternateReturn @ 0x1405C73B0
 * Callers:
 *     KxMcheckAlternateReturn @ 0x1406BC100 (KxMcheckAlternateReturn.c)
 * Callees:
 *     KeStallExecutionProcessor @ 0x140319510 (KeStallExecutionProcessor.c)
 *     WheapGetErrorSource @ 0x1404204D8 (WheapGetErrorSource.c)
 *     WheaGetErrPacketFromErrRecord @ 0x140552990 (WheaGetErrPacketFromErrRecord.c)
 *     KiAltContextWorkQueueAddItem @ 0x1405C7258 (KiAltContextWorkQueueAddItem.c)
 *     WheaRecoveryBugCheck @ 0x14065A2F0 (WheaRecoveryBugCheck.c)
 *     WheaGetCurrentProcessName @ 0x14065B440 (WheaGetCurrentProcessName.c)
 *     WheaLogInternalEvent @ 0x14065C840 (WheaLogInternalEvent.c)
 *     WheaProcessWaitingETWEvents @ 0x14065CA30 (WheaProcessWaitingETWEvents.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     WheaAttemptPhysicalPageOffline @ 0x1407C7790 (WheaAttemptPhysicalPageOffline.c)
 *     WheaTerminateProcess @ 0x1407C7C20 (WheaTerminateProcess.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall KiMcheckAlternateReturn(unsigned int *a1)
{
  __int64 v1; // r14
  char v2; // r13
  unsigned __int64 v3; // rbx
  __int64 v4; // rdi
  unsigned int *v5; // r12
  int v6; // esi
  __int64 CurrentIrql; // r15
  unsigned int v8; // r9d
  unsigned int *v9; // rdx
  unsigned int *v10; // rcx
  unsigned int i; // r8d
  __int64 v12; // rax
  __int64 v13; // rbx
  unsigned int j; // ecx
  __int64 v15; // rax
  __int64 Pool2; // rax
  int v17; // r9d
  void *v18; // r15
  int v19; // eax
  __int64 result; // rax
  PWHEA_ERROR_PACKET ErrPacketFromErrRecord; // rax
  __int64 *ErrorSource; // rax
  __int64 v23; // rdx
  unsigned __int8 v24; // r15
  unsigned int v25; // r12d
  __int64 v26; // [rsp+30h] [rbp-50h] BYREF
  unsigned int *v27; // [rsp+38h] [rbp-48h] BYREF
  __int128 Src; // [rsp+40h] [rbp-40h] BYREF
  __int128 v29; // [rsp+50h] [rbp-30h]
  __int128 v30; // [rsp+60h] [rbp-20h]
  char v31; // [rsp+70h] [rbp-10h]

  v1 = *((_QWORD *)a1 + 1);
  v2 = *(_BYTE *)a1 & 0x10;
  v27 = a1;
  v3 = 0LL;
  v31 = 0;
  v4 = 0LL;
  v5 = a1;
  Src = 0LL;
  v6 = -1073741637;
  v29 = 0LL;
  v30 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  v8 = *(unsigned __int16 *)(v1 + 10);
  v9 = (unsigned int *)(v1 + 128);
  v10 = (unsigned int *)(v1 + 128);
  v26 = CurrentIrql;
  for ( i = 0; ; ++i )
  {
    if ( i >= v8 )
      goto LABEL_21;
    v12 = *((_QWORD *)v10 + 2) - *(_QWORD *)&XPF_MCA_SECTION_GUID.Data1;
    if ( !v12 )
      v12 = *((_QWORD *)v10 + 3) - *(_QWORD *)XPF_MCA_SECTION_GUID.Data4;
    if ( !v12 )
      break;
    v10 += 18;
  }
  v13 = *v10;
  for ( j = 0; j < v8; ++j )
  {
    v15 = *((_QWORD *)v9 + 2) - RECOVERY_INFO_SECTION_GUID;
    if ( !v15 )
      v15 = *((_QWORD *)v9 + 3) - *((_QWORD *)&RECOVERY_INFO_SECTION_GUID + 1);
    if ( !v15 )
    {
      v4 = v1 + *v9;
      break;
    }
    v9 += 18;
  }
  v3 = *(_QWORD *)(v13 + v1 + 48);
  if ( (*v5 & 4) != 0 )
  {
    if ( v4 )
      *(_QWORD *)(v4 + 1) |= 8uLL;
    if ( !(_BYTE)CurrentIrql )
    {
      Pool2 = ExAllocatePool2(0x100uLL, 0x1828uLL, 0x61656857u);
      v18 = (void *)Pool2;
      if ( Pool2 )
      {
        LOBYTE(v17) = v2;
        v6 = WheaAttemptPhysicalPageOffline(v3 >> 12, 0, 1, v17, Pool2);
        ExFreePoolWithTag(v18, 0x61656857u);
      }
      else
      {
LABEL_19:
        v6 = -1073741670;
      }
LABEL_20:
      LOBYTE(CurrentIrql) = v26;
      goto LABEL_21;
    }
    if ( KiAltReturnInitialized )
    {
      v24 = 0;
      while ( _InterlockedCompareExchange(&dword_140E66920[12 * v24], 1, 0) )
      {
        if ( ++v24 >= 0x10u )
          goto LABEL_19;
      }
      *(_OWORD *)((char *)&KiAltContextWrapper + 48 * v24 + 24) = *(_OWORD *)v5;
      _InterlockedAdd((volatile signed __int32 *)&KiAltContextWrapper + 12 * v24 + 4, 1u);
      KiAltContextWorkQueueAddItem((PLIST_ENTRY)&KiAltContextWrapper + 3 * v24);
      v25 = 0;
      while ( *((int *)&KiAltContextWrapper + 12 * v24 + 4) > 1 )
      {
        KeStallExecutionProcessor(0x32u);
        v25 += 50;
        if ( v25 >= 0x1E8480 )
        {
          *((_DWORD *)&KiAltContextWrapper + 12 * v24 + 10) = 258;
          break;
        }
      }
      v6 = *((_DWORD *)&KiAltContextWrapper + 12 * v24 + 10);
      _InterlockedExchange(&dword_140E66920[12 * v24], 0);
      v5 = v27;
      if ( v6 )
        goto LABEL_20;
      LOBYTE(CurrentIrql) = v26;
      if ( (unsigned __int8)v26 >= 2u )
        v6 = -1073741595;
    }
  }
LABEL_21:
  v19 = *v5;
  *(_QWORD *)&Src = 0x1674C6857LL;
  *((_QWORD *)&Src + 1) = 49LL;
  *(_QWORD *)&v29 = 0x800000354C4E524BuLL;
  *((_QWORD *)&v29 + 1) = 0x1100000002LL;
  LODWORD(v30) = v19;
  *(_QWORD *)((char *)&v30 + 4) = v3;
  HIDWORD(v30) = v6;
  v31 = v2;
  result = WheaLogInternalEvent(&Src);
  if ( v4 )
  {
    *(_BYTE *)(v4 + 13) = CurrentIrql;
    v27 = (unsigned int *)(v4 + 19);
    LODWORD(v26) = 20;
    result = WheaGetCurrentProcessName(&v27, &v26);
  }
  if ( v6 == 259 )
  {
    result = *v5;
    if ( (result & 8) != 0 && !v2 )
    {
      if ( v4 )
        *(_QWORD *)(v4 + 1) |= 2uLL;
      result = WheaTerminateProcess();
    }
  }
  *(_DWORD *)(v1 + 104) &= ~0x80u;
  if ( !v6 )
    return WheaProcessWaitingETWEvents();
  if ( v2 )
  {
    ErrPacketFromErrRecord = WheaGetErrPacketFromErrRecord((PWHEA_ERROR_RECORD)v1);
    if ( ErrPacketFromErrRecord )
    {
      ErrorSource = WheapGetErrorSource((__int64)&WheapErrorSourceTable, ErrPacketFromErrRecord->ErrorSourceId);
      v23 = (unsigned __int64)(ErrorSource + 12) & ((unsigned __int128)-(__int128)(unsigned __int64)ErrorSource >> 64);
    }
    else
    {
      v23 = 0LL;
    }
    if ( v4 )
    {
      *(_BYTE *)(v4 + 14) = 0;
      switch ( v6 )
      {
        case 258:
          *(_DWORD *)(v4 + 15) = 2;
          break;
        case -1073741670:
          *(_DWORD *)(v4 + 15) = 11;
          break;
        case 259:
          *(_DWORD *)(v4 + 15) = 1;
          break;
        default:
          *(_DWORD *)(v4 + 15) = 16 - (v6 != -1073741595);
          break;
      }
    }
    *(_DWORD *)(v1 + 104) &= ~1u;
    *(_DWORD *)(v1 + 12) = 1;
    result = WheaRecoveryBugCheck(v1, v23, 0LL);
  }
  if ( v6 >= 0 )
    return WheaProcessWaitingETWEvents();
  return result;
}
