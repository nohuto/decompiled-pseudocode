/*
 * XREFs of LogFwInitialize @ 0x140BA2E70
 * Callers:
 *     BgpFwLibraryInitialize @ 0x140BA5400 (BgpFwLibraryInitialize.c)
 * Callees:
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

void *LogFwInitialize()
{
  dword_140EEFD90 |= 0x80u;
  qword_140EEF898 = 0LL;
  qword_140EEF8C8 = 0LL;
  qword_140EEF870 = 0LL;
  dword_140EEF8EC = 0;
  qword_140EEF880 = 0LL;
  qword_140EEF8F8 = 0LL;
  qword_140EEF8A0 = 0LL;
  qword_140EEF878 = 0LL;
  qword_140EEF8A8 = 0LL;
  qword_140EEF868 = 0LL;
  qword_140EEF888 = 0LL;
  qword_140EEF8E0 = 0LL;
  qword_140EEF8B8 = 0LL;
  qword_140EEF8C0 = 0LL;
  qword_140EEF8D0 = 0LL;
  dword_140EEF894 = 0;
  dword_140EEF8B0 = 0;
  dword_140EEF8F0 = 0;
  dword_140EEF8E8 = 0;
  dword_140EEF900 = 0;
  dword_140EEF890 = 0;
  qword_140E0EE68 = 1LL;
  qword_140E0EE70 = 0x7FFFFFFFFFFFFFFFLL;
  qword_140E0EE78 = 0x7FFFFFFFFFFFFFFFLL;
  return memset_0(&qword_140E64DA0, 0, 0x48uLL);
}
