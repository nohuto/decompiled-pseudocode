/*
 * XREFs of AnFwpProgressAnimationManual @ 0x140BB227C
 * Callers:
 *     AnFwDisplayProgressIndicator @ 0x140BB1FD0 (AnFwDisplayProgressIndicator.c)
 * Callees:
 *     BgpTxtDisplayCharacter @ 0x140472A28 (BgpTxtDisplayCharacter.c)
 *     BgpFwQueryPerformanceCounter @ 0x1404B67D4 (BgpFwQueryPerformanceCounter.c)
 *     LogFwStat @ 0x140BB4790 (LogFwStat.c)
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
  result = qword_140EEFAD0;
  if ( v0.QuadPart + v2 >= qword_140EEFAD0 + v9.QuadPart / 33 )
  {
    v4 = word_140E0EE24;
    v5 = word_140E0EEC8;
    if ( word_140E0EE24 != word_140E0EEC8 && (qword_140EEFAD0 - v0.QuadPart - v2) / v1 >= 2 )
      v4 = ++word_140E0EE24;
    v6 = word_140E0EE1C;
    if ( v4 >= (unsigned __int16)word_140E0EE1C )
    {
      if ( v4 > (unsigned __int16)word_140E0EEC8 )
        goto LABEL_10;
      LogFwStat(1LL, 1LL);
      BgpTxtDisplayCharacter(qword_140EF0110, (unsigned __int16)word_140E0EE24, 0, 0LL, 0LL);
      LogFwStat(0LL, 1LL);
      v4 = word_140E0EE24;
      v5 = word_140E0EEC8;
      v6 = word_140E0EE1C;
    }
    if ( v4 == v5 )
    {
      v7 = v6 - word_140E0EE20;
      goto LABEL_11;
    }
LABEL_10:
    v7 = v4 + 1;
LABEL_11:
    word_140E0EE24 = v7;
    qword_140EEFAD0 = v0.QuadPart;
    v8 = v1 / 2;
    result = *(_QWORD *)&BgpFwQueryPerformanceCounter(0LL) - v0.QuadPart;
    if ( result > v8 )
    {
      result = *(_QWORD *)&BgpFwQueryPerformanceCounter(0LL) - v8;
      qword_140EEFAD0 = result;
    }
  }
  return result;
}
