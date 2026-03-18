/*
 * XREFs of ??0XFERDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x140325C78
 * Callers:
 *     ?GreExtEscape@@YAHPEAUHDC__@@HHPEADH1W4EntryPoint@RFONTOBJ@@@Z @ 0x1400C2548 (-GreExtEscape@@YAHPEAUHDC__@@HHPEADH1W4EntryPoint@RFONTOBJ@@@Z.c)
 * Callees:
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x14001FBC0 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?vUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x1401541FC (-vUnlockNoNullSet@XDCOBJ@@QEAAXXZ.c)
 *     ??0DCOBJ@@QEAA@XZ @ 0x140325B90 (--0DCOBJ@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

XFERDCOBJ *__fastcall XFERDCOBJ::XFERDCOBJ(XFERDCOBJ *this, HDC a2)
{
  int v4; // eax
  _DWORD v6[4]; // [rsp+20h] [rbp-28h] BYREF

  DCOBJ::DCOBJ(this);
  *((_DWORD *)this + 26) = 0;
  *((_DWORD *)this + 8) = 3;
  v4 = PushThreadGuardedObject((char *)this + 72, this, XFERDCOBJ::ThreadCleanup);
  *((_DWORD *)this + 26) = v4;
  if ( v4 )
    XDCOBJ::vLock(this, a2);
  if ( *(_QWORD *)this && *(_WORD *)(*(_QWORD *)this + 12LL) != 1 )
  {
    v6[2] = 0;
    v6[1] = 1;
    v6[0] = 51368611;
    RtlLogUnexpectedCodepath(v6);
    XDCOBJ::vUnlockNoNullSet(this);
    *(_QWORD *)this = 0LL;
    PopThreadGuardedObject((char *)this + 72);
    *((_DWORD *)this + 26) = 0;
  }
  return this;
}
