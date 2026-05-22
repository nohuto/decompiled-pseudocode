/*
 * XREFs of ?AllocateStubUnderLock@BamoGestureServicesPrincipal@@MEAAJPEAVBamoPeer@ISMBamos_AutoBamos@@PEAPEAVBamoGestureServicesStub@@@Z @ 0x180071DC0
 * Callers:
 *     <none>
 * Callees:
 *     memset_0 @ 0x18009D598 (memset_0.c)
 *     ??2@YAPEAX_K@Z @ 0x18009D79C (--2@YAPEAX_K@Z.c)
 */

__int64 __fastcall BamoGestureServicesPrincipal::AllocateStubUnderLock(
        BamoGestureServicesPrincipal *this,
        struct ISMBamos_AutoBamos::BamoPeer *a2,
        struct BamoGestureServicesStub **a3)
{
  _QWORD *v4; // rbx
  __int64 result; // rax

  v4 = operator new(0x50uLL);
  memset_0(v4, 0, 0x50uLL);
  *v4 = &BamoGestureServicesStub::`vftable'{for `Microsoft::Bamo::BamoStub'};
  v4[1] = &BamoGestureServicesStub::`vftable'{for `IGestureServicesStub'};
  *((_DWORD *)v4 + 8) = 0;
  v4[5] = 0LL;
  *((_DWORD *)v4 + 6) = 1;
  v4[6] = 0LL;
  v4[7] = 0LL;
  v4[8] = 0LL;
  *((_WORD *)v4 + 38) = 0;
  v4[2] = &BamoImpl::BamoGestureServicesStubImpl::`vftable';
  result = 0LL;
  *((_DWORD *)v4 + 18) = 256;
  *a3 = (struct BamoGestureServicesStub *)v4;
  return result;
}
