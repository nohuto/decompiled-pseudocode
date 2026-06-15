/*
 * XREFs of ?UpdateActiveStreamCount@CSubmixImpl@@IEAAJH@Z @ 0x140037E14
 * Callers:
 *     ?OnStreamStarted@CSubmixImpl@@UEAAJPEAUIStreamInstance@@@Z @ 0x140005710 (-OnStreamStarted@CSubmixImpl@@UEAAJPEAUIStreamInstance@@@Z.c)
 *     ?OnConnectedToStream@CSubmixImpl@@UEAAJPEAUIStreamInstance@@@Z @ 0x140028C50 (-OnConnectedToStream@CSubmixImpl@@UEAAJPEAUIStreamInstance@@@Z.c)
 *     ?OnDisconnectedFromStream@CSubmixImpl@@UEAAJPEAUIStreamInstance@@@Z @ 0x140029000 (-OnDisconnectedFromStream@CSubmixImpl@@UEAAJPEAUIStreamInstance@@@Z.c)
 *     ?OnLeftSubmixStopped@CSubmixImpl@@UEAAJPEAUISubmixInternal@@@Z @ 0x140037A90 (-OnLeftSubmixStopped@CSubmixImpl@@UEAAJPEAUISubmixInternal@@@Z.c)
 *     ?OnLeftSubmixStarted@CSubmixImpl@@UEAAJPEAUISubmixInternal@@@Z @ 0x140037B50 (-OnLeftSubmixStarted@CSubmixImpl@@UEAAJPEAUISubmixInternal@@@Z.c)
 *     ?OnStreamStopped@CSubmixImpl@@UEAAJPEAUIStreamInstance@@@Z @ 0x140037C30 (-OnStreamStopped@CSubmixImpl@@UEAAJPEAUIStreamInstance@@@Z.c)
 * Callees:
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x140006CB0 (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14000AC24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CSubmixImpl::UpdateActiveStreamCount(CSubmixImpl *this, int a2)
{
  int v3; // edi
  void (__fastcall ***v4)(_QWORD, GUID *, __int64 *); // r9
  __int64 v5; // rcx
  int v6; // eax
  unsigned int v7; // ebx
  int v9; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v11; // [rsp+30h] [rbp+8h] BYREF

  v3 = *((_DWORD *)this + 42);
  *((_DWORD *)this + 42) = v3 + a2;
  v4 = (void (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)this + 38);
  v5 = 0LL;
  v11 = 0LL;
  if ( v4 )
  {
    (**v4)(v4, &GUID_57386a31_7482_4b2f_89c9_c3dcf849c66d, &v11);
    v5 = v11;
  }
  if ( !v5 )
    goto LABEL_9;
  if ( !v3 )
  {
    if ( *((_DWORD *)this + 42) != 1 )
      goto LABEL_9;
    v9 = (*(__int64 (__fastcall **)(__int64, CSubmixImpl *))(*(_QWORD *)v5 + 88LL))(v5, this);
    v7 = v9;
    if ( v9 >= 0 )
      goto LABEL_8;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x167,
      (int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
      (const char *)(unsigned int)v9);
    if ( v11 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    return v7;
  }
  if ( v3 == 1 && !*((_DWORD *)this + 42) )
  {
    v6 = (*(__int64 (__fastcall **)(__int64, CSubmixImpl *))(*(_QWORD *)v5 + 96LL))(v5, this);
    v7 = v6;
    if ( v6 >= 0 )
    {
LABEL_8:
      v5 = v11;
      goto LABEL_9;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x16C,
      (int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
      (const char *)(unsigned int)v6);
    ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&v11);
    return v7;
  }
LABEL_9:
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  return 0LL;
}
