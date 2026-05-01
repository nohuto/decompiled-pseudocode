/*
 * XREFs of ?HitTestRow@GridLayout@@QEAA_NAEBUCPoint@Geometry@@PEA_K@Z @ 0x1804D6CDC
 * Callers:
 *     ?MoveVirtualCursor@CSwitchItemGrid@@UEAAJAEBUCPoint@Geometry@@@Z @ 0x1804C88C0 (-MoveVirtualCursor@CSwitchItemGrid@@UEAAJAEBUCPoint@Geometry@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 */

char __fastcall GridLayout::HitTestRow(GridLayout *this, const struct Geometry::CPoint *a2, unsigned __int64 *a3)
{
  unsigned int v3; // ebx
  int v7; // r8d
  struct tagRECT rc; // [rsp+20h] [rbp-38h] BYREF

  v3 = 0;
  *a3 = 0LL;
  while ( (unsigned __int64)v3 < *((_QWORD *)this + 7) )
  {
    v7 = *((_DWORD *)this + 1);
    rc = *(struct tagRECT *)(56LL * v3 + *((_QWORD *)this + 6) + 8);
    InflateRect(&rc, 0, v7);
    if ( *((_DWORD *)a2 + 1) - rc.top <= (unsigned int)(rc.bottom - rc.top) )
    {
      *a3 = v3;
      return 1;
    }
    ++v3;
  }
  return 0;
}
