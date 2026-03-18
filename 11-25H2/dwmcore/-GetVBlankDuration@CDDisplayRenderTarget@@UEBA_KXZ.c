/*
 * XREFs of ?GetVBlankDuration@CDDisplayRenderTarget@@UEBA_KXZ @ 0x180223860
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall CDDisplayRenderTarget::GetVBlankDuration(CDDisplayRenderTarget *this)
{
  __int64 v1; // rdx
  unsigned __int64 result; // rax

  v1 = *((_QWORD *)this + 6);
  if ( !v1 )
    return 0LL;
  result = *(_QWORD *)(v1 + 168);
  if ( !result || result == 0xFFFFFFFF )
    return g_qpcFrequency.QuadPart * (unsigned __int64)*(unsigned int *)(v1 + 132) / *(unsigned int *)(v1 + 128);
  return result;
}
