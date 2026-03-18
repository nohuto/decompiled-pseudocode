/*
 * XREFs of UpdateSprite @ 0x1400CB4D8
 * Callers:
 *     UnsetLayeredWindow @ 0x14002FF88 (UnsetLayeredWindow.c)
 *     OffsetWindow @ 0x140030E80 (OffsetWindow.c)
 *     xxxCompositedPaint @ 0x140032604 (xxxCompositedPaint.c)
 *     zzzUpdateLayeredWindow @ 0x140035DCC (zzzUpdateLayeredWindow.c)
 *     UpdateSpriteArea @ 0x14003A40C (UpdateSpriteArea.c)
 *     _SetLayeredWindowAttributes @ 0x14015DCB4 (_SetLayeredWindowAttributes.c)
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x14022D690 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 * Callees:
 *     ??0OPTAPIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x140018F7C (--0OPTAPIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1OPTAPIDCOBJ@@QEAA@XZ @ 0x14001980C (--1OPTAPIDCOBJ@@QEAA@XZ.c)
 *     IsWindowContentProtected @ 0x1400631DC (IsWindowContentProtected.c)
 *     ?InitializeMiniWinInfo@@YAXQEBUtagWND@@PEAUtagMINIWINDOWINFO@@@Z @ 0x1400CB71C (-InitializeMiniWinInfo@@YAXQEBUtagWND@@PEAUtagMINIWINDOWINFO@@@Z.c)
 *     ?GrepUpdateSprite@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXAEAVOPTAPIDCOBJ@@PEAUtagPOINT@@PEAUtagSIZE@@34KPEAU_BLENDFUNCTION@@KPEAUtagRECT@@PEAUtagMINIWINDOWINFO@@HHK@Z @ 0x1400CBAB4 (-GrepUpdateSprite@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXAEAVOPTAPIDCOBJ@@PEAUtagPOINT@@PEAUtagSIZE@@34.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 *     memset_0 @ 0x140340780 (memset_0.c)
 */

__int64 __fastcall UpdateSprite(
        HDEV a1,
        struct tagWND *a2,
        __int64 a3,
        HDC a4,
        struct tagPOINT *a5,
        struct tagSIZE *a6,
        HDC a7,
        struct tagPOINT *a8,
        unsigned int a9,
        struct _BLENDFUNCTION *a10,
        unsigned int a11,
        struct tagRECT *a12)
{
  unsigned int v15; // esi
  __int64 v16; // rdx
  int v17; // r14d
  HWND v18; // rbx
  int updated; // ebx
  OPTAPIDCOBJ *v20; // rcx
  _BYTE v22[128]; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v23[128]; // [rsp+120h] [rbp+20h] BYREF
  _BYTE v24[128]; // [rsp+1A0h] [rbp+A0h] BYREF
  _BYTE v25[144]; // [rsp+220h] [rbp+120h] BYREF

  memset_0(v25, 0, 0x88uLL);
  InitializeMiniWinInfo(a2, (struct tagMINIWINDOWINFO *)v25);
  v15 = 0;
  if ( (unsigned int)IsWindowContentProtected((__int64)a2, v16) )
    v15 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 2) + 464LL) + 56LL);
  v17 = IsWindowDesktopComposed(a2);
  v18 = *(HWND *)a2;
  if ( a4 == a7 && a4 )
  {
    OPTAPIDCOBJ::OPTAPIDCOBJ((OPTAPIDCOBJ *)v22, a4);
    updated = GrepUpdateSprite(
                a1,
                v18,
                0LL,
                (struct OPTAPIDCOBJ *)v22,
                a5,
                a6,
                (struct OPTAPIDCOBJ *)v22,
                a8,
                a9,
                a10,
                a11,
                a12,
                (struct tagMINIWINDOWINFO *)v25,
                v17,
                0,
                v15);
    v20 = (OPTAPIDCOBJ *)v22;
  }
  else
  {
    OPTAPIDCOBJ::OPTAPIDCOBJ((OPTAPIDCOBJ *)v24, a4);
    OPTAPIDCOBJ::OPTAPIDCOBJ((OPTAPIDCOBJ *)v23, a7);
    updated = GrepUpdateSprite(
                a1,
                v18,
                0LL,
                (struct OPTAPIDCOBJ *)v24,
                a5,
                a6,
                (struct OPTAPIDCOBJ *)v23,
                a8,
                a9,
                a10,
                a11,
                a12,
                (struct tagMINIWINDOWINFO *)v25,
                v17,
                0,
                v15);
    OPTAPIDCOBJ::~OPTAPIDCOBJ((OPTAPIDCOBJ *)v23);
    v20 = (OPTAPIDCOBJ *)v24;
  }
  OPTAPIDCOBJ::~OPTAPIDCOBJ(v20);
  return updated == 0 ? 0x803F0001 : 0;
}
