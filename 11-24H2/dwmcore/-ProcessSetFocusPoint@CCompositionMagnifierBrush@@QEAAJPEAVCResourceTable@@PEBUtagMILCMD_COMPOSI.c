/*
 * XREFs of ?ProcessSetFocusPoint@CCompositionMagnifierBrush@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMPOSITIONMAGNIFIERBRUSH_SETFOCUSPOINT@@@Z @ 0x180297200
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801114F0 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?NotifyOnChanged@CBrush@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18007F680 (-NotifyOnChanged@CBrush@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ??9@YA_NAEBVCMilPoint2F@@0@Z @ 0x18022B470 (--9@YA_NAEBVCMilPoint2F@@0@Z.c)
 */

__int64 __fastcall CCompositionMagnifierBrush::ProcessSetFocusPoint(
        CCompositionMagnifierBrush *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_COMPOSITIONMAGNIFIERBRUSH_SETFOCUSPOINT *a3)
{
  char v3; // r11
  char *v4; // r9
  char *v5; // r8
  CCompositionMagnifierBrush *v6; // r10
  int v7; // xmm1_4
  float v8; // xmm0_4
  int v9; // xmm1_4
  float v11; // [rsp+30h] [rbp+8h] BYREF
  int v12; // [rsp+34h] [rbp+Ch]
  struct CResourceTable *v13; // [rsp+38h] [rbp+10h] BYREF

  v13 = a2;
  v3 = 0;
  v4 = (char *)a3 + 8;
  v5 = (char *)this + 192;
  v6 = this;
  if ( !*((_BYTE *)this + 200)
    || (v7 = *((_DWORD *)v4 + 1),
        LODWORD(v13) = *(_DWORD *)v4,
        v8 = *(float *)v5,
        HIDWORD(v13) = v7,
        v9 = *((_DWORD *)this + 49),
        v11 = v8,
        v12 = v9,
        operator!=(&v11, (float *)&v13)) )
  {
    *(_QWORD *)v5 = *(_QWORD *)v4;
    if ( v5[8] == v3 )
      v5[8] = 1;
    CBrush::NotifyOnChanged((__int64)v6, 6u, (__int64)v6);
  }
  return 0LL;
}
