/*
 * XREFs of ?IsPrimaryMonitor@CLegacyRenderTarget@@UEBA_NXZ @ 0x1801E0580
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CLegacyRenderTarget::IsPrimaryMonitor(CLegacyRenderTarget *this)
{
  return *((float *)this + 7684) == 0.0 && *((float *)this + 7685) == 0.0 && *((_BYTE *)this + 33738);
}
