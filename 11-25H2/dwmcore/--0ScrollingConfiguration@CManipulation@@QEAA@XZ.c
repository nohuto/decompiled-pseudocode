/*
 * XREFs of ??0ScrollingConfiguration@CManipulation@@QEAA@XZ @ 0x1802260A0
 * Callers:
 *     ??0CManipulation@@IEAA@PEAVCComposition@@@Z @ 0x180214460 (--0CManipulation@@IEAA@PEAVCComposition@@@Z.c)
 * Callees:
 *     <none>
 */

CManipulation::ScrollingConfiguration *__fastcall CManipulation::ScrollingConfiguration::ScrollingConfiguration(
        CManipulation::ScrollingConfiguration *this)
{
  CManipulation::ScrollingConfiguration *result; // rax

  *(_BYTE *)this |= 1u;
  result = this;
  *((_DWORD *)this + 1) = 0;
  return result;
}
