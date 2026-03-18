/*
 * XREFs of LogFwInitialize @ 0x140BB2E70
 * Callers:
 *     BgpFwLibraryInitialize @ 0x140BB5400 (BgpFwLibraryInitialize.c)
 * Callees:
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

void *LogFwInitialize()
{
  dword_140EF0050 |= 0x80u;
  qword_140EEFB68 = 0LL;
  qword_140EEFBA0 = 0LL;
  qword_140EEFB28 = 0LL;
  dword_140EEFB10 = 0;
  qword_140EEFB30 = 0LL;
  qword_140EEFBA8 = 0LL;
  qword_140EEFB48 = 0LL;
  qword_140EEFB20 = 0LL;
  qword_140EEFB58 = 0LL;
  qword_140EEFB38 = 0LL;
  qword_140EEFB40 = 0LL;
  qword_140EEFB88 = 0LL;
  qword_140EEFB70 = 0LL;
  qword_140EEFB78 = 0LL;
  qword_140EEFB90 = 0LL;
  dword_140EEFB60 = 0;
  dword_140EEFB50 = 0;
  dword_140EEFB18 = 0;
  dword_140EEFB80 = 0;
  dword_140EEFB14 = 0;
  dword_140EEFB64 = 0;
  qword_140E0F080 = 1LL;
  qword_140E0F088 = 0x7FFFFFFFFFFFFFFFLL;
  qword_140E0F078 = 0x7FFFFFFFFFFFFFFFLL;
  return memset_0(&qword_140E64FE0, 0, 0x48uLL);
}
