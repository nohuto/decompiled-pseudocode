/*
 * XREFs of _DDAScreenCapture::CreateInstance_::_1_::dtor$1 @ 0x1806E7724
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void *__fastcall DDAScreenCapture::CreateInstance_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return std::unique_ptr<DDAScreenCapture>::~unique_ptr<DDAScreenCapture>((DDAScreenCapture **)(a2 + 64), a2);
}
