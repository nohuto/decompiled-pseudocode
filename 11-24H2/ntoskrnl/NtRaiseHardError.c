/*
 * XREFs of NtRaiseHardError @ 0x140A452A0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408A3890 (ExRaiseDatatypeMisalignment.c)
 *     ExRaiseHardError @ 0x140A44F60 (ExRaiseHardError.c)
 *     ExpRaiseHardError @ 0x140A45514 (ExpRaiseHardError.c)
 */

NTSTATUS __cdecl NtRaiseHardError(
        NTSTATUS ErrorStatus,
        ULONG NumberOfParameters,
        ULONG UnicodeStringParameterMask,
        PULONG_PTR Parameters,
        ULONG ValidResponseOptions,
        PULONG Response)
{
  __int64 v7; // rbx
  __int64 v9; // rcx
  unsigned int i; // eax
  _OWORD *v11; // rdx
  __int64 v12; // rcx
  NTSTATUS v13; // edx
  ULONG v15; // [rsp+40h] [rbp-F8h] BYREF
  unsigned int v16; // [rsp+44h] [rbp-F4h]
  NTSTATUS v17; // [rsp+48h] [rbp-F0h]
  _QWORD Src[5]; // [rsp+50h] [rbp-E8h] BYREF
  _WORD v19[21]; // [rsp+78h] [rbp-C0h] BYREF

  v7 = NumberOfParameters;
  v15 = 0;
  if ( NumberOfParameters > 5 )
    return -1073741584;
  if ( !Parameters )
  {
    if ( !NumberOfParameters )
      goto LABEL_4;
    return -1073741584;
  }
  if ( !NumberOfParameters )
    return -1073741584;
LABEL_4:
  if ( !KeGetCurrentThread()->PreviousMode )
  {
    v13 = ExRaiseHardError(
            ErrorStatus,
            NumberOfParameters,
            UnicodeStringParameterMask,
            (char *)Parameters,
            ValidResponseOptions,
            (int *)&v15);
    *Response = v15;
    return v13;
  }
  if ( ValidResponseOptions <= 6 || ValidResponseOptions - 7 <= 1 )
  {
    v9 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)Response < 0x7FFFFFFF0000LL )
      v9 = (__int64)Response;
    *(_DWORD *)v9 = *(_DWORD *)v9;
    if ( Parameters )
    {
      if ( 8LL * NumberOfParameters && ((unsigned __int8)Parameters & 7) != 0 )
        ExRaiseDatatypeMisalignment();
      memmove(Src, Parameters, 8LL * NumberOfParameters);
      memmove(v19, Src, 8 * v7);
      if ( UnicodeStringParameterMask )
      {
        for ( i = 0; ; ++i )
        {
          v16 = i;
          if ( i >= (unsigned int)v7 )
            break;
          if ( _bittest((const int *)&UnicodeStringParameterMask, i) )
          {
            v11 = (_OWORD *)Src[i];
            if ( ((unsigned __int8)v11 & 7) != 0 )
              ExRaiseDatatypeMisalignment();
            v12 = 8LL * i;
            *(_OWORD *)&v19[v12 + 20] = *v11;
            *(_QWORD *)&v19[4 * i] = &v19[v12 + 20];
            i = v16;
          }
        }
      }
    }
    v13 = ExpRaiseHardError(
            ErrorStatus,
            v7,
            UnicodeStringParameterMask,
            (unsigned int)Src,
            (__int64)v19,
            ValidResponseOptions,
            (__int64)&v15);
    v17 = v13;
    *Response = v15;
    return v13;
  }
  return -1073741582;
}
