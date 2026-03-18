/*
 * XREFs of ??0InputQueueInfo@CInputSinkStruct@@QEAA@XZ @ 0x18021C390
 * Callers:
 *     ??0CInputSinkStruct@@QEAA@XZ @ 0x18013C2D8 (--0CInputSinkStruct@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

CInputSinkStruct::InputQueueInfo *__fastcall CInputSinkStruct::InputQueueInfo::InputQueueInfo(
        CInputSinkStruct::InputQueueInfo *this)
{
  CInputSinkStruct::InputQueueInfo *result; // rax

  *(_DWORD *)this = 0;
  result = this;
  *((_QWORD *)this + 1) = 0LL;
  return result;
}
