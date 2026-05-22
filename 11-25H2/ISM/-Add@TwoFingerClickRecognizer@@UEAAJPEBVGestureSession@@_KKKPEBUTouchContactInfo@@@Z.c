/*
 * XREFs of ?Add@TwoFingerClickRecognizer@@UEAAJPEBVGestureSession@@_KKKPEBUTouchContactInfo@@@Z @ 0x1801AF1A0
 * Callers:
 *     <none>
 * Callees:
 *     ?ContactsWithinBoundingBox@TwoFingerClickRecognizer@@AEAA_NKPEBUTouchContactInfo@@@Z @ 0x1801AF2F0 (-ContactsWithinBoundingBox@TwoFingerClickRecognizer@@AEAA_NKPEBUTouchContactInfo@@@Z.c)
 *     ?SaveTapInfo@TwoFingerClickRecognizer@@AEAAXK@Z @ 0x1801AF53C (-SaveTapInfo@TwoFingerClickRecognizer@@AEAAXK@Z.c)
 *     ?TapInactive@TwoFingerClickRecognizer@@AEAAJPEBVGestureSession@@_KKKPEBUTouchContactInfo@@@Z @ 0x1801AF698 (-TapInactive@TwoFingerClickRecognizer@@AEAAJPEBVGestureSession@@_KKKPEBUTouchContactInfo@@@Z.c)
 *     ?TapOneFingerDown@TwoFingerClickRecognizer@@AEAAJPEBVGestureSession@@_KKKPEBUTouchContactInfo@@@Z @ 0x1801AF794 (-TapOneFingerDown@TwoFingerClickRecognizer@@AEAAJPEBVGestureSession@@_KKKPEBUTouchContactInfo@@@.c)
 */

__int64 __fastcall TwoFingerClickRecognizer::Add(
        TwoFingerClickRecognizer *this,
        const struct GestureSession *a2,
        unsigned __int64 a3,
        unsigned int a4,
        unsigned int a5,
        const struct TouchContactInfo *a6)
{
  __int16 v6; // r10
  unsigned int v7; // ebx
  char v9; // bp
  unsigned int v12; // edx
  int v13; // ecx
  int v14; // ecx
  int v15; // ecx

  v6 = *((_WORD *)this + 8);
  v7 = 0;
  v9 = a3;
  if ( (v6 & 0x10) != 0 && a4 >= *((_DWORD *)this + 6) )
  {
    *((_WORD *)this + 8) = 0;
    v6 = 0;
    *((_DWORD *)this + 5) = 4;
  }
  if ( (*((_DWORD *)a2 + 3) & *((_DWORD *)this + 2)) == 0 )
    return 0LL;
  v12 = 1;
  if ( (a3 & 1) != 0 )
  {
    v6 = v6 & 0xFFE7 | 8;
    *((_WORD *)this + 8) = v6;
    *((_DWORD *)this + 5) = 0;
  }
  v13 = *((_DWORD *)this + 5);
  if ( !v13 )
    return (unsigned int)TwoFingerClickRecognizer::TapInactive(this, (const struct GestureSession *)1, a3, a4, a5, a6);
  v14 = v13 - 1;
  if ( !v14 )
    return (unsigned int)TwoFingerClickRecognizer::TapOneFingerDown(
                           this,
                           (const struct GestureSession *)1,
                           a3,
                           a4,
                           a5,
                           a6);
  v15 = v14 - 1;
  if ( !v15 )
  {
    if ( a5 == 2 )
    {
      v12 = 2;
      goto LABEL_13;
    }
    if ( a5 == 1 )
    {
      if ( (a3 & 4) == 0 )
      {
        *((_DWORD *)this + 6) = a4 + *((unsigned __int16 *)this + 31);
        *((_WORD *)this + 8) = v6 | 0x10;
        *((_DWORD *)this + 5) = 3;
        return v7;
      }
      goto LABEL_15;
    }
LABEL_21:
    *((_WORD *)this + 8) = 0;
    *((_DWORD *)this + 5) = 4;
    return v7;
  }
  if ( v15 != 1 )
    return v7;
  if ( a5 != 1 )
    goto LABEL_21;
LABEL_13:
  if ( !TwoFingerClickRecognizer::ContactsWithinBoundingBox(this, v12, a6) )
    goto LABEL_21;
  if ( (v9 & 4) != 0 )
LABEL_15:
    TwoFingerClickRecognizer::SaveTapInfo(this, a4);
  return v7;
}
