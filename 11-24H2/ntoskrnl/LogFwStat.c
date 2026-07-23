/*
 * XREFs of LogFwStat @ 0x140BB6790
 * Callers:
 *     AnFwDisplayProgressIndicator @ 0x140BB3FD0 (AnFwDisplayProgressIndicator.c)
 *     AnFwpProgressAnimationManual @ 0x140BB427C (AnFwpProgressAnimationManual.c)
 *     AnFwDisplayFade @ 0x140BB56EC (AnFwDisplayFade.c)
 * Callees:
 *     BgpFwQueryPerformanceCounter @ 0x1404B0FB4 (BgpFwQueryPerformanceCounter.c)
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
  qword_140EEFDD8 = result.QuadPart;
  if ( a1 )
  {
    qword_140E65160[v4] = result.QuadPart;
    return result;
  }
  v6.QuadPart = *(_QWORD *)&BgpFwQueryPerformanceCounter(0LL) - qword_140E65160[v4];
  qword_140EEFD80 = v6.QuadPart;
  if ( !(_DWORD)v4 )
  {
    if ( v6.QuadPart < qword_140E0F148 )
      qword_140E0F148 = v6.QuadPart;
    if ( v6.QuadPart > qword_140EEFD68 )
      qword_140EEFD68 = v6.QuadPart;
LABEL_8:
    qword_140EEFDD0 += v6.QuadPart;
    ++dword_140EEFDB4;
    goto LABEL_9;
  }
  v7 = v4 - 1;
  if ( !v7 )
  {
    if ( v6.QuadPart < qword_140E0F148 )
      qword_140E0F148 = v6.QuadPart;
    if ( v6.QuadPart > qword_140EEFD68 )
      qword_140EEFD68 = v6.QuadPart;
    qword_140EEFDC0 += v6.QuadPart;
    goto LABEL_8;
  }
  v8 = v7 - 1;
  if ( v8 )
  {
    v9 = v8 - 1;
    if ( !v9 )
    {
      qword_140EEFD70 += v6.QuadPart;
      return (LARGE_INTEGER)qword_140EEFDD8;
    }
    v10 = v9 - 1;
    if ( !v10 )
    {
      qword_140EEFD78 += v6.QuadPart;
      return (LARGE_INTEGER)qword_140EEFDD8;
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
            qword_140E65158 += v6.QuadPart;
        }
        else
        {
          qword_140EEFDE8 = v6.QuadPart;
        }
      }
      else
      {
        if ( v6.QuadPart < qword_140E0F150 )
          qword_140E0F150 = v6.QuadPart;
        if ( v6.QuadPart > qword_140EEFD50 )
          qword_140EEFD50 = v6.QuadPart;
        qword_140EEFDC8 += v6.QuadPart;
        qword_140EEFDE0 += v6.QuadPart;
        ++dword_140EEFD58;
      }
      return (LARGE_INTEGER)qword_140EEFDD8;
    }
    qword_140EEFDC8 += v6.QuadPart;
    qword_140EEFDA8 = v6.QuadPart;
  }
  else
  {
    qword_140EEFDD0 += v6.QuadPart;
    qword_140EEFD90 = v6.QuadPart;
  }
LABEL_9:
  qword_140EEFDE0 += v6.QuadPart;
  return (LARGE_INTEGER)qword_140EEFDD8;
}
