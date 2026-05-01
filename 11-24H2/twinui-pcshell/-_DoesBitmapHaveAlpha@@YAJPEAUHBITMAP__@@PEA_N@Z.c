/*
 * XREFs of ?_DoesBitmapHaveAlpha@@YAJPEAUHBITMAP__@@PEA_N@Z @ 0x1800456E4
 * Callers:
 *     ?CreateBitmapFromIconWithAlpha@@YAJPEAUHICON__@@HPEAPEAUHBITMAP__@@@Z @ 0x1801F4D30 (-CreateBitmapFromIconWithAlpha@@YAJPEAUHICON__@@HPEAPEAUHBITMAP__@@@Z.c)
 * Callees:
 *     ?ResultFromKnownLastError@@YAJXZ @ 0x180033234 (-ResultFromKnownLastError@@YAJXZ.c)
 *     ?_CoTaskMemSize@CTCoAllocPolicy@@CA_KPEAX@Z @ 0x180045678 (-_CoTaskMemSize@CTCoAllocPolicy@@CA_KPEAX@Z.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     memset_0 @ 0x1802D25CC (memset_0.c)
 */

__int64 __fastcall _DoesBitmapHaveAlpha(HBITMAP hbm, bool *a2)
{
  signed int Error; // ebx
  unsigned __int64 v5; // rcx
  int v6; // esi
  size_t v7; // rax
  HDC DC; // r14
  bool v9; // cl
  int v10; // edx
  _BYTE *v11; // r8
  char *v13; // rax
  char *lpvBits; // rdi
  __int128 pv; // [rsp+40h] [rbp-29h] BYREF
  __int128 v16; // [rsp+50h] [rbp-19h]
  struct tagBITMAPINFO bmi; // [rsp+68h] [rbp-1h] BYREF

  *a2 = 0;
  pv = 0LL;
  v16 = 0LL;
  if ( GetObjectW(hbm, 32, &pv) )
  {
    Error = 0;
  }
  else
  {
    Error = ResultFromKnownLastError();
    if ( Error < 0 )
      return (unsigned int)Error;
  }
  if ( (_DWORD)v16 == 2097153 )
  {
    v5 = DWORD2(pv) * (unsigned __int64)DWORD1(pv);
    if ( v5 <= 0xFFFFFFFF && (v6 = DWORD2(pv) * DWORD1(pv), is_mul_ok((unsigned int)v5, 4uLL)) )
    {
      v13 = (char *)CoTaskMemAlloc(4LL * (unsigned int)v5);
      lpvBits = v13;
      if ( v13 )
      {
        v7 = CTCoAllocPolicy::_CoTaskMemSize(v13);
        memset_0(lpvBits, 0, v7);
        DC = GetDC(0LL);
        if ( DC )
        {
          memset(&bmi.bmiHeader.biCompression, 0, 28);
          *(_QWORD *)&bmi.bmiHeader.biWidth = *(_QWORD *)((char *)&pv + 4);
          bmi.bmiHeader.biSize = 40;
          *(_DWORD *)&bmi.bmiHeader.biPlanes = 2097153;
          if ( GetDIBits(DC, hbm, 0, DWORD2(pv), lpvBits, &bmi, 0) )
          {
            Error = 0;
            v9 = 0;
            v10 = 0;
            if ( v6 > 0 )
            {
              v11 = lpvBits + 3;
              do
              {
                if ( v9 )
                  break;
                v9 = *v11 != 0;
                ++v10;
                v11 += 4;
              }
              while ( v10 < v6 );
            }
            *a2 = v9;
          }
          else
          {
            Error = -2147467259;
          }
          ReleaseDC(0LL, DC);
        }
        else
        {
          Error = -2147467259;
        }
        CoTaskMemFree(lpvBits);
      }
      else
      {
        return (unsigned int)-2147024882;
      }
    }
    else
    {
      return (unsigned int)-2147024362;
    }
  }
  return (unsigned int)Error;
}
