/*
 * XREFs of ?GreIcmQueryBrushBitmap@@YAHPEAUHDC__@@PEAUHBRUSH__@@PEAUtagBITMAPINFO@@PEAXPEAK4PEAH@Z @ 0x1C02CDD50
 * Callers:
 *     NtGdiIcmBrushInfo @ 0x1C02CE930 (NtGdiIcmBrushInfo.c)
 * Callees:
 *     GreGetBitmapBitsSize @ 0x1C00C2398 (GreGetBitmapBitsSize.c)
 *     ??0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z @ 0x1C00D5DB4 (--0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z.c)
 *     ??1BRUSHSELOBJ@@QEAA@XZ @ 0x1C00D5E54 (--1BRUSHSELOBJ@@QEAA@XZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C011C090 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@IEAAXXZ @ 0x1C011C72C (-vUnlockFast@XDCOBJ@@IEAAXXZ.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C013D7D0 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     memset_0 @ 0x1C0140D40 (memset_0.c)
 *     GreGetDIBitsInternal @ 0x1C02DDBC0 (GreGetDIBitsInternal.c)
 */

__int64 __fastcall GreIcmQueryBrushBitmap(
        HDC a1,
        HBRUSH a2,
        struct tagBITMAPINFO *a3,
        __int64 a4,
        unsigned int *a5,
        unsigned int *a6,
        int *a7)
{
  unsigned int DIBitsInternal; // ebx
  unsigned int v8; // r15d
  int v9; // ebp
  int v11; // edi
  __int64 v12; // rcx
  BRUSH *v13; // rax
  int v14; // r8d
  unsigned int BitmapBitsSize; // edi
  LONG biHeight; // r9d
  int v18; // [rsp+30h] [rbp-B8h]
  int v19; // [rsp+30h] [rbp-B8h]
  _QWORD v20[2]; // [rsp+50h] [rbp-98h] BYREF
  _BYTE v21[32]; // [rsp+60h] [rbp-88h] BYREF
  BRUSH *v22[13]; // [rsp+80h] [rbp-68h] BYREF
  int v23; // [rsp+F0h] [rbp+8h]

  v23 = (int)a1;
  DIBitsInternal = 0;
  v8 = 0;
  v9 = 0;
  v11 = (int)a1;
  if ( !a3 || !a6 || !a7 || !a5 )
    return 0LL;
  DCOBJ::DCOBJ((DCOBJ *)v20, a1);
  v12 = v20[0];
  if ( v20[0] && (*(_DWORD *)(v20[0] + 120LL) & 1) != 0 )
  {
    BRUSHSELOBJ::BRUSHSELOBJ((BRUSHSELOBJ *)v22, a2);
    if ( !v22[0] )
      goto LABEL_22;
    if ( (*((_DWORD *)v22[0] + 10) & 0x80u) == 0 )
      goto LABEL_22;
    v8 = *((_DWORD *)v22[0] + 21);
    if ( v8 )
      goto LABEL_22;
    if ( BRUSH::hFindIcmDIB(v22[0], *(void **)(*(_QWORD *)(v20[0] + 976LL) + 248LL)) )
    {
      v9 = 1;
    }
    else
    {
      memset_0(&a3->bmiHeader.biWidth, 0, 0x424uLL);
      v13 = v22[0];
      a3->bmiHeader.biSize = 44;
      DIBitsInternal = GreGetDIBitsInternal(v11, *((_QWORD *)v13 + 3), v14, 0, 0LL, a3, v18, 0, 1064);
      if ( DIBitsInternal )
      {
        BitmapBitsSize = GreGetBitmapBitsSize((__int64)a3);
        if ( BitmapBitsSize )
        {
          if ( a4 )
          {
            if ( BitmapBitsSize > *a5 )
              goto LABEL_22;
            biHeight = -a3->bmiHeader.biHeight;
            if ( a3->bmiHeader.biHeight >= 0 )
              biHeight = a3->bmiHeader.biHeight;
            DIBitsInternal = GreGetDIBitsInternal(
                               v23,
                               *((_QWORD *)v22[0] + 3),
                               a4,
                               biHeight,
                               a4,
                               a3,
                               v19,
                               BitmapBitsSize,
                               1064);
          }
          else
          {
            DIBitsInternal = 1;
          }
          *a5 = BitmapBitsSize;
          goto LABEL_22;
        }
        DIBitsInternal = 0;
      }
    }
LABEL_22:
    BRUSHSELOBJ::~BRUSHSELOBJ((BRUSHSELOBJ *)v22);
    v12 = v20[0];
  }
  *a6 = v8;
  *a7 = v9;
  if ( v12 )
    XDCOBJ::vUnlockFast((XDCOBJ *)v20);
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>((__int64)v21);
  return DIBitsInternal;
}
