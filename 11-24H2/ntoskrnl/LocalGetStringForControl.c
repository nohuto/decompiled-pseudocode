/*
 * XREFs of LocalGetStringForControl @ 0x140A3A444
 * Callers:
 *     LocalConvertSDToStringSD_Rev1 @ 0x1408673C8 (LocalConvertSDToStringSD_Rev1.c)
 * Callees:
 *     __report_rangecheckfailure @ 0x1404F2ABC (__report_rangecheckfailure.c)
 *     wcscpy_s @ 0x1405020A0 (wcscpy_s.c)
 *     wcsncpy_s @ 0x140502240 (wcsncpy_s.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     SddlpAlloc @ 0x140867ED4 (SddlpAlloc.c)
 */

__int64 __fastcall LocalGetStringForControl(unsigned __int16 a1, int a2, wchar_t **a3)
{
  int v3; // r15d
  unsigned int v6; // ebx
  unsigned int i; // edi
  unsigned int v8; // edx
  size_t v9; // rcx
  unsigned int v10; // ebx
  wchar_t *v11; // rax
  wchar_t Src[256]; // [rsp+20h] [rbp-238h] BYREF

  v3 = a1;
  v6 = 0;
  if ( !a3 )
    return 87LL;
  *a3 = 0LL;
  for ( i = 0; i < 6; ++i )
  {
    if ( (a2 & (__int64)(&ControlLookup)[3 * i + 1]) == a2 )
    {
      v8 = *((_DWORD *)&ControlLookup + 6 * i + 2);
      if ( v8 + v6 >= 0x100 )
        return 87LL;
      if ( (v3 & *((_DWORD *)&ControlLookup + 6 * i + 3)) != 0 )
      {
        wcsncpy_s(&Src[v6], 256LL - v6, (&ControlLookup)[3 * i], v8);
        v6 += *((_DWORD *)&ControlLookup + 6 * i + 2);
      }
    }
  }
  if ( 2 * (unsigned __int64)v6 >= 0x200 )
    _report_rangecheckfailure();
  Src[v6] = 0;
  if ( !v6 )
    return 0LL;
  v9 = 2LL * (v6 + 1);
  v10 = v6 + 1;
  v11 = (wchar_t *)SddlpAlloc(v9);
  *a3 = v11;
  if ( v11 )
  {
    wcscpy_s(v11, v10, Src);
    return 0LL;
  }
  return 8LL;
}
