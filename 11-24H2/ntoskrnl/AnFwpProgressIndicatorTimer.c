/*
 * XREFs of AnFwpProgressIndicatorTimer @ 0x140BB49D0
 * Callers:
 *     <none>
 * Callees:
 *     BgpTxtDisplayCharacter @ 0x140472A28 (BgpTxtDisplayCharacter.c)
 *     BgpFwReleaseLock @ 0x1404A9ACC (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x1404A9CA4 (BgpFwAcquireLock.c)
 *     BgpFwQueryPerformanceCounter @ 0x1404B67D4 (BgpFwQueryPerformanceCounter.c)
 */

void __fastcall AnFwpProgressIndicatorTimer(
        struct _KDPC *Dpc,
        PVOID DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  __int64 v4; // rdx
  LONGLONG v5; // rcx
  LARGE_INTEGER PerformanceCounter; // rax
  unsigned __int16 v7; // r9
  LARGE_INTEGER v8; // rbx
  __int16 v9; // r10
  __int16 v10; // ax
  __int16 v11; // ax
  __int64 v12; // rax
  LARGE_INTEGER v13[3]; // [rsp+40h] [rbp-18h] BYREF

  v13[0].QuadPart = 0LL;
  BgpFwAcquireLock();
  if ( byte_140EEFAC8 )
  {
    PerformanceCounter = BgpFwQueryPerformanceCounter(v13);
    v7 = word_140E0EE24;
    v8 = PerformanceCounter;
    v9 = word_140E0EEC8;
    v4 = (unsigned __int128)(v13[0].QuadPart * (__int128)0xF83E0F83E0F83E1LL) >> 64;
    v5 = v13[0].QuadPart / 33;
    if ( word_140E0EE24 != word_140E0EEC8 )
    {
      v4 = (qword_140EEFAD0 + 10 * v5 / 100 - PerformanceCounter.QuadPart) % v5;
      if ( (qword_140EEFAD0 + 10 * v5 / 100 - PerformanceCounter.QuadPart) / v5 >= 2 )
        v7 = ++word_140E0EE24;
    }
    v10 = word_140E0EE1C;
    if ( v7 >= (unsigned __int16)word_140E0EE1C )
    {
      if ( v7 > (unsigned __int16)word_140E0EEC8 )
        goto LABEL_5;
      qword_140EEFB40 = BgpFwQueryPerformanceCounter(v13).QuadPart;
      qword_140E64FE0[0] = qword_140EEFB40;
      BgpTxtDisplayCharacter(qword_140EF0110, (unsigned __int16)word_140E0EE24, 0, 0LL, 0LL);
      qword_140EEFB40 = BgpFwQueryPerformanceCounter(v13).QuadPart;
      v12 = *(_QWORD *)&BgpFwQueryPerformanceCounter(0LL) - qword_140E64FE0[0];
      qword_140EEFB88 = v12;
      if ( v12 < qword_140E0F088 )
        qword_140E0F088 = v12;
      if ( v12 > qword_140EEFB68 )
        qword_140EEFB68 = v12;
      qword_140EEFB30 += v12;
      ++dword_140EEFB10;
      qword_140EEFB38 += v12;
      v10 = word_140E0EE1C;
      v7 = word_140E0EE24;
      v9 = word_140E0EEC8;
    }
    if ( v7 == v9 )
    {
      v11 = v10 - word_140E0EE20;
      goto LABEL_6;
    }
LABEL_5:
    v11 = v7 + 1;
LABEL_6:
    word_140E0EE24 = v11;
    qword_140EEFAD0 = v8.QuadPart;
  }
  BgpFwReleaseLock(v5, v4);
}
