/*
 * XREFs of ?xxxInterceptMoveSizeSetWindowPos@WindowActions@@YAXPEAUMOVESIZEDATA@@UtagRECT@@@Z @ 0x1402CF85C
 * Callers:
 *     ?xxxMoveSizeSetWindowPosOld@@YAXPEAUMOVESIZEDATA@@UtagRECT@@@Z @ 0x1402A8C4C (-xxxMoveSizeSetWindowPosOld@@YAXPEAUMOVESIZEDATA@@UtagRECT@@@Z.c)
 * Callees:
 *     xxxSendTransformableMessageTimeout @ 0x140042064 (xxxSendTransformableMessageTimeout.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 *     memset_0 @ 0x140340780 (memset_0.c)
 */

void __fastcall WindowActions::xxxInterceptMoveSizeSetWindowPos(
        WindowActions *this,
        struct MOVESIZEDATA *a2,
        struct tagRECT *a3)
{
  int v5; // ecx
  int v6; // eax
  int v7; // eax
  __int64 v8; // rdx
  int v9; // eax
  int v10; // [rsp+50h] [rbp-19h] BYREF
  int v11; // [rsp+54h] [rbp-15h]
  int v12; // [rsp+5Ch] [rbp-Dh]
  int v13; // [rsp+60h] [rbp-9h]
  int v14; // [rsp+64h] [rbp-5h]
  int v15; // [rsp+68h] [rbp-1h]
  int v16; // [rsp+78h] [rbp+Fh]
  int v17; // [rsp+A0h] [rbp+37h]
  int v18; // [rsp+A4h] [rbp+3Bh]

  memset_0(&v10, 0, 0x60uLL);
  v11 |= 0x400u;
  v5 = *(_DWORD *)a2;
  v6 = *((_DWORD *)a2 + 2) - *(_DWORD *)a2;
  v13 = *((_DWORD *)a2 + 1);
  v14 = v6;
  v7 = *((_DWORD *)a2 + 3) - v13;
  v12 = v5;
  v8 = *((_QWORD *)this + 27);
  v15 = v7;
  v10 = 6;
  v17 = *(_DWORD *)(*(_QWORD *)(v8 + 40) + 44LL);
  v9 = *((_DWORD *)this + 50);
  v18 = *(_DWORD *)(*(_QWORD *)(v8 + 40) + 48LL);
  if ( (v9 & 0x40000000) != 0 )
  {
    v10 = 38;
    *((_DWORD *)this + 50) = v9 & 0xBFFFFFFF;
    v16 = 0;
  }
  xxxSendTransformableMessageTimeout(
    *((struct tagTHREADINFO ***)this + 2),
    838LL,
    0LL,
    (struct tagDRAWITEMSTRUCT *)&v10,
    0,
    0,
    0LL,
    1,
    1);
}
