/*
 * XREFs of ?do_unshift@?$codecvt@_WDH@std@@MEBAHAEAHPEAD1AEAPEAD@Z @ 0x18001BB00
 * Callers:
 *     <none>
 * Callees:
 *     _Wcrtomb @ 0x180005FAC (_Wcrtomb.c)
 *     memcpy_0 @ 0x1800227D6 (memcpy_0.c)
 *     __security_check_cookie @ 0x1800B6A50 (__security_check_cookie.c)
 */

__int64 __fastcall std::codecvt<wchar_t,char,int>::do_unshift(
        __int64 a1,
        mbstate_t *a2,
        void *a3,
        __int64 a4,
        void **a5)
{
  unsigned int v7; // ebx
  unsigned int Wchar; // r15d
  int v9; // eax
  int v10; // eax
  __int64 v11; // rdi
  char Src[8]; // [rsp+20h] [rbp-38h] BYREF

  v7 = 0;
  *a5 = a3;
  Wchar = a2->_Wchar;
  v9 = Wcrtomb(Src, 0, a2, (const _Cvtvec *)(a1 + 16));
  if ( v9 > 0 )
  {
    v10 = v9 - 1;
    v11 = v10;
    if ( a4 - (__int64)*a5 >= v10 )
    {
      if ( v10 > 0 )
      {
        memcpy_0(*a5, Src, v10);
        *a5 = (char *)*a5 + v11;
      }
    }
    else
    {
      a2->_Wchar = Wchar;
      return 1;
    }
  }
  else
  {
    return 2;
  }
  return v7;
}
