/*
 * XREFs of SHFusionUninitialize @ 0x1801BEB94
 * Callers:
 *     DllMain @ 0x1801CF0E4 (DllMain.c)
 * Callees:
 *     <none>
 */

__int64 SHFusionUninitialize()
{
  __int64 result; // rax

  if ( g_hActCtx != (HANDLE)-1LL )
  {
    ReleaseActCtx(g_hActCtx);
    g_hActCtx = (HANDLE)-1LL;
  }
  result = (__int64)qword_18098D510;
  if ( qword_18098D510 )
    result = -1LL;
  qword_18098D510 = (HMODULE)result;
  return result;
}
