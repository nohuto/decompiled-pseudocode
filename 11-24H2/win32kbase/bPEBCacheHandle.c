/*
 * XREFs of bPEBCacheHandle @ 0x14002DDC0
 * Callers:
 *     bDeleteBrush @ 0x140014820 (bDeleteBrush.c)
 *     ?bDeleteRGNOBJAPI@RGNOBJAPI@@QEAAHXZ @ 0x14002E270 (-bDeleteRGNOBJAPI@RGNOBJAPI@@QEAAHXZ.c)
 * Callees:
 *     ?_IncrementOrDecrementUniqueness@GdiHandleManager@@AEAAXPEAVOBJECT@@_N@Z @ 0x140016600 (-_IncrementOrDecrementUniqueness@GdiHandleManager@@AEAAXPEAVOBJECT@@_N@Z.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x14002E8D0 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?InterlockedDecrementExclusiveLockCount@OBJECT@@QEAAXXZ @ 0x14003506C (-InterlockedDecrementExclusiveLockCount@OBJECT@@QEAAXXZ.c)
 *     ?GetEntryObject@GdiHandleManager@@QEAAPEAVOBJECT@@I@Z @ 0x140035F20 (-GetEntryObject@GdiHandleManager@@QEAAPEAVOBJECT@@I@Z.c)
 */

__int64 __fastcall bPEBCacheHandle(int a1, _DWORD *a2, unsigned int *a3, HANDLELOCK *a4, OBJECT **a5)
{
  __int64 v7; // r13
  __int64 CurrentProcessWin32Process; // rax
  __int64 v9; // rcx
  _QWORD *v10; // rsi
  GdiHandleManager **v11; // r12
  GdiHandleManager *v12; // rbx
  struct OBJECT *EntryObject; // r14
  __int64 ProcessPeb; // rax
  __int64 v15; // rbx
  __int64 v16; // rcx
  int v17; // eax
  __int64 v18; // r8
  _QWORD *v19; // rcx
  _QWORD *v20; // r8
  signed __int32 v22[8]; // [rsp+0h] [rbp-68h] BYREF
  unsigned int v23; // [rsp+20h] [rbp-48h]
  int v24; // [rsp+24h] [rbp-44h]
  _QWORD *v25; // [rsp+28h] [rbp-40h]
  struct _NT_TIB *Self; // [rsp+30h] [rbp-38h]

  v7 = a1;
  v23 = 0;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process();
  v10 = (_QWORD *)CurrentProcessWin32Process;
  if ( CurrentProcessWin32Process )
    v10 = (_QWORD *)(-(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process);
  v11 = (GdiHandleManager **)(*(_QWORD *)(W32GetSessionState(v9) + 88) + 5672LL);
  v12 = *v11;
  EntryObject = GdiHandleManager::GetEntryObject(*v11, *a3);
  GdiHandleManager::_IncrementOrDecrementUniqueness((__int64)v12, EntryObject, 1);
  ProcessPeb = PsGetProcessPeb(*v10);
  v15 = ProcessPeb;
  if ( ProcessPeb )
  {
    v16 = *(_QWORD *)(ProcessPeb + 320);
    v17 = 0;
    v24 = 0;
    if ( !v16 )
    {
      Self = KeGetPcr()->NtTib.Self;
      v17 = v24;
      if ( !_InterlockedCompareExchange64((volatile signed __int64 *)(v15 + 320), (signed __int64)Self, 0LL) )
        v17 = 1;
      v24 = v17;
    }
    if ( v17 )
    {
      v18 = (unsigned int)dword_14026CC38[v7];
      if ( *(_DWORD *)(v15 + 4 * v7 + 328) < (unsigned int)v18 )
      {
        v19 = (_QWORD *)(v15 + 8 * ((unsigned int)dword_14026CC48[v7] + 43LL));
        v25 = v19;
        v20 = &v19[v18];
        while ( v19 != v20 )
        {
          if ( !*v19 )
          {
            *v19 = *(_QWORD *)EntryObject;
            ++*(_DWORD *)(v15 + 4 * v7 + 328);
            *a2 &= 0xFFFFFFF5;
            *a2 |= 1u;
            _InterlockedOr(v22, 0);
            v23 = 1;
            HANDLELOCK::vUnlock(a4);
            if ( a5 )
            {
              OBJECT::InterlockedDecrementExclusiveLockCount(*a5);
              *a5 = 0LL;
            }
            break;
          }
          v25 = ++v19;
        }
      }
      *(_QWORD *)(v15 + 320) = 0LL;
    }
  }
  if ( !v23 )
    GdiHandleManager::_IncrementOrDecrementUniqueness((__int64)*v11, EntryObject, 0);
  return v23;
}
