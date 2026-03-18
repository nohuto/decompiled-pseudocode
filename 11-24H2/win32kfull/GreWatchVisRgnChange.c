/*
 * XREFs of GreWatchVisRgnChange @ 0x14030D930
 * Callers:
 *     ?xxxRedrawHungWindow@@YAXPEAUtagWND@@PEAUHRGN__@@@Z @ 0x1402BCCD0 (-xxxRedrawHungWindow@@YAXPEAUtagWND@@PEAUHRGN__@@@Z.c)
 * Callees:
 *     ??0DCOBJA@@QEAA@PEAUHDC__@@@Z @ 0x1400CDC4C (--0DCOBJA@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJA@@QEAA@XZ @ 0x1400CDC98 (--1DCOBJA@@QEAA@XZ.c)
 */

void __fastcall GreWatchVisRgnChange(HDC a1, int a2)
{
  _QWORD v3[11]; // [rsp+20h] [rbp-58h] BYREF

  DCOBJA::DCOBJA((DCOBJA *)v3, a1);
  if ( v3[0] )
  {
    if ( a2 )
      *(_DWORD *)(v3[0] + 36LL) |= 0x20000u;
    else
      *(_DWORD *)(v3[0] + 36LL) &= ~0x20000u;
  }
  DCOBJA::~DCOBJA((DCOBJA *)v3);
}
