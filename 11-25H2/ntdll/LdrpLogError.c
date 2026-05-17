/*
 * XREFs of LdrpLogError @ 0x1800FD63C
 * Callers:
 *     LdrpSnapModule @ 0x180012B70 (LdrpSnapModule.c)
 *     LdrUnlockLoaderLock @ 0x18003F1D0 (LdrUnlockLoaderLock.c)
 *     LdrpLoadDllInternal @ 0x18004A300 (LdrpLoadDllInternal.c)
 *     LdrpCompleteMapModule @ 0x18006DBC0 (LdrpCompleteMapModule.c)
 *     LdrpProcessWork @ 0x18006FC70 (LdrpProcessWork.c)
 *     LdrpMapDllNtFileName @ 0x180072240 (LdrpMapDllNtFileName.c)
 *     LdrpCallInitRoutine @ 0x180074730 (LdrpCallInitRoutine.c)
 * Callees:
 *     LdrpLogEtwEvent @ 0x180006960 (LdrpLogEtwEvent.c)
 *     RtlGetCurrentServiceSessionId @ 0x180011660 (RtlGetCurrentServiceSessionId.c)
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
