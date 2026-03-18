/*
 * XREFs of ?GetBufferSize@FxRequestOutputBuffer@@UEAA_KXZ @ 0x140068700
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall FxRequestOutputBuffer::GetBufferSize(FxRequestOutputBuffer *this)
{
  return *(unsigned int *)(*((_QWORD *)this[-8].m_Buffer + 23) + 8LL);
}
