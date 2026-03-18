/*
 * XREFs of LogFwStat @ 0x140BB4790
 * Callers:
 *     AnFwDisplayProgressIndicator @ 0x140BB1FD0 (AnFwDisplayProgressIndicator.c)
 *     AnFwpProgressAnimationManual @ 0x140BB227C (AnFwpProgressAnimationManual.c)
 *     AnFwDisplayFade @ 0x140BB36EC (AnFwDisplayFade.c)
 * Callees:
 *     BgpFwQueryPerformanceCounter @ 0x1404B67D4 (BgpFwQueryPerformanceCounter.c)
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
  qword_140EEFB40 = result.QuadPart;
  if ( a1 )
  {
    qword_140E64FE0[v4] = result.QuadPart;
    return result;
  }
  v6.QuadPart = *(_QWORD *)&BgpFwQueryPerformanceCounter(0LL) - qword_140E64FE0[v4];
  qword_140EEFB88 = v6.QuadPart;
  if ( !(_DWORD)v4 )
  {
    if ( v6.QuadPart < qword_140E0F088 )
      qword_140E0F088 = v6.QuadPart;
    if ( v6.QuadPart > qword_140EEFB68 )
      qword_140EEFB68 = v6.QuadPart;
LABEL_8:
    qword_140EEFB30 += v6.QuadPart;
    ++dword_140EEFB10;
    goto LABEL_9;
  }
  v7 = v4 - 1;
  if ( !v7 )
  {
    if ( v6.QuadPart < qword_140E0F088 )
      qword_140E0F088 = v6.QuadPart;
    if ( v6.QuadPart > qword_140EEFB68 )
      qword_140EEFB68 = v6.QuadPart;
    qword_140EEFB28 += v6.QuadPart;
    goto LABEL_8;
  }
  v8 = v7 - 1;
  if ( v8 )
  {
    v9 = v8 - 1;
    if ( !v9 )
    {
      qword_140EEFB70 += v6.QuadPart;
      return (LARGE_INTEGER)qword_140EEFB40;
    }
    v10 = v9 - 1;
    if ( !v10 )
    {
      qword_140EEFB78 += v6.QuadPart;
      return (LARGE_INTEGER)qword_140EEFB40;
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
            qword_140E64E38 += v6.QuadPart;
        }
        else
        {
          qword_140EEFB48 = v6.QuadPart;
        }
      }
      else
      {
        if ( v6.QuadPart < qword_140E0F078 )
          qword_140E0F078 = v6.QuadPart;
        if ( v6.QuadPart > qword_140EEFB58 )
          qword_140EEFB58 = v6.QuadPart;
        qword_140EEFB20 += v6.QuadPart;
        qword_140EEFB38 += v6.QuadPart;
        ++dword_140EEFB50;
      }
      return (LARGE_INTEGER)qword_140EEFB40;
    }
    qword_140EEFB20 += v6.QuadPart;
    qword_140EEFBA8 = v6.QuadPart;
  }
  else
  {
    qword_140EEFB30 += v6.QuadPart;
    qword_140EEFBA0 = v6.QuadPart;
  }
LABEL_9:
  qword_140EEFB38 += v6.QuadPart;
  return (LARGE_INTEGER)qword_140EEFB40;
}
