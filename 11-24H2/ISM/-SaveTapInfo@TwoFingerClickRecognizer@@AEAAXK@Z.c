/*
 * XREFs of ?SaveTapInfo@TwoFingerClickRecognizer@@AEAAXK@Z @ 0x1801B6ACC
 * Callers:
 *     ?Add@TwoFingerClickRecognizer@@UEAAJPEBVGestureSession@@_KKKPEBUTouchContactInfo@@@Z @ 0x1801B6730 (-Add@TwoFingerClickRecognizer@@UEAAJPEBVGestureSession@@_KKKPEBUTouchContactInfo@@@Z.c)
 * Callees:
 *     ?MeetsThreshold@GestureRecognizer@@IEAA_NPEBUtagPOINT@@K@Z @ 0x1801B3F58 (-MeetsThreshold@GestureRecognizer@@IEAA_NPEBUtagPOINT@@K@Z.c)
 */

void __fastcall TwoFingerClickRecognizer::SaveTapInfo(TwoFingerClickRecognizer *this, int a2)
{
  TwoFingerClickRecognizer *v3; // r10
  __int16 v4; // r9
  GestureRecognizer *v5; // rcx
  int v6; // edx
  __int16 v7; // r9
  unsigned int v8; // r8d
  __int16 v9; // r9
  __int16 v10; // ax
  char v11; // cl
  __int16 v12; // r9
  __int16 v13; // ax
  struct tagPOINT v14; // [rsp+30h] [rbp+8h] BYREF
  __int64 v15; // [rsp+40h] [rbp+18h]

  v3 = this;
  v4 = *((_WORD *)this + 8);
  v5 = (GestureRecognizer *)(unsigned int)((*((_DWORD *)this + 11) + *((_DWORD *)this + 13)) / 2);
  LODWORD(v15) = (_DWORD)v5;
  v6 = (*((_DWORD *)v3 + 12) + *((_DWORD *)v3 + 14)) / 2;
  HIDWORD(v15) = v6;
  v7 = v4 & 0xFFE6 | 1;
  *((_WORD *)v3 + 8) = v7;
  if ( (v7 & 4) != 0 )
  {
    v8 = *((unsigned __int16 *)v3 + 34);
    v14.x = *((_DWORD *)v3 + 7) - (_DWORD)v5;
    v14.y = *((_DWORD *)v3 + 8) - v6;
    if ( !GestureRecognizer::MeetsThreshold(v5, &v14, v8) )
      v9 |= 2u;
  }
  else
  {
    *((_DWORD *)v3 + 6) = a2 + *((unsigned __int16 *)v3 + 35);
    v9 = v7 | 0x18;
  }
  v10 = v9;
  v11 = v9;
  v12 = v9 | 4;
  v13 = v10 & 0xFFFB;
  if ( (v11 & 2) != 0 )
    v12 = v13;
  *((_WORD *)v3 + 8) = v12;
  if ( (v12 & 2) == 0 )
    *(_QWORD *)((char *)v3 + 28) = v15;
  *((_DWORD *)v3 + 5) = 0;
}
