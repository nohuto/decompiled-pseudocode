/*
 * XREFs of ?WaitForSignal@?$slim_event_t@$0A@@wil@@AEAA_NK@Z @ 0x140044720
 * Callers:
 *     ?wait@?$slim_event_t@$0A@@wil@@QEAA_NK@Z @ 0x14004468C (-wait@-$slim_event_t@$0A@@wil@@QEAA_NK@Z.c)
 * Callees:
 *     ?FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x14005CECC (-FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

bool __fastcall wil::slim_event_t<0>::WaitForSignal(volatile void *a1, DWORD a2)
{
  BOOL v2; // ebx
  unsigned int v4; // r8d
  const char *v5; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int CompareAddress; // [rsp+30h] [rbp+8h] BYREF

  CompareAddress = 0;
  v2 = WaitOnAddress(a1, &CompareAddress, 4uLL, a2);
  if ( !v2 && GetLastError() != 1460 )
    wil::details::in1diag3::FailFast_Unexpected(retaddr, (void *)0xBE6, v4, v5);
  return v2;
}
