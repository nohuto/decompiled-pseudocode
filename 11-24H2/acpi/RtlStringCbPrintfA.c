/*
 * XREFs of RtlStringCbPrintfA @ 0x14000AEFC
 * Callers:
 *     ParseRelease @ 0x140004C30 (ParseRelease.c)
 *     PushScope @ 0x1400050C0 (PushScope.c)
 *     CreateNameSpaceObject @ 0x140009050 (CreateNameSpaceObject.c)
 *     PushFrame @ 0x140009A30 (PushFrame.c)
 *     PushTerm @ 0x14000A040 (PushTerm.c)
 *     GetNameSpaceObjectNoLock @ 0x14000AA30 (GetNameSpaceObjectNoLock.c)
 *     ParseOpcode @ 0x14000E5F0 (ParseOpcode.c)
 *     PrintDebugMessage @ 0x140010060 (PrintDebugMessage.c)
 *     ReadField @ 0x140011880 (ReadField.c)
 *     PushCall @ 0x140013020 (PushCall.c)
 *     ParseSuperName @ 0x140024820 (ParseSuperName.c)
 * Callees:
 *     <none>
 */

NTSTATUS RtlStringCbPrintfA(NTSTRSAFE_PSTR pszDest, size_t cbDest, NTSTRSAFE_PCSTR pszFormat, ...)
{
  size_t v4; // rdi
  NTSTATUS v5; // ebx
  int v6; // eax
  va_list Args; // [rsp+68h] [rbp+20h] BYREF

  va_start(Args, pszFormat);
  if ( cbDest - 1 > 0x7FFFFFFE )
  {
    v5 = -1073741811;
    if ( cbDest )
      *pszDest = 0;
  }
  else
  {
    v4 = cbDest - 1;
    v5 = 0;
    v6 = _vsnprintf(pszDest, cbDest - 1, pszFormat, Args);
    if ( v6 < 0 || v6 > v4 )
    {
      pszDest[v4] = 0;
      return -2147483643;
    }
    else if ( v6 == v4 )
    {
      pszDest[v4] = 0;
    }
  }
  return v5;
}
