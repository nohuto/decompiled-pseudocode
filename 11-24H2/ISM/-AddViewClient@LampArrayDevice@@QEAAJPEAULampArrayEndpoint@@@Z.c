/*
 * XREFs of ?AddViewClient@LampArrayDevice@@QEAAJPEAULampArrayEndpoint@@@Z @ 0x1800E6174
 * Callers:
 *     ?OnLampArrayAdded@LampArrayRawInputProvider@@QEAAJPEAVPnpDevice@@@Z @ 0x1800E398C (-OnLampArrayAdded@LampArrayRawInputProvider@@QEAAJPEAVPnpDevice@@@Z.c)
 *     ?OnSipcClientConnection@LampArrayRawInputProvider@@CAXPEAUISIPCServer@@PEBUSIPC_CLIENT_INFO@@PEAX@Z @ 0x1800E3E10 (-OnSipcClientConnection@LampArrayRawInputProvider@@CAXPEAUISIPCServer@@PEBUSIPC_CLIENT_INFO@@PEA.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008F754 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18009E848 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??1?$unique_ptr@UViewClientListEntry@LampArrayDevice@@U?$default_delete@UViewClientListEntry@LampArrayDevice@@@std@@@std@@QEAA@XZ @ 0x1800E5F74 (--1-$unique_ptr@UViewClientListEntry@LampArrayDevice@@U-$default_delete@UViewClientListEntry@Lam.c)
 *     ?CreateClientView@HidLampArrayDevice@@QEAAJPEAUISIPCEndpoint@@EPEAPEAULampArrayDeviceView@@@Z @ 0x1800E9C28 (-CreateClientView@HidLampArrayDevice@@QEAAJPEAUISIPCEndpoint@@EPEAPEAULampArrayDeviceView@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall LampArrayDevice::AddViewClient(LampArrayDevice *this, struct LampArrayEndpoint *a2)
{
  LampArrayDevice::ViewClientListEntry *v4; // rax
  LampArrayDevice::ViewClientListEntry *v5; // rdi
  struct ISIPCEndpoint *v6; // rdx
  struct ISIPCEndpoint *v7; // rbx
  __int64 v8; // rcx
  unsigned __int8 v9; // r8
  _QWORD *v10; // r14
  int ClientView; // eax
  int v12; // ebx
  __int64 v13; // r9
  __int64 v14; // rdx
  unsigned int v15; // edx
  LampArrayDevice **v16; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  LampArrayDevice::ViewClientListEntry *v19; // [rsp+50h] [rbp+18h] BYREF

  v4 = (LampArrayDevice::ViewClientListEntry *)operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
  v5 = v4;
  if ( !v4 )
  {
    v19 = 0LL;
    v12 = -2147024882;
    v13 = 2147942414LL;
    v14 = 141LL;
    goto LABEL_17;
  }
  *(_QWORD *)v4 = 0LL;
  *((_QWORD *)v4 + 1) = 0LL;
  *((_QWORD *)v4 + 3) = 0LL;
  *((_QWORD *)v4 + 4) = 0LL;
  *((_QWORD *)v4 + 2) = 0LL;
  v19 = v4;
  v6 = (struct ISIPCEndpoint *)*((_QWORD *)v4 + 2);
  v7 = *(struct ISIPCEndpoint **)a2;
  if ( v6 != *(struct ISIPCEndpoint **)a2 )
  {
    if ( v7 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v7 + 8LL))(*(_QWORD *)a2);
    v6 = v7;
    v8 = *((_QWORD *)v5 + 2);
    *((_QWORD *)v5 + 2) = v7;
    if ( v8 )
    {
      (*(void (__fastcall **)(__int64, struct ISIPCEndpoint *))(*(_QWORD *)v8 + 16LL))(v8, v7);
      v6 = (struct ISIPCEndpoint *)*((_QWORD *)v5 + 2);
    }
  }
  *((_DWORD *)v5 + 6) = *((_DWORD *)a2 + 2);
  v9 = *((_BYTE *)a2 + 12);
  *((_BYTE *)v5 + 28) = v9;
  v10 = (_QWORD *)((char *)v5 + 32);
  ClientView = HidLampArrayDevice::CreateClientView(
                 *((HidLampArrayDevice **)this + 3),
                 v6,
                 v9,
                 (struct LampArrayDeviceView **)v5 + 4);
  v12 = ClientView;
  if ( ClientView < 0 )
  {
    v13 = (unsigned int)ClientView;
    v14 = 150LL;
LABEL_17:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v14,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\lamparraydevice.cpp",
      (const char *)v13);
    goto LABEL_18;
  }
  v12 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(**((_QWORD **)v5 + 2) + 40LL))(
          *((_QWORD *)v5 + 2),
          *v10,
          0LL,
          0LL);
  if ( v12 < 0 )
  {
    (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)v5 + 2) + 48LL))(*((_QWORD *)v5 + 2), *v10);
  }
  else
  {
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 56));
    v19 = 0LL;
    v16 = (LampArrayDevice **)*((_QWORD *)this + 5);
    if ( *v16 != (LampArrayDevice *)((char *)this + 32) )
      __fastfail(3u);
    *(_QWORD *)v5 = (char *)this + 32;
    *((_QWORD *)v5 + 1) = v16;
    *v16 = v5;
    *((_QWORD *)this + 5) = v5;
    ++*((_DWORD *)this + 12);
    if ( this != (LampArrayDevice *)-56LL )
      LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 56));
    v12 = 0;
  }
LABEL_18:
  std::unique_ptr<LampArrayDevice::ViewClientListEntry>::~unique_ptr<LampArrayDevice::ViewClientListEntry>(&v19, v15);
  return (unsigned int)v12;
}
