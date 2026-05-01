/*
 * XREFs of ??$_Move_unchecked@PEAUPendingActivationResumeData@UwpWindowEventDispatcher@@PEAU12@@std@@YAPEAUPendingActivationResumeData@UwpWindowEventDispatcher@@PEAU12@00@Z @ 0x18009B864
 * Callers:
 *     ?AddPendingActivationResumeWithLock@UwpWindowEventDispatcher@@AEAAXPEAUIUwpWindowWrapperInternal@@UWindowId@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x18009B0F4 (-AddPendingActivationResumeWithLock@UwpWindowEventDispatcher@@AEAAXPEAUIUwpWindowWrapperInternal.c)
 *     ?UwpWindowNavigatedToVisible@UwpWindowEventDispatcher@@EEAAJPEAUIUwpWindowContext@UwpWindowLifecycleManagement@Shell@Internal@Windows@@@Z @ 0x1801DCD00 (-UwpWindowNavigatedToVisible@UwpWindowEventDispatcher@@EEAAJPEAUIUwpWindowContext@UwpWindowLifec.c)
 * Callees:
 *     ??4PendingActivationResumeData@UwpWindowEventDispatcher@@QEAAAEAU01@$$QEAU01@@Z @ 0x180193958 (--4PendingActivationResumeData@UwpWindowEventDispatcher@@QEAAAEAU01@$$QEAU01@@Z.c)
 */

__int64 __fastcall std::_Move_unchecked<UwpWindowEventDispatcher::PendingActivationResumeData *,UwpWindowEventDispatcher::PendingActivationResumeData *>(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 i; // rdi

  for ( i = a1; i != a2; i += 32LL )
  {
    UwpWindowEventDispatcher::PendingActivationResumeData::operator=(a3, i);
    a3 += 32LL;
  }
  return a3;
}
