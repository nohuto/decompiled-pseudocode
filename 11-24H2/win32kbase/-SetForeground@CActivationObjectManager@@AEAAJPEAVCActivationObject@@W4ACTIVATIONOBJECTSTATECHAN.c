/*
 * XREFs of ?SetForeground@CActivationObjectManager@@AEAAJPEAVCActivationObject@@W4ACTIVATIONOBJECTSTATECHANGE_REASON@@W4ACTIVATION_OBJECT_CONFIG_BEHAVIOR@@PEAVForegroundChangeTracker@1@@Z @ 0x1401A6E44
 * Callers:
 *     ?ConfigureActivationObject@CActivationObjectManager@@QEAAJAEBU_LUID@@W4ACTIVATIONOBJECTSTATECHANGE_REASON@@W4ACTIVATION_OBJECT_CONFIG_BEHAVIOR@@W4ACTIVATION_OBJECT_STATE@@3@Z @ 0x1400E0C08 (-ConfigureActivationObject@CActivationObjectManager@@QEAAJAEBU_LUID@@W4ACTIVATIONOBJECTSTATECHAN.c)
 *     ?SetForegroundRedirectionLuid@CActivationObjectManager@@QEAAJAEBU_LUID@@0@Z @ 0x1401A7028 (-SetForegroundRedirectionLuid@CActivationObjectManager@@QEAAJAEBU_LUID@@0@Z.c)
 * Callees:
 *     ?SetForegroundPriority@ForegroundBoost@@YAXPEBUtagTHREADINFO@@W4ForegroundPriorityClass@1@W4ForegroundBoostSource@1@@Z @ 0x14006C430 (-SetForegroundPriority@ForegroundBoost@@YAXPEBUtagTHREADINFO@@W4ForegroundPriorityClass@1@W4Fore.c)
 *     ?GetActivationObjectFromLuid@CActivationObjectManager@@AEBAPEAVCActivationObject@@AEBU_LUID@@@Z @ 0x1400E0D20 (-GetActivationObjectFromLuid@CActivationObjectManager@@AEBAPEAVCActivationObject@@AEBU_LUID@@@Z.c)
 *     ?NotifySystemSateChanged@CActivationObjectManager@@AEBAXPEBVCActivationObject@@W4ACTIVATION_OBJECT_NOTIFICATION_ACTION@@U_tagActivationObjectNotificationForegroundData@@@Z @ 0x1400E1514 (-NotifySystemSateChanged@CActivationObjectManager@@AEBAXPEBVCActivationObject@@W4ACTIVATION_OBJE.c)
 *     ??0TrackForegroundChange@CActivationObjectManager@@QEAA@PEAVForegroundChangeTracker@1@@Z @ 0x1401A6914 (--0TrackForegroundChange@CActivationObjectManager@@QEAA@PEAVForegroundChangeTracker@1@@Z.c)
 *     ??1TrackForegroundChange@CActivationObjectManager@@QEAA@XZ @ 0x1401A6990 (--1TrackForegroundChange@CActivationObjectManager@@QEAA@XZ.c)
 *     PostEvent @ 0x1402130E8 (PostEvent.c)
 */

__int64 __fastcall CActivationObjectManager::SetForeground(
        CActivationObjectManager *a1,
        __int64 a2,
        int a3,
        int a4,
        struct CActivationObjectManager::ForegroundChangeTracker *a5)
{
  _QWORD *v5; // rbx
  __int64 v8; // rdi
  struct CActivationObject *ActivationObjectFromLuid; // rax
  int v11; // ecx
  __int64 v12; // rbx
  __int64 v13; // r14
  __int64 *ThreadWin32Thread; // rax
  __int64 v15; // r14
  __int64 *v16; // rax
  __int64 v17; // rcx
  __int64 *v18; // rax
  __int64 v19; // rax
  _BYTE v21[8]; // [rsp+30h] [rbp-50h] BYREF
  _BYTE v22[20]; // [rsp+38h] [rbp-48h]
  __int64 v23; // [rsp+4Ch] [rbp-34h]
  __int128 v24; // [rsp+60h] [rbp-20h] BYREF
  __int64 v25; // [rsp+70h] [rbp-10h]
  int v26; // [rsp+78h] [rbp-8h]
  int v27; // [rsp+B8h] [rbp+38h] BYREF
  int v28; // [rsp+BCh] [rbp+3Ch]

  v5 = (_QWORD *)(a2 + 60);
  v8 = a2;
  if ( *(_QWORD *)(a2 + 60) )
  {
    ActivationObjectFromLuid = CActivationObjectManager::GetActivationObjectFromLuid(
                                 a1,
                                 (const struct _LUID *)(a2 + 60));
    if ( ActivationObjectFromLuid )
      v8 = (__int64)ActivationObjectFromLuid;
    else
      *v5 = 0LL;
  }
  v11 = *(_DWORD *)(v8 + 56);
  if ( (v11 & 4) == 0 && (a3 != 1 || (v11 & 2) == 0) && (v11 & 1) != 0 )
  {
    CActivationObjectManager::TrackForegroundChange::TrackForegroundChange(
      (CActivationObjectManager::TrackForegroundChange *)v21,
      a5);
    v12 = *((_QWORD *)a1 + 4);
    if ( v12 )
    {
      *(_DWORD *)(v12 + 56) &= ~4u;
      v13 = 0LL;
      ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(*(_QWORD *)(v12 + 32));
      if ( ThreadWin32Thread )
        v13 = *ThreadWin32Thread;
      ForegroundBoost::SetForegroundPriority(v13, 0, 8u);
    }
    *(_DWORD *)(v8 + 56) |= 4u;
    v15 = 0LL;
    *((_QWORD *)a1 + 4) = v8;
    v16 = (__int64 *)PsGetThreadWin32Thread(*(_QWORD *)(v8 + 32));
    if ( v16 )
      v15 = *v16;
    ForegroundBoost::SetForegroundPriority(v15, 1u, 8u);
    v27 = 0;
    v18 = (__int64 *)(v12 + 40);
    v28 = 0;
    if ( !v12 )
      v18 = (__int64 *)&v27;
    v19 = *v18;
    v23 = 0LL;
    *(_QWORD *)&v22[4] = v19;
    *(_QWORD *)&v22[12] = *(_QWORD *)(v8 + 40);
    *(_DWORD *)v22 = a3;
    v26 = 0;
    v25 = *(unsigned int *)&v22[16];
    v24 = *(_OWORD *)v22;
    CActivationObjectManager::NotifySystemSateChanged(v17, v8, 2, (unsigned int *)&v24);
    if ( a4 == 1 )
      goto LABEL_26;
    if ( a3 == 1 )
    {
      if ( !v12 || *(_QWORD *)(v12 + 24) == *(_QWORD *)(v8 + 24) )
        goto LABEL_26;
    }
    else if ( !v12 )
    {
      goto LABEL_24;
    }
    PostEvent(*(_QWORD *)(v12 + 72), 0, 6, 0, 0LL);
LABEL_24:
    if ( !a3 )
    {
      PostEvent(*(_QWORD *)(v8 + 72), 0, 6, 3, 0LL);
      PostEvent(*(_QWORD *)(v8 + 72), 0, 6, 1, 0LL);
    }
LABEL_26:
    CActivationObjectManager::TrackForegroundChange::~TrackForegroundChange((CActivationObjectManager::TrackForegroundChange *)v21);
    return 0LL;
  }
  return 3221266435LL;
}
