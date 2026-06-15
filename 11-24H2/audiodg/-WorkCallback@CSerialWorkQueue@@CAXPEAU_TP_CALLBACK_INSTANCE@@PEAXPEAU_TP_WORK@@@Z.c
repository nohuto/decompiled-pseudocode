/*
 * XREFs of ?WorkCallback@CSerialWorkQueue@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x140008360
 * Callers:
 *     <none>
 * Callees:
 *     ??_G_WorkTask@@QEAAPEAXI@Z @ 0x140008440 (--_G_WorkTask@@QEAAPEAXI@Z.c)
 *     ?load@?$_Atomic_storage@_N$00@std@@QEBA_NW4memory_order@2@@Z @ 0x140063840 (-load@-$_Atomic_storage@_N$00@std@@QEBA_NW4memory_order@2@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CSerialWorkQueue::WorkCallback(PTP_CALLBACK_INSTANCE Instance, _WorkTask *Context, PTP_WORK Work)
{
  __int64 v5; // rsi
  int v6; // eax
  __int64 v7; // rcx
  unsigned int v8; // edx

  v5 = *((_QWORD *)Context + 2);
  if ( _Mtx_lock((_Mtx_t)(v5 + 88)) )
  {
    std::_Throw_Cpp_error(5);
    __debugbreak();
    goto LABEL_8;
  }
  v6 = *(_DWORD *)(v5 + 116);
  if ( v6 == 0x7FFFFFFF )
  {
LABEL_8:
    *(_DWORD *)(v5 + 116) = v6 - 1;
    std::_Throw_Cpp_error(6);
    goto LABEL_9;
  }
  if ( !(unsigned __int8)std::_Atomic_storage<bool,1>::load(v5 + 80) )
  {
    v7 = *(_QWORD *)(*(_QWORD *)Context + 56LL);
    if ( v7 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
      goto LABEL_6;
    }
LABEL_9:
    std::_Xbad_function_call();
    JUMPOUT(0x140008439LL);
  }
LABEL_6:
  _Mtx_unlock((_Mtx_t)(v5 + 88));
  _WorkTask::`scalar deleting destructor'(Context, v8);
  CloseThreadpoolWork(Work);
}
