/*
 * XREFs of ?xxxAdjustPushState@@YAXPEAUtagTHREADINFO@@EEPEAUtagKL@@1@Z @ 0x1401585B4
 * Callers:
 *     ?xxxAdjustPushStateForKL@@YAXPEAUtagTHREADINFO@@PEAEPEAUtagKL@@22@Z @ 0x140149D7C (-xxxAdjustPushStateForKL@@YAXPEAUtagTHREADINFO@@PEAEPEAUtagKL@@22@Z.c)
 * Callees:
 *     InternalMapVirtualKeyEx @ 0x1400969C0 (InternalMapVirtualKeyEx.c)
 *     xxxKeyEventEx @ 0x14014BF54 (xxxKeyEventEx.c)
 */

void __fastcall xxxAdjustPushState(
        struct tagTHREADINFO *a1,
        unsigned __int8 a2,
        unsigned __int8 a3,
        struct tagKL *a4,
        struct tagKL *a5)
{
  unsigned __int64 v5; // rbp
  unsigned int v6; // r14d
  unsigned __int64 v9; // rsi
  int v10; // edi
  unsigned int v11; // edi
  unsigned int v12; // eax
  unsigned __int64 v13; // rdi
  int v14; // ebx
  unsigned int v15; // ebx
  unsigned int v16; // eax

  v5 = a3;
  v6 = a2;
  if ( a2 )
  {
    v9 = (unsigned __int64)a2 >> 2;
    v10 = 1 << (2 * (a2 & 3));
    if ( ((unsigned __int8)v10 & *(_BYTE *)(v9 + W32GetUserSessionState(a1) + 14400)) != 0
      || ((unsigned __int8)v10 & *(_BYTE *)(W32GetUserSessionState(2 * (v6 & 3)) + v9 + 14336)) != 0
      || ((unsigned __int8)v10 & *(_BYTE *)(*((_QWORD *)a1 + 59) + v9 + 280)) != 0 )
    {
      v11 = InternalMapVirtualKeyEx(v6, 0, *(_QWORD *)(*((_QWORD *)a4 + 6) + 32LL));
      v12 = InternalMapVirtualKeyEx(v6, 0, *(_QWORD *)(*((_QWORD *)a5 + 6) + 32LL));
      if ( v11 )
      {
        if ( !v12 )
          xxxKeyEventEx((unsigned __int16)v6 | 0x8000u, v11 | 0x200, 0, 0LL, 0LL, 0LL, 0, 0, 0LL, 0LL);
      }
    }
  }
  if ( (_BYTE)v5 )
  {
    v13 = v5 >> 2;
    v14 = 1 << (2 * (v5 & 3));
    if ( ((unsigned __int8)v14 & *(_BYTE *)((v5 >> 2) + W32GetUserSessionState(a1) + 14400)) != 0
      || ((unsigned __int8)v14 & *(_BYTE *)(W32GetUserSessionState(2 * (unsigned int)(v5 & 3)) + v13 + 14336)) != 0
      || ((unsigned __int8)v14 & *(_BYTE *)(*((_QWORD *)a1 + 59) + v13 + 280)) != 0 )
    {
      v15 = InternalMapVirtualKeyEx(v5, 0, *(_QWORD *)(*((_QWORD *)a4 + 6) + 32LL));
      v16 = InternalMapVirtualKeyEx(v5, 0, *(_QWORD *)(*((_QWORD *)a5 + 6) + 32LL));
      if ( v15 )
      {
        if ( !v16 )
          xxxKeyEventEx((unsigned __int16)v5 | 0x8000u, v15 | 0x200, 0, 0LL, 0LL, 0LL, 0, 0, 0LL, 0LL);
      }
    }
  }
}
