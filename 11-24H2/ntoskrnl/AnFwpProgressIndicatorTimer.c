/*
 * XREFs of AnFwpProgressIndicatorTimer @ 0x140BB69D0
 * Callers:
 *     <none>
 * Callees:
 *     BgpTxtDisplayCharacter @ 0x14046ECF8 (BgpTxtDisplayCharacter.c)
 *     BgpFwReleaseLock @ 0x1404A3D9C (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x1404A3F74 (BgpFwAcquireLock.c)
 *     BgpFwQueryPerformanceCounter @ 0x1404B0FB4 (BgpFwQueryPerformanceCounter.c)
 */

void __fastcall AnFwpProgressIndicatorTimer(
        struct _KDPC *Dpc,
        __int64 DeferredContext,
        __int64 SystemArgument1,
        __int64 SystemArgument2)
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
  BgpFwAcquireLock((__int64)Dpc, DeferredContext, SystemArgument1, SystemArgument2);
  if ( byte_140EEFD21 )
  {
    PerformanceCounter = BgpFwQueryPerformanceCounter(v13);
    v7 = word_140E0EEEC;
    v8 = PerformanceCounter;
    v9 = word_140E0EF88;
    v4 = (unsigned __int128)(v13[0].QuadPart * (__int128)0xF83E0F83E0F83E1LL) >> 64;
    v5 = v13[0].QuadPart / 33;
    if ( word_140E0EEEC != word_140E0EF88 )
    {
      v4 = (qword_140EEFD18 + 10 * v5 / 100 - PerformanceCounter.QuadPart) % v5;
      if ( (qword_140EEFD18 + 10 * v5 / 100 - PerformanceCounter.QuadPart) / v5 >= 2 )
        v7 = ++word_140E0EEEC;
    }
    v10 = word_140E0EF8C;
    if ( v7 >= (unsigned __int16)word_140E0EF8C )
    {
      if ( v7 > (unsigned __int16)word_140E0EF88 )
        goto LABEL_5;
      qword_140EEFDD8 = BgpFwQueryPerformanceCounter(v13).QuadPart;
      qword_140E65160[0] = qword_140EEFDD8;
      BgpTxtDisplayCharacter(qword_140EF0330, (unsigned __int16)word_140E0EEEC, 0, 0LL, 0LL);
      qword_140EEFDD8 = BgpFwQueryPerformanceCounter(v13).QuadPart;
      v12 = *(_QWORD *)&BgpFwQueryPerformanceCounter(0LL) - qword_140E65160[0];
      qword_140EEFD80 = v12;
      if ( v12 < qword_140E0F148 )
        qword_140E0F148 = v12;
      if ( v12 > qword_140EEFD68 )
        qword_140EEFD68 = v12;
      qword_140EEFDD0 += v12;
      ++dword_140EEFDB4;
      qword_140EEFDE0 += v12;
      v10 = word_140E0EF8C;
      v7 = word_140E0EEEC;
      v9 = word_140E0EF88;
    }
    if ( v7 == v9 )
    {
      v11 = v10 - word_140E0EF90;
      goto LABEL_6;
    }
LABEL_5:
    v11 = v7 + 1;
LABEL_6:
    word_140E0EEEC = v11;
    qword_140EEFD18 = v8.QuadPart;
  }
  BgpFwReleaseLock(v5, v4);
}
