/*
 * XREFs of ?SetMonitorRegion@@YAXPEAUtagMONITOR@@PEAUHRGN__@@1@Z @ 0x140010DA0
 * Callers:
 *     ?ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z @ 0x14000F604 (-ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z.c)
 *     GetMonitorDC @ 0x14009B3A0 (GetMonitorDC.c)
 * Callees:
 *     GreDeleteObject @ 0x140010390 (GreDeleteObject.c)
 *     GreCombineRgn @ 0x140025D30 (GreCombineRgn.c)
 *     GreOffsetRgn @ 0x14002C0D0 (GreOffsetRgn.c)
 *     GreSetRectRgn @ 0x14002C480 (GreSetRectRgn.c)
 *     GetMonitorRect @ 0x140045308 (GetMonitorRect.c)
 *     CreateMonitorRegion @ 0x1400461D8 (CreateMonitorRegion.c)
 */

void __fastcall SetMonitorRegion(struct tagMONITOR *a1, HRGN a2, HRGN a3)
{
  HRGN MonitorRegion; // rsi
  struct REGION_CORE *v7; // [rsp+20h] [rbp-28h]
  _BYTE v8[24]; // [rsp+30h] [rbp-18h] BYREF

  MonitorRegion = (HRGN)CreateMonitorRegion();
  if ( (unsigned int)GreCombineRgn(a2, a3, MonitorRegion) )
  {
    GetMonitorRect(v8, a1);
    GreOffsetRgn(a2);
  }
  else
  {
    LODWORD(v7) = 0;
    GreSetRectRgn(a2, v7);
  }
  GreDeleteObject(MonitorRegion);
}
