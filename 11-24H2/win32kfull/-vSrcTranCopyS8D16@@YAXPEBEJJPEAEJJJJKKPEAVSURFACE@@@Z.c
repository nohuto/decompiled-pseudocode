/*
 * XREFs of ?vSrcTranCopyS8D16@@YAXPEBEJJPEAEJJJJKKPEAVSURFACE@@@Z @ 0x1402FFDA0
 * Callers:
 *     <none>
 * Callees:
 *     PALLOCNOZ @ 0x140125A4C (PALLOCNOZ.c)
 *     ?vSrcTranCopyS8D16New@@YAXPEBEJJPEAEJJJJKKPEAVSURFACE@@P6AX011JPEAPEAG@Z1@Z @ 0x1402FFEE4 (-vSrcTranCopyS8D16New@@YAXPEBEJJPEAEJJJJKKPEAVSURFACE@@P6AX011JPEAPEAG@Z1@Z.c)
 */

void __fastcall vSrcTranCopyS8D16(
        const unsigned __int8 *a1,
        __int64 a2,
        int a3,
        unsigned __int8 *a4,
        int a5,
        int a6,
        int a7,
        int a8,
        unsigned int a9,
        unsigned int a10,
        struct SURFACE *a11)
{
  int v13; // r13d
  unsigned __int8 *v14; // rbx
  int v15; // edi
  unsigned int v16; // ecx
  void (*v17)(const unsigned __int8 *, unsigned __int8 *, unsigned __int8 *, int, unsigned __int16 **); // [rsp+58h] [rbp-50h]

  v13 = a2;
  v14 = (unsigned __int8 *)(*(_QWORD *)(W32GetSessionState((_DWORD)a1, a2) + 96) + 5360LL);
  v15 = 0;
  v16 = 2 * (a6 - a5) + 8;
  if ( v16 > 0x1F40 )
  {
    v14 = (unsigned __int8 *)PALLOCNOZ(v16, 1869899079LL);
    if ( !v14 )
      return;
    v15 = 1;
  }
  vSrcTranCopyS8D16New(a1, v13, a3, a4, a5, a6, a7, a8, a9, a10, a11, v17, v14);
  if ( v15 )
    Win32FreePool(v14);
}
