/*
 * XREFs of s_StopPersonalAssistantDialogSession @ 0x1800FB610
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180008B80 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?attach@?$com_ptr_t@UIVolumeStrip@@Uerr_returncode_policy@wil@@@wil@@QEAAXPEAUIVolumeStrip@@@Z @ 0x1800A22C8 (-attach@-$com_ptr_t@UIVolumeStrip@@Uerr_returncode_policy@wil@@@wil@@QEAAXPEAUIVolumeStrip@@@Z.c)
 */

__int64 __fastcall s_StopPersonalAssistantDialogSession(__int64 *a1)
{
  __int64 v1; // rdx
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  v1 = *a1;
  v4 = 0LL;
  wil::com_ptr_t<IVolumeStrip,wil::err_returncode_policy>::attach(&v4, v1);
  *a1 = 0LL;
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v4);
  return 0LL;
}
