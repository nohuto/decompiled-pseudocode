/*
 * XREFs of ?IsGpqForegroundAccessibleCurrent@@YAHH@Z @ 0x1C000A838
 * Callers:
 *     xxxInternalKeyEventDirect @ 0x1C000A61C (xxxInternalKeyEventDirect.c)
 *     ?xxxMouseEventDirect@@YAHKKKK_K00H@Z @ 0x1C01AAE3C (-xxxMouseEventDirect@@YAHKKKK_K00H@Z.c)
 *     xxxInjectTouchInput @ 0x1C01AFFF4 (xxxInjectTouchInput.c)
 * Callees:
 *     ?IsGpqForegroundAccessibleExplicit@@YAHHPEAUtagTHREADINFO@@UtagUIPI_INFO@@H@Z @ 0x1C00841F8 (-IsGpqForegroundAccessibleExplicit@@YAHHPEAUtagTHREADINFO@@UtagUIPI_INFO@@H@Z.c)
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C00EB194 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 */

__int64 __fastcall IsGpqForegroundAccessibleCurrent(unsigned int a1)
{
  struct tagTHREADINFO *v2; // rax

  v2 = PtiCurrentShared();
  return IsGpqForegroundAccessibleExplicit(
           a1,
           v2,
           *(_QWORD *)(*((_QWORD *)v2 + 53) + 896LL),
           *(_DWORD *)(*((_QWORD *)v2 + 53) + 12LL) & 0x80000000);
}
