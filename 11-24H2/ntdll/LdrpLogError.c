/*
 * XREFs of LdrpLogError @ 0x1800F633C
 * Callers:
 *     LdrpLoadDllInternal @ 0x180037E60 (LdrpLoadDllInternal.c)
 *     LdrpCallInitRoutine @ 0x18003F690 (LdrpCallInitRoutine.c)
 *     LdrpProcessWork @ 0x18004E860 (LdrpProcessWork.c)
 *     LdrpSnapModule @ 0x18006CB10 (LdrpSnapModule.c)
 *     LdrpMapDllNtFileName @ 0x18008DF20 (LdrpMapDllNtFileName.c)
 *     LdrpCompleteMapModule @ 0x18008FC20 (LdrpCompleteMapModule.c)
 *     LdrUnlockLoaderLock @ 0x1800F22A0 (LdrUnlockLoaderLock.c)
 * Callees:
 *     LdrpLogEtwEvent @ 0x180030140 (LdrpLogEtwEvent.c)
 *     RtlGetCurrentServiceSessionId @ 0x18006B600 (RtlGetCurrentServiceSessionId.c)
 */

int __fastcall LdrpLogError(int a1, char a2, char a3, unsigned __int16 *a4)
{
  __int64 v5; // rbp
  struct _PEB *v8; // rax
  __int64 v9; // r10
  __int64 v10; // rcx

  v5 = a1;
  LODWORD(v8) = RtlGetCurrentServiceSessionId();
  if ( (_DWORD)v8 )
  {
    v8 = NtCurrentPeb();
    v9 = (__int64)v8->SharedData + 554;
  }
  else
  {
    v9 = 2147353476LL;
  }
  if ( *(_BYTE *)v9 )
  {
    v8 = NtCurrentPeb();
    if ( (v8->TracingFlags & 4) != 0 )
    {
      LODWORD(v8) = RtlGetCurrentServiceSessionId();
      if ( (_DWORD)v8 )
      {
        v8 = NtCurrentPeb();
        v10 = (__int64)v8->SharedData + 555;
      }
      else
      {
        v10 = 2147353477LL;
      }
      if ( (*(_BYTE *)v10 & 0x20) != 0 )
        LODWORD(v8) = LdrpLogEtwEvent(5284, v5, a2, a3, a4, 0LL);
    }
  }
  return (int)v8;
}
