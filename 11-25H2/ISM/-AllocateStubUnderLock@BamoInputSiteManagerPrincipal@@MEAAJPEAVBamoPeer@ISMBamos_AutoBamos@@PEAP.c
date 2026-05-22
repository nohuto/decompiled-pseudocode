/*
 * XREFs of ?AllocateStubUnderLock@BamoInputSiteManagerPrincipal@@MEAAJPEAVBamoPeer@ISMBamos_AutoBamos@@PEAPEAVBamoInputSiteManagerStub@@@Z @ 0x1800739B0
 * Callers:
 *     <none>
 * Callees:
 *     memset_0 @ 0x18009D3C8 (memset_0.c)
 *     ??2@YAPEAX_K@Z @ 0x18009D5CC (--2@YAPEAX_K@Z.c)
 */

__int64 __fastcall BamoInputSiteManagerPrincipal::AllocateStubUnderLock(
        BamoInputSiteManagerPrincipal *this,
        struct ISMBamos_AutoBamos::BamoPeer *a2,
        struct BamoInputSiteManagerStub **a3)
{
  _QWORD *v4; // rbx
  __int64 result; // rax

  v4 = operator new(0x50uLL);
  memset_0(v4, 0, 0x50uLL);
  *v4 = &BamoInputSiteManagerStub::`vftable'{for `Microsoft::Bamo::BamoStub'};
  v4[1] = &BamoInputSiteManagerStub::`vftable'{for `IInputSiteManagerStub'};
  *((_DWORD *)v4 + 8) = 0;
  v4[5] = 0LL;
  *((_DWORD *)v4 + 6) = 1;
  v4[6] = 0LL;
  v4[7] = 0LL;
  v4[8] = 0LL;
  *((_WORD *)v4 + 38) = 0;
  v4[2] = &BamoImpl::BamoInputSiteManagerStubImpl::`vftable';
  result = 0LL;
  *((_DWORD *)v4 + 18) = 256;
  *a3 = (struct BamoInputSiteManagerStub *)v4;
  return result;
}
