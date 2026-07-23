/*
 * XREFs of RtlpSaveX87State @ 0x1800DC190
 * Callers:
 *     RtlUnwindEx @ 0x180041E80 (RtlUnwindEx.c)
 * Callees:
 *     RtlGetEnabledExtendedFeatures @ 0x1800DC230 (RtlGetEnabledExtendedFeatures.c)
 *     __security_check_cookie @ 0x180163D80 (__security_check_cookie.c)
 *     memmove @ 0x1801657C0 (memmove.c)
 *     memset$thunk$772440563353939046 @ 0x180171030 (memset$thunk$772440563353939046.c)
 */

void *__fastcall RtlpSaveX87State(_QWORD *a1)
{
  __int64 v2; // xmm1_8
  void *result; // rax
  __int128 v4; // [rsp+20h] [rbp-218h] BYREF
  __int64 v5; // [rsp+30h] [rbp-208h]
  _BYTE Src[480]; // [rsp+40h] [rbp-1F8h] BYREF

  memset_thunk_772440563353939046(&v4, 0, 0x200uLL);
  if ( RtlGetEnabledExtendedFeatures(0LL) )
  {
    result = 0LL;
    _xsave(a1 + 32, 0LL);
  }
  else
  {
    _fxsave(&v4);
    v2 = v5;
    *((_OWORD *)a1 + 16) = v4;
    a1[34] = v2;
    return memmove(a1 + 36, Src, 0x80uLL);
  }
  return result;
}
