/*
 * XREFs of EmpClientRuleRegisterNotification @ 0x1407072A4
 * Callers:
 *     EmClientRuleRegisterNotification @ 0x140707280 (EmClientRuleRegisterNotification.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     PsReferenceSiloContext @ 0x14031EF70 (PsReferenceSiloContext.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     EmpSearchTargetRuleList @ 0x140445014 (EmpSearchTargetRuleList.c)
 *     EmpSearchRuleDatabase @ 0x1404477EC (EmpSearchRuleDatabase.c)
 *     EmpQueueRuleUpdateState @ 0x14057C690 (EmpQueueRuleUpdateState.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall EmpClientRuleRegisterNotification(void *a1, __int64 a2, unsigned int a3, _QWORD *a4)
{
  __int64 v4; // r14
  unsigned int v8; // edi
  char *v9; // rax
  char *v10; // rbx
  _QWORD *Pool2; // rsi
  __int64 v12; // rax
  __int64 i; // rbp
  __int64 v14; // r11
  _QWORD *v15; // rcx
  _QWORD *v16; // rax
  volatile signed __int32 *v17; // rax
  __int64 v18; // r10
  __int64 v19; // r11
  __int64 v20; // rdx
  _QWORD *v21; // rcx
  _QWORD *v22; // rdx
  char *v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  volatile signed __int32 *v26; // rax

  v4 = a3;
  v8 = 0;
  v9 = (char *)KeAbPreAcquire((__int64)&EmpDatabaseLock, 0LL);
  v10 = v9;
  if ( _interlockedbittestandset64((volatile signed __int32 *)&EmpDatabaseLock, 0LL) )
    ExfAcquirePushLockExclusiveEx(&EmpDatabaseLock, v9, (__int64)&EmpDatabaseLock);
  if ( v10 )
    v10[10] = 1;
  if ( a4 && (_DWORD)v4 && a2 )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(0x100uLL, 0x18uLL, 0x6C634D45u);
    if ( Pool2 )
    {
      v12 = ExAllocatePool2(0x100uLL, (unsigned int)(40 * v4), 0x6C634D45u);
      Pool2[1] = v12;
      if ( v12 )
      {
        *((_DWORD *)Pool2 + 4) = v4;
        for ( i = 0LL; (unsigned int)i < (unsigned int)v4; i = (unsigned int)(i + 1) )
        {
          v14 = (unsigned int)i + 2 * i;
          v15 = *(_QWORD **)(a2 + 8 * v14);
          if ( !v15 || !*(_QWORD *)(a2 + 8 * v14 + 8) )
          {
            v8 = -1073741811;
            goto LABEL_25;
          }
          v16 = EmpSearchRuleDatabase(v15);
          if ( !v16 || (v17 = (volatile signed __int32 *)EmpSearchTargetRuleList((__int64)v16)) == 0LL )
          {
            v8 = -1073741275;
            goto LABEL_25;
          }
          v20 = (unsigned int)i + 4 * i;
          *(_QWORD *)(Pool2[1] + 8 * v20) = v17;
          *(_QWORD *)(Pool2[1] + 8 * v20 + 8) = *(_QWORD *)(a2 + 8 * v19 + 8);
          *(_QWORD *)(Pool2[1] + 8 * v20 + 16) = *(_QWORD *)(a2 + 8 * v19 + 16);
          v21 = (_QWORD *)(Pool2[1] + 24LL + 8 * v20);
          v22 = *(_QWORD **)(v18 + 88);
          if ( *v22 != v18 + 80 )
            __fastfail(3u);
          *v21 = v18 + 80;
          v21[1] = v22;
          *v22 = v21;
          *(_QWORD *)(v18 + 88) = v21;
          if ( _InterlockedIncrement(v17) == 1 )
            EmpQueueRuleUpdateState(v18, 0LL);
        }
        if ( a1 )
          PsReferenceSiloContext(a1);
        *Pool2 = a1;
        *a4 = Pool2;
      }
      else
      {
        v8 = -1073741670;
LABEL_25:
        v23 = (char *)Pool2[1];
        if ( v23 )
        {
          v24 = 0LL;
          v25 = v4;
          do
          {
            v26 = *(volatile signed __int32 **)&v23[v24];
            if ( v26 )
            {
              _InterlockedAdd(v26, 0xFFFFFFFF);
              v23 = (char *)Pool2[1];
            }
            v24 += 40LL;
            --v25;
          }
          while ( v25 );
          ExFreePoolWithTag(v23, 0x6C634D45u);
        }
        ExFreePoolWithTag(Pool2, 0x6C634D45u);
      }
    }
    else
    {
      v8 = -1073741670;
    }
  }
  else
  {
    v8 = -1073741811;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&EmpDatabaseLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&EmpDatabaseLock);
  KeAbPostRelease((ULONG_PTR)&EmpDatabaseLock);
  return v8;
}
