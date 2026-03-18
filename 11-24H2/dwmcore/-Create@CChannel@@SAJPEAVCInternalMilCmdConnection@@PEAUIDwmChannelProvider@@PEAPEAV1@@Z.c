/*
 * XREFs of ?Create@CChannel@@SAJPEAVCInternalMilCmdConnection@@PEAUIDwmChannelProvider@@PEAPEAV1@@Z @ 0x180217F3C
 * Callers:
 *     ?CreateChannel@CInternalMilCmdConnection@@QEAAJPEAUIDwmChannelProvider@@PEAPEAVCChannel@@@Z @ 0x180217E20 (-CreateChannel@CInternalMilCmdConnection@@QEAAJPEAUIDwmChannelProvider@@PEAPEAVCChannel@@@Z.c)
 * Callees:
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x18000CD4C (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001DF0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x180157710 (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     ModuleFailFastForHRESULT @ 0x18024634C (ModuleFailFastForHRESULT.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18024F9FC (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ??0CChannel@@AEAA@PEAVCInternalMilCmdConnection@@PEAUIDwmChannelProvider@@@Z @ 0x180261320 (--0CChannel@@AEAA@PEAVCInternalMilCmdConnection@@PEAUIDwmChannelProvider@@@Z.c)
 *     ?Release@CChannel@@UEAAKXZ @ 0x180262A60 (-Release@CChannel@@UEAAKXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CChannel::Create(
        struct CInternalMilCmdConnection *a1,
        struct IDwmChannelProvider *a2,
        struct CChannel **a3)
{
  CChannel *v6; // rax
  CChannel *v7; // rax
  CChannel *v8; // rdi
  HANDLE EventW; // rax
  const char *v10; // r9
  int LastError; // eax
  unsigned int v12; // ebx
  void *retaddr; // [rsp+28h] [rbp+0h]

  v6 = (CChannel *)DefaultHeap::AllocClear(0xC8uLL);
  if ( !v6 )
    ModuleFailFastForHRESULT(-2147024882, retaddr);
  v7 = CChannel::CChannel(v6, a1, a2);
  v8 = v7;
  if ( v7 )
    _InterlockedIncrement((volatile signed __int32 *)v7 + 2);
  EventW = CreateEventW(0LL, 0, 0, 0LL);
  wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
    (void **)v8 + 12,
    EventW);
  if ( ((*((_QWORD *)v8 + 12) + 1LL) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
  {
    *((_DWORD *)v8 + 18) = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)v8 + 8) + 48LL))(*((_QWORD *)v8 + 8));
  }
  else
  {
    LastError = wil::details::in1diag3::Return_GetLastError(
                  (wil::details::in1diag3 *)retaddr,
                  (void *)0x42,
                  (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\channel.cpp",
                  v10);
    v12 = LastError;
    if ( LastError < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        (wil::details::in1diag3 *)retaddr,
        (void *)0x165,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\channel.cpp",
        (const char *)(unsigned int)LastError);
      CChannel::Release(v8);
      return v12;
    }
  }
  *a3 = v8;
  return 0LL;
}
