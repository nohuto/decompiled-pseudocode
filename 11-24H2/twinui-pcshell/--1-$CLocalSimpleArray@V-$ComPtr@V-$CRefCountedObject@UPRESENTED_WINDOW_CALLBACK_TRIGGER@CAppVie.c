/*
 * XREFs of ??1?$CLocalSimpleArray@V?$ComPtr@V?$CRefCountedObject@UPRESENTED_WINDOW_CALLBACK_TRIGGER@CAppViewManager@@@@@WRL@Microsoft@@$0PPPPPPPO@@@QEAA@XZ @ 0x18021FC64
 * Callers:
 *     _CAppViewManager::_InvokePresentedWindowCallbackTriggers_::_1_::dtor$0 @ 0x1806D731C (_CAppViewManager--_InvokePresentedWindowCallbackTriggers_--_1_--dtor$0.c)
 * Callees:
 *     ?DestroyMem@CTContainer_PolicyLocalMem@@SAHPEAX@Z @ 0x1802F1744 (-DestroyMem@CTContainer_PolicyLocalMem@@SAHPEAX@Z.c)
 *     ??_G?$ComPtr@UIObservablePropertyCallback@@@WRL@Microsoft@@QEAAPEAXI@Z @ 0x1802F6948 (--_G-$ComPtr@UIObservablePropertyCallback@@@WRL@Microsoft@@QEAAPEAXI@Z.c)
 */

__int64 __fastcall CLocalSimpleArray<Microsoft::WRL::ComPtr<CRefCountedObject<CAppViewManager::PRESENTED_WINDOW_CALLBACK_TRIGGER>>,4294967294>::~CLocalSimpleArray<Microsoft::WRL::ComPtr<CRefCountedObject<CAppViewManager::PRESENTED_WINDOW_CALLBACK_TRIGGER>>,4294967294>(
        __int64 a1)
{
  unsigned __int64 *v1; // rdi
  unsigned __int64 i; // rsi
  __int64 result; // rax

  v1 = (unsigned __int64 *)(a1 + 8);
  if ( *(_QWORD *)a1 )
  {
    for ( i = 0LL; i < *v1; ++i )
      Microsoft::WRL::ComPtr<IObservablePropertyCallback>::`scalar deleting destructor'(*(_QWORD *)a1 + 8 * i);
    result = CTContainer_PolicyLocalMem::DestroyMem(*(void **)a1);
    *(_QWORD *)a1 = 0LL;
  }
  *v1 = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  return result;
}
