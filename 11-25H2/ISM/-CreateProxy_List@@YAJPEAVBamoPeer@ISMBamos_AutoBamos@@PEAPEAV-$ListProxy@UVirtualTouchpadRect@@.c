/*
 * XREFs of ?CreateProxy_List@@YAJPEAVBamoPeer@ISMBamos_AutoBamos@@PEAPEAV?$ListProxy@UVirtualTouchpadRect@@@2Lib@Bamo@Microsoft@@@Z @ 0x180138FCC
 * Callers:
 *     ?CreateList_VirtualTouchpadRect_Proxy@ISMBamos_AutoBamos@BamoImpl@Lib@Bamo@Microsoft@@YAXPEAVBaseBamoConnectionImpl@25@PEAVBamoPeer@1@PEAPEAVBamoProxy@45@@Z @ 0x1801144BC (-CreateList_VirtualTouchpadRect_Proxy@ISMBamos_AutoBamos@BamoImpl@Lib@Bamo@Microsoft@@YAXPEAVBas.c)
 * Callees:
 *     memset_0 @ 0x18009D3C8 (memset_0.c)
 *     ??2@YAPEAX_K@Z @ 0x18009D5CC (--2@YAPEAX_K@Z.c)
 */

__int64 __fastcall CreateProxy_List(__int64 a1, _QWORD *a2)
{
  _QWORD *v3; // rbx

  v3 = operator new(0x48uLL);
  memset_0(v3, 0, 0x48uLL);
  memset_0(v3, 0, 0x48uLL);
  *a2 = v3;
  *((_DWORD *)v3 + 6) = 0;
  v3[4] = 0LL;
  v3[2] = &Microsoft::Bamo::Lib::BamoImpl::ISMBamos_AutoBamos::BamoList_VirtualTouchpadRect_ProxyImpl::`vftable';
  v3[5] = 0LL;
  v3[6] = 0LL;
  v3[7] = 0LL;
  v3[8] = 0LL;
  *v3 = &TouchpadRectListProxy::`vftable'{for `Microsoft::Bamo::BamoProxy'};
  v3[1] = &TouchpadRectListProxy::`vftable'{for `Microsoft::Bamo::Lib::ISMBamos_AutoBamos::IList_VirtualTouchpadRect_Proxy'};
  return 0LL;
}
