/*
 * XREFs of ?GetPipe@CStreamInstance@@UEAAPEAVCPipeInstance@@XZ @ 0x14005D1F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct CPipeInstance *__fastcall CStreamInstance::GetPipe(CStreamInstance *this)
{
  return (struct CPipeInstance *)*((_QWORD *)this + 10);
}
