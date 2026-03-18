/*
 * XREFs of ??0InputQueueInfo@CInputSinkStruct@@QEAA@XZ @ 0x180210980
 * Callers:
 *     ??0CInputSinkStruct@@QEAA@XZ @ 0x18009658C (--0CInputSinkStruct@@QEAA@XZ.c)
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
