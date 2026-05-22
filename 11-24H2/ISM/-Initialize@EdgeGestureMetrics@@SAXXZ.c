/*
 * XREFs of ?Initialize@EdgeGestureMetrics@@SAXXZ @ 0x1801AAB70
 * Callers:
 *     ?Create@EdgyLegacyProcessor@@SAJPEAPEAV1@@Z @ 0x1801A8680 (-Create@EdgyLegacyProcessor@@SAJPEAPEAV1@@Z.c)
 *     ?GetHitTestSpanHimetric@EdgeGestureMetrics@@SA?AUD2D_VECTOR_2F@@XZ @ 0x1801AAB44 (-GetHitTestSpanHimetric@EdgeGestureMetrics@@SA-AUD2D_VECTOR_2F@@XZ.c)
 *     ?ConfigureRecognizer@EdgyProcessorTarget@@AEAAJXZ @ 0x1801AAF48 (-ConfigureRecognizer@EdgyProcessorTarget@@AEAAJXZ.c)
 *     ?OnTouchSessionBegin@EdgyProcessorTarget@@AEAAJAEBUTouchInfo@@@Z @ 0x1801ABD40 (-OnTouchSessionBegin@EdgyProcessorTarget@@AEAAJAEBUTouchInfo@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000F254 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180058904 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?Create@RegistryWatcher@@SAJPEAUHKEY__@@PEBGPEAXP6AX20@ZPEAPEAV1@@Z @ 0x18008F35C (-Create@RegistryWatcher@@SAJPEAUHKEY__@@PEBGPEAXP6AX20@ZPEAPEAV1@@Z.c)
 *     ??$make_shared@VEdgeGestureMetrics@@$$V@std@@YA?AV?$shared_ptr@VEdgeGestureMetrics@@@0@XZ @ 0x1801AA974 (--$make_shared@VEdgeGestureMetrics@@$$V@std@@YA-AV-$shared_ptr@VEdgeGestureMetrics@@@0@XZ.c)
 *     ??4?$shared_ptr@VEdgeGestureMetrics@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1801AA9D0 (--4-$shared_ptr@VEdgeGestureMetrics@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 */

void EdgeGestureMetrics::Initialize(void)
{
  _QWORD *v0; // rax
  __int64 v1; // rcx
  struct RegistryWatcher **v2; // rbx
  HKEY v3; // rcx
  struct RegistryWatcher **v4; // rax
  __int64 v5; // [rsp+30h] [rbp-18h] BYREF
  std::_Ref_count_base *v6; // [rsp+38h] [rbp-10h]

  if ( !EdgeGestureMetrics::s_edgeGestureMetrics )
  {
    v0 = std::make_shared<EdgeGestureMetrics,>(&v5);
    std::shared_ptr<EdgeGestureMetrics>::operator=(v1, (__int64)v0);
    if ( v6 )
      std::_Ref_count_base::_Decref(v6);
    v2 = EdgeGestureMetrics::s_edgeGestureMetrics;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)EdgeGestureMetrics::s_edgeGestureMetrics);
    if ( (int)RegistryWatcher::Create(
                v3,
                L"Software\\Microsoft\\Input\\Settings\\EdgeGestureMetrics",
                (HKEY)EdgeGestureMetrics::s_edgeGestureMetrics,
                (void (*)(void *, HKEY))lambda_84e14b76e88ec9f17bb7265a201c38f3_::_lambda_invoker_cdecl_,
                v2) < 0 )
    {
      v4 = EdgeGestureMetrics::s_edgeGestureMetrics;
      *((float *)EdgeGestureMetrics::s_edgeGestureMetrics + 3) = FLOAT_550_0;
      *((_DWORD *)v4 + 2) = 1141473280;
      *((_WORD *)EdgeGestureMetrics::s_edgeGestureMetrics + 8) = 35;
      *((_WORD *)EdgeGestureMetrics::s_edgeGestureMetrics + 9) = 250;
    }
  }
}
