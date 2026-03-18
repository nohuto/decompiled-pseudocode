/*
 * XREFs of ?GrepCreateDefaultBitmap@@YAPEAUHBITMAP__@@XZ @ 0x14000C4A0
 * Callers:
 *     <none>
 * Callees:
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14000C51C (--0SURFREF@@QEAA@PEAUHSURF__@@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??1SURFREF@@QEAA@XZ @ 0x140036A58 (--1SURFREF@@QEAA@XZ.c)
 *     GreCreateBitmap @ 0x140039290 (GreCreateBitmap.c)
 */

HSURF GrepCreateDefaultBitmap(void)
{
  HSURF v0; // rbx
  HSURF result; // rax
  HSURF v2; // rdi
  __int64 SessionState; // rax
  _BYTE v4[32]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v5; // [rsp+50h] [rbp-18h]

  v0 = 0LL;
  result = (HSURF)GreCreateBitmap(1, 1, 1, 1, 0LL);
  v2 = result;
  if ( result )
  {
    SessionState = W32GetSessionState();
    SURFREF::SURFREF((SURFREF *)v4, v2, *(struct Gre::Base::SESSION_GLOBALS **)(SessionState + 88));
    if ( v5 )
    {
      *(_WORD *)(v5 + 14) |= 0x40u;
      v0 = v2;
    }
    SURFREF::~SURFREF((SURFREF *)v4);
    return v0;
  }
  return result;
}
