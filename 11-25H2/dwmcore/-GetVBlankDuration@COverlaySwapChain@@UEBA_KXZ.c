/*
 * XREFs of ?GetVBlankDuration@COverlaySwapChain@@UEBA_KXZ @ 0x1801E0920
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall COverlaySwapChain::GetVBlankDuration(COverlaySwapChain *this)
{
  unsigned __int64 result; // rax

  result = *((_QWORD *)this + 18);
  if ( !result || result == 0xFFFFFFFF )
    return g_qpcFrequency.QuadPart * (unsigned __int64)*((unsigned int *)this + 27) / *((unsigned int *)this + 26);
  return result;
}
