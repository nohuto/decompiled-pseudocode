/*
 * XREFs of ?ProcessCreate@CDDisplayRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_DDISPLAYRENDERTARGET_CREATE@@@Z @ 0x18028A2B4
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18014D130 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x1800FFE90 (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     ?SetSDRBoost@CDDisplayRenderTarget@@IEAAXM@Z @ 0x180252ED8 (-SetSDRBoost@CDDisplayRenderTarget@@IEAAXM@Z.c)
 */

__int64 __fastcall CDDisplayRenderTarget::ProcessCreate(
        void **this,
        struct CResourceTable *a2,
        const struct tagMILCMD_DDISPLAYRENDERTARGET_CREATE *a3)
{
  void *v3; // rdx
  int v6; // eax
  int v7; // eax

  v3 = (void *)*((_QWORD *)a3 + 3);
  if ( v3 != (void *)-1LL )
    wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
      this + 23,
      v3);
  this[4186] = (void *)*((_QWORD *)a3 + 1);
  v6 = *((_DWORD *)a3 + 4);
  *((_DWORD *)this + 8374) = 0;
  *((_DWORD *)this + 8378) = v6;
  *((_DWORD *)this + 8379) = *((_DWORD *)a3 + 5);
  *((_DWORD *)this + 32) = *((_DWORD *)a3 + 8);
  *((_DWORD *)this + 34) = *((_DWORD *)a3 + 9);
  CDDisplayRenderTarget::SetSDRBoost((CDDisplayRenderTarget *)this, 1.0);
  this[15] = (void *)*((_QWORD *)a3 + 5);
  v7 = 3;
  if ( *((_DWORD *)a3 + 12) < 3u )
    v7 = 2;
  *((_DWORD *)this + 8380) = v7;
  return 0LL;
}
