/*
 * XREFs of ?ConfigureActivationObject@CActivationObjectManager@@QEAAJAEBU_LUID@@W4ACTIVATIONOBJECTSTATECHANGE_REASON@@W4ACTIVATION_OBJECT_CONFIG_BEHAVIOR@@W4ACTIVATION_OBJECT_STATE@@3@Z @ 0x1400E0C08
 * Callers:
 *     ?ConfigureActivationObject@ForegroundManagement@@YAJAEBU_LUID@@W4ACTIVATIONOBJECTSTATECHANGE_REASON@@W4ACTIVATION_OBJECT_CONFIG_BEHAVIOR@@W4ACTIVATION_OBJECT_STATE@@3@Z @ 0x1400E0BA0 (-ConfigureActivationObject@ForegroundManagement@@YAJAEBU_LUID@@W4ACTIVATIONOBJECTSTATECHANGE_REA.c)
 * Callees:
 *     ??1ForegroundChangeTracker@CActivationObjectManager@@QEAA@XZ @ 0x1400473D0 (--1ForegroundChangeTracker@CActivationObjectManager@@QEAA@XZ.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x140047450 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x140047544 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     ?GetActivationObjectFromLuid@CActivationObjectManager@@AEBAPEAVCActivationObject@@AEBU_LUID@@@Z @ 0x1400E0D20 (-GetActivationObjectFromLuid@CActivationObjectManager@@AEBAPEAVCActivationObject@@AEBU_LUID@@@Z.c)
 *     ?SetForeground@CActivationObjectManager@@AEAAJPEAVCActivationObject@@W4ACTIVATIONOBJECTSTATECHANGE_REASON@@W4ACTIVATION_OBJECT_CONFIG_BEHAVIOR@@PEAVForegroundChangeTracker@1@@Z @ 0x1401A6E44 (-SetForeground@CActivationObjectManager@@AEAAJPEAVCActivationObject@@W4ACTIVATIONOBJECTSTATECHAN.c)
 *     ?ZapForeground@CActivationObjectManager@@AEAAXPEAVForegroundChangeTracker@1@@Z @ 0x1401A719C (-ZapForeground@CActivationObjectManager@@AEAAXPEAVForegroundChangeTracker@1@@Z.c)
 */

__int64 __fastcall CActivationObjectManager::ConfigureActivationObject(
        __int64 a1,
        const struct _LUID *a2,
        unsigned int a3,
        unsigned int a4,
        char a5,
        char a6)
{
  unsigned int v10; // ebp
  struct CActivationObject *ActivationObjectFromLuid; // rax
  int v13; // ecx
  char v14; // dl
  _DWORD v15[2]; // [rsp+30h] [rbp-48h] BYREF
  __int64 v16; // [rsp+38h] [rbp-40h]
  __int64 v17; // [rsp+40h] [rbp-38h]
  int v18; // [rsp+48h] [rbp-30h]
  int v19; // [rsp+4Ch] [rbp-2Ch]
  __int64 v20; // [rsp+50h] [rbp-28h]
  __int64 v21; // [rsp+58h] [rbp-20h]

  v15[0] = 0;
  v15[1] = 0;
  v17 = 0LL;
  v16 = 0LL;
  v18 = 0;
  v19 = 0;
  v21 = 0LL;
  v10 = -1073741275;
  v20 = 0LL;
  CPushLock::AcquireLockExclusive((CPushLock *)(a1 + 16));
  ActivationObjectFromLuid = CActivationObjectManager::GetActivationObjectFromLuid((CActivationObjectManager *)a1, a2);
  if ( ActivationObjectFromLuid )
  {
    v13 = *((_DWORD *)ActivationObjectFromLuid + 14);
    v10 = 0;
    v14 = v13 ^ (a6 & a5 | v13 & ~a5);
    if ( (v14 & 1) != 0 )
    {
      v13 ^= 1u;
      *((_DWORD *)ActivationObjectFromLuid + 14) = v13;
    }
    if ( (v14 & 2) != 0 )
    {
      v13 ^= 2u;
      *((_DWORD *)ActivationObjectFromLuid + 14) = v13;
    }
    if ( (v14 & 4) != 0 )
    {
      if ( (~(_BYTE)v13 & 4) != 0 )
        v10 = CActivationObjectManager::SetForeground(a1, ActivationObjectFromLuid, a3, a4, v15);
      else
        CActivationObjectManager::ZapForeground(
          (CActivationObjectManager *)a1,
          (struct CActivationObjectManager::ForegroundChangeTracker *)v15);
    }
  }
  CPushLock::ReleaseLock((CPushLock *)(a1 + 16));
  CActivationObjectManager::ForegroundChangeTracker::~ForegroundChangeTracker((CActivationObjectManager::ForegroundChangeTracker *)v15);
  return v10;
}
