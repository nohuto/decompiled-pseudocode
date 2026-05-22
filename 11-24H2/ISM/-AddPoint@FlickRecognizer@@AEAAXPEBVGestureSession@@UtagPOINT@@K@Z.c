/*
 * XREFs of ?AddPoint@FlickRecognizer@@AEAAXPEBVGestureSession@@UtagPOINT@@K@Z @ 0x1801B3C44
 * Callers:
 *     ?Add@FlickRecognizer@@UEAAJPEBVGestureSession@@_KKKPEBUTouchContactInfo@@@Z @ 0x1801B3AF0 (-Add@FlickRecognizer@@UEAAJPEBVGestureSession@@_KKKPEBUTouchContactInfo@@@Z.c)
 * Callees:
 *     ?MeetsThreshold@GestureRecognizer@@IEAA_NPEBUtagPOINT@@K@Z @ 0x1801B3F58 (-MeetsThreshold@GestureRecognizer@@IEAA_NPEBUtagPOINT@@K@Z.c)
 */

void __fastcall FlickRecognizer::AddPoint(
        FlickRecognizer *this,
        const struct GestureSession *a2,
        struct tagPOINT a3,
        int a4)
{
  struct tagPOINT v4; // r10
  char v5; // bl
  FlickRecognizer *v6; // r11
  __int64 v7; // rax
  bool v8; // al
  char v9; // dl
  unsigned __int8 v10; // cl
  __int64 v11; // rcx
  char v12; // al
  char v13; // al
  struct tagPOINT v14; // [rsp+30h] [rbp+8h] BYREF

  v4 = a3;
  v5 = *((_BYTE *)this + 138) & 0xFE;
  v6 = this;
  *((_BYTE *)this + 138) = v5;
  if ( (v5 & 2) == 0 )
  {
    v7 = *((_QWORD *)a2 + 149);
    v14.x = a3.x - v7;
    a3.x = *((unsigned __int16 *)this + 79);
    v14.y = a3.y - HIDWORD(v7);
    v8 = GestureRecognizer::MeetsThreshold((GestureRecognizer *)(unsigned int)(a3.y - HIDWORD(v7)), &v14, a3.x);
    *((_BYTE *)v6 + 138) = (2 * v8) | v5 & 0xFD;
  }
  v9 = *((_BYTE *)v6 + 137);
  if ( v9 == 10 )
  {
    *((struct tagPOINT *)v6 + 2) = v4;
    *((_DWORD *)v6 + 6) = a4;
    *((_WORD *)v6 + 68) = 0;
  }
  else
  {
    v10 = 0;
    if ( v9 != 9 )
      v10 = v9 + 1;
    *((_BYTE *)v6 + 137) = v10;
    v11 = 3LL * v10;
    *(struct tagPOINT *)((char *)v6 + 4 * v11 + 16) = v4;
    *((_DWORD *)v6 + v11 + 6) = a4;
    v12 = *((_BYTE *)v6 + 136);
    if ( *((_BYTE *)v6 + 137) == v12 )
    {
      v13 = v12 + 1;
      *((_BYTE *)v6 + 136) = v13;
      if ( v13 == 10 )
        *((_BYTE *)v6 + 136) = 0;
    }
  }
}
