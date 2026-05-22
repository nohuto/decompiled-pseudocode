/*
 * XREFs of ?CreateSystemButtonEventControllerProxy@@YAJPEAVBamoPeer@ISMBamos_AutoBamos@@PEAPEAVBamoSystemButtonEventControllerProxy@@@Z @ 0x18002D9D4
 * Callers:
 *     ?CreateSystemButtonEventControllerProxy@BamoImpl@@YAXPEAVBaseBamoConnectionImpl@1Microsoft@@PEAVBamoPeer@ISMBamos_AutoBamos@@PEAPEAVBamoProxy@Bamo@3@@Z @ 0x18002D924 (-CreateSystemButtonEventControllerProxy@BamoImpl@@YAXPEAVBaseBamoConnectionImpl@1Microsoft@@PEAV.c)
 * Callees:
 *     memset_0 @ 0x18009D3C8 (memset_0.c)
 *     ??2@YAPEAX_K@Z @ 0x18009D5CC (--2@YAPEAX_K@Z.c)
 */

__int64 __fastcall CreateSystemButtonEventControllerProxy(
        struct ISMBamos_AutoBamos::BamoPeer *a1,
        struct BamoSystemButtonEventControllerProxy **a2)
{
  _QWORD *v3; // rbx
  __int64 result; // rax

  v3 = operator new(0x58uLL);
  memset_0(v3, 0, 0x58uLL);
  *((_DWORD *)v3 + 6) = 0;
  v3[4] = 0LL;
  v3[2] = &BamoImpl::BamoSystemButtonEventControllerProxyImpl::`vftable';
  v3[5] = 0LL;
  *v3 = &SystemButtonEventController::`vftable'{for `Microsoft::Bamo::BamoProxy'};
  v3[1] = &SystemButtonEventController::`vftable'{for `ISystemButtonEventControllerProxy'};
  result = 0LL;
  v3[6] = 0LL;
  v3[7] = 0LL;
  v3[8] = 0LL;
  v3[9] = 0LL;
  v3[10] = 0LL;
  *a2 = (struct BamoSystemButtonEventControllerProxy *)v3;
  return result;
}
