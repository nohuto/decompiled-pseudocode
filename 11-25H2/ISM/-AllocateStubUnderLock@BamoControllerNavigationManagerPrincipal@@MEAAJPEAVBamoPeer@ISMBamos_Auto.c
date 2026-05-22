/*
 * XREFs of ?AllocateStubUnderLock@BamoControllerNavigationManagerPrincipal@@MEAAJPEAVBamoPeer@ISMBamos_AutoBamos@@PEAPEAVBamoControllerNavigationManagerStub@@@Z @ 0x180075260
 * Callers:
 *     <none>
 * Callees:
 *     memset_0 @ 0x18009D3C8 (memset_0.c)
 *     ??2@YAPEAX_K@Z @ 0x18009D5CC (--2@YAPEAX_K@Z.c)
 */

__int64 __fastcall BamoControllerNavigationManagerPrincipal::AllocateStubUnderLock(
        BamoControllerNavigationManagerPrincipal *this,
        struct ISMBamos_AutoBamos::BamoPeer *a2,
        struct BamoControllerNavigationManagerStub **a3)
{
  _QWORD *v4; // rbx
  __int64 result; // rax

  v4 = operator new(0x50uLL);
  memset_0(v4, 0, 0x50uLL);
  *v4 = &BamoControllerNavigationManagerStub::`vftable'{for `Microsoft::Bamo::BamoStub'};
  v4[1] = &BamoControllerNavigationManagerStub::`vftable'{for `IControllerNavigationManagerStub'};
  *((_DWORD *)v4 + 8) = 0;
  v4[5] = 0LL;
  *((_DWORD *)v4 + 6) = 1;
  v4[6] = 0LL;
  v4[7] = 0LL;
  v4[8] = 0LL;
  *((_WORD *)v4 + 38) = 0;
  v4[2] = &BamoImpl::BamoControllerNavigationManagerStubImpl::`vftable';
  result = 0LL;
  *((_DWORD *)v4 + 18) = 256;
  *a3 = (struct BamoControllerNavigationManagerStub *)v4;
  return result;
}
