/*
 * XREFs of ?_EnsureWindowMessageService@CLauncherTipContextMenu@@AEAAJXZ @ 0x180602DB8
 * Callers:
 *     ?_ExecuteCommand@CLauncherTipContextMenu@@AEAAXV?$ComPtr@V?$CRefCountedObject@ULauncherTipMenuCommand@CLauncherTipContextMenu@@@@@WRL@Microsoft@@@Z @ 0x1801EB6A8 (-_ExecuteCommand@CLauncherTipContextMenu@@AEAAXV-$ComPtr@V-$CRefCountedObject@ULauncherTipMenuCo.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 */

HRESULT __fastcall CLauncherTipContextMenu::_EnsureWindowMessageService(CLauncherTipContextMenu *this)
{
  HRESULT result; // eax
  void **v2; // rbx

  result = 0;
  v2 = (void **)((char *)this + 144);
  if ( !*((_QWORD *)this + 18) )
  {
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 18);
    return IUnknown_QueryService(
             *((IUnknown **)this + 2),
             &IID_IImmersiveWindowMessageService,
             &GUID_fc62ce95_8396_401a_b74f_88df0d75e112,
             v2);
  }
  return result;
}
