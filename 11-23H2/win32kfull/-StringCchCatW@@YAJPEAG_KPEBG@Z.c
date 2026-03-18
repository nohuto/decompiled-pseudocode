/*
 * XREFs of ?StringCchCatW@@YAJPEAG_KPEBG@Z @ 0x1C0019984
 * Callers:
 *     ?bAppendSysDirectory@@YAHPEAGPEBGI@Z @ 0x1C00194B4 (-bAppendSysDirectory@@YAHPEAGPEBGI@Z.c)
 *     ?FinishStockFontInitInternal@@YAXPEBGH@Z @ 0x1C0019654 (-FinishStockFontInitInternal@@YAXPEBGH@Z.c)
 *     bAddFlEntry @ 0x1C0112C30 (bAddFlEntry.c)
 *     ?GetNlsTablePath@@YAHIPEAG@Z @ 0x1C0278B14 (-GetNlsTablePath@@YAHIPEAG@Z.c)
 * Callees:
 *     StringCopyWorkerW @ 0x1C00199F8 (StringCopyWorkerW.c)
 */

HRESULT __fastcall StringCchCatW(unsigned __int16 *a1, __int64 a2, size_t *a3)
{
  unsigned __int16 *v3; // rax
  __int64 v4; // r9
  HRESULT result; // eax
  size_t v6; // [rsp+20h] [rbp-18h]

  v3 = a1;
  v4 = 260LL;
  do
  {
    if ( !*v3 )
      break;
    ++v3;
    --v4;
  }
  while ( v4 );
  result = v4 == 0 ? 0x80070057 : 0;
  if ( v4 )
    return StringCopyWorkerW(
             (unsigned __int16 *)((char *)a1 + ((2 * (260 - v4)) & -(__int64)(v4 != 0))),
             ((v4 - 260) & ((unsigned __int128)-(__int128)(unsigned __int64)v4 >> 64)) + 260,
             a3,
             (STRSAFE_PCNZWCH)a3,
             v6);
  return result;
}
