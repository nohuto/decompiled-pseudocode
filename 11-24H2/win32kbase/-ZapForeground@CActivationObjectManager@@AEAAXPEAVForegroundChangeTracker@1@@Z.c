/*
 * XREFs of ?ZapForeground@CActivationObjectManager@@AEAAXPEAVForegroundChangeTracker@1@@Z @ 0x1401A719C
 * Callers:
 *     ?OnThreadTermination@CActivationObjectManager@@QEAAXXZ @ 0x14004721C (-OnThreadTermination@CActivationObjectManager@@QEAAXXZ.c)
 *     ?DestroyActivationObject@CActivationObjectManager@@QEAAJAEBU_LUID@@@Z @ 0x1400E09E4 (-DestroyActivationObject@CActivationObjectManager@@QEAAJAEBU_LUID@@@Z.c)
 *     ?ConfigureActivationObject@CActivationObjectManager@@QEAAJAEBU_LUID@@W4ACTIVATIONOBJECTSTATECHANGE_REASON@@W4ACTIVATION_OBJECT_CONFIG_BEHAVIOR@@W4ACTIVATION_OBJECT_STATE@@3@Z @ 0x1400E0C08 (-ConfigureActivationObject@CActivationObjectManager@@QEAAJAEBU_LUID@@W4ACTIVATIONOBJECTSTATECHAN.c)
 * Callees:
 *     ?SetForegroundPriority@ForegroundBoost@@YAXPEBUtagTHREADINFO@@W4ForegroundPriorityClass@1@W4ForegroundBoostSource@1@@Z @ 0x14006C430 (-SetForegroundPriority@ForegroundBoost@@YAXPEBUtagTHREADINFO@@W4ForegroundPriorityClass@1@W4Fore.c)
 *     ?NotifySystemSateChanged@CActivationObjectManager@@AEBAXPEBVCActivationObject@@W4ACTIVATION_OBJECT_NOTIFICATION_ACTION@@U_tagActivationObjectNotificationForegroundData@@@Z @ 0x1400E1514 (-NotifySystemSateChanged@CActivationObjectManager@@AEBAXPEBVCActivationObject@@W4ACTIVATION_OBJE.c)
 *     ??0TrackForegroundChange@CActivationObjectManager@@QEAA@PEAVForegroundChangeTracker@1@@Z @ 0x1401A6914 (--0TrackForegroundChange@CActivationObjectManager@@QEAA@PEAVForegroundChangeTracker@1@@Z.c)
 *     ??1TrackForegroundChange@CActivationObjectManager@@QEAA@XZ @ 0x1401A6990 (--1TrackForegroundChange@CActivationObjectManager@@QEAA@XZ.c)
 *     PostEvent @ 0x1402130E8 (PostEvent.c)
 */

void __fastcall CActivationObjectManager::ZapForeground(
        CActivationObjectManager *this,
        struct CActivationObjectManager::ForegroundChangeTracker *a2)
{
  __int64 v3; // rdi
  __int64 v4; // rbx
  __int64 *ThreadWin32Thread; // rax
  __int64 v6; // rcx
  _BYTE v7[20]; // [rsp+30h] [rbp-40h]
  __int128 v8; // [rsp+50h] [rbp-20h] BYREF
  __int64 v9; // [rsp+60h] [rbp-10h]
  int v10; // [rsp+68h] [rbp-8h]
  char v11; // [rsp+80h] [rbp+10h] BYREF

  CActivationObjectManager::TrackForegroundChange::TrackForegroundChange(
    (CActivationObjectManager::TrackForegroundChange *)&v11,
    a2);
  v3 = *((_QWORD *)this + 4);
  *(_DWORD *)(v3 + 56) &= ~4u;
  *((_QWORD *)this + 4) = 0LL;
  v4 = 0LL;
  ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(*(_QWORD *)(v3 + 32));
  if ( ThreadWin32Thread )
    v4 = *ThreadWin32Thread;
  ForegroundBoost::SetForegroundPriority(v4, 0, 8u);
  PostEvent(*(_QWORD *)(v3 + 72), 0, 6, 0, 0LL);
  *(_DWORD *)v7 = 0;
  *(_OWORD *)&v7[4] = *(unsigned __int64 *)(v3 + 40);
  v9 = 0LL;
  v8 = *(_OWORD *)v7;
  v10 = 0;
  CActivationObjectManager::NotifySystemSateChanged(v6, v3, 3, (unsigned int *)&v8);
  CActivationObjectManager::TrackForegroundChange::~TrackForegroundChange((CActivationObjectManager::TrackForegroundChange *)&v11);
}
