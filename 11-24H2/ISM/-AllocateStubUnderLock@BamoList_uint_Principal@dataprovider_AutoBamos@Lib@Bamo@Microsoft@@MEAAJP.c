/*
 * XREFs of ?AllocateStubUnderLock@BamoList_uint_Principal@dataprovider_AutoBamos@Lib@Bamo@Microsoft@@MEAAJPEAVBamoPeer@2@PEAPEAVBamoList_uint_Stub@2345@@Z @ 0x180100DC0
 * Callers:
 *     <none>
 * Callees:
 *     memset_0 @ 0x18009D598 (memset_0.c)
 *     ??2@YAPEAX_K@Z @ 0x18009D79C (--2@YAPEAX_K@Z.c)
 */

__int64 __fastcall Microsoft::Bamo::Lib::dataprovider_AutoBamos::BamoList_uint_Principal::AllocateStubUnderLock(
        Microsoft::Bamo::Lib::dataprovider_AutoBamos::BamoList_uint_Principal *this,
        struct dataprovider_AutoBamos::BamoPeer *a2,
        struct Microsoft::Bamo::Lib::dataprovider_AutoBamos::BamoList_uint_Stub **a3)
{
  _QWORD *v4; // rbx
  __int64 result; // rax

  v4 = operator new(0x50uLL);
  memset_0(v4, 0, 0x50uLL);
  *v4 = &Microsoft::Bamo::Lib::dataprovider_AutoBamos::BamoList_uint_Stub::`vftable'{for `Microsoft::Bamo::BamoStub'};
  v4[1] = &Microsoft::Bamo::Lib::dataprovider_AutoBamos::BamoList_uint_Stub::`vftable'{for `Microsoft::Bamo::Lib::dataprovider_AutoBamos::IList_uint_Stub'};
  *((_DWORD *)v4 + 8) = 0;
  v4[5] = 0LL;
  *((_DWORD *)v4 + 6) = 1;
  v4[6] = 0LL;
  v4[7] = 0LL;
  v4[8] = 0LL;
  *((_WORD *)v4 + 38) = 0;
  v4[2] = &BamoImpl::BamoAsyncResult_string_StubImpl::`vftable';
  result = 0LL;
  *((_DWORD *)v4 + 18) = 256;
  *a3 = (struct Microsoft::Bamo::Lib::dataprovider_AutoBamos::BamoList_uint_Stub *)v4;
  return result;
}
