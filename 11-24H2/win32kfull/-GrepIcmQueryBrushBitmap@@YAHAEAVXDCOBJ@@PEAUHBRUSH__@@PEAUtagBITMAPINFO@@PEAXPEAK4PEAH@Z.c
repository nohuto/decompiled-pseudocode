/*
 * XREFs of ?GrepIcmQueryBrushBitmap@@YAHAEAVXDCOBJ@@PEAUHBRUSH__@@PEAUtagBITMAPINFO@@PEAXPEAK4PEAH@Z @ 0x14033B334
 * Callers:
 *     NtGdiIcmBrushInfo @ 0x14033C040 (NtGdiIcmBrushInfo.c)
 * Callees:
 *     ??1OPTAPIDCOBJ@@QEAA@XZ @ 0x14001980C (--1OPTAPIDCOBJ@@QEAA@XZ.c)
 *     ?GrepGetDIBits@@YAHAEAVOPTAPIDCOBJ@@PEAUHBITMAP__@@IIAEAV?$umptr_w@E@@PEAUtagBITMAPINFO@@III@Z @ 0x14001EB5C (-GrepGetDIBits@@YAHAEAVOPTAPIDCOBJ@@PEAUHBITMAP__@@IIAEAV-$umptr_w@E@@PEAUtagBITMAPINFO@@III@Z.c)
 *     ??0OPTAPIDCOBJ@@QEAA@AEAVXDCOBJ@@@Z @ 0x1400DF75C (--0OPTAPIDCOBJ@@QEAA@AEAVXDCOBJ@@@Z.c)
 *     ??0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z @ 0x1400E3FF0 (--0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z.c)
 *     ??1BRUSHSELOBJ@@QEAA@XZ @ 0x1400E4080 (--1BRUSHSELOBJ@@QEAA@XZ.c)
 *     GreGetBitmapBitsSize @ 0x14016305C (GreGetBitmapBitsSize.c)
 *     memset_0 @ 0x140340780 (memset_0.c)
 */

__int64 __fastcall GrepIcmQueryBrushBitmap(
        struct Gre::Base::SESSION_GLOBALS **a1,
        HBRUSH a2,
        struct tagBITMAPINFO *a3,
        __int64 a4,
        unsigned int *a5,
        unsigned int *a6,
        int *a7)
{
  unsigned int DIBits; // edi
  unsigned int v8; // r15d
  int v9; // r12d
  unsigned int *v12; // rbx
  unsigned int BitmapBitsSize; // eax
  unsigned int v14; // ebx
  LONG biHeight; // r9d
  unsigned int v16; // eax
  __int64 v18[3]; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v19; // [rsp+70h] [rbp-98h]
  __int64 v20[3]; // [rsp+78h] [rbp-90h] BYREF
  __int16 v21; // [rsp+90h] [rbp-78h]
  BRUSH *v22[6]; // [rsp+98h] [rbp-70h] BYREF
  _BYTE v23[128]; // [rsp+C8h] [rbp-40h] BYREF
  _BYTE v24[128]; // [rsp+148h] [rbp+40h] BYREF

  DIBits = 0;
  v8 = 0;
  v9 = 0;
  if ( !a3 )
    return 0LL;
  v12 = a6;
  if ( !a6 || !a7 || !a5 )
    return 0LL;
  if ( (*((_DWORD *)*a1 + 30) & 1) != 0 )
  {
    BRUSHSELOBJ::BRUSHSELOBJ((BRUSHSELOBJ *)v22, a2);
    if ( v22[0] )
    {
      if ( (*((_DWORD *)v22[0] + 10) & 0x80u) != 0 )
      {
        v8 = *((_DWORD *)v22[0] + 21);
        if ( !v8 )
        {
          if ( BRUSH::hFindIcmDIB(v22[0], *(void **)(*((_QWORD *)*a1 + 122) + 248LL)) )
          {
            v9 = 1;
          }
          else
          {
            memset_0(&a3->bmiHeader.biWidth, 0, 0x424uLL);
            a3->bmiHeader.biSize = 44;
            LOWORD(v19) = 0;
            memset(v18, 0, sizeof(v18));
            OPTAPIDCOBJ::OPTAPIDCOBJ((OPTAPIDCOBJ *)v23, a1);
            DIBits = GrepGetDIBits(
                       (OPTAPIDCOBJ *)v23,
                       *((HSURF *)v22[0] + 3),
                       0,
                       0,
                       (__int64)v18,
                       &a3->bmiHeader.biSize,
                       0,
                       0,
                       0x428u);
            if ( DIBits )
            {
              BitmapBitsSize = GreGetBitmapBitsSize((__int64)a3);
              v14 = BitmapBitsSize;
              if ( BitmapBitsSize )
              {
                if ( a4 )
                {
                  if ( BitmapBitsSize <= *a5 )
                  {
                    v20[0] = a4;
                    v20[2] = 0LL;
                    v20[1] = BitmapBitsSize;
                    v21 = 0;
                    OPTAPIDCOBJ::OPTAPIDCOBJ((OPTAPIDCOBJ *)v24, a1);
                    biHeight = -a3->bmiHeader.biHeight;
                    if ( a3->bmiHeader.biHeight > 0 )
                      biHeight = a3->bmiHeader.biHeight;
                    v16 = GrepGetDIBits(
                            (OPTAPIDCOBJ *)v23,
                            *((HSURF *)v22[0] + 3),
                            0,
                            biHeight,
                            (__int64)v20,
                            &a3->bmiHeader.biSize,
                            0,
                            v14,
                            0x428u);
                    *a5 = v14;
                    DIBits = v16;
                    OPTAPIDCOBJ::~OPTAPIDCOBJ((OPTAPIDCOBJ *)v24);
                  }
                }
                else
                {
                  *a5 = BitmapBitsSize;
                  DIBits = 1;
                }
              }
              else
              {
                DIBits = 0;
              }
              v12 = a6;
            }
            OPTAPIDCOBJ::~OPTAPIDCOBJ((OPTAPIDCOBJ *)v23);
          }
        }
      }
    }
    BRUSHSELOBJ::~BRUSHSELOBJ((BRUSHSELOBJ *)v22);
  }
  *v12 = v8;
  *a7 = v9;
  return DIBits;
}
