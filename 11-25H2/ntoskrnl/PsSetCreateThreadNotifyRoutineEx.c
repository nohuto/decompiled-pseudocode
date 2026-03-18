/*
 * XREFs of PsSetCreateThreadNotifyRoutineEx @ 0x14076A5F0
 * Callers:
 *     <none>
 * Callees:
 *     MmVerifyCallbackFunctionCheckFlags @ 0x1404F3D14 (MmVerifyCallbackFunctionCheckFlags.c)
 *     PspSetCreateThreadNotifyRoutine @ 0x14076A668 (PspSetCreateThreadNotifyRoutine.c)
 */

__int64 __fastcall PsSetCreateThreadNotifyRoutineEx(int a1, __int64 a2)
{
  unsigned int v4; // ebx

  if ( a1 )
  {
    if ( a1 != 1 )
      return 3221225485LL;
    v4 = 2;
  }
  else
  {
    v4 = 1;
  }
  if ( (unsigned int)MmVerifyCallbackFunctionCheckFlags(a2, 32) )
    return PspSetCreateThreadNotifyRoutine(a2, v4);
  else
    return 3221225506LL;
}
