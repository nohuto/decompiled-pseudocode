/*
 * XREFs of EtwpUpdateSelectedGroupMasks @ 0x14048A210
 * Callers:
 *     EtwpEnableMetaProviderGuid @ 0x1404233C0 (EtwpEnableMetaProviderGuid.c)
 *     EtwpUpdateGroupMasks @ 0x1409D112C (EtwpUpdateGroupMasks.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     EtwEventEnabled @ 0x1402D1300 (EtwEventEnabled.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     EtwpEventWriteTemplateInvalidGroupMask @ 0x1407A7868 (EtwpEventWriteTemplateInvalidGroupMask.c)
 *     EtwpCCSwapStop @ 0x1407B3CA4 (EtwpCCSwapStop.c)
 *     SeSinglePrivilegeCheck @ 0x140850150 (SeSinglePrivilegeCheck.c)
 *     EtwpUpdateGlobalGroupMasks @ 0x14085C8B8 (EtwpUpdateGlobalGroupMasks.c)
 *     EtwpKernelTraceRundown @ 0x140A0F024 (EtwpKernelTraceRundown.c)
 *     EtwpLogAlwaysPresentRundown @ 0x140A0F418 (EtwpLogAlwaysPresentRundown.c)
 *     EtwpLogGroupMask @ 0x140A0F484 (EtwpLogGroupMask.c)
 *     EtwpEventWriteTemplateAdmin @ 0x140A8A8A8 (EtwpEventWriteTemplateAdmin.c)
 *     EtwpCCSwapStart @ 0x140ABA320 (EtwpCCSwapStart.c)
 */

