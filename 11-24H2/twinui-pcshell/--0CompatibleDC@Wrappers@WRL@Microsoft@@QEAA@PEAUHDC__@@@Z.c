/*
 * XREFs of ??0CompatibleDC@Wrappers@WRL@Microsoft@@QEAA@PEAUHDC__@@@Z @ 0x1806847C4
 * Callers:
 *     s_DrawThemeTextPPIAware @ 0x180685158 (s_DrawThemeTextPPIAware.c)
 *     s_OnDrawItemHelper @ 0x1806857A0 (s_OnDrawItemHelper.c)
 * Callees:
 *     <none>
 */

Microsoft::WRL::Wrappers::CompatibleDC *__fastcall Microsoft::WRL::Wrappers::CompatibleDC::CompatibleDC(
        Microsoft::WRL::Wrappers::CompatibleDC *this,
        HDC a2)
{
  *((_QWORD *)this + 1) = 0LL;
  *(_QWORD *)this = &Microsoft::WRL::Wrappers::CompatibleDC::`vftable';
  *((_QWORD *)this + 1) = CreateCompatibleDC(a2);
  return this;
}
