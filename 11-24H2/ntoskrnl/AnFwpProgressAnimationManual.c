/*
 * XREFs of AnFwpProgressAnimationManual @ 0x140BB427C
 * Callers:
 *     AnFwDisplayProgressIndicator @ 0x140BB3FD0 (AnFwDisplayProgressIndicator.c)
 * Callees:
 *     BgpTxtDisplayCharacter @ 0x14046ECF8 (BgpTxtDisplayCharacter.c)
 *     BgpFwQueryPerformanceCounter @ 0x1404B0FB4 (BgpFwQueryPerformanceCounter.c)
 *     LogFwStat @ 0x140BB6790 (LogFwStat.c)
 */

LONGLONG AnFwpProgressAnimationManual()
{
  LARGE_INTEGER v0; // rdi
  LONGLONG v1; // rbx
  LONGLONG v2; // rdx
  LONGLONG result; // rax
  unsigned __int16 v4; // cx
  __int16 v5; // r8
  __int16 v6; // ax
  __int16 v7; // ax
  __int64 v8; // rbx
  LARGE_INTEGER v9; // [rsp+50h] [rbp+8h] BYREF

  v9.QuadPart = 0LL;
  v0 = BgpFwQueryPerformanceCounter(&v9);
  v1 = v9.QuadPart / 33;
  v2 = 10 * (v9.QuadPart / 33) / 100;
  result = qword_140EEFD18;
  if ( v0.QuadPart + v2 >= qword_140EEFD18 + v9.QuadPart / 33 )
  {
    v4 = word_140E0EEEC;
    v5 = word_140E0EF88;
    if ( word_140E0EEEC != word_140E0EF88 && (qword_140EEFD18 - v0.QuadPart - v2) / v1 >= 2 )
      v4 = ++word_140E0EEEC;
    v6 = word_140E0EF8C;
    if ( v4 >= (unsigned __int16)word_140E0EF8C )
    {
      if ( v4 > (unsigned __int16)word_140E0EF88 )
        goto LABEL_10;
      LogFwStat(1LL, 1LL);
      BgpTxtDisplayCharacter(qword_140EF0330, (unsigned __int16)word_140E0EEEC, 0, 0LL, 0LL);
      LogFwStat(0LL, 1LL);
      v4 = word_140E0EEEC;
      v5 = word_140E0EF88;
      v6 = word_140E0EF8C;
    }
    if ( v4 == v5 )
    {
      v7 = v6 - word_140E0EF90;
      goto LABEL_11;
    }
LABEL_10:
    v7 = v4 + 1;
LABEL_11:
    word_140E0EEEC = v7;
    qword_140EEFD18 = v0.QuadPart;
    v8 = v1 / 2;
    result = *(_QWORD *)&BgpFwQueryPerformanceCounter(0LL) - v0.QuadPart;
    if ( result > v8 )
    {
      result = *(_QWORD *)&BgpFwQueryPerformanceCounter(0LL) - v8;
      qword_140EEFD18 = result;
    }
  }
  return result;
}
