/*
 * XREFs of ?HasSourceClip@CBitmapSource@@QEBA_NXZ @ 0x18003B998
 * Callers:
 *     ?Initialize@CDrawNineGridInstruction@@AEAAJPEAVCBitmapSource@@@Z @ 0x18003ABC8 (-Initialize@CDrawNineGridInstruction@@AEAAJPEAVCBitmapSource@@@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall CBitmapSource::HasSourceClip(CBitmapSource *this)
{
  char result; // al

  result = 0;
  if ( *((int *)this + 20) > 0 && *((int *)this + 22) > 0 && *((int *)this + 21) > 0 && *((int *)this + 23) > 0 )
    return 1;
  return result;
}
