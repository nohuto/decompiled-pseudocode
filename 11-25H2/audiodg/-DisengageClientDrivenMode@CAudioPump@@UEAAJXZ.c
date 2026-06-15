/*
 * XREFs of ?DisengageClientDrivenMode@CAudioPump@@UEAAJXZ @ 0x140066840
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1400574C8 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall CAudioPump::DisengageClientDrivenMode(CAudioPump *this)
{
  const char *v1; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int CompareAddress; // [rsp+30h] [rbp+8h] BYREF

  *((_BYTE *)this + 4760) = 1;
  CompareAddress = 1;
  if ( WaitOnAddress((char *)this + 4756, &CompareAddress, 4uLL, 0xFFFFFFFF) )
    return 0LL;
  else
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)0x880,
             (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\audiopump.cpp",
             v1);
}
