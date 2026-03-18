/*
 * XREFs of ?IssueFlipManagerSignal@CAdapterCollection@@QEAAJPEAUFlipManagerObject@@AEBU_LUID@@PEAXPEAU_KEVENT@@_K@Z @ 0x14009A868
 * Callers:
 *     ?IssueFlipManagerSignal@CTokenManager@@UEAAJPEAUFlipManagerObject@@AEBU_LUID@@PEAXPEAU_KEVENT@@_K@Z @ 0x14009A520 (-IssueFlipManagerSignal@CTokenManager@@UEAAJPEAUFlipManagerObject@@AEBU_LUID@@PEAXPEAU_KEVENT@@_.c)
 * Callees:
 *     ?IsDeviceActive@CAdapter@@QEAA_NXZ @ 0x14002F084 (-IsDeviceActive@CAdapter@@QEAA_NXZ.c)
 *     ?Release@CPushLockCriticalSection@@QEAAXXZ @ 0x14002F0F0 (-Release@CPushLockCriticalSection@@QEAAXXZ.c)
 *     ?IssueFlipManagerSignal@CAdapter@@QEAAJPEAUFlipManagerObject@@PEAXPEAU_KEVENT@@_K@Z @ 0x14009B808 (-IssueFlipManagerSignal@CAdapter@@QEAAJPEAUFlipManagerObject@@PEAXPEAU_KEVENT@@_K@Z.c)
 *     DxgkImmediateSignalSynchronizationObjectByReference @ 0x1403313E0 (DxgkImmediateSignalSynchronizationObjectByReference.c)
 */

__int64 __fastcall CAdapterCollection::IssueFlipManagerSignal(
        CAdapterCollection *this,
        struct FlipManagerObject *a2,
        const struct _LUID *a3,
        void *a4,
        PRKEVENT Event,
        unsigned __int64 a6)
{
  CPushLockCriticalSection *v6; // r15
  char v7; // bp
  _QWORD **v8; // r13
  _QWORD *i; // rsi
  int v12; // ebx

  v6 = (CAdapterCollection *)((char *)this + 40);
  v7 = 0;
  v8 = (_QWORD **)((char *)this + 24);
  ExAcquirePushLockExclusiveEx((char *)this + 40, 0LL);
  *((_BYTE *)v6 + 8) = 1;
  for ( i = *v8; ; i = (_QWORD *)*i )
  {
    if ( i == v8 )
    {
      v12 = DxgkImmediateSignalSynchronizationObjectByReference(a4, a6);
      goto LABEL_11;
    }
    if ( *(_DWORD *)(((unsigned __int64)(i - 1) & -(__int64)(i != 0LL)) + 0x2C)
      && CAdapter::IsDeviceActive((CAdapter *)((unsigned __int64)(i - 1) & -(__int64)(i != 0LL)))
      && a3->LowPart == *(_DWORD *)(((unsigned __int64)(i - 1) & -(__int64)(i != 0LL)) + 0x18)
      && a3->HighPart == *(_DWORD *)(((unsigned __int64)(i - 1) & -(__int64)(i != 0LL)) + 0x1C) )
    {
      break;
    }
  }
  v12 = CAdapter::IssueFlipManagerSignal(
          (CAdapter *)((unsigned __int64)(i - 1) & -(__int64)(i != 0LL)),
          a2,
          a4,
          Event,
          a6);
  if ( v12 >= 0 )
    v7 = 1;
LABEL_11:
  if ( Event )
  {
    if ( !v7 )
      KeSetEvent(Event, 1, 0);
    ObfDereferenceObject(Event);
  }
  CPushLockCriticalSection::Release(v6);
  return (unsigned int)v12;
}
