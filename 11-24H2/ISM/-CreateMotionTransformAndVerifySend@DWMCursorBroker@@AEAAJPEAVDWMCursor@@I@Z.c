/*
 * XREFs of ?CreateMotionTransformAndVerifySend@DWMCursorBroker@@AEAAJPEAVDWMCursor@@I@Z @ 0x1801C7254
 * Callers:
 *     ?AddEndpoint@DWMCursorBroker@@UEAAJUtagMsgRoutingInfo@@I_N@Z @ 0x1801C7150 (-AddEndpoint@DWMCursorBroker@@UEAAJUtagMsgRoutingInfo@@I_N@Z.c)
 *     ?RegisterCursor@DWMCursorBroker@@QEAAJPEAVDWMCursor@@@Z @ 0x1801C7C30 (-RegisterCursor@DWMCursorBroker@@QEAAJPEAVDWMCursor@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008F754 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180091C24 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x18009D598 (memset_0.c)
 *     ?DuplicateHandleForProcess@DWMCursor@@QEAAJKPEAPEAX@Z @ 0x1801C81C0 (-DuplicateHandleForProcess@DWMCursor@@QEAAJKPEAPEAX@Z.c)
 *     ?EnsureDwmCursorController@DWMCursor@@QEAAJXZ @ 0x1801C83A8 (-EnsureDwmCursorController@DWMCursor@@QEAAJXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall DWMCursorBroker::CreateMotionTransformAndVerifySend(
        DWMCursorBroker *this,
        struct DWMCursor *a2,
        unsigned int a3)
{
  __int64 v3; // r14
  __int64 v6; // rsi
  __int64 v7; // rcx
  __int64 v8; // rax
  unsigned int v9; // edx
  int v10; // eax
  unsigned int v11; // edi
  int v13; // eax
  int v14; // edi
  _BYTE v15[4]; // [rsp+30h] [rbp-48h] BYREF
  __int64 v16; // [rsp+34h] [rbp-44h]
  int v17; // [rsp+40h] [rbp-38h]
  int v18; // [rsp+44h] [rbp-34h]
  void *v19; // [rsp+48h] [rbp-30h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  void *v21; // [rsp+80h] [rbp+8h] BYREF

  v3 = a3;
  v6 = 3LL * a3;
  if ( *((_QWORD *)this + 3 * a3 + 27) )
  {
    memset_0(v15, 0, 0x40uLL);
    v7 = *(_QWORD *)(*(__int64 (__fastcall **)(struct DWMCursor *, void **))(*(_QWORD *)a2 + 48LL))(a2, &v21);
    v8 = *(_QWORD *)a2;
    v16 = v7;
    v17 = (*(__int64 (__fastcall **)(struct DWMCursor *))(v8 + 56))(a2);
    v18 = (*(__int64 (__fastcall **)(struct DWMCursor *))(*(_QWORD *)a2 + 64LL))(a2);
    if ( *((_BYTE *)this + 24 * v3 + 224) )
    {
      v9 = *((_DWORD *)this + 6 * v3 + 52);
      v21 = 0LL;
      v10 = DWMCursor::DuplicateHandleForProcess(a2, v9, &v21);
      v11 = v10;
      if ( v10 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x19D,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\lib\\dwmcursorbroker.cpp",
          (const char *)(unsigned int)v10);
        return v11;
      }
      v19 = v21;
    }
    else
    {
      v13 = DWMCursor::EnsureDwmCursorController(a2);
      if ( v13 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x1A5,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\lib\\dwmcursorbroker.cpp",
          (const char *)(unsigned int)v13);
    }
    v14 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, _BYTE *, int))(**((_QWORD **)this + 22) + 176LL))(
            *((_QWORD *)this + 22),
            *((_QWORD *)this + v6 + 27),
            4LL,
            v15,
            64);
    if ( v14 < 0 )
    {
      (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 22) + 168LL))(
        *((_QWORD *)this + 22),
        *((_QWORD *)this + v6 + 27));
      *((_QWORD *)this + v6 + 27) = 0LL;
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x1B6,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\lib\\dwmcursorbroker.cpp",
        (const char *)(unsigned int)v14);
    }
  }
  return 0LL;
}
