/*
 * XREFs of ??0TemporaryConfiguration@@QEAA@XZ @ 0x1802061E0
 * Callers:
 *     ??0CInteractionProcessor@@QEAA@XZ @ 0x180191C90 (--0CInteractionProcessor@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

TemporaryConfiguration *__fastcall TemporaryConfiguration::TemporaryConfiguration(TemporaryConfiguration *this)
{
  TemporaryConfiguration *result; // rax

  *((_DWORD *)this + 2) = 0;
  result = this;
  *(_BYTE *)this = 0;
  *((_DWORD *)this + 1) = -805306369;
  return result;
}
