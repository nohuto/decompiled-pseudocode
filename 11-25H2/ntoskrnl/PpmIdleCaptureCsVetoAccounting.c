/*
 * XREFs of PpmIdleCaptureCsVetoAccounting @ 0x1404863F4
 * Callers:
 *     PopCaptureSleepStudyStatistics @ 0x140485908 (PopCaptureSleepStudyStatistics.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402535A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeReleaseSpinLock @ 0x1402EA780 (KeReleaseSpinLock.c)
 *     PpmIdleCsVetoAccountingUpdateBlock @ 0x140356068 (PpmIdleCsVetoAccountingUpdateBlock.c)
 *     PopDiagTraceSleepStudyBlocker @ 0x14049A2E8 (PopDiagTraceSleepStudyBlocker.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
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
  int v10; // ecx
  char v11; // [rsp+28h] [rbp-79h] BYREF
  int v12; // [rsp+2Ch] [rbp-75h] BYREF
  __int64 v13; // [rsp+30h] [rbp-71h] BYREF
  __int64 v14; // [rsp+38h] [rbp-69h] BYREF
  __int128 v15; // [rsp+40h] [rbp-61h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+58h] [rbp-49h] BYREF
  GUID *v17; // [rsp+68h] [rbp-39h]
  __int64 v18; // [rsp+70h] [rbp-31h]
  int *v19; // [rsp+78h] [rbp-29h]
  __int64 v20; // [rsp+80h] [rbp-21h]
  __int64 v21; // [rsp+88h] [rbp-19h]
  int v22; // [rsp+90h] [rbp-11h]
  int v23; // [rsp+94h] [rbp-Dh]
  __int128 *v24; // [rsp+98h] [rbp-9h]
  __int64 v25; // [rsp+A0h] [rbp-1h]
  unsigned __int64 v26; // [rsp+A8h] [rbp+7h]
  __int64 v27; // [rsp+B0h] [rbp+Fh]
  __int64 *v28; // [rsp+B8h] [rbp+17h]
  __int64 v29; // [rsp+C0h] [rbp+1Fh]
  __int64 *v30; // [rsp+C8h] [rbp+27h]
  __int64 v31; // [rsp+D0h] [rbp+2Fh]

  v2 = a2;
  v13 = PopWnfCsEnterScenarioId;
  v14 = 0LL;
  v15 = 0LL;
  v11 = 0;
  v12 = 0;
  if ( PpmPlatformStates )
  {
    v3 = KeAcquireSpinLockRaiseToDpc(&PpmIdleVetoLock);
    v4 = PpmPlatformStates;
    v5 = v3;
    for ( i = 0; i < *(_DWORD *)PpmPlatformStates; ++i )
    {
      PpmIdleCsVetoAccountingUpdateBlock(448LL * i + v4 + 80, 4, 0);
      v4 = PpmPlatformStates;
    }
    if ( (_DWORD)v2 != -1 )
    {
      v7 = 0;
      v11 = v13;
      UserData.Ptr = (ULONGLONG)&v11;
      WORD2(v15) = v2;
      v17 = &GUID_SLEEPSTUDY_BLOCKER_PARENT_PREVETO;
      v8 = 448 * v2;
      LODWORD(v15) = -1429427508;
      *(_QWORD *)&UserData.Size = 1LL;
      v18 = 16LL;
      v24 = &v15;
      v25 = 16LL;
      if ( *(_DWORD *)(v8 + v4 + 108) )
      {
        do
        {
          v9 = *(_QWORD *)(v8 + v4 + 112) + ((unsigned __int64)v7 << 6);
          if ( *(_QWORD *)(v9 + 56) )
          {
            DWORD2(v15) = *(_DWORD *)(v9 + 16);
            v12 = *((unsigned __int16 *)PpmIdleVetoList + 12 * v7 + 8) >> 1;
            v19 = &v12;
            v20 = 4LL;
            v10 = *((unsigned __int16 *)PpmIdleVetoList + 12 * v7 + 8);
            v21 = *((_QWORD *)PpmIdleVetoList + 3 * v7 + 3);
            v28 = &v13;
            v22 = v10;
            v30 = &v14;
            v23 = 0;
            v26 = v9 + 56;
            v27 = 8LL;
            v29 = 8LL;
            v14 = 0LL;
            v31 = 8LL;
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
