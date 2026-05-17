/*
 * XREFs of LdrpLogError @ 0x1800FB40C
 * Callers:
 *     LdrUnlockLoaderLock @ 0x180003D60 (LdrUnlockLoaderLock.c)
 *     LdrpLoadDllInternal @ 0x18000B460 (LdrpLoadDllInternal.c)
 *     LdrpCallInitRoutine @ 0x180012C90 (LdrpCallInitRoutine.c)
 *     LdrpProcessWork @ 0x180021E60 (LdrpProcessWork.c)
 *     LdrpSnapModule @ 0x180056F30 (LdrpSnapModule.c)
 *     LdrpMapDllNtFileName @ 0x180071640 (LdrpMapDllNtFileName.c)
 *     LdrpCompleteMapModule @ 0x180073340 (LdrpCompleteMapModule.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180055A20 (RtlGetCurrentServiceSessionId.c)
 *     LdrpLogEtwEvent @ 0x18009B2F0 (LdrpLogEtwEvent.c)
 */

unsigned int *__fastcall LdrpLogError(int a1, char a2, char a3, unsigned __int16 *a4)
{
  __int64 v5; // rbp
  unsigned int *result; // rax
  __int64 v9; // r10
  __int64 v10; // rcx

  v5 = a1;
  result = RtlGetCurrentServiceSessionId();
  if ( (_DWORD)result )
  {
    result = (unsigned int *)NtCurrentPeb();
    v9 = *((_QWORD *)result + 18) + 554LL;
  }
  else
  {
    v9 = 2147353476LL;
  }
  if ( *(_BYTE *)v9 )
  {
    result = (unsigned int *)NtCurrentPeb();
    if ( (result[222] & 4) != 0 )
    {
      result = RtlGetCurrentServiceSessionId();
      if ( (_DWORD)result )
      {
        result = (unsigned int *)NtCurrentPeb();
        v10 = *((_QWORD *)result + 18) + 555LL;
      }
      else
      {
        v10 = 2147353477LL;
      }
      if ( (*(_BYTE *)v10 & 0x20) != 0 )
        return (unsigned int *)LdrpLogEtwEvent(5284, v5, a2, a3, a4, 0LL);
    }
  }
  return result;
}
