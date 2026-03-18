/*
 * XREFs of GreSetBitmapOwnerEx @ 0x1C0062058
 * Callers:
 *     GreSetBrushOwner @ 0x1C00601D0 (GreSetBrushOwner.c)
 * Callees:
 *     HmgSetOwner @ 0x1C003E5F0 (HmgSetOwner.c)
 *     ??1SURFREF@@QEAA@XZ @ 0x1C003F8A0 (--1SURFREF@@QEAA@XZ.c)
 *     HmgShareLockCheck @ 0x1C0042BA0 (HmgShareLockCheck.c)
 *     ?bDIBSection@SURFACE@@QEAAHXZ @ 0x1C0060B10 (-bDIBSection@SURFACE@@QEAAHXZ.c)
 *     ??0SURFREF@@QEAA@XZ @ 0x1C0159C00 (--0SURFREF@@QEAA@XZ.c)
 */

__int64 __fastcall GreSetBitmapOwnerEx(unsigned int a1, int a2)
{
  unsigned int v4; // ebx
  SURFACE *v5; // rax
  _BYTE v7[32]; // [rsp+20h] [rbp-38h] BYREF
  SURFACE *v8; // [rsp+40h] [rbp-18h]

  v4 = 0;
  SURFREF::SURFREF((SURFREF *)v7);
  v5 = (SURFACE *)HmgShareLockCheck(a1, 5);
  v8 = v5;
  if ( v5 && (!(unsigned int)SURFACE::bDIBSection(v5) || a2) && (a1 & 0x800000) == 0 )
    v4 = HmgSetOwner(a1, a2, 5);
  SURFREF::~SURFREF((SURFREF *)v7);
  return v4;
}
