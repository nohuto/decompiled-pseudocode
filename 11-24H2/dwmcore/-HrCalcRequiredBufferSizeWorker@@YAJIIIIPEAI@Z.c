/*
 * XREFs of ?HrCalcRequiredBufferSizeWorker@@YAJIIIIPEAI@Z @ 0x180025BF4
 * Callers:
 *     ?HrCheckBufferSize@@YAJW4DXGI_FORMAT@@IPEBUWICRect@@I@Z @ 0x1800256E4 (-HrCheckBufferSize@@YAJW4DXGI_FORMAT@@IPEBUWICRect@@I@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall HrCalcRequiredBufferSizeWorker(
        unsigned int a1,
        unsigned int a2,
        unsigned int a3,
        int a4,
        unsigned int *a5)
{
  unsigned int v5; // r10d
  __int64 v6; // r11
  unsigned int v7; // ebx
  unsigned int v8; // r9d
  unsigned __int64 v9; // rcx
  unsigned int v11; // edx
  unsigned __int64 v12; // rcx
  unsigned int v13; // [rsp+20h] [rbp-18h]

  v5 = 0;
  v6 = a2;
  v7 = 0;
  if ( !a4 )
    goto LABEL_11;
  v8 = a4 - 1;
  v9 = a3 * (unsigned __int64)a1;
  if ( v9 <= 0xFFFFFFFF )
  {
    if ( (int)v9 + 7 < (unsigned int)v9 )
    {
      v13 = 1633;
      goto LABEL_4;
    }
    v11 = (unsigned int)(v9 + 7) >> 3;
    if ( (unsigned int)v6 < v11 )
    {
      v7 = -2147024809;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0x666u, 0LL);
      return v7;
    }
    v12 = v6 * v8;
    if ( v12 > 0xFFFFFFFF )
    {
      v13 = 1641;
      goto LABEL_4;
    }
    if ( (unsigned int)v12 + v11 < (unsigned int)v12 )
    {
      v13 = 1642;
      goto LABEL_4;
    }
    v5 = v12 + v11;
LABEL_11:
    *a5 = v5;
    return v7;
  }
  v13 = 1632;
LABEL_4:
  v7 = -2147024362;
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024362, v13, 0LL);
  return v7;
}
