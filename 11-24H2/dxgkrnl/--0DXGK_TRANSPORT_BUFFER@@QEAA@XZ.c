/*
 * XREFs of ??0DXGK_TRANSPORT_BUFFER@@QEAA@XZ @ 0x14007ACF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

DXGK_TRANSPORT_BUFFER *__fastcall DXGK_TRANSPORT_BUFFER::DXGK_TRANSPORT_BUFFER(DXGK_TRANSPORT_BUFFER *this)
{
  *(_DWORD *)this = 0;
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_BYTE *)this + 40) = 0;
  return this;
}
