/*
 * XREFs of ??0RAPID_HPD_MANAGER@@QEAA@XZ @ 0x1400780FC
 * Callers:
 *     ??0DXGGLOBAL@@AEAA@XZ @ 0x1401D2020 (--0DXGGLOBAL@@AEAA@XZ.c)
 * Callees:
 *     <none>
 */

RAPID_HPD_MANAGER *__fastcall RAPID_HPD_MANAGER::RAPID_HPD_MANAGER(RAPID_HPD_MANAGER *this)
{
  RAPID_HPD_MANAGER *result; // rax

  *((_DWORD *)this + 5) = 1;
  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  *((_DWORD *)this + 4) = 0;
  *((_DWORD *)this + 6) = 5000;
  *((_DWORD *)this + 7) = 15000;
  *(_OWORD *)((char *)this + 36) = 0LL;
  *((_DWORD *)this + 13) = 0;
  *((_QWORD *)this + 7) = 0LL;
  *((_DWORD *)this + 16) = 0;
  *((_QWORD *)this + 9) = 0LL;
  result = this;
  *((_QWORD *)this + 10) = 0LL;
  *((_DWORD *)this + 22) = 0;
  *((_BYTE *)this + 32) = 1;
  return result;
}
