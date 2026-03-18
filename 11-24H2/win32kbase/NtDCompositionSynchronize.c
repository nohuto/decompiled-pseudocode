/*
 * XREFs of NtDCompositionSynchronize @ 0x1400EEE00
 * Callers:
 *     <none>
 * Callees:
 *     ?ReferenceHandleAndLock@CApplicationChannel@DirectComposition@@SAJIPEAPEAV12@@Z @ 0x14006DF90 (-ReferenceHandleAndLock@CApplicationChannel@DirectComposition@@SAJIPEAPEAV12@@Z.c)
 *     ?Synchronize@CSynchronizationManager@DirectComposition@@QEAAJPEAVCBatch@2@@Z @ 0x140073B48 (-Synchronize@CSynchronizationManager@DirectComposition@@QEAAJPEAVCBatch@2@@Z.c)
 *     ?PreallocateNextBatch@CApplicationChannel@DirectComposition@@IEAAXK@Z @ 0x140224F2C (-PreallocateNextBatch@CApplicationChannel@DirectComposition@@IEAAXK@Z.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 *     RtlCopyToUser @ 0x1402C3008 (RtlCopyToUser.c)
 */

__int64 __fastcall NtDCompositionSynchronize(__int64 a1, void *a2)
{
  int v3; // ebx
  DirectComposition::CApplicationChannel *v4; // rdi
  __int64 DCompSessionState; // rax
  DirectComposition::CApplicationChannel *v7; // [rsp+50h] [rbp+18h] BYREF
  __int64 Src; // [rsp+58h] [rbp+20h] BYREF

  v7 = 0LL;
  Src = 0LL;
  v3 = DirectComposition::CApplicationChannel::ReferenceHandleAndLock(a1, &v7);
  if ( v3 >= 0 )
  {
    v4 = v7;
    DirectComposition::CApplicationChannel::PreallocateNextBatch(v7, 0);
    DCompSessionState = W32GetDCompSessionState();
    v3 = DirectComposition::CSynchronizationManager::Synchronize(
           *(DirectComposition::CSynchronizationManager **)(DCompSessionState + 24),
           *((struct DirectComposition::CBatch **)v4 + 22));
    if ( v3 >= 0 )
      Src = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v4 + 22) + 40LL) + 8LL);
    (**(void (__fastcall ***)(DirectComposition::CApplicationChannel *))v4)(v4);
  }
  if ( v3 >= 0 )
  {
    if ( a2 )
      RtlCopyToUser(a2, &Src, 8uLL);
    else
      return (unsigned int)-1073741811;
  }
  return (unsigned int)v3;
}
