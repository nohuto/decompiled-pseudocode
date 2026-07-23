/*
 * XREFs of PspEnsureGuiThreadAndBatchFlush @ 0x1407714E8
 * Callers:
 *     PsSyscallProviderDispatch @ 0x140A98970 (PsSyscallProviderDispatch.c)
 * Callees:
 *     PsInvokeWin32Callout @ 0x1409A1420 (PsInvokeWin32Callout.c)
 *     PsConvertToGuiThread @ 0x140AC9700 (PsConvertToGuiThread.c)
 */

__int64 __fastcall PspEnsureGuiThreadAndBatchFlush(__int64 a1)
{
  __int64 v2; // rbx
  int v3; // eax

  if ( (*(_DWORD *)(a1 + 120) & 0x200080) == 0 )
  {
    v2 = *(_QWORD *)(a1 + 144);
    v3 = PsConvertToGuiThread();
    *(_QWORD *)(a1 + 144) = v2;
    if ( v3 < 0 )
      return 3221225473LL;
  }
  if ( *(_DWORD *)(*(_QWORD *)(a1 + 240) + 5952LL) )
    PsInvokeWin32Callout(7LL, 0LL, 0LL, 0LL);
  return 0LL;
}
