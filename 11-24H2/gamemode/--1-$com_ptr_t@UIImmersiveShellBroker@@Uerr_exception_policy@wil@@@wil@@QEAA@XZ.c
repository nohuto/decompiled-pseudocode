/*
 * XREFs of ??1?$com_ptr_t@UIImmersiveShellBroker@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180009728
 * Callers:
 *     SetGamingFullScreenExperience$dtor$0 @ 0x180010DAC (SetGamingFullScreenExperience$dtor$0.c)
 *     SetGamingFullScreenExperience$dtor$1 @ 0x180010DBE (SetGamingFullScreenExperience$dtor$1.c)
 *     IsGamingFullScreenExperienceActive$dtor$4 @ 0x180010E03 (IsGamingFullScreenExperienceActive$dtor$4.c)
 *     IsGamingFullScreenExperienceActive$dtor$3 @ 0x180010E15 (IsGamingFullScreenExperienceActive$dtor$3.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180012010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall wil::com_ptr_t<IImmersiveShellBroker,wil::err_exception_policy>::~com_ptr_t<IImmersiveShellBroker,wil::err_exception_policy>(
        __int64 *a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
  return result;
}
