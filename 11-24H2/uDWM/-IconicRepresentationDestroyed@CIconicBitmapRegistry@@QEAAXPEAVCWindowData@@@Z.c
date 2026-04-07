/*
 * XREFs of ?IconicRepresentationDestroyed@CIconicBitmapRegistry@@QEAAXPEAVCWindowData@@@Z @ 0x180004C7C
 * Callers:
 *     ?Create@CWindowIconic@@SAJPEAVCWindowData@@PEAPEAV1@_N@Z @ 0x18000670C (-Create@CWindowIconic@@SAJPEAVCWindowData@@PEAPEAV1@_N@Z.c)
 *     ?RemoveSecondaryWindowRepresentation@CWindowData@@AEAAXPEAVCSecondaryWindowRepresentation@@W4WindowRepresentationType@@_N@Z @ 0x18003F1DC (-RemoveSecondaryWindowRepresentation@CWindowData@@AEAAXPEAVCSecondaryWindowRepresentation@@W4Win.c)
 * Callees:
 *     ?RegisterBitmapPending@CIconicBitmapRegistry@@AEAAXPEAVCWindowData@@_N@Z @ 0x180004CB4 (-RegisterBitmapPending@CIconicBitmapRegistry@@AEAAXPEAVCWindowData@@_N@Z.c)
 *     ?RegisterBitmapInUse@CIconicBitmapRegistry@@AEAAXPEAVCWindowData@@_N@Z @ 0x1800064C4 (-RegisterBitmapInUse@CIconicBitmapRegistry@@AEAAXPEAVCWindowData@@_N@Z.c)
 */

void __fastcall CIconicBitmapRegistry::IconicRepresentationDestroyed(
        CIconicBitmapRegistry *this,
        struct CWindowData *a2)
{
  struct CWindowData *v2; // rdx
  CIconicBitmapRegistry *v3; // r10

  *((_BYTE *)a2 + 738) &= ~0x10u;
  CIconicBitmapRegistry::RegisterBitmapPending(this, a2, 0);
  if ( *((_QWORD *)v2 + 54) )
    CIconicBitmapRegistry::RegisterBitmapInUse(v3, v2, 0);
}
