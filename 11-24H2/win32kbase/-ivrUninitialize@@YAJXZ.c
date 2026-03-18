/*
 * XREFs of ?ivrUninitialize@@YAJXZ @ 0x140217B94
 * Callers:
 *     InputUnInitialize @ 0x1400D054C (InputUnInitialize.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ivrUninitialize(__int64 a1)
{
  __int64 v1; // rcx
  _QWORD *v2; // rdx

  if ( *(_QWORD *)(W32GetUserSessionState(a1) + 19488) )
  {
    v2 = (_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v1) + 19488) + 24LL);
    if ( *v2 )
      ZwSetSystemInformation(SystemUnloadGdiDriverInformation, v2, 8uLL);
  }
  return 0LL;
}
