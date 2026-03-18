/*
 * XREFs of ??0VIDPNTARGETINFO@@QEAA@XZ @ 0x14006D0A0
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1400A2000 (memset.c)
 */

VIDPNTARGETINFO *__fastcall VIDPNTARGETINFO::VIDPNTARGETINFO(VIDPNTARGETINFO *this)
{
  *(_DWORD *)this = -1;
  *((_DWORD *)this + 1) = 0;
  *((_QWORD *)this + 1) = 0LL;
  memset((char *)this + 16, 0, 0xE8uLL);
  return this;
}
