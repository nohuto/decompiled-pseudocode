/*
 * XREFs of LogFwInitialize @ 0x140BB4E70
 * Callers:
 *     BgpFwLibraryInitialize @ 0x140BB7400 (BgpFwLibraryInitialize.c)
 * Callees:
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

void *LogFwInitialize()
{
  dword_140EF0270 |= 0x80u;
  qword_140EEFD68 = 0LL;
  qword_140EEFD90 = 0LL;
  qword_140EEFDC0 = 0LL;
  dword_140EEFDB4 = 0;
  qword_140EEFDD0 = 0LL;
  qword_140EEFDA8 = 0LL;
  qword_140EEFDE8 = 0LL;
  qword_140EEFDC8 = 0LL;
  qword_140EEFD50 = 0LL;
  qword_140EEFDE0 = 0LL;
  qword_140EEFDD8 = 0LL;
  qword_140EEFD80 = 0LL;
  qword_140EEFD70 = 0LL;
  qword_140EEFD78 = 0LL;
  qword_140EEFD98 = 0LL;
  dword_140EEFD60 = 0;
  dword_140EEFD58 = 0;
  dword_140EEFDB8 = 0;
  dword_140EEFD88 = 0;
  dword_140EEFDB0 = 0;
  dword_140EEFD5C = 0;
  qword_140E0F158 = 1LL;
  qword_140E0F148 = 0x7FFFFFFFFFFFFFFFLL;
  qword_140E0F150 = 0x7FFFFFFFFFFFFFFFLL;
  return memset_0(&qword_140E65160, 0, 0x48uLL);
}
