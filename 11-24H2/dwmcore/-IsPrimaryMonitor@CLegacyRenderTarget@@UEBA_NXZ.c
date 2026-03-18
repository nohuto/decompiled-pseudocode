/*
 * XREFs of ?IsPrimaryMonitor@CLegacyRenderTarget@@UEBA_NXZ @ 0x1801D3300
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CLegacyRenderTarget::IsPrimaryMonitor(CLegacyRenderTarget *this)
{
  return *((float *)this + 7588) == 0.0 && *((float *)this + 7589) == 0.0 && *((_BYTE *)this + 33354);
}
