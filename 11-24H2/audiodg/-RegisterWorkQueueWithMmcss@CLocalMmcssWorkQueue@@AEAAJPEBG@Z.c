/*
 * XREFs of ?RegisterWorkQueueWithMmcss@CLocalMmcssWorkQueue@@AEAAJPEBG@Z @ 0x140054EC0
 * Callers:
 *     ?RuntimeClassInitialize@CLocalMmcssWorkQueue@@QEAAJPEBG@Z @ 0x140054DB4 (-RuntimeClassInitialize@CLocalMmcssWorkQueue@@QEAAJPEBG@Z.c)
 * Callees:
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x140006CB0 (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14000AC24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CreateRtwqAsyncCallback@@YAJPEAPEAVCRtwqAsyncCallback@@@Z @ 0x1400442D8 (-CreateRtwqAsyncCallback@@YAJPEAPEAVCRtwqAsyncCallback@@@Z.c)
 *     ?wait@?$slim_event_t@$0A@@wil@@QEAA_NK@Z @ 0x14004438C (-wait@-$slim_event_t@$0A@@wil@@QEAA_NK@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CLocalMmcssWorkQueue::RegisterWorkQueueWithMmcss(
        CLocalMmcssWorkQueue *this,
        const unsigned __int16 *a2)
{
  int RtwqAsyncCallback; // eax
  unsigned int v5; // ebx
  IRtwqAsyncCallback *v6; // rbx
  HRESULT v7; // eax
  HRESULT v8; // esi
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  IRtwqAsyncCallback *doneCallback; // [rsp+50h] [rbp+18h] BYREF

  doneCallback = 0LL;
  RtwqAsyncCallback = CreateRtwqAsyncCallback((struct CRtwqAsyncCallback **)&doneCallback);
  v5 = RtwqAsyncCallback;
  if ( RtwqAsyncCallback < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x113,
      (int)"avcore\\audiocore\\server\\audiodg\\exe\\rtthreadmanager.cpp",
      (const char *)(unsigned int)RtwqAsyncCallback);
LABEL_10:
    ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&doneCallback);
    return v5;
  }
  v6 = doneCallback;
  v7 = RtwqBeginRegisterWorkQueueWithMMCSS(*((_DWORD *)this + 4), a2, 0, 0, doneCallback, 0LL);
  v8 = v7;
  if ( v7 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x115,
      (int)"avcore\\audiocore\\server\\audiodg\\exe\\rtthreadmanager.cpp",
      (const char *)(unsigned int)v7);
    v5 = v8;
    goto LABEL_10;
  }
  if ( wil::slim_event_t<0>::wait((volatile __int32 *)&v6->GetParameters + 1) )
  {
    *((_DWORD *)this + 5) = v6->GetParameters;
    *((_BYTE *)this + 24) = 1;
    v5 = 0;
    goto LABEL_10;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xF1,
    (int)"avcore\\audiocore\\server\\audiodg\\exe\\rtthreadmanager.cpp",
    (const char *)0x80004005LL);
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x116,
    (int)"avcore\\audiocore\\server\\audiodg\\exe\\rtthreadmanager.cpp",
    (const char *)0x80004005LL);
  if ( v6 )
    ((void (__fastcall *)(IRtwqAsyncCallback *))v6->lpVtbl->Release)(v6);
  return 2147500037LL;
}
