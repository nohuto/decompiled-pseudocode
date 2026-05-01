/*
 * XREFs of _XamlLauncher::SearchShowRequested_::_14_::_parameters_::_parameters_ @ 0x1804FFD64
 * Callers:
 *     XamlLauncher::LauncherShowRequested$_InitCoro$2 @ 0x1801FFFB0 (XamlLauncher--LauncherShowRequested$_InitCoro$2.c)
 *     XamlLauncher::SearchShowRequested$_InitCoro$2 @ 0x180200E80 (XamlLauncher--SearchShowRequested$_InitCoro$2.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall XamlLauncher::SearchShowRequested_::_14_::_parameters_::_parameters_(
        _QWORD *a1,
        __int64 a2,
        __int64 *a3)
{
  __int64 v3; // rax

  *a1 = a2;
  v3 = *a3;
  *a3 = 0LL;
  a1[1] = v3;
  return a1;
}
