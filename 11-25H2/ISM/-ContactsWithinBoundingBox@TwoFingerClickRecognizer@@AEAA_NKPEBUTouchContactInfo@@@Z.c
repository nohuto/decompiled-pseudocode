/*
 * XREFs of ?ContactsWithinBoundingBox@TwoFingerClickRecognizer@@AEAA_NKPEBUTouchContactInfo@@@Z @ 0x1801AF2F0
 * Callers:
 *     ?Add@TwoFingerClickRecognizer@@UEAAJPEBVGestureSession@@_KKKPEBUTouchContactInfo@@@Z @ 0x1801AF1A0 (-Add@TwoFingerClickRecognizer@@UEAAJPEBVGestureSession@@_KKKPEBUTouchContactInfo@@@Z.c)
 *     ?TapOneFingerDown@TwoFingerClickRecognizer@@AEAAJPEBVGestureSession@@_KKKPEBUTouchContactInfo@@@Z @ 0x1801AF794 (-TapOneFingerDown@TwoFingerClickRecognizer@@AEAAJPEBVGestureSession@@_KKKPEBUTouchContactInfo@@@.c)
 * Callees:
 *     ?MeetsThreshold@GestureRecognizer@@IEAA_NPEBUtagPOINT@@K@Z @ 0x1801AC9C8 (-MeetsThreshold@GestureRecognizer@@IEAA_NPEBUtagPOINT@@K@Z.c)
 */

char __fastcall TwoFingerClickRecognizer::ContactsWithinBoundingBox(
        TwoFingerClickRecognizer *this,
        unsigned int a2,
        const struct TouchContactInfo *a3)
{
  const struct TouchContactInfo *v3; // r11
  TwoFingerClickRecognizer *v5; // r9
  __int64 i; // r10
  int v7; // eax
  __int64 v8; // rax
  unsigned int v9; // r8d
  GestureRecognizer *v10; // rcx
  int v11; // r10d
  struct tagPOINT v13; // [rsp+20h] [rbp-18h] BYREF

  v3 = a3;
  v5 = this;
  for ( i = 0LL; (unsigned int)i < a2; i = (unsigned int)(v11 + 1) )
  {
    v7 = *((unsigned __int16 *)v3 + 20 * i + 1);
    if ( v7 == *((_DWORD *)v5 + 9) )
    {
      v8 = *(_QWORD *)((char *)v5 + 44);
    }
    else
    {
      if ( v7 != *((_DWORD *)v5 + 10) )
        return 0;
      v8 = *(_QWORD *)((char *)v5 + 52);
    }
    v9 = *((unsigned __int16 *)v5 + 33);
    v10 = (GestureRecognizer *)(unsigned int)(v8 - *((_DWORD *)v3 + 10 * i + 1));
    v13 = (struct tagPOINT)__PAIR64__(HIDWORD(v8) - *((_DWORD *)v3 + 10 * i + 2), (unsigned int)v10);
    if ( GestureRecognizer::MeetsThreshold(v10, &v13, v9) )
      return 0;
  }
  return 1;
}
