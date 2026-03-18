/*
 * XREFs of ?ScrubShellHandwritingDelegateThread@DelegationAPI@@YAXPEAUtagTHREADINFO@@@Z @ 0x14013D188
 * Callers:
 *     CleanupShellHandwritingInputDelegation @ 0x14013D170 (CleanupShellHandwritingInputDelegation.c)
 *     xxxDestroyThreadInfo @ 0x14015F444 (xxxDestroyThreadInfo.c)
 * Callees:
 *     <none>
 */

void __fastcall DelegationAPI::ScrubShellHandwritingDelegateThread(DelegationAPI *this, struct tagTHREADINFO *a2)
{
  __int64 i; // rdx

  for ( i = *(_QWORD *)(*((_QWORD *)this + 58) + 328LL); i; i = *(_QWORD *)(i + 704) )
  {
    if ( *(DelegationAPI **)(i + 1496) == this )
    {
      *(_QWORD *)(i + 1496) = 0LL;
      *(_DWORD *)(i + 1488) = 0;
    }
  }
}
