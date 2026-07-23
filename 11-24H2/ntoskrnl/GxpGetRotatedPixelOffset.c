/*
 * XREFs of GxpGetRotatedPixelOffset @ 0x140484320
 * Callers:
 *     GxpReadFrameBufferPixels @ 0x140BB5F2C (GxpReadFrameBufferPixels.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GxpGetRotatedPixelOffset(unsigned __int64 a1, int *a2, _DWORD *a3, __int64 a4, _DWORD *a5)
{
  unsigned int v5; // r11d
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // r8
  int v10; // eax

  v5 = 0;
  if ( !BYTE2(BgInternal) )
  {
    LODWORD(v8) = a1;
    v7 = HIDWORD(a1);
    goto LABEL_6;
  }
  if ( BYTE2(BgInternal) == 1 )
  {
    v10 = *a2;
    v8 = HIDWORD(a1);
    goto LABEL_12;
  }
  if ( BYTE2(BgInternal) == 2 )
  {
    v10 = a2[1];
    LODWORD(v8) = *a2 - a1 - 1;
    a1 >>= 32;
LABEL_12:
    LODWORD(v7) = v10 - a1 - 1;
    goto LABEL_6;
  }
  if ( BYTE2(BgInternal) != 3 )
    return (unsigned int)-1073741637;
  LODWORD(v7) = a1;
  LODWORD(v8) = a2[1] - HIDWORD(a1) - 1;
LABEL_6:
  *a5 = v8 + *a3 + *(_DWORD *)(a4 + 8) * (v7 + a3[1]);
  return v5;
}
