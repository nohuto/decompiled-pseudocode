/*
 * XREFs of ?vFilterDriverHooks@PDEVOBJ@@QEAAXXZ @ 0x14000C19C
 * Callers:
 *     ?bMakeSurface@PDEVOBJ@@QEAAHPEAUHSURF__@@@Z @ 0x14000C950 (-bMakeSurface@PDEVOBJ@@QEAAHPEAUHSURF__@@@Z.c)
 * Callees:
 *     wcsrchr @ 0x1401A05F8 (wcsrchr.c)
 *     _wcsicmp @ 0x1401A0734 (_wcsicmp.c)
 */

void __fastcall PDEVOBJ::vFilterDriverHooks(PDEVOBJ *this)
{
  __int64 v2; // rbp
  __int64 v3; // rsi
  wchar_t *v4; // rax
  const wchar_t *v5; // rdi
  __int64 v6; // rcx
  int v7; // r9d
  unsigned int v8; // r8d
  __int64 v9; // rdx
  __int64 v10; // rcx

  v2 = *(_QWORD *)(*(_QWORD *)this + 2544LL);
  v3 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)this + 1776LL) + 16LL);
  if ( v3 )
  {
    v4 = wcsrchr(*(const wchar_t **)(v3 + 8), 0x5Cu);
    if ( v4 )
      v5 = v4 + 1;
    else
      v5 = *(const wchar_t **)(v3 + 8);
    if ( wcsicmp(v5, L"stbv128.dll") )
    {
      if ( wcsicmp(v5, L"s3disp.dll") )
      {
        if ( (!wcsicmp(v5, L"rrctrl1.dll")
           || !wcsicmp(v5, L"rrctrl2.dll")
           || !wcsicmp(v5, L"rrctrl3.dll")
           || !wcsicmp(v5, L"rrctrl4.dll")
           || !wcsicmp(v5, L"rrctrl5.dll")
           || !wcsicmp(v5, L"rrctrl6.dll"))
          && *(_DWORD *)(*(_QWORD *)this + 2604LL) < 2u )
        {
          *(_DWORD *)(*(_QWORD *)this + 2604LL) = 2;
        }
      }
      else
      {
        *(_QWORD *)(*(_QWORD *)this + 2912LL) = 0LL;
      }
    }
    else
    {
      *(_QWORD *)(*(_QWORD *)this + 2760LL) = 0LL;
    }
    v6 = *(_QWORD *)this;
    if ( (*(_DWORD *)(*(_QWORD *)this + 40LL) & 1) != 0 )
    {
      v7 = *(_DWORD *)(v6 + 2600);
      v8 = *(_DWORD *)(v6 + 2604);
      if ( (v7 & 1) != 0 )
      {
        *(_DWORD *)(v6 + 2604) = 5;
      }
      else if ( v8 < 5 )
      {
        if ( v8 )
        {
          *(_QWORD *)(v6 + 2912) = 0LL;
          *(_QWORD *)(*(_QWORD *)this + 2760LL) = 0LL;
        }
        v9 = 2872LL;
        if ( v8 >= 2 )
        {
          *(_DWORD *)(v2 + 112) &= 0xFFFC5E39;
          if ( v8 >= 4 )
          {
            *(_DWORD *)(v2 + 112) &= 0xFFFC5E39;
            v10 = 2872LL;
            *(_DWORD *)(*(_QWORD *)this + 1808LL) &= 0x8090420u;
            *(_DWORD *)(*(_QWORD *)this + 2112LL) &= 0xC0u;
            *(_QWORD *)(*(_QWORD *)this + 3000LL) = 0LL;
            do
            {
              *(_QWORD *)(v10 + *(_QWORD *)this) = 0LL;
              v10 += 8LL;
            }
            while ( v10 < 2888 );
            *(_QWORD *)(*(_QWORD *)this + 2736LL) = 0LL;
            *(_QWORD *)(*(_QWORD *)this + 3112LL) = 0LL;
            *(_QWORD *)(*(_QWORD *)this + 3120LL) = 0LL;
            *(_QWORD *)(*(_QWORD *)this + 3128LL) = 0LL;
            *(_QWORD *)(*(_QWORD *)this + 2592LL) = *(_QWORD *)(*(_QWORD *)this + 2824LL);
            *(_QWORD *)(*(_QWORD *)this + 2824LL) = FilteredBitBlt;
          }
        }
        if ( (v7 & 8) != 0 )
        {
          *(_QWORD *)(*(_QWORD *)this + 3112LL) = 0LL;
          *(_QWORD *)(*(_QWORD *)this + 3120LL) = 0LL;
          *(_QWORD *)(*(_QWORD *)this + 3128LL) = 0LL;
        }
        if ( (v7 & 0x10) != 0 )
        {
          do
          {
            *(_QWORD *)(v9 + *(_QWORD *)this) = 0LL;
            v9 += 8LL;
          }
          while ( v9 < 2888 );
        }
      }
    }
  }
}
