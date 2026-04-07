/*
 * XREFs of ?FreezeDesktopThumbnail@CDesktopThumbnail@@SAJPEAVCWindowData@@_N@Z @ 0x1800BBE74
 * Callers:
 *     ?FreezeRepresentationChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x1800EF9A0 (-FreezeRepresentationChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180026560 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SetDesktopId@CDesktopThumbnailBase@@QEAAJ_K@Z @ 0x180098AB8 (-SetDesktopId@CDesktopThumbnailBase@@QEAAJ_K@Z.c)
 *     ?FreezeDesktopThumbnail@CPerMonitorDesktopThumbnail@@QEAAJ_N@Z @ 0x1800BBFA4 (-FreezeDesktopThumbnail@CPerMonitorDesktopThumbnail@@QEAAJ_N@Z.c)
 *     ?GetDesktopThumbnail@CDesktopThumbnail@@SAJPEAPEAV1@@Z @ 0x1800BC0C8 (-GetDesktopThumbnail@CDesktopThumbnail@@SAJPEAPEAV1@@Z.c)
 *     ?GetPerMonitorDesktopThumbnail@CDesktopThumbnail@@QEAAJUtagRECT@@PEAPEAVCPerMonitorDesktopThumbnail@@@Z @ 0x1800BC154 (-GetPerMonitorDesktopThumbnail@CDesktopThumbnail@@QEAAJUtagRECT@@PEAPEAVCPerMonitorDesktopThumbn.c)
 */

__int64 __fastcall CDesktopThumbnail::FreezeDesktopThumbnail(struct CWindowData *a1, bool a2)
{
  CBaseObject *v3; // rdi
  int DesktopThumbnail; // eax
  unsigned int v6; // ebx
  int v7; // eax
  int PerMonitorDesktopThumbnail; // eax
  int v9; // eax
  RECT rc; // [rsp+30h] [rbp-38h] BYREF
  CDesktopThumbnail *v12; // [rsp+80h] [rbp+18h] BYREF
  CBaseObject *v13; // [rsp+88h] [rbp+20h] BYREF

  v12 = 0LL;
  v3 = 0LL;
  v13 = 0LL;
  DesktopThumbnail = CDesktopThumbnail::GetDesktopThumbnail(&v12);
  v6 = DesktopThumbnail;
  if ( DesktopThumbnail < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, DesktopThumbnail, 0xF1u, 0LL);
  }
  else
  {
    v7 = CDesktopThumbnailBase::SetDesktopId(v12, *((_QWORD *)a1 + 17));
    v6 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v7, 0xF2u, 0LL);
      return v6;
    }
    rc = 0LL;
    PerMonitorDesktopThumbnail = CDesktopThumbnail::GetPerMonitorDesktopThumbnail(v12, &rc, &v13);
    v6 = PerMonitorDesktopThumbnail;
    if ( PerMonitorDesktopThumbnail < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, PerMonitorDesktopThumbnail, 0xF4u, 0LL);
      v3 = v13;
    }
    else
    {
      v3 = v13;
      v9 = CPerMonitorDesktopThumbnail::FreezeDesktopThumbnail(v13, a2);
      v6 = v9;
      if ( v9 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v9, 0xF5u, 0LL);
    }
  }
  if ( v3 )
    CBaseObject::Release(v3);
  return v6;
}
