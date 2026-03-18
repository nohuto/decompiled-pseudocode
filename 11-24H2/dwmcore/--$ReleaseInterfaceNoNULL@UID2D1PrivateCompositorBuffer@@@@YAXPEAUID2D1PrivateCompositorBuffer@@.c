/*
 * XREFs of ??$ReleaseInterfaceNoNULL@UID2D1PrivateCompositorBuffer@@@@YAXPEAUID2D1PrivateCompositorBuffer@@@Z @ 0x180171D68
 * Callers:
 *     ?CreateNewGenerator@CPrimitiveGroup@@AEAAJPEAPEAVCPrimitiveGroupDrawListGenerator@@@Z @ 0x1801712DC (-CreateNewGenerator@CPrimitiveGroup@@AEAAJPEAPEAVCPrimitiveGroupDrawListGenerator@@@Z.c)
 * Callees:
 *     ?Release@?$CMILCOMBaseT@UID2D1PrivateCompositorBuffer@@U1@VCMilObjectDeleter@@@@UEAAKXZ @ 0x180171DA0 (-Release@-$CMILCOMBaseT@UID2D1PrivateCompositorBuffer@@U1@VCMilObjectDeleter@@@@UEAAKXZ.c)
 */

void __fastcall ReleaseInterfaceNoNULL<ID2D1PrivateCompositorBuffer>(__int64 a1)
{
  void (*v1)(void); // rax

  if ( a1 )
  {
    v1 = *(void (**)(void))(*(_QWORD *)a1 + 16LL);
    if ( (char *)v1 == (char *)CMILCOMBaseT<ID2D1PrivateCompositorBuffer,ID2D1PrivateCompositorBuffer,CMilObjectDeleter>::Release )
      CMILCOMBaseT<ID2D1PrivateCompositorBuffer,ID2D1PrivateCompositorBuffer,CMilObjectDeleter>::Release();
    else
      v1();
  }
}
