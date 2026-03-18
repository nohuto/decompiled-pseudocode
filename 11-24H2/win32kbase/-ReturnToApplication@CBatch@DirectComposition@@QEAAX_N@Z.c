/*
 * XREFs of ?ReturnToApplication@CBatch@DirectComposition@@QEAAX_N@Z @ 0x1400707A0
 * Callers:
 *     ?SubmitBatch@CApplicationChannel@DirectComposition@@IEAAXPEAVCBatch@2@0_NPEBUSynchronizationObject@2@@Z @ 0x1400C9C18 (-SubmitBatch@CApplicationChannel@DirectComposition@@IEAAXPEAVCBatch@2@0_NPEBUSynchronizationObje.c)
 *     ?Disconnect@CConnection@DirectComposition@@QEAAXXZ @ 0x1400E1A10 (-Disconnect@CConnection@DirectComposition@@QEAAXXZ.c)
 *     ?ConfirmFrame@CConnection@DirectComposition@@QEAAJPEAUtagCOMPOSITION_CONFIRM_FRAME_INFO@@@Z @ 0x140194600 (-ConfirmFrame@CConnection@DirectComposition@@QEAAJPEAUtagCOMPOSITION_CONFIRM_FRAME_INFO@@@Z.c)
 *     ?ReturnToApplication@CBatchListProxy@CBatch@DirectComposition@@UEAAX_N@Z @ 0x140224FC0 (-ReturnToApplication@CBatchListProxy@CBatch@DirectComposition@@UEAAX_N@Z.c)
 * Callees:
 *     ?ReturnProcessedBatch@CApplicationChannel@DirectComposition@@QEAAXPEAVCBatch@2@@Z @ 0x140070870 (-ReturnProcessedBatch@CApplicationChannel@DirectComposition@@QEAAXPEAVCBatch@2@@Z.c)
 *     ?ReleaseShellResourceAccess@CConnection@DirectComposition@@QEAAXI@Z @ 0x1400709C0 (-ReleaseShellResourceAccess@CConnection@DirectComposition@@QEAAXI@Z.c)
 *     ?AcquireExclusive@CCriticalSection@DirectComposition@@QEAAXXZ @ 0x1400755B0 (-AcquireExclusive@CCriticalSection@DirectComposition@@QEAAXXZ.c)
 */

void __fastcall DirectComposition::CBatch::ReturnToApplication(DirectComposition::CBatch *this, char a2)
{
  DirectComposition::CApplicationChannel **v2; // rsi
  unsigned int v4; // edx
  DirectComposition::CApplicationChannel *v5; // rbx
  struct _ERESOURCE *v6; // rcx

  v2 = (DirectComposition::CApplicationChannel **)((char *)this + 8);
  *((_BYTE *)this + 32) = *((_BYTE *)this + 32) & 0xFD | (2 * (a2 ^ 1));
  v4 = *((_DWORD *)this + 29);
  if ( v4 )
  {
    DirectComposition::CConnection::ReleaseShellResourceAccess(*((DirectComposition::CConnection **)*v2 + 5), v4);
    *((_DWORD *)this + 29) = 0;
  }
  if ( (*((_BYTE *)this + 32) & 4) == 0 )
  {
    v5 = *v2;
    if ( *((_DWORD *)this + 5) == 7 )
    {
      v6 = (struct _ERESOURCE *)*((_QWORD *)v5 + 49);
      if ( v6 )
      {
        DirectComposition::CCriticalSection::AcquireExclusive(v6);
        if ( (*((_DWORD *)v5 + 62))-- == 1 )
          KeSetEvent(*(PRKEVENT *)(*((_QWORD *)v5 + 48) + 8LL), 1, 0);
        ExReleaseResourceLite(*((PERESOURCE *)v5 + 49));
        KeLeaveCriticalRegion();
      }
    }
  }
  DirectComposition::CApplicationChannel::ReturnProcessedBatch(*v2, this);
}
