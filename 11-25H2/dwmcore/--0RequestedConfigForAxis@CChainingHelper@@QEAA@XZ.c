/*
 * XREFs of ??0RequestedConfigForAxis@CChainingHelper@@QEAA@XZ @ 0x18022BEE0
 * Callers:
 *     ??0CChainingHelper@@QEAA@PEAVCInteraction@@@Z @ 0x1801B77C0 (--0CChainingHelper@@QEAA@PEAVCInteraction@@@Z.c)
 * Callees:
 *     <none>
 */

CChainingHelper::RequestedConfigForAxis *__fastcall CChainingHelper::RequestedConfigForAxis::RequestedConfigForAxis(
        CChainingHelper::RequestedConfigForAxis *this)
{
  CChainingHelper::RequestedConfigForAxis *result; // rax

  *(_BYTE *)this &= 0xF8u;
  result = this;
  *((_DWORD *)this + 1) = 0;
  *((_DWORD *)this + 2) = 0;
  return result;
}
