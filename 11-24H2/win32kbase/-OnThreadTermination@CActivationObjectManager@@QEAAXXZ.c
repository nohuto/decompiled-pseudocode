/*
 * XREFs of ?OnThreadTermination@CActivationObjectManager@@QEAAXXZ @ 0x14004721C
 * Callers:
 *     xxxDestroyThreadInfo @ 0x14015F444 (xxxDestroyThreadInfo.c)
 * Callees:
 *     ??1ForegroundChangeTracker@CActivationObjectManager@@QEAA@XZ @ 0x1400473D0 (--1ForegroundChangeTracker@CActivationObjectManager@@QEAA@XZ.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x140047450 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x140047544 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     UserDereferenceDwmProcess @ 0x14006F990 (UserDereferenceDwmProcess.c)
 *     ?NotifySystemSateChanged@CActivationObjectManager@@AEBAXPEBVCActivationObject@@W4ACTIVATION_OBJECT_NOTIFICATION_ACTION@@U_tagActivationObjectNotificationForegroundData@@@Z @ 0x1400E1514 (-NotifySystemSateChanged@CActivationObjectManager@@AEBAXPEBVCActivationObject@@W4ACTIVATION_OBJE.c)
 *     ?ZapForeground@CActivationObjectManager@@AEAAXPEAVForegroundChangeTracker@1@@Z @ 0x1401A719C (-ZapForeground@CActivationObjectManager@@AEAAXPEAVForegroundChangeTracker@1@@Z.c)
 */

void __fastcall CActivationObjectManager::OnThreadTermination(CActivationObjectManager *this)
{
  _QWORD **v2; // rsi
  _QWORD *v3; // rdi
  _QWORD *v4; // r15
  _QWORD *i; // rcx
  __int128 v6; // [rsp+28h] [rbp-39h] BYREF
  __int64 v7; // [rsp+38h] [rbp-29h]
  int v8; // [rsp+40h] [rbp-21h]
  __int64 v9; // [rsp+58h] [rbp-9h]
  _QWORD v10[6]; // [rsp+68h] [rbp+7h] BYREF

  memset(v10, 0, sizeof(v10));
  CPushLock::AcquireLockExclusive((CActivationObjectManager *)((char *)this + 16));
  v2 = (_QWORD **)*((_QWORD *)this + 1);
  v3 = v2;
  while ( v3 )
  {
    v3 = (_QWORD *)*v3;
    if ( ((unsigned __int8)v3 & 1) != 0 )
      break;
LABEL_7:
    if ( !v3 )
      goto LABEL_17;
    v4 = v3 - 1;
    if ( (struct _KTHREAD *)v3[3] == KeGetCurrentThread() )
    {
      for ( i = v2; (*i & 1) == 0; i = (_QWORD *)*i )
      {
        if ( (_QWORD *)*i == v3 )
        {
          *i = *v3;
          --*(_DWORD *)this;
          *v3 |= 0x8000000000000002uLL;
          v3 = i;
          break;
        }
      }
      if ( (v4[7] & 4) != 0 )
        CActivationObjectManager::ZapForeground(this, (struct CActivationObjectManager::ForegroundChangeTracker *)v10);
      v9 = 0LL;
      v6 = 0LL;
      v7 = 0LL;
      v8 = 0;
      ((void (__fastcall *)(_QWORD *, _QWORD *, __int64, __int128 *))CActivationObjectManager::NotifySystemSateChanged)(
        i,
        v4,
        1LL,
        &v6);
      UserDereferenceDwmProcess(v4);
    }
  }
  for ( ++v2; (unsigned __int64)v2 < *((_QWORD *)this + 1) + 8 * ((unsigned __int64)*((unsigned int *)this + 1) >> 5); ++v2 )
  {
    v3 = *v2;
    if ( ((unsigned __int8)*v2 & 1) == 0 )
      goto LABEL_7;
  }
LABEL_17:
  CPushLock::ReleaseLock((CActivationObjectManager *)((char *)this + 16));
  CActivationObjectManager::ForegroundChangeTracker::~ForegroundChangeTracker((CActivationObjectManager::ForegroundChangeTracker *)v10);
}
