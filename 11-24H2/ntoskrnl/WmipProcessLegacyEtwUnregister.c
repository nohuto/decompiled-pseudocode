/*
 * XREFs of WmipProcessLegacyEtwUnregister @ 0x1407A58AC
 * Callers:
 *     WmipLegacyEtwWorker @ 0x140A876B0 (WmipLegacyEtwWorker.c)
 * Callees:
 *     KeReleaseMutex @ 0x1402DEA60 (KeReleaseMutex.c)
 *     KeWaitForSingleObject @ 0x14031DE40 (KeWaitForSingleObject.c)
 *     EtwUnregister @ 0x140A52EC0 (EtwUnregister.c)
 */

LONG __fastcall WmipProcessLegacyEtwUnregister(__int64 a1)
{
  REGHANDLE v2; // rdi
  LONG result; // eax

  KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
  v2 = *(_QWORD *)(a1 + 104);
  *(_QWORD *)(a1 + 104) = 0LL;
  result = KeReleaseMutex((PRKMUTEX)&WmipSMMutex, 0);
  if ( v2 )
    return EtwUnregister(v2);
  return result;
}
