/*
 * XREFs of ?AddPoint@DragRecognizer@@AEAAXPEBVGestureSession@@PEBUtagPOINT@@_N@Z @ 0x1801ADB70
 * Callers:
 *     ?Add@DragRecognizer@@UEAAJPEBVGestureSession@@_KKKPEBUTouchContactInfo@@@Z @ 0x1801ADA40 (-Add@DragRecognizer@@UEAAJPEBVGestureSession@@_KKKPEBUTouchContactInfo@@@Z.c)
 * Callees:
 *     ?ExceedsThreshold@GestureRecognizer@@IEAA_NPEBUtagPOINT@@K@Z @ 0x1801ADD74 (-ExceedsThreshold@GestureRecognizer@@IEAA_NPEBUtagPOINT@@K@Z.c)
 *     ?ExceedsThreshold@GestureRecognizer@@IEAA_NPEBUtagPOINT@@KK@Z @ 0x1801ADDA0 (-ExceedsThreshold@GestureRecognizer@@IEAA_NPEBUtagPOINT@@KK@Z.c)
 */

void __fastcall DragRecognizer::AddPoint(
        DragRecognizer *this,
        const struct GestureSession *a2,
        const struct tagPOINT *a3,
        char a4)
{
  int v4; // eax
  int v6; // r11d
  unsigned int v8; // r8d
  unsigned int v10; // r9d
  unsigned __int64 v11; // rcx
  unsigned int v12; // r8d
  __int64 v13; // r10
  int v14; // r11d
  char v15; // r9
  char v16; // di
  struct tagPOINT v17; // r12
  unsigned int v18; // eax
  unsigned __int8 v19; // si
  bool v20; // zf
  bool v21; // sf
  unsigned __int64 v22; // rcx
  __int64 v23; // rax
  int v24; // r14d
  int v25; // edx
  int v26; // ebp
  int v27; // ecx
  int v28; // r8d
  int v29; // r11d
  int v30; // edx
  LONG y; // eax
  __int16 v32; // ax
  struct tagPOINT v33; // [rsp+50h] [rbp+8h] BYREF

  v4 = a3->y - *((_DWORD *)this + 15);
  v6 = a3->x - *((_DWORD *)this + 14);
  v8 = *((unsigned __int16 *)this + 18);
  v10 = *((unsigned __int16 *)this + 19);
  v33 = (struct tagPOINT)__PAIR64__(v4, v6);
  if ( !GestureRecognizer::ExceedsThreshold((GestureRecognizer *)__PAIR64__(v4, v6), &v33, v8, v10) && !a4 )
    return;
  v15 = *(_BYTE *)(v13 + 30);
  v16 = 0;
  v17 = *a3;
  *(struct tagPOINT *)(v13 + 56) = *a3;
  if ( (v15 & 2) == 0 )
  {
    v15 |= 2u;
    v18 = -v14;
    *(_BYTE *)(v13 + 30) = v15;
    v16 = 1;
    if ( v14 > 0 )
      v18 = v14;
    if ( v18 <= v12 )
    {
      v22 = HIDWORD(v11);
      v19 = 0;
      v20 = (_DWORD)v22 == 0;
      v21 = (v22 & 0x80000000) != 0LL;
    }
    else
    {
      v19 = 1;
      v20 = v14 == 0;
      v21 = v14 < 0;
    }
    v23 = *((_QWORD *)a2 + 149);
    v24 = *(unsigned __int16 *)(v13 + 24);
    v25 = *(unsigned __int16 *)(v13 + 22) >> 1;
    v26 = *(unsigned __int16 *)(v13 + 22) - v25;
    v27 = -(v25 + *(unsigned __int16 *)(v13 + 16));
    if ( !v21 && !v20 )
      v27 = v25 + *(unsigned __int16 *)(v13 + 16);
    if ( v19 )
    {
      v28 = v24 + HIDWORD(v23);
      v29 = v26 + v27 + v23;
      v30 = HIDWORD(v23) - v24;
      v11 = (unsigned int)(v23 + v27 - v26);
    }
    else
    {
      v30 = v27 - v26 + HIDWORD(v23);
      v29 = v24 + v23;
      v28 = v26 + v27 + HIDWORD(v23);
      v11 = (unsigned int)(v23 - v24);
    }
    *(_DWORD *)(v13 + 40) = v11;
    *(_DWORD *)(v13 + 48) = v29;
    *(_DWORD *)(v13 + 44) = v30;
    *(_DWORD *)(v13 + 52) = v28;
    *(struct tagPOINT *)(v13 + 64) = v17;
    *(_DWORD *)(v13 + 72) &= ~(16 * v19 + 16);
  }
  LOBYTE(v11) = v15;
  if ( (v15 & 6) == 2 )
  {
    if ( !*(_WORD *)(v13 + 22) )
    {
      LOBYTE(v11) = v15 | 4;
LABEL_24:
      *(_BYTE *)(v13 + 30) = v11;
      goto LABEL_25;
    }
    if ( a3->x < *(_DWORD *)(v13 + 40) || a3->x > *(_DWORD *)(v13 + 48) )
    {
      LOBYTE(v11) = v15 | 4;
      *(_DWORD *)(v13 + 72) &= ~0x20u;
      goto LABEL_24;
    }
    y = a3->y;
    if ( y < *(_DWORD *)(v13 + 44) || y > *(_DWORD *)(v13 + 52) )
    {
      LOBYTE(v11) = v15 | 4;
      *(_DWORD *)(v13 + 72) &= ~0x10u;
      goto LABEL_24;
    }
  }
LABEL_25:
  v32 = *(_WORD *)(v13 + 28);
  *(_WORD *)(v13 + 36) = v32;
  *(_WORD *)(v13 + 38) = v32;
  v33.x = *(_DWORD *)(v13 + 56) - *(_DWORD *)(v13 + 64);
  v33.y = *(_DWORD *)(v13 + 60) - *(_DWORD *)(v13 + 68);
  if ( v16 || a4 || GestureRecognizer::ExceedsThreshold((GestureRecognizer *)v11, &v33, *(unsigned __int16 *)(v13 + 26)) )
    *(_BYTE *)(v13 + 30) = v11 | 8;
}
