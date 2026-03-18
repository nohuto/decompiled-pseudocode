/*
 * XREFs of ?SwpCalcVisRgn@@YAHPEAUtagWND@@PEAUHRGN__@@@Z @ 0x1400463C0
 * Callers:
 *     ?BltValidInit@@YAHPEAUtagSMWP@@@Z @ 0x140171754 (-BltValidInit@@YAHPEAUtagSMWP@@@Z.c)
 *     ?zzzBltValidBits@@YA?AW4BltBitsResult@@PEAUtagSMWP@@@Z @ 0x14022C6A8 (-zzzBltValidBits@@YA-AW4BltBitsResult@@PEAUtagSMWP@@@Z.c)
 * Callees:
 *     CalcVisRgn @ 0x1400437F0 (CalcVisRgn.c)
 *     GetLayeredOrRedirectedParent @ 0x140045C50 (GetLayeredOrRedirectedParent.c)
 *     GetRedirectionBitmap @ 0x140063BA0 (GetRedirectionBitmap.c)
 *     ?IsMinimizedSausageWindow@@YAHQEBUtagWND@@@Z @ 0x1401C1D5C (-IsMinimizedSausageWindow@@YAHQEBUtagWND@@@Z.c)
 */

__int64 __fastcall SwpCalcVisRgn(struct tagWND *a1, HRGN a2)
{
  char v3; // cl
  int v4; // ebx
  const struct tagWND *LayeredOrRedirectedParent; // rax
  const struct tagWND *v6; // rsi
  unsigned int v7; // r9d
  int v8; // eax
  HRGN v10; // [rsp+38h] [rbp+10h] BYREF

  v10 = a2;
  v3 = *(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL);
  if ( (v3 & 0x10) == 0 )
    return 0LL;
  v4 = (4 * (v3 & 4)) | 1;
  LayeredOrRedirectedParent = (const struct tagWND *)GetLayeredOrRedirectedParent(a1);
  v6 = LayeredOrRedirectedParent;
  v7 = v4;
  if ( LayeredOrRedirectedParent && (*(_DWORD *)(*((_QWORD *)LayeredOrRedirectedParent + 5) + 24LL) & 0x20000000) != 0 )
  {
    if ( GetRedirectionBitmap(LayeredOrRedirectedParent) )
    {
      v8 = IsMinimizedSausageWindow(v6);
      v7 = v4;
      if ( !v8 )
        v7 = v4 | 0x4000;
    }
    else
    {
      v7 = v4;
    }
  }
  return CalcVisRgn(&v10, (__int64)a1, a1, v7);
}
