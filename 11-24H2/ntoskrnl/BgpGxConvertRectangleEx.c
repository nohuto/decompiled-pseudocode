/*
 * XREFs of BgpGxConvertRectangleEx @ 0x1404553DC
 * Callers:
 *     BgpTxtDisplayCharacter @ 0x14046ECF8 (BgpTxtDisplayCharacter.c)
 *     BgpGxDrawRectangle @ 0x14047D084 (BgpGxDrawRectangle.c)
 *     GxpWriteFrameBufferPixels @ 0x14047D15C (GxpWriteFrameBufferPixels.c)
 *     BgpGxConvertRectangle @ 0x140699588 (BgpGxConvertRectangle.c)
 *     AnFwDisplayFade @ 0x140BB56EC (AnFwDisplayFade.c)
 * Callees:
 *     GxpMatchPaletteColor @ 0x1406996C0 (GxpMatchPaletteColor.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     BgpGxRectangleCreate @ 0x140BB5E78 (BgpGxRectangleCreate.c)
 */

__int64 __fastcall BgpGxConvertRectangleEx(int *a1, __int64 a2, _QWORD *a3, char a4)
{
  _QWORD *v4; // r12
  unsigned int v5; // ebp
  int *v6; // rsi
  int v7; // eax
  char v8; // r15
  __int64 result; // rax
  __int64 v10; // rdi
  _BYTE *v11; // rbx
  _BYTE *v12; // r14
  unsigned int v13; // r13d
  unsigned int v14; // eax
  __int64 v15; // rcx
  unsigned int v16; // r12d
  unsigned int i; // ebp
  _BYTE *v18; // rax
  __int64 v19; // [rsp+20h] [rbp-58h] BYREF
  _DWORD v20[20]; // [rsp+28h] [rbp-50h] BYREF
  char v23; // [rsp+98h] [rbp+20h] BYREF

  v20[2] = 0;
  v4 = a3;
  v23 = 0;
  v5 = a2;
  v6 = a1;
  if ( (a4 & 1) == 0 )
  {
    v7 = *a1;
    v19 = 0LL;
    v8 = 0;
    v20[1] = v7;
    v20[0] = a1[1];
    result = BgpGxRectangleCreate(v20, a2, &v19);
    if ( (int)result < 0 )
      return result;
    v10 = v19;
LABEL_4:
    v11 = *(_BYTE **)(v10 + 24);
    v12 = (_BYTE *)*((_QWORD *)v6 + 3);
    v13 = (unsigned int)v6[2] >> 3;
    if ( v6[2] == v5 )
    {
      if ( v8 )
        return 0LL;
      memmove(*(void **)(v10 + 24), *((const void **)v6 + 3), (unsigned int)v6[3]);
    }
    else
    {
      if ( v5 == 4 )
      {
        v16 = 0;
        if ( *(_DWORD *)v10 )
        {
          do
          {
            for ( i = 0; i < *(_DWORD *)(v10 + 4); ++i )
            {
              GxpMatchPaletteColor(*(unsigned int *)v12, &v23);
              if ( (i & 1) != 0 )
                *v11++ |= v23;
              else
                *v11 = 16 * v23;
              v12 += v13;
            }
            ++v16;
            v18 = v11 + 1;
            if ( (i & 1) == 0 )
              v18 = v11;
            v11 = v18;
          }
          while ( v16 < *(_DWORD *)v10 );
          v6 = a1;
        }
        v4 = a3;
      }
      else
      {
        v14 = *(_DWORD *)v10 * *(_DWORD *)(v10 + 4);
        if ( v14 )
        {
          v15 = v14;
          do
          {
            v11[2] = v12[2];
            v11[1] = v12[1];
            *v11 = *v12;
            if ( v5 == 32 )
              v11[3] = 0;
            v12 += v13;
            v11 += v5 >> 3;
            --v15;
          }
          while ( v15 );
        }
      }
      if ( v8 )
        v6[4] |= 0x10u;
    }
    *v4 = v10;
    return 0LL;
  }
  v8 = 1;
  if ( (unsigned int)a2 <= a1[2] )
  {
    v10 = *a3;
    *(_DWORD *)v10 = *a1;
    *(_DWORD *)(v10 + 4) = a1[1];
    *(_DWORD *)(v10 + 8) = a2;
    *(_DWORD *)(v10 + 16) = 0;
    *(_DWORD *)(v10 + 12) = a1[3];
    *(_QWORD *)(v10 + 24) = *((_QWORD *)a1 + 3);
    goto LABEL_4;
  }
  return 3221225485LL;
}
