/*
 * XREFs of GxpAdjustRectangleToFrameBuffer @ 0x14047D530
 * Callers:
 *     GxpWriteFrameBufferPixels @ 0x14047D15C (GxpWriteFrameBufferPixels.c)
 *     GxpReadFrameBufferPixels @ 0x140BB5F2C (GxpReadFrameBufferPixels.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GxpAdjustRectangleToFrameBuffer(
        unsigned int *a1,
        unsigned int *a2,
        unsigned int *a3,
        unsigned int *a4,
        unsigned __int64 *a5,
        unsigned int *a6,
        char a7)
{
  unsigned int v7; // r9d
  unsigned int v9; // ebp
  unsigned int v11; // ecx
  unsigned __int64 v13; // rdx
  unsigned int v14; // r11d
  unsigned __int64 v15; // xmm0_8
  unsigned int v16; // r12d
  unsigned int v17; // r8d
  unsigned int v18; // ebx
  unsigned int v19; // ecx
  int v20; // r10d
  unsigned int v21; // esi
  unsigned __int64 v22; // rax
  unsigned int v23; // r13d
  unsigned int v24; // edx
  unsigned int v25; // r9d
  unsigned int v26; // r10d
  unsigned int v27; // edx
  unsigned int v29; // [rsp+0h] [rbp-78h]
  unsigned __int64 v30; // [rsp+8h] [rbp-70h]
  unsigned __int64 v31; // [rsp+10h] [rbp-68h]
  unsigned __int64 v32; // [rsp+18h] [rbp-60h]
  unsigned int v33; // [rsp+80h] [rbp+8h]
  unsigned int v34; // [rsp+88h] [rbp+10h]

  v7 = a1[1];
  v9 = *a1;
  v11 = a3[2];
  v13 = *(_QWORD *)a2;
  v14 = v7;
  v15 = *(_QWORD *)a3;
  v16 = *a3;
  v17 = v13;
  v29 = v11;
  v18 = a1[3];
  v34 = v18;
  v19 = 0;
  v33 = v7;
  v20 = 0;
  v31 = v13;
  v30 = v13;
  v32 = v15;
  if ( v16 < (unsigned int)v13 )
    return (unsigned int)-1073741811;
  v21 = a3[1];
  v22 = HIDWORD(v13);
  if ( v21 < HIDWORD(v13) )
    return (unsigned int)-1073741811;
  v23 = v15;
  v24 = v15 - v13;
  if ( v7 > (unsigned int)v15 - v17 )
  {
    if ( !a7 )
      return (unsigned int)-1073741811;
    v14 = v24;
    v20 = 1;
  }
  v25 = HIDWORD(v15) - v22;
  if ( v9 > HIDWORD(v15) - (int)v22 )
  {
    if ( a7 )
      goto LABEL_32;
    return (unsigned int)-1073741811;
  }
  v25 = v9;
  if ( v20 )
LABEL_32:
    v18 = (v25 * a1[2] * v14 + 7) >> 3;
  if ( (unsigned __int8)(BYTE2(BgInternal) - 2) <= 1u && (_BYTE)BgInternal )
  {
    v26 = v33;
    if ( v14 < v33 && BYTE2(BgInternal) == 2 )
    {
      v17 = 0;
      LODWORD(v30) = 0;
    }
    else
    {
      v17 = v16 - v14 - v17;
      LODWORD(v30) = v17;
    }
    if ( v25 < v9 && BYTE2(BgInternal) == 2 )
    {
      v27 = 0;
      HIDWORD(v30) = 0;
      goto LABEL_18;
    }
    v27 = v21 - v25 - HIDWORD(v30);
    HIDWORD(v30) = v27;
  }
  else
  {
    v27 = HIDWORD(v30);
    v26 = v33;
  }
  if ( ((BYTE2(BgInternal) - 1) & 0xFD) == 0 && (_BYTE)BgInternal )
  {
    v23 = v21;
    v32 = __PAIR64__(v16, v21);
    if ( BYTE2(BgInternal) == 1 )
    {
      if ( v14 >= v26 )
      {
        v27 = v16 - *a2 - v14;
        HIDWORD(v30) = v27;
      }
      else
      {
        v27 = 0;
        HIDWORD(v30) = 0;
      }
      v17 = a2[1];
      LODWORD(v30) = v17;
    }
    else
    {
      if ( v25 < v9 )
      {
        v17 = 0;
        LODWORD(v30) = 0;
      }
      else
      {
        v17 = v21 - a2[1] - v25;
        LODWORD(v30) = v17;
      }
      v27 = *a2;
      HIDWORD(v30) = *a2;
    }
  }
LABEL_18:
  if ( v23 < v17 || HIDWORD(v32) < v27 )
    return (unsigned int)-1073741811;
  if ( a4 )
  {
    a4[1] = v9;
    *a4 = v26;
  }
  if ( a5 )
    *a5 = v31;
  if ( a6 )
    *a6 = v34;
  *(_QWORD *)a3 = v32;
  a3[2] = v29;
  *(_QWORD *)a2 = v30;
  *a1 = v25;
  a1[1] = v14;
  a1[3] = v18;
  return v19;
}
