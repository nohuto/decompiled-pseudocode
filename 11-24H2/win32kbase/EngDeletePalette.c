/*
 * XREFs of EngDeletePalette @ 0x1401156E0
 * Callers:
 *     ?StubDispDisablePDEV@@YAXPEAUDHPDEV__@@@Z @ 0x1401CF550 (-StubDispDisablePDEV@@YAXPEAUDHPDEV__@@@Z.c)
 * Callees:
 *     HmgShareLockCheck @ 0x14002F820 (HmgShareLockCheck.c)
 *     HmgDecrementShareReferenceCountEx @ 0x1400358E0 (HmgDecrementShareReferenceCountEx.c)
 *     ?vUnrefPalette@XEPALOBJ@@QEAAXXZ @ 0x140036AB0 (-vUnrefPalette@XEPALOBJ@@QEAAXXZ.c)
 */

BOOL __stdcall EngDeletePalette(HPALETTE hpal)
{
  struct _BASEOBJECT *v1; // rax
  BOOL v2; // ebx
  int v3; // ecx
  struct _BASEOBJECT *v5; // [rsp+38h] [rbp+10h] BYREF

  v1 = (struct _BASEOBJECT *)HmgShareLockCheck((__int64)hpal, 8);
  v2 = 0;
  v5 = v1;
  if ( v1 )
  {
    v3 = *((_DWORD *)v1 + 6);
    if ( (v3 & 0x100) == 0 )
    {
      *((_DWORD *)v1 + 6) = v3 | 0x4000000;
      XEPALOBJ::vUnrefPalette(&v5);
      v1 = v5;
      v2 = 1;
    }
    if ( v1 )
      HmgDecrementShareReferenceCountEx(v1, 0LL);
  }
  return v2;
}
