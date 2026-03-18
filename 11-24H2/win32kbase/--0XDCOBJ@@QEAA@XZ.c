/*
 * XREFs of ??0XDCOBJ@@QEAA@XZ @ 0x1400B8540
 * Callers:
 *     ?vCleanupDCs@@YAXK@Z @ 0x1400150B4 (-vCleanupDCs@@YAXK@Z.c)
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x14001D9D8 (--0APIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??0DLODCOBJ@@QEAA@XZ @ 0x140038274 (--0DLODCOBJ@@QEAA@XZ.c)
 *     EngUpdateDeviceSurface @ 0x140174F70 (EngUpdateDeviceSurface.c)
 *     ??0DCMEMOBJ@@QEAA@PEAUHDEV__@@KHH@Z @ 0x140175318 (--0DCMEMOBJ@@QEAA@PEAUHDEV__@@KHH@Z.c)
 * Callees:
 *     <none>
 */

XDCOBJ *__fastcall XDCOBJ::XDCOBJ(XDCOBJ *this)
{
  __int64 v2; // rdx
  XDCOBJ *result; // rax

  v2 = *(_QWORD *)(W32GetSessionState(this) + 88);
  *((_QWORD *)this + 3) = 0LL;
  *(_QWORD *)this = 0LL;
  *((_DWORD *)this + 2) = 0;
  *((_DWORD *)this + 8) = 0;
  result = this;
  *((_QWORD *)this + 2) = v2;
  return result;
}
