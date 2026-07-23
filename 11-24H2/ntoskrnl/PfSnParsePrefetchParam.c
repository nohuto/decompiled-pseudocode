/*
 * XREFs of PfSnParsePrefetchParam @ 0x14094A0DC
 * Callers:
 *     PfSnScanCommandLine @ 0x140949628 (PfSnScanCommandLine.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     _wtol @ 0x1404FBFF0 (_wtol.c)
 *     iswdigit @ 0x1404FC3D0 (iswdigit.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408A3890 (ExRaiseDatatypeMisalignment.c)
 *     PfSnFindString @ 0x14094A234 (PfSnFindString.c)
 */

__int64 __fastcall PfSnParsePrefetchParam(unsigned __int16 *a1, unsigned int *a2)
{
  unsigned int v4; // ebx
  __int64 String; // rax
  wint_t *v6; // rdi
  unsigned __int64 v7; // r14
  wchar_t *i; // rsi
  unsigned int v10; // eax
  UNICODE_STRING DestinationString; // [rsp+38h] [rbp-60h] BYREF
  wchar_t Str[15]; // [rsp+48h] [rbp-50h] BYREF
  wchar_t v13; // [rsp+66h] [rbp-32h] BYREF

  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, L"/prefetch:");
  v4 = 0;
  if ( *a1 && (*((_QWORD *)a1 + 1) & 1) != 0 )
    ExRaiseDatatypeMisalignment();
  String = PfSnFindString(a1, &DestinationString);
  if ( String )
  {
    v6 = (wint_t *)(String + DestinationString.Length);
    v7 = *((_QWORD *)a1 + 1) + *a1;
    for ( i = Str; (unsigned __int64)v6 < v7 && i < &v13 && *v6 != 32; ++i )
    {
      if ( !iswdigit(*v6) )
        return (unsigned int)-1073741811;
      *i = *v6++;
    }
    *i = 0;
    v10 = wtol(Str);
    if ( v10 > 0x10 )
      return (unsigned int)-1073741811;
    else
      *a2 = v10;
  }
  else
  {
    return (unsigned int)-1073741275;
  }
  return v4;
}
