/*
 * XREFs of ?vPushThreadGuardedObject@RGNMEMOBJ@@QEAAXXZ @ 0x140026760
 * Callers:
 *     ?iCombine@RGNOBJAPI@@QEAAJAEAVRGNOBJ@@0J@Z @ 0x1400259B0 (-iCombine@RGNOBJAPI@@QEAAJAEAVRGNOBJ@@0J@Z.c)
 *     GreCombineRgn @ 0x140025D30 (GreCombineRgn.c)
 *     ??0RGNMEMOBJTMP@@QEAA@K@Z @ 0x140026664 (--0RGNMEMOBJTMP@@QEAA@K@Z.c)
 *     ??0RGNMEMOBJTMP@@QEAA@XZ @ 0x14002686C (--0RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?iCombine@DC@@QEAAJPEAU_RECTL@@J@Z @ 0x14002BA00 (-iCombine@DC@@QEAAJPEAU_RECTL@@J@Z.c)
 *     GreExtCreateRegion @ 0x140066D70 (GreExtCreateRegion.c)
 *     ?bSet@RGNOBJ@@QEAAHKPEAU_RECTL@@@Z @ 0x1400671D0 (-bSet@RGNOBJ@@QEAAHKPEAU_RECTL@@@Z.c)
 *     ?iReduce@RGNMEMOBJ@@QEAAJAEAVRGNOBJ@@@Z @ 0x140068B50 (-iReduce@RGNMEMOBJ@@QEAAJAEAVRGNOBJ@@@Z.c)
 *     ?bCreate@RGNOBJ@@QEAAHAEAVEPATHOBJ@@PEBVEXFORMOBJR@@@Z @ 0x140068C60 (-bCreate@RGNOBJ@@QEAAHAEAVEPATHOBJ@@PEBVEXFORMOBJR@@@Z.c)
 *     _GetDCEx @ 0x140099850 (_GetDCEx.c)
 *     ?bCompute@DC@@QEAAHXZ @ 0x140174490 (-bCompute@DC@@QEAAHXZ.c)
 * Callees:
 *     W32GetCurrentWin32kSessionId @ 0x140017AD4 (W32GetCurrentWin32kSessionId.c)
 *     W32GetCurrentThreadNonPaged @ 0x1401A2438 (W32GetCurrentThreadNonPaged.c)
 */

void __fastcall RGNMEMOBJ::vPushThreadGuardedObject(RGNMEMOBJ *this)
{
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v3; // rdi
  _QWORD *ThreadWin32Thread; // rax
  _QWORD *v5; // rsi
  _QWORD *v6; // rbx
  __int64 *CurrentThreadNonPaged; // rax
  __int64 v8; // rax
  __int64 v9; // rcx
  int CurrentWin32kSessionId; // ebx
  __int64 CurrentThreadProcess; // rax

  CurrentThread = KeGetCurrentThread();
  v3 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess()
    || (CurrentWin32kSessionId = W32GetCurrentWin32kSessionId(),
        CurrentThreadProcess = PsGetCurrentThreadProcess(),
        CurrentWin32kSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    ThreadWin32Thread = (_QWORD *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
    {
      if ( (-(__int64)(*ThreadWin32Thread != 0LL) & (*ThreadWin32Thread + 8LL)) != 0 )
      {
        v5 = *(_QWORD **)this;
        if ( v5 )
        {
          v6 = v5 + 10;
          if ( v5 != (_QWORD *)-80LL )
          {
            CurrentThreadNonPaged = (__int64 *)W32GetCurrentThreadNonPaged();
            if ( CurrentThreadNonPaged )
              v3 = *CurrentThreadNonPaged;
            v5[12] = v5;
            v5[13] = CleanUpRegion;
            if ( ((v3 + 8) & -(__int64)(v3 != 0)) != 0 )
            {
              v8 = ((v3 + 8) & -(__int64)(v3 != 0)) + 88;
              v9 = *(_QWORD *)(((v3 + 8) & -(__int64)(v3 != 0)) + 0x58);
              if ( *(_QWORD *)(v9 + 8) != v8 )
                __fastfail(3u);
              *v6 = v9;
              v5[11] = v8;
              *(_QWORD *)(v9 + 8) = v6;
              *(_QWORD *)(((v3 + 8) & -(__int64)(v3 != 0)) + 0x58) = v6;
            }
            else
            {
              v5[11] = v5 + 10;
              *v6 = v6;
            }
          }
        }
      }
    }
  }
}
