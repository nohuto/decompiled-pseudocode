/*
 * XREFs of _lambda_e69bc3e064b06eccacaab7fc72a1e15e_::operator() @ 0x140287BB4
 * Callers:
 *     W32AttachToProcessAndExecute__lambda_e69bc3e064b06eccacaab7fc72a1e15e___ @ 0x140287A40 (W32AttachToProcessAndExecute__lambda_e69bc3e064b06eccacaab7fc72a1e15e___.c)
 *     W32AttachToSessionAndExecute__lambda_e69bc3e064b06eccacaab7fc72a1e15e___ @ 0x140287AF0 (W32AttachToSessionAndExecute__lambda_e69bc3e064b06eccacaab7fc72a1e15e___.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall lambda_e69bc3e064b06eccacaab7fc72a1e15e_::operator()(__int64 a1)
{
  unsigned int i; // ebx
  _QWORD *v3; // rdi
  _QWORD *ProcessWin32Process; // rax

  for ( i = 0; i < *(_DWORD *)(a1 + 8); ++i )
  {
    v3 = (_QWORD *)(*(_QWORD *)a1 + 32LL * i);
    ProcessWin32Process = (_QWORD *)PsGetProcessWin32Process(*v3);
    if ( ProcessWin32Process && *ProcessWin32Process )
      tagPROCESSINFO::UpdateCapabilities(ProcessWin32Process, v3[3], v3[2]);
  }
  return 0LL;
}
