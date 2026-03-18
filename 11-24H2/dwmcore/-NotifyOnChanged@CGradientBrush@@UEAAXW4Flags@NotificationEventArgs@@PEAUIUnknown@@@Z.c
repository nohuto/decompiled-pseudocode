/*
 * XREFs of ?NotifyOnChanged@CGradientBrush@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18008DA70
 * Callers:
 *     ?SetTexcoordProperty@CRadialGradientBrush@@AEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x18008CDD4 (-SetTexcoordProperty@CRadialGradientBrush@@AEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z.c)
 *     ?SetOriginOffsetProperty@CRadialGradientBrush@@AEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x1802A319C (-SetOriginOffsetProperty@CRadialGradientBrush@@AEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z.c)
 * Callees:
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18007FB20 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?UpdateStop@CGradientBrush@@AEAAXPEBUIUnknown@@@Z @ 0x18008DB44 (-UpdateStop@CGradientBrush@@AEAAXPEBUIUnknown@@@Z.c)
 *     ?AdjustNotification@CBrushRenderingGraph@@QEBAXPEAW4Flags@NotificationEventArgs@@PEBVCBrush@@@Z @ 0x18008DBC4 (-AdjustNotification@CBrushRenderingGraph@@QEBAXPEAW4Flags@NotificationEventArgs@@PEBVCBrush@@@Z.c)
 *     ?InternalRelease@?$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ @ 0x18008F428 (-InternalRelease@-$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x18008FCF0 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 */

void __fastcall CGradientBrush::NotifyOnChanged(__int64 a1, unsigned int a2, const struct IUnknown *a3)
{
  unsigned int v4; // edi
  bool v6; // zf
  __int64 v7; // rsi
  unsigned int v8; // [rsp+38h] [rbp+10h] BYREF

  v4 = a2;
  if ( a2 == 10 )
  {
    if ( a3 )
      CGradientBrush::UpdateStop((CGradientBrush *)a1, a3);
    v4 = 6;
  }
  v6 = *(_QWORD *)(a1 + 88) == 0LL;
  v8 = v4;
  if ( v6 )
  {
    if ( !a3 || a3 != (const struct IUnknown *)a1 )
      *(_QWORD *)(a1 + 88) = a3;
    v7 = *(_QWORD *)(a1 + 80);
    if ( v7 )
    {
      if ( v4 == 14 )
      {
        *(_DWORD *)(v7 + 40) = 0;
        DynArrayImpl<0>::ShrinkToSize(v7 + 16, 24LL);
        *(_BYTE *)(v7 + 200) = 1;
        Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease(a1 + 80);
      }
      else if ( v4 == 1 )
      {
        CBrushRenderingGraph::AdjustNotification(
          *(CBrushRenderingGraph **)(a1 + 80),
          (enum NotificationEventArgs::Flags *)&v8,
          (const struct CBrush *)a1);
        v4 = v8;
      }
    }
    CResource::NotifyOnChanged((_DWORD *)a1, v4, a1);
    *(_QWORD *)(a1 + 88) = 0LL;
  }
}
