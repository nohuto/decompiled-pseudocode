/*
 * XREFs of KiVerifyPdata @ 0x140C2C470
 * Callers:
 *     KiVerifyScopesExecute @ 0x140C2C5B0 (KiVerifyScopesExecute.c)
 * Callees:
 *     RtlpxLookupFunctionTable @ 0x140233240 (RtlpxLookupFunctionTable.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 */

unsigned __int64 __fastcall KiVerifyPdata(ULONG_PTR BugCheckParameter2)
{
  unsigned __int64 result; // rax
  unsigned int *v3; // r9
  unsigned __int64 v4; // rdx
  unsigned int *v5; // rdx
  unsigned int *BugCheckParameter4; // rcx
  __int128 v7; // [rsp+30h] [rbp-28h] BYREF
  ULONG_PTR BugCheckParameter3; // [rsp+40h] [rbp-18h]

  BugCheckParameter3 = 0LL;
  v7 = 0LL;
  if ( BugCheckParameter2 < *((_QWORD *)&xmmword_141200030 + 1)
    || (result = *((_QWORD *)&xmmword_141200030 + 1) + (unsigned int)qword_141200040, BugCheckParameter2 >= result) )
  {
    result = (unsigned __int64)RtlpxLookupFunctionTable(BugCheckParameter2, (__int64)&v7);
    v3 = (unsigned int *)result;
  }
  else
  {
    v3 = (unsigned int *)xmmword_141200030;
    BugCheckParameter3 = qword_141200040;
  }
  if ( v3 )
  {
    v4 = HIDWORD(BugCheckParameter3) / 0xCuLL;
    if ( HIDWORD(BugCheckParameter3) != 12 * v4 )
      KeBugCheckEx(0x14Du, 0xFFFFFFFDuLL, BugCheckParameter2, HIDWORD(BugCheckParameter3), 0LL);
    result = (unsigned int)v4;
    v5 = &v3[3 * (unsigned int)v4];
    BugCheckParameter4 = 0LL;
    while ( v3 != v5 )
    {
      if ( BugCheckParameter4 )
      {
        result = *v3;
        if ( *BugCheckParameter4 >= (unsigned int)result )
          KeBugCheckEx(0x14Du, 0xFFFFFFFEuLL, BugCheckParameter2, (ULONG_PTR)v3, (ULONG_PTR)BugCheckParameter4);
      }
      BugCheckParameter4 = v3;
      v3 += 3;
    }
  }
  return result;
}
