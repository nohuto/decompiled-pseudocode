/*
 * XREFs of ??0REMOTE_VSYNC@@QEAA@XZ @ 0x1401EE044
 * Callers:
 *     ??0DXGGLOBAL@@AEAA@XZ @ 0x1401CCD80 (--0DXGGLOBAL@@AEAA@XZ.c)
 * Callees:
 *     <none>
 */

REMOTE_VSYNC *__fastcall REMOTE_VSYNC::REMOTE_VSYNC(REMOTE_VSYNC *this)
{
  REMOTE_VSYNC *result; // rax

  *((_DWORD *)this + 12) = -1;
  *(_WORD *)this = 0;
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_DWORD *)this + 10) = 0;
  result = this;
  *((_DWORD *)this + 11) = 75;
  return result;
}
