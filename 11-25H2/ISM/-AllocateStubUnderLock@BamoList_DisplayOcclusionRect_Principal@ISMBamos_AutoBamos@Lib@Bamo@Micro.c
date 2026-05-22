/*
 * XREFs of ?AllocateStubUnderLock@BamoList_DisplayOcclusionRect_Principal@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@MEAAJPEAVBamoPeer@2@PEAPEAVBamoList_DisplayOcclusionRect_Stub@2345@@Z @ 0x180139F20
 * Callers:
 *     <none>
 * Callees:
 *     memset_0 @ 0x18009D3C8 (memset_0.c)
 *     ??2@YAPEAX_K@Z @ 0x18009D5CC (--2@YAPEAX_K@Z.c)
 */

__int64 __fastcall Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_DisplayOcclusionRect_Principal::AllocateStubUnderLock(
        Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_DisplayOcclusionRect_Principal *this,
        struct ISMBamos_AutoBamos::BamoPeer *a2,
        struct Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_DisplayOcclusionRect_Stub **a3)
{
  _QWORD *v4; // rbx
  __int64 result; // rax

  v4 = operator new(0x50uLL);
  memset_0(v4, 0, 0x50uLL);
  *v4 = &Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_DisplayOcclusionRect_Stub::`vftable'{for `Microsoft::Bamo::BamoStub'};
  v4[1] = &Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_DisplayOcclusionRect_Stub::`vftable'{for `Microsoft::Bamo::Lib::ISMBamos_AutoBamos::IList_DisplayOcclusionRect_Stub'};
  *((_DWORD *)v4 + 8) = 0;
  v4[5] = 0LL;
  *((_DWORD *)v4 + 6) = 1;
  v4[6] = 0LL;
  v4[7] = 0LL;
  v4[8] = 0LL;
  *((_WORD *)v4 + 38) = 0;
  v4[2] = &Microsoft::Bamo::Lib::BamoImpl::ISMBamos_AutoBamos::BamoList_DisplayOcclusionRect_StubImpl::`vftable';
  result = 0LL;
  *((_DWORD *)v4 + 18) = 256;
  *a3 = (struct Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_DisplayOcclusionRect_Stub *)v4;
  return result;
}
