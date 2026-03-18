/*
 * XREFs of OffsetWindow @ 0x140030E80
 * Callers:
 *     OffsetChildren @ 0x140030CE0 (OffsetChildren.c)
 *     ?UpdateWindowPositionsForDpiBoundaryChange@@YAXPEAUtagWLDBI@@@Z @ 0x14008D624 (-UpdateWindowPositionsForDpiBoundaryChange@@YAXPEAUtagWLDBI@@@Z.c)
 * Callees:
 *     ?GetExplicitClipRgn@tagWND@@QEBAPEAUHRGN__@@XZ @ 0x140031010 (-GetExplicitClipRgn@tagWND@@QEBAPEAUHRGN__@@XZ.c)
 *     ?IsThreadDesktopComposed@@YAHPEBUtagTHREADINFO@@@Z @ 0x140031030 (-IsThreadDesktopComposed@@YAHPEBUtagTHREADINFO@@@Z.c)
 *     ??$GetProp@VCVisRgnTrackerProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCVisRgnTrackerProp@@@Z @ 0x140031054 (--$GetProp@VCVisRgnTrackerProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCVisRgnTrackerProp@@@Z.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     DwmChildRectChange @ 0x140048630 (DwmChildRectChange.c)
 *     UpdateSprite @ 0x1400CB4D8 (UpdateSprite.c)
 *     FindSpb @ 0x1402AF418 (FindSpb.c)
 */

__int64 __fastcall OffsetWindow(tagWND *this, __int64 a2, __int64 a3)
{
  unsigned int v4; // edi
  unsigned int v5; // esi
  unsigned __int64 v6; // rcx
  HRGN ExplicitClipRgn; // rax
  __int64 result; // rax
  const struct tagTHREADINFO *v9; // rax
  __int64 v10; // rcx
  __int64 UserSessionState; // rax
  _DWORD *Spb; // rax
  struct tagPOINT v13; // [rsp+70h] [rbp+8h] BYREF

  v4 = a3;
  v5 = a2;
  *(_DWORD *)(*((_QWORD *)this + 5) + 88LL) += a2;
  *(_DWORD *)(*((_QWORD *)this + 5) + 96LL) += a2;
  *(_DWORD *)(*((_QWORD *)this + 5) + 92LL) += a3;
  *(_DWORD *)(*((_QWORD *)this + 5) + 100LL) += a3;
  *(_DWORD *)(*((_QWORD *)this + 5) + 104LL) += a2;
  *(_DWORD *)(*((_QWORD *)this + 5) + 112LL) += a2;
  *(_DWORD *)(*((_QWORD *)this + 5) + 108LL) += a3;
  *(_DWORD *)(*((_QWORD *)this + 5) + 116LL) += a3;
  v6 = *(_QWORD *)(*((_QWORD *)this + 5) + 136LL);
  if ( v6 > 1 )
    GreOffsetRgn(v6, a2, a3);
  ExplicitClipRgn = tagWND::GetExplicitClipRgn(this);
  if ( ExplicitClipRgn )
    GreOffsetRgn(ExplicitClipRgn, v5, v4);
  if ( *(char *)(*((_QWORD *)this + 5) + 16LL) < 0 )
  {
    Spb = (_DWORD *)FindSpb(this);
    Spb[6] += v5;
    Spb[8] += v5;
    Spb[9] += v4;
    Spb[7] += v4;
  }
  result = IsWindowDesktopComposed(this);
  if ( (_DWORD)result )
  {
    v9 = PtiCurrent();
    result = IsThreadDesktopComposed(v9);
    if ( (_DWORD)result )
    {
      v13 = 0LL;
      result = CWindowProp::GetProp<CVisRgnTrackerProp>(this, &v13);
      if ( (_DWORD)result )
        result = DwmChildRectChange(this);
    }
  }
  v10 = *((_QWORD *)this + 5);
  if ( (*(_BYTE *)(v10 + 26) & 8) != 0 )
  {
    v13 = *(struct tagPOINT *)(v10 + 88);
    UserSessionState = W32GetUserSessionState();
    return UpdateSprite(
             *(HDEV *)(*(_QWORD *)(UserSessionState + 57008) + 48LL),
             this,
             &v13,
             0LL,
             0LL,
             0LL,
             0,
             0LL,
             0,
             0LL);
  }
  return result;
}
