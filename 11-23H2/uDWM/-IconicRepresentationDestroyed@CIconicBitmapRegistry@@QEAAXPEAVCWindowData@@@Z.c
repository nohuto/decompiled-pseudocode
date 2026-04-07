/*
 * XREFs of ?IconicRepresentationDestroyed@CIconicBitmapRegistry@@QEAAXPEAVCWindowData@@@Z @ 0x1800C2F0C
 * Callers:
 *     ?RemoveSecondaryWindowRepresentation@CWindowData@@AEAAXPEAVCSecondaryWindowRepresentation@@W4WindowRepresentationType@@_N@Z @ 0x18004F464 (-RemoveSecondaryWindowRepresentation@CWindowData@@AEAAXPEAVCSecondaryWindowRepresentation@@W4Win.c)
 *     ?Create@CWindowIconic@@SAJPEAVCWindowData@@PEAPEAV1@_N@Z @ 0x1801063D8 (-Create@CWindowIconic@@SAJPEAVCWindowData@@PEAPEAV1@_N@Z.c)
 * Callees:
 *     ?RegisterBitmapPending@CIconicBitmapRegistry@@AEAAXPEAVCWindowData@@_N@Z @ 0x18000B6D8 (-RegisterBitmapPending@CIconicBitmapRegistry@@AEAAXPEAVCWindowData@@_N@Z.c)
 *     ?RegisterBitmapInUse@CIconicBitmapRegistry@@AEAAXPEAVCWindowData@@_N@Z @ 0x1800C33CC (-RegisterBitmapInUse@CIconicBitmapRegistry@@AEAAXPEAVCWindowData@@_N@Z.c)
 */

void __fastcall CIconicBitmapRegistry::IconicRepresentationDestroyed(
        CIconicBitmapRegistry *this,
        struct CWindowData *a2)
{
  struct CWindowData *v2; // rdx
  CIconicBitmapRegistry *v3; // r10

  *((_BYTE *)a2 + 674) &= ~0x10u;
  CIconicBitmapRegistry::RegisterBitmapPending(this, a2, 0);
  if ( *((_QWORD *)v2 + 54) )
    CIconicBitmapRegistry::RegisterBitmapInUse(v3, v2, 0);
}
