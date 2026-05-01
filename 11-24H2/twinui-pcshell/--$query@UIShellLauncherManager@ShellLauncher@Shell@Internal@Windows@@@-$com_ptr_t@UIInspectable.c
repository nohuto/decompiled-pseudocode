/*
 * XREFs of ??$query@UIShellLauncherManager@ShellLauncher@Shell@Internal@Windows@@@?$com_ptr_t@UIInspectable@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UIShellLauncherManager@ShellLauncher@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@1@XZ @ 0x1804F0E60
 * Callers:
 *     ??$ActivateInstance@UIShellLauncherManager@ShellLauncher@Shell@Internal@Windows@@@wil@@YA?AV?$com_ptr_t@UIShellLauncherManager@ShellLauncher@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@0@PEBG@Z @ 0x1804F05E4 (--$ActivateInstance@UIShellLauncherManager@ShellLauncher@Shell@Internal@Windows@@@wil@@YA-AV-$co.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800A59D8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_QWORD *__fastcall wil::com_ptr_t<IInspectable,wil::err_exception_policy>::query<Windows::Internal::Shell::ShellLauncher::IShellLauncherManager>(
        __int64 (__fastcall ****a1)(_QWORD, GUID *, _QWORD *),
        _QWORD *a2)
{
  __int64 (__fastcall ***v2)(_QWORD, GUID *, _QWORD *); // rcx
  int v4; // eax
  int v6; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v2 = *a1;
  *a2 = 0LL;
  v4 = (**v2)(v2, &GUID_aefd68fb_80b4_4031_ba93_14b27c7fdab2, a2);
  if ( v4 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x1C60,
      (int)"onecore\\internal\\sdk\\inc\\wil\\opensource/wil/result_macros.h",
      (const char *)(unsigned int)v4,
      v6);
  return a2;
}