__int64 __fastcall EtwpUpdateSelectedGroupMasks(int *a1, _DWORD *a2, _DWORD *a3)
{
  unsigned int v3; // r12d
  __int64 v4; // r13
  int v8; // eax
  int updated; // esi
  __int64 i; // rdx
  char *v11; // rax
  char *v12; // r15
  __int64 v13; // r15
  int v14; // eax
  __int64 v15; // rdx
  int v16; // eax
  int v17; // eax
  __int64 v18; // rcx
  _DWORD *v19; // r8
  char *v20; // rdi
  char *v21; // r14
  char *v22; // r9
  char *v23; // r10
  __int64 v24; // rsi
  char *v25; // r11
  int v26; // ecx
  int v27; // edx
  int v28; // eax
  int v29; // eax
  int v30; // edi
  __int64 v31; // rax
  __int64 v32; // rsi
  __int128 v33; // xmm1
  __int64 v34; // r9
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v38; // rdx
  int v39; // eax
  int v40; // eax
  __int128 v41; // [rsp+40h] [rbp-49h] BYREF
  __int128 v42; // [rsp+50h] [rbp-39h]
  _OWORD v43[2]; // [rsp+60h] [rbp-29h] BYREF
  _OWORD v44[2]; // [rsp+80h] [rbp-9h] BYREF

  v3 = *a1;
  v4 = *((_QWORD *)a1 + 170);
  memset(v43, 0, sizeof(v43));
  memset(v44, 0, sizeof(v44));
  v41 = 0LL;
  v42 = 0LL;
  if ( a3 )
  {
    v8 = a3[1];
    if ( (v8 & 1) != 0 || (v8 & 0x10) != 0 )
    {
      *a3 |= 0x200u;
      *a2 |= 0x200u;
    }
  }
  updated = -1073741727;
  if ( *((_QWORD *)a1 + 170) != EtwpHostSiloState )
  {
    for ( i = 0LL; (unsigned int)i < 8; i = (unsigned int)(i + 1) )
    {
      if ( (~EtwpSiloAllowedGroupMask[i] & a3[i]) != 0 )
      {
        if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_INVALID_GROUP_MASK) )
          EtwpEventWriteTemplateInvalidGroupMask(v36, v35, a1 + 34, a3);
        return (unsigned int)updated;
      }
    }
  }
  if ( a3
    && (a3[1] & 0x402) != 0
    && a1[204] >= 0
    && !SeSinglePrivilegeCheck(SeSystemProfilePrivilege, KeGetCurrentThread()->PreviousMode) )
  {
    if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_LACKS_PROFILING_PRIVILEGE) )
      EtwpEventWriteTemplateAdmin(
        a1[3],
        (unsigned int)&ETW_EVENT_LACKS_PROFILING_PRIVILEGE,
        (_DWORD)a1 + 152,
        (_DWORD)a1 + 136,
        (__int64)(a1 + 38),
        97,
        a1[3]);
    return (unsigned int)updated;
  }
  v11 = (char *)KeAbPreAcquire((__int64)(a1 + 172), 0LL);
  v12 = v11;
  if ( _interlockedbittestandset64(a1 + 172, 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)a1 + 86, v11, (__int64)(a1 + 172));
  if ( v12 )
    v12[10] = 1;
  v13 = *((unsigned __int8 *)a1 + 818);
  if ( !a2 )
    goto LABEL_19;
  v14 = a2[1];
  if ( (v14 & 4) == 0 && (v14 & 0x100) == 0 )
    goto LABEL_19;
  v15 = 32 * v13 + *((_QWORD *)a1 + 170) + 4556LL;
  if ( v15 && (v16 = *(_DWORD *)(v15 + 4), (v16 & 4) != 0) && (v16 & 0x100) != 0 )
  {
    if ( !a3 || (v40 = a3[1], (v40 & 4) == 0) || (v40 & 0x100) == 0 )
    {
      LOBYTE(v15) = 1;
      EtwpCCSwapStop((unsigned int)a1[50], v15);
LABEL_19:
      v18 = *((_QWORD *)a1 + 170);
      v19 = (_DWORD *)(32 * v13 + v18 + 4556);
      v20 = (char *)a3 - v18 + -32 * v13;
      v21 = (char *)a2 - v18 + -32 * v13;
      v22 = (char *)v43 - v18 + -32 * v13;
      v23 = (char *)v44 - v18 + -32 * v13;
      v24 = 8LL;
      v25 = (char *)&v41 - v18 + -32 * v13;
      do
      {
        v26 = *(_DWORD *)((char *)v19 + (_QWORD)v20 - 4556);
        v27 = *v19 & ~v26 & *(_DWORD *)((_BYTE *)v19 + (_QWORD)v21 - 4556);
        *(_DWORD *)((char *)v19 + (_QWORD)v22 - 4556) = v27;
        v28 = v26 & ~*v19;
        *(_DWORD *)((char *)v19 + (_QWORD)v23 - 4556) = v28;
        v29 = *v19++ | v28;
        *(_DWORD *)((char *)v19 + (_QWORD)v25 - 4560) = ~v27 & v29;
        --v24;
      }
      while ( v24 );
      EtwpLogGroupMask(v4, v3, 32 * v13 + *((_QWORD *)a1 + 170) + 4556LL, 32LL);
      v30 = a1[3] & 0x400;
      if ( EtwpBootPhase && !v30 )
        EtwpKernelTraceRundown(v43, v4, v3, 0LL, 0LL, 0);
      v31 = *((_QWORD *)a1 + 170);
      v32 = 32 * v13;
      v33 = v42;
      *(_OWORD *)(v32 + v31 + 4556) = v41;
      *(_OWORD *)(v32 + v31 + 4572) = v33;
      updated = EtwpUpdateGlobalGroupMasks(v4, v3, (unsigned int)v13);
      if ( updated >= 0 )
      {
        EtwpLogGroupMask(v4, v3, &v41, 5LL);
        if ( EtwpBootPhase )
        {
          if ( !v30 || (a1[204] & 2) != 0 )
          {
            LOBYTE(v34) = 1;
            EtwpKernelTraceRundown(v44, v4, v3, v34, 0LL, 0);
          }
        }
      }
      EtwpLogAlwaysPresentRundown(v4, v3);
      goto LABEL_27;
    }
  }
  else if ( !a3 )
  {
    goto LABEL_19;
  }
  v17 = a3[1];
  if ( (v17 & 4) == 0 )
    goto LABEL_19;
  if ( (v17 & 0x100) == 0 )
    goto LABEL_19;
  v38 = 32 * v13 + *((_QWORD *)a1 + 170) + 4556LL;
  if ( v38 )
  {
    v39 = *(_DWORD *)(v38 + 4);
    if ( (v39 & 4) != 0 && (v39 & 0x100) != 0 )
      goto LABEL_19;
  }
  updated = EtwpCCSwapStart((unsigned int)a1[50]);
  if ( updated >= 0 )
    goto LABEL_19;
LABEL_27:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)a1 + 86, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)a1 + 86);
  KeAbPostRelease((ULONG_PTR)(a1 + 172));
  return (unsigned int)updated;
}
