/*
 * XREFs of ??1?$com_ptr_t@VCPlaybackManager@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800284DC
 * Callers:
 *     ??1CWindowsPolicyManager@@UEAA@XZ @ 0x180028714 (--1CWindowsPolicyManager@@UEAA@XZ.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UISessionInternalEvents@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180029EE0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UISessionInternal.c)
 */

__int64 __fastcall wil::com_ptr_t<CPlaybackManager,wil::err_returncode_policy>::~com_ptr_t<CPlaybackManager,wil::err_returncode_policy>(
        _QWORD *a1)
{
  __int64 result; // rax

  if ( *a1 )
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,ISessionInternalEvents>::Release();
  return result;
}
