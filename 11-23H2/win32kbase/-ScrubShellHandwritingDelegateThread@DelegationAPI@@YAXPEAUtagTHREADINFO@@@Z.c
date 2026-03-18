/*
 * XREFs of ?ScrubShellHandwritingDelegateThread@DelegationAPI@@YAXPEAUtagTHREADINFO@@@Z @ 0x1C01356FC
 * Callers:
 *     xxxDestroyThreadInfo @ 0x1C0051264 (xxxDestroyThreadInfo.c)
 *     CleanupShellHandwritingInputDelegation @ 0x1C0135740 (CleanupShellHandwritingInputDelegation.c)
 * Callees:
 *     <none>
 */

void __fastcall DelegationAPI::ScrubShellHandwritingDelegateThread(DelegationAPI *this, struct tagTHREADINFO *a2)
{
  __int64 i; // rdx

  for ( i = *(_QWORD *)(*((_QWORD *)this + 53) + 328LL); i; i = *(_QWORD *)(i + 664) )
  {
    if ( *(DelegationAPI **)(i + 1336) == this )
    {
      *(_QWORD *)(i + 1336) = 0LL;
      *(_DWORD *)(i + 1328) = 0;
    }
  }
}
