/*
 * XREFs of LogFwStat @ 0x140BA4790
 * Callers:
 *     AnFwDisplayProgressIndicator @ 0x140BA1FD0 (AnFwDisplayProgressIndicator.c)
 *     AnFwpProgressAnimationManual @ 0x140BA227C (AnFwpProgressAnimationManual.c)
 *     AnFwDisplayFade @ 0x140BA36EC (AnFwDisplayFade.c)
 * Callees:
 *     BgpFwQueryPerformanceCounter @ 0x1404B6CE4 (BgpFwQueryPerformanceCounter.c)
 */

LARGE_INTEGER __fastcall LogFwStat(int a1, int a2, LARGE_INTEGER *a3)
{
  __int64 v4; // rdi
  LARGE_INTEGER result; // rax
  LARGE_INTEGER v6; // rax
  int v7; // edi
  int v8; // edi
  int v9; // edi
  int v10; // edi
  int v11; // edi
  int v12; // edi
  int v13; // edi

  v4 = a2;
  result = BgpFwQueryPerformanceCounter(a3);
  qword_140EEF888 = result.QuadPart;
  if ( a1 )
  {
    qword_140E64DA0[v4] = result.QuadPart;
    return result;
  }
  v6.QuadPart = *(_QWORD *)&BgpFwQueryPerformanceCounter(0LL) - qword_140E64DA0[v4];
  qword_140EEF8E0 = v6.QuadPart;
  if ( !(_DWORD)v4 )
  {
    if ( v6.QuadPart < qword_140E0EE70 )
      qword_140E0EE70 = v6.QuadPart;
    if ( v6.QuadPart > qword_140EEF898 )
      qword_140EEF898 = v6.QuadPart;
LABEL_8:
    qword_140EEF880 += v6.QuadPart;
    ++dword_140EEF8EC;
    goto LABEL_9;
  }
  v7 = v4 - 1;
  if ( !v7 )
  {
    if ( v6.QuadPart < qword_140E0EE70 )
      qword_140E0EE70 = v6.QuadPart;
    if ( v6.QuadPart > qword_140EEF898 )
      qword_140EEF898 = v6.QuadPart;
    qword_140EEF870 += v6.QuadPart;
    goto LABEL_8;
  }
  v8 = v7 - 1;
  if ( v8 )
  {
    v9 = v8 - 1;
    if ( !v9 )
    {
      qword_140EEF8B8 += v6.QuadPart;
      return (LARGE_INTEGER)qword_140EEF888;
    }
    v10 = v9 - 1;
    if ( !v10 )
    {
      qword_140EEF8C0 += v6.QuadPart;
      return (LARGE_INTEGER)qword_140EEF888;
    }
    v11 = v10 - 1;
    if ( v11 )
    {
      v12 = v11 - 1;
      if ( v12 )
      {
        v13 = v12 - 1;
        if ( v13 )
        {
          if ( v13 == 1 )
            qword_140E64BF8 += v6.QuadPart;
        }
        else
        {
          qword_140EEF8A0 = v6.QuadPart;
        }
      }
      else
      {
        if ( v6.QuadPart < qword_140E0EE78 )
          qword_140E0EE78 = v6.QuadPart;
        if ( v6.QuadPart > qword_140EEF8A8 )
          qword_140EEF8A8 = v6.QuadPart;
        qword_140EEF878 += v6.QuadPart;
        qword_140EEF868 += v6.QuadPart;
        ++dword_140EEF8B0;
      }
      return (LARGE_INTEGER)qword_140EEF888;
    }
    qword_140EEF878 += v6.QuadPart;
    qword_140EEF8F8 = v6.QuadPart;
  }
  else
  {
    qword_140EEF880 += v6.QuadPart;
    qword_140EEF8C8 = v6.QuadPart;
  }
LABEL_9:
  qword_140EEF868 += v6.QuadPart;
  return (LARGE_INTEGER)qword_140EEF888;
}
