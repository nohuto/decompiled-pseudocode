/*
 * XREFs of ?DestroyActivationObject@CActivationObjectManager@@QEAAJAEBU_LUID@@@Z @ 0x1400E09E4
 * Callers:
 *     NtUserDestroyActivationObject @ 0x140149090 (NtUserDestroyActivationObject.c)
 * Callees:
 *     ??1ForegroundChangeTracker@CActivationObjectManager@@QEAA@XZ @ 0x1400473D0 (--1ForegroundChangeTracker@CActivationObjectManager@@QEAA@XZ.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x140047450 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x140047544 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     UserDereferenceDwmProcess @ 0x14006F990 (UserDereferenceDwmProcess.c)
 *     ?GetActivationObjectFromLuid@CActivationObjectManager@@AEBAPEAVCActivationObject@@AEBU_LUID@@@Z @ 0x1400E0D20 (-GetActivationObjectFromLuid@CActivationObjectManager@@AEBAPEAVCActivationObject@@AEBU_LUID@@@Z.c)
 *     ?NotifySystemSateChanged@CActivationObjectManager@@AEBAXPEBVCActivationObject@@W4ACTIVATION_OBJECT_NOTIFICATION_ACTION@@U_tagActivationObjectNotificationForegroundData@@@Z @ 0x1400E1514 (-NotifySystemSateChanged@CActivationObjectManager@@AEBAXPEBVCActivationObject@@W4ACTIVATION_OBJE.c)
 *     ?ZapForeground@CActivationObjectManager@@AEAAXPEAVForegroundChangeTracker@1@@Z @ 0x1401A719C (-ZapForeground@CActivationObjectManager@@AEAAXPEAVForegroundChangeTracker@1@@Z.c)
 */

__int64 __fastcall CActivationObjectManager::DestroyActivationObject(
        CActivationObjectManager *this,
        const struct _LUID *a2)
{
  unsigned int v2; // esi
  CPushLock *v3; // rbx
  struct CActivationObject *ActivationObjectFromLuid; // rax
  struct CActivationObject *v7; // rdi
  _QWORD *v8; // r10
  _QWORD *v9; // rdx
  unsigned __int64 v10; // rcx
  __int128 v12; // [rsp+20h] [rbp-29h] BYREF
  __int64 v13; // [rsp+30h] [rbp-19h]
  int v14; // [rsp+38h] [rbp-11h]
  __int64 v15; // [rsp+50h] [rbp+7h]
  _QWORD v16[6]; // [rsp+60h] [rbp+17h] BYREF
  __int64 v17; // [rsp+B0h] [rbp+67h]

  v2 = 0;
  v3 = (CActivationObjectManager *)((char *)this + 16);
  memset(v16, 0, sizeof(v16));
  CPushLock::AcquireLockExclusive((CActivationObjectManager *)((char *)this + 16));
  ActivationObjectFromLuid = CActivationObjectManager::GetActivationObjectFromLuid(this, a2);
  v7 = ActivationObjectFromLuid;
  if ( !ActivationObjectFromLuid )
  {
LABEL_12:
    CPushLock::ReleaseLock(v3);
    UserDereferenceDwmProcess(v7);
    goto LABEL_13;
  }
  if ( *((struct _KTHREAD **)ActivationObjectFromLuid + 4) == KeGetCurrentThread() )
  {
    v8 = (_QWORD *)((char *)ActivationObjectFromLuid + 8);
    v17 = *((_QWORD *)ActivationObjectFromLuid + 2) & (-1LL << (*((_DWORD *)this + 1) & 0x1F));
    v9 = (_QWORD *)(*((_QWORD *)this + 1)
                  + 8LL
                  * ((37
                    * (BYTE6(v17)
                     + 37
                     * (BYTE5(v17)
                      + 37
                      * (BYTE4(v17)
                       + 37
                       * (BYTE3(v17) + 37 * (BYTE2(v17) + 37 * (BYTE1(v17) + 37 * ((unsigned __int8)v17 + 11623883)))))))
                    + HIBYTE(v17)) & (unsigned int)((*((_DWORD *)this + 1) >> 5) - 1)));
    v10 = 0x8000000000000002uLL;
    while ( (*v9 & 1) == 0 )
    {
      if ( (_QWORD *)*v9 == v8 )
      {
        *v9 = *v8;
        --*(_DWORD *)this;
        *v8 |= 0x8000000000000002uLL;
        break;
      }
      v9 = (_QWORD *)*v9;
    }
    if ( (*((_DWORD *)ActivationObjectFromLuid + 14) & 4) != 0 )
      CActivationObjectManager::ZapForeground(this, (struct CActivationObjectManager::ForegroundChangeTracker *)v16);
    v15 = 0LL;
    v12 = 0LL;
    v13 = 0LL;
    v14 = 0;
    ((void (__fastcall *)(unsigned __int64, struct CActivationObject *, __int64, __int128 *))CActivationObjectManager::NotifySystemSateChanged)(
      v10,
      v7,
      1LL,
      &v12);
    goto LABEL_12;
  }
  CPushLock::ReleaseLock(v3);
  v2 = -1073741790;
LABEL_13:
  CActivationObjectManager::ForegroundChangeTracker::~ForegroundChangeTracker((CActivationObjectManager::ForegroundChangeTracker *)v16);
  return v2;
}
