/*
 * XREFs of ??0?$UnlockObjectLock@$$V@?$UnlockDomainExclusive@VDLT_CLIENTLIB@@@?$UnlockDomainShared@$$V@@QEAA@XZ @ 0x140178874
 * Callers:
 *     xxxLoadHmodIndex @ 0x140082390 (xxxLoadHmodIndex.c)
 *     xxxDoSysExpunge @ 0x1401785EC (xxxDoSysExpunge.c)
 * Callees:
 *     ??0?$UnlockObjectLockBase@$$V@?$UnlockDomainExclusiveBase@VDLT_CLIENTLIB@@@?$UnlockDomainSharedBase@$$V@@IEAA@XZ @ 0x1401788C0 (--0-$UnlockObjectLockBase@$$V@-$UnlockDomainExclusiveBase@VDLT_CLIENTLIB@@@-$UnlockDomainSharedB.c)
 */

__int64 __fastcall UnlockDomainShared<>::UnlockDomainExclusive<DLT_CLIENTLIB>::UnlockObjectLock<>::UnlockObjectLock<>(
        __int64 a1)
{
  tagDomLock *v2; // rcx

  UnlockDomainSharedBase<>::UnlockDomainExclusiveBase<DLT_CLIENTLIB>::UnlockObjectLockBase<>::UnlockObjectLockBase<>();
  v2 = *(tagDomLock **)a1;
  if ( *(_QWORD *)a1 )
  {
    if ( *(_BYTE *)(a1 + 8) )
      tagDomLock::UnLockExclusive(v2);
    else
      tagDomLock::UnLockShared(v2);
  }
  *(_BYTE *)(a1 + 40) = 1;
  return a1;
}
