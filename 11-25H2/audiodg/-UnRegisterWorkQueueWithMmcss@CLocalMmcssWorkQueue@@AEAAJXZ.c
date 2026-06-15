/*
 * XREFs of ?UnRegisterWorkQueueWithMmcss@CLocalMmcssWorkQueue@@AEAAJXZ @ 0x1400444C0
 * Callers:
 *     ??1CLocalMmcssWorkQueue@@UEAA@XZ @ 0x14004443C (--1CLocalMmcssWorkQueue@@UEAA@XZ.c)
 * Callees:
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x140006C80 (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14000ABF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CreateRtwqAsyncCallback@@YAJPEAPEAVCRtwqAsyncCallback@@@Z @ 0x1400445D8 (-CreateRtwqAsyncCallback@@YAJPEAPEAVCRtwqAsyncCallback@@@Z.c)
 *     ?Wait@CRtwqAsyncCallback@@QEAAJK@Z @ 0x140044648 (-Wait@CRtwqAsyncCallback@@QEAAJK@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CLocalMmcssWorkQueue::UnRegisterWorkQueueWithMmcss(CLocalMmcssWorkQueue *this)
{
  int RtwqAsyncCallback; // eax
  unsigned int v3; // ebx
  CRtwqAsyncCallback *v5; // rbx
  HRESULT v6; // eax
  unsigned int v7; // edx
  unsigned int v8; // edi
  int v9; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  IRtwqAsyncCallback *doneCallback; // [rsp+30h] [rbp+8h] BYREF

  if ( !*((_BYTE *)this + 24) )
    return 0LL;
  doneCallback = 0LL;
  RtwqAsyncCallback = CreateRtwqAsyncCallback((struct CRtwqAsyncCallback **)&doneCallback);
  v3 = RtwqAsyncCallback;
  if ( RtwqAsyncCallback >= 0 )
  {
    v5 = (CRtwqAsyncCallback *)doneCallback;
    v6 = RtwqBeginUnregisterWorkQueueWithMMCSS(*((_DWORD *)this + 4), doneCallback, 0LL);
    v8 = v6;
    if ( v6 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x123,
        (int)"avcore\\audiocore\\server\\audiodg\\exe\\rtthreadmanager.cpp",
        (const char *)(unsigned int)v6);
      if ( v5 )
        (*(void (__fastcall **)(CRtwqAsyncCallback *))(*(_QWORD *)v5 + 16LL))(v5);
      return v8;
    }
    v9 = CRtwqAsyncCallback::Wait(v5, v7);
    v8 = v9;
    if ( v9 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x124,
        (int)"avcore\\audiocore\\server\\audiodg\\exe\\rtthreadmanager.cpp",
        (const char *)(unsigned int)v9);
      if ( v5 )
        (*(void (__fastcall **)(CRtwqAsyncCallback *))(*(_QWORD *)v5 + 16LL))(v5);
      return v8;
    }
    ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&doneCallback);
    return 0LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x121,
    (int)"avcore\\audiocore\\server\\audiodg\\exe\\rtthreadmanager.cpp",
    (const char *)(unsigned int)RtwqAsyncCallback);
  if ( doneCallback )
    ((void (__fastcall *)(IRtwqAsyncCallback *))doneCallback->lpVtbl->Release)(doneCallback);
  return v3;
}
