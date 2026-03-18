/*
 * XREFs of ?HandlePTPInertiaTimer@CHidInput@@QEAAX_NKPEAX@Z @ 0x1C01E2508
 * Callers:
 *     ?CacheInertia@CPTPProcessor@@AEAAXXZ @ 0x1C01DE740 (-CacheInertia@CPTPProcessor@@AEAAXXZ.c)
 *     ?CancelInertiaTimer@CPTPProcessor@@AEAAXXZ @ 0x1C01DE8AC (-CancelInertiaTimer@CPTPProcessor@@AEAAXXZ.c)
 *     ?EndInertia@CPTPProcessor@@AEAAXXZ @ 0x1C01DEDF4 (-EndInertia@CPTPProcessor@@AEAAXXZ.c)
 * Callees:
 *     ?GetDispatcherHandleByName@CRIMBase@@IEBAPEAXW4DispatcherHandleName@1@W4HandleAccessMode@1@@Z @ 0x1C00775C0 (-GetDispatcherHandleByName@CRIMBase@@IEBAPEAXW4DispatcherHandleName@1@W4HandleAccessMode@1@@Z.c)
 */

void __fastcall CHidInput::HandlePTPInertiaTimer(CHidInput *this, char a2, int a3, void *a4)
{
  __int64 v5; // rbp
  void *DispatcherHandleByName; // rax
  union _LARGE_INTEGER DueTime; // [rsp+40h] [rbp-18h] BYREF

  v5 = a3;
  DispatcherHandleByName = (void *)CRIMBase::GetDispatcherHandleByName((__int64)this, 5u, 1);
  if ( a2 )
  {
    ZwCancelTimer(DispatcherHandleByName, 0LL);
  }
  else
  {
    DueTime.QuadPart = -10000 * v5;
    ZwSetTimer(DispatcherHandleByName, &DueTime, 0LL, 0LL, 0, 0, 0LL);
    *((_QWORD *)this + 169) = a4;
  }
}
