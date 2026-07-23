/*
 * XREFs of PpmIdleCaptureCsVetoAccounting @ 0x1402B5F24
 * Callers:
 *     PopCaptureSleepStudyStatistics @ 0x1402B63C0 (PopCaptureSleepStudyStatistics.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14027E340 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140285130 (KeAcquireSpinLockRaiseToDpc.c)
 *     PpmIdleCsVetoAccountingUpdateBlock @ 0x1403A5F7C (PpmIdleCsVetoAccountingUpdateBlock.c)
 *     PopDiagTraceSleepStudyBlocker @ 0x140494FCC (PopDiagTraceSleepStudyBlocker.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

void __fastcall PpmIdleCaptureCsVetoAccounting(__int64 a1, unsigned int a2)
{
  __int64 v2; // rsi
  KIRQL v3; // al
  __int64 v4; // rbx
  KIRQL v5; // r14
  unsigned int i; // edi
  unsigned int v7; // edi
  __int64 v8; // rsi
  unsigned __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  int v12; // ecx
  char v13; // [rsp+28h] [rbp-79h] BYREF
  int v14; // [rsp+2Ch] [rbp-75h] BYREF
  __int64 v15; // [rsp+30h] [rbp-71h] BYREF
  __int64 v16; // [rsp+38h] [rbp-69h] BYREF
  __int128 v17; // [rsp+40h] [rbp-61h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+58h] [rbp-49h] BYREF
  GUID *v19; // [rsp+68h] [rbp-39h]
  __int64 v20; // [rsp+70h] [rbp-31h]
  int *v21; // [rsp+78h] [rbp-29h]
  __int64 v22; // [rsp+80h] [rbp-21h]
  __int64 v23; // [rsp+88h] [rbp-19h]
  int v24; // [rsp+90h] [rbp-11h]
  int v25; // [rsp+94h] [rbp-Dh]
  __int128 *v26; // [rsp+98h] [rbp-9h]
  __int64 v27; // [rsp+A0h] [rbp-1h]
  unsigned __int64 v28; // [rsp+A8h] [rbp+7h]
  __int64 v29; // [rsp+B0h] [rbp+Fh]
  __int64 *v30; // [rsp+B8h] [rbp+17h]
  __int64 v31; // [rsp+C0h] [rbp+1Fh]
  __int64 *v32; // [rsp+C8h] [rbp+27h]
  __int64 v33; // [rsp+D0h] [rbp+2Fh]

  v2 = a2;
  v15 = PopWnfCsEnterScenarioId;
  v16 = 0LL;
  v17 = 0LL;
  v13 = 0;
  v14 = 0;
  if ( PpmPlatformStates )
  {
    v3 = KeAcquireSpinLockRaiseToDpc(&PpmIdleVetoLock);
    v4 = PpmPlatformStates;
    v5 = v3;
    for ( i = 0; i < *(_DWORD *)PpmPlatformStates; ++i )
    {
      v10 = 448LL * i;
      v11 = v10 + v4 + 80;
      LOBYTE(v10) = 4;
      PpmIdleCsVetoAccountingUpdateBlock(v11, v10, 0LL);
      v4 = PpmPlatformStates;
    }
    if ( (_DWORD)v2 != -1 )
    {
      v7 = 0;
      v13 = v15;
      UserData.Ptr = (ULONGLONG)&v13;
      WORD2(v17) = v2;
      v19 = &GUID_SLEEPSTUDY_BLOCKER_PARENT_PREVETO;
      v8 = 448 * v2;
      LODWORD(v17) = -1429427508;
      *(_QWORD *)&UserData.Size = 1LL;
      v20 = 16LL;
      v26 = &v17;
      v27 = 16LL;
      if ( *(_DWORD *)(v8 + v4 + 108) )
      {
        do
        {
          v9 = *(_QWORD *)(v8 + v4 + 112) + ((unsigned __int64)v7 << 6);
          if ( *(_QWORD *)(v9 + 56) )
          {
            DWORD2(v17) = *(_DWORD *)(v9 + 16);
            v14 = *((unsigned __int16 *)PpmIdleVetoList + 12 * v7 + 8) >> 1;
            v21 = &v14;
            v22 = 4LL;
            v12 = *((unsigned __int16 *)PpmIdleVetoList + 12 * v7 + 8);
            v23 = *((_QWORD *)PpmIdleVetoList + 3 * v7 + 3);
            v30 = &v15;
            v24 = v12;
            v32 = &v16;
            v25 = 0;
            v28 = v9 + 56;
            v29 = 8LL;
            v31 = 8LL;
            v16 = 0LL;
            v33 = 8LL;
            PopDiagTraceSleepStudyBlocker(&UserData);
          }
          ++v7;
        }
        while ( v7 < *(_DWORD *)(v8 + v4 + 108) );
      }
    }
    KeReleaseSpinLock(&PpmIdleVetoLock, v5);
  }
}
