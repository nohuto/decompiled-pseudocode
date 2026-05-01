/*
 * XREFs of ??__Fs_isSuppressedByShellConfig@?1??IsStartMenuSuppressedByShellConfigRegistry@@YA_NXZ@YAXXZ @ 0x180707730
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall `IsStartMenuSuppressedByShellConfigRegistry'::`2'::`dynamic atexit destructor for 's_isSuppressedByShellConfig''()
{
  wistd::unique_ptr<bool,wistd::default_delete<bool>>::reset(
    (void **)&`IsStartMenuSuppressedByShellConfigRegistry'::`2'::s_isSuppressedByShellConfig,
    0LL);
}
