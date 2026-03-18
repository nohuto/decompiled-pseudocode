/*
 * XREFs of ??0UNDORENDERLOCKCOUNTS@@QEAA@XZ @ 0x1401742FC
 * Callers:
 *     ?GrepStretchBlt@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHHHKKK@Z @ 0x1400D0DEC (-GrepStretchBlt@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHHHKKK@Z.c)
 * Callees:
 *     W32GetCurrentThreadNonPaged @ 0x14026E814 (W32GetCurrentThreadNonPaged.c)
 */

UNDORENDERLOCKCOUNTS *__fastcall UNDORENDERLOCKCOUNTS::UNDORENDERLOCKCOUNTS(UNDORENDERLOCKCOUNTS *this, __int64 a2)
{
  __int64 *CurrentThreadNonPaged; // rax
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v6; // rcx

  CurrentThreadNonPaged = (__int64 *)W32GetCurrentThreadNonPaged(this, a2);
  if ( CurrentThreadNonPaged )
    v4 = *CurrentThreadNonPaged;
  else
    v4 = 0LL;
  v5 = v4 + 8;
  v6 = -v4;
  *((_QWORD *)this + 1) = v5 & -(__int64)(v6 != 0);
  if ( (v5 & -(__int64)(v6 != 0)) != 0 )
  {
    *(_DWORD *)this = *(_DWORD *)((v5 & -(__int64)(v6 != 0)) + 0x15C);
    *((_DWORD *)this + 1) = *(_DWORD *)((v5 & -(__int64)(v6 != 0)) + 0x160);
    *(_DWORD *)((v5 & -(__int64)(v6 != 0)) + 0x15C) = 0;
    *(_DWORD *)(*((_QWORD *)this + 1) + 352LL) = 0;
  }
  return this;
}
