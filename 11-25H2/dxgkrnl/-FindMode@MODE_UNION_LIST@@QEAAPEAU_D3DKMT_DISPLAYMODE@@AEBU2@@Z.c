/*
 * XREFs of ?FindMode@MODE_UNION_LIST@@QEAAPEAU_D3DKMT_DISPLAYMODE@@AEBU2@@Z @ 0x1402A8280
 * Callers:
 *     ??ROBTAIN_MODES_ON_SOURCE@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAI01@Z @ 0x1403DE024 (--ROBTAIN_MODES_ON_SOURCE@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAI01@Z.c)
 * Callees:
 *     <none>
 */

struct _D3DKMT_DISPLAYMODE *__fastcall MODE_UNION_LIST::FindMode(
        MODE_UNION_LIST *this,
        const struct _D3DKMT_DISPLAYMODE *a2)
{
  unsigned int i; // eax
  __int64 Width; // r10
  __int64 v5; // rbx

  for ( i = 0; ; ++i )
  {
    if ( i >= *((_DWORD *)this + 4) )
      return 0LL;
    Width = a2->Width;
    v5 = *((_QWORD *)this + 1) + 44LL * i;
    if ( (_DWORD)Width == *(_DWORD *)v5
      && *(_QWORD *)&a2->Height == *(_QWORD *)(v5 + 4)
      && a2->IntegerRefreshRate == *(_DWORD *)(v5 + 12)
      && a2->DisplayOrientation == *(_DWORD *)(v5 + 28)
      && a2->DisplayFixedOutput == *(_DWORD *)(v5 + 32)
      && a2->ScanLineOrdering == *(_DWORD *)(v5 + 24)
      && ((*((_BYTE *)&a2->Flags + 4) ^ *(_BYTE *)(v5 + 40)) & 0x10) == 0
      && ((*(_BYTE *)&a2->Flags ^ *(_BYTE *)(v5 + 36)) & 2) == 0 )
    {
      break;
    }
  }
  if ( a2->RefreshRate.Numerator != *(_DWORD *)(v5 + 16) || a2->RefreshRate.Denominator != *(_DWORD *)(v5 + 20) )
  {
    WdLogSingleEntry4(7LL, Width, a2->Height, a2->Format, a2->IntegerRefreshRate);
    WdLogGlobalForLineNumber = 2022;
    WdLogSingleEntry4(
      7LL,
      a2->RefreshRate.Numerator,
      a2->RefreshRate.Denominator,
      *(unsigned int *)(v5 + 16),
      *(unsigned int *)(v5 + 20));
    WdLogGlobalForLineNumber = 2028;
  }
  return (struct _D3DKMT_DISPLAYMODE *)v5;
}
