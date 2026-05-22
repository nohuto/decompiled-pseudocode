/*
 * XREFs of ?GetCursor@DWMCursorBroker@@UEAAJKK_NPEAPEAUICursor@@@Z @ 0x180014AC0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetCursorWorker@DWMCursorBroker@@AEAAJKKPEAPEAUICursor@@@Z @ 0x180014964 (-GetCursorWorker@DWMCursorBroker@@AEAAJKKPEAPEAUICursor@@@Z.c)
 *     ?lock@_Mutex_base@std@@QEAAXXZ @ 0x1800158C4 (-lock@_Mutex_base@std@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008EFF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall DWMCursorBroker::GetCursor(
        DWMCursorBroker *this,
        unsigned int a2,
        unsigned int a3,
        char a4,
        struct ICursor **a5)
{
  int CursorWorker; // eax
  unsigned int v10; // ebx
  __int64 v12; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  std::_Mutex_base::lock((std::_Mutex_base *)&DWMCursorBroker::s_lock);
  *a5 = 0LL;
  if ( a2 == -1 )
  {
    (*(void (__fastcall **)(DWMCursorBroker *, struct ICursor **))(*(_QWORD *)this + 40LL))(this, a5);
    goto LABEL_5;
  }
  CursorWorker = DWMCursorBroker::GetCursorWorker(this, a2, a3, a5);
  v10 = CursorWorker;
  if ( CursorWorker < 0 )
  {
    if ( a4 )
    {
      CursorWorker = (*(__int64 (__fastcall **)(DWMCursorBroker *, struct ICursor **))(*(_QWORD *)this + 40LL))(
                       this,
                       a5);
      v10 = CursorWorker;
      if ( CursorWorker >= 0 )
        goto LABEL_5;
      v12 = 759LL;
    }
    else
    {
      v12 = 756LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\lib\\dwmcursorbroker.cpp",
      (const char *)(unsigned int)CursorWorker,
      (int)&DWMCursorBroker::s_lock);
    goto LABEL_6;
  }
LABEL_5:
  v10 = 0;
LABEL_6:
  _Mtx_unlock((_Mtx_t)&DWMCursorBroker::s_lock);
  return v10;
}
