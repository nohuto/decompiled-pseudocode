/*
 * XREFs of ?IssueFlipManagerWaitForFlipAway@CAdapterCollection@@QEAAJPEAUFlipManagerObject@@AEBUtagCOMPOSITION_TARGET_FLIP_AWAY_FENCE@@_K@Z @ 0x14009A998
 * Callers:
 *     ?IssueFlipManagerWaitForFlipAway@CTokenManager@@UEAAJPEAUFlipManagerObject@@AEBUtagCOMPOSITION_TARGET_FLIP_AWAY_FENCE@@_K@Z @ 0x14009A550 (-IssueFlipManagerWaitForFlipAway@CTokenManager@@UEAAJPEAUFlipManagerObject@@AEBUtagCOMPOSITION_T.c)
 * Callees:
 *     ?IsDeviceActive@CAdapter@@QEAA_NXZ @ 0x14002F084 (-IsDeviceActive@CAdapter@@QEAA_NXZ.c)
 *     ?Release@CPushLockCriticalSection@@QEAAXXZ @ 0x14002F0F0 (-Release@CPushLockCriticalSection@@QEAAXXZ.c)
 *     ?IssueFlipManagerWaitForFlipAway@CAdapter@@QEAAJPEAUFlipManagerObject@@AEBUtagCOMPOSITION_TARGET_FLIP_AWAY_FENCE@@_K@Z @ 0x14009B944 (-IssueFlipManagerWaitForFlipAway@CAdapter@@QEAAJPEAUFlipManagerObject@@AEBUtagCOMPOSITION_TARGET.c)
 */

__int64 __fastcall CAdapterCollection::IssueFlipManagerWaitForFlipAway(
        CAdapterCollection *this,
        struct FlipManagerObject *a2,
        const struct tagCOMPOSITION_TARGET_FLIP_AWAY_FENCE *a3,
        unsigned __int64 a4)
{
  CPushLockCriticalSection *v4; // r14
  _QWORD **v6; // r15
  unsigned int v7; // esi
  _QWORD *i; // rdi

  v4 = (CAdapterCollection *)((char *)this + 40);
  v6 = (_QWORD **)((char *)this + 24);
  v7 = 0;
  ExAcquirePushLockExclusiveEx((char *)this + 40, 0LL);
  *((_BYTE *)v4 + 8) = 1;
  for ( i = *v6; i != v6; i = (_QWORD *)*i )
  {
    if ( *(_DWORD *)(((unsigned __int64)(i - 1) & -(__int64)(i != 0LL)) + 0x2C)
      && CAdapter::IsDeviceActive((CAdapter *)((unsigned __int64)(i - 1) & -(__int64)(i != 0LL)))
      && *(_DWORD *)a3 == *(_DWORD *)(((unsigned __int64)(i - 1) & -(__int64)(i != 0LL)) + 0x18)
      && *((_DWORD *)a3 + 1) == *(_DWORD *)(((unsigned __int64)(i - 1) & -(__int64)(i != 0LL)) + 0x1C) )
    {
      v7 = CAdapter::IssueFlipManagerWaitForFlipAway(
             (CAdapter *)((unsigned __int64)(i - 1) & -(__int64)(i != 0LL)),
             a2,
             a3,
             a4);
      break;
    }
  }
  CPushLockCriticalSection::Release(v4);
  return v7;
}
