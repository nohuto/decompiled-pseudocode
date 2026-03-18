/*
 * XREFs of GetWindowMonitorAdapterLuid @ 0x1C002617C
 * Callers:
 *     WindowRedirectionBitmapMatchesMonitorAdapter @ 0x1C000AE0C (WindowRedirectionBitmapMatchesMonitorAdapter.c)
 *     CreateOrGetRedirectionBitmap @ 0x1C0024A64 (CreateOrGetRedirectionBitmap.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetWindowMonitorAdapterLuid(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  unsigned int v3; // ebx
  __int64 v5; // rax
  int v7; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(a1 + 40);
  v3 = 0;
  v7 = 0;
  v5 = ValidateHmonitorNoRip(*(_QWORD *)(v2 + 256));
  if ( v5 )
    return (unsigned int)DrvGetWDDMAdapterInfo(*(_QWORD *)(v5 + 80), 0LL, a2, &v7);
  return v3;
}
