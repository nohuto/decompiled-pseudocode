/*
 * XREFs of ?AcquireShellResourceAccess@CConnection@DirectComposition@@QEAAJXZ @ 0x140076824
 * Callers:
 *     ?CreateExternalPrivateResource@CApplicationChannel@DirectComposition@@QEAAJII@Z @ 0x14007611C (-CreateExternalPrivateResource@CApplicationChannel@DirectComposition@@QEAAJII@Z.c)
 *     ?InitializeAndRegisterInternalResource@CApplicationChannel@DirectComposition@@IEAAJPEAVCResourceMarshaler@2@@Z @ 0x140076564 (-InitializeAndRegisterInternalResource@CApplicationChannel@DirectComposition@@IEAAJPEAVCResource.c)
 *     ?CreateInternalPrivateResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1400768D8 (-CreateInternalPrivateResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMars.c)
 *     ?EnsureShellPropertyAndTriggerAccess@CApplicationChannel@DirectComposition@@UEAAJXZ @ 0x140104E40 (-EnsureShellPropertyAndTriggerAccess@CApplicationChannel@DirectComposition@@UEAAJXZ.c)
 * Callees:
 *     ?Release@CPushLockCriticalSection@DirectComposition@@QEAAXXZ @ 0x1400748D4 (-Release@CPushLockCriticalSection@DirectComposition@@QEAAXXZ.c)
 *     ?AcquireShared@CCriticalSection@DirectComposition@@QEAAXXZ @ 0x140074908 (-AcquireShared@CCriticalSection@DirectComposition@@QEAAXXZ.c)
 */

__int64 __fastcall DirectComposition::CConnection::AcquireShellResourceAccess(
        PERESOURCE *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  unsigned int v5; // edi
  __int64 CurrentProcess; // rbp
  PERESOURCE v7; // rax

  v5 = -1073741790;
  CurrentProcess = PsGetCurrentProcess(this, a2, a3, a4);
  DirectComposition::CCriticalSection::AcquireShared(this[2]);
  ExAcquirePushLockExclusiveEx(this + 25, 0LL);
  *((_BYTE *)this + 208) = 1;
  v7 = this[33];
  if ( v7 == (PERESOURCE)CurrentProcess || !v7 )
  {
    ++*((_DWORD *)this + 64);
    v5 = 0;
    this[33] = (PERESOURCE)CurrentProcess;
  }
  DirectComposition::CPushLockCriticalSection::Release((DirectComposition::CPushLockCriticalSection *)(this + 25));
  ExReleaseResourceLite(this[2]);
  KeLeaveCriticalRegion();
  return v5;
}
