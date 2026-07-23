/*
 * XREFs of ExpCaptureWnfStateName @ 0x1409013E0
 * Callers:
 *     ExpNtDeleteWnfStateData @ 0x1407BFBF8 (ExpNtDeleteWnfStateData.c)
 *     NtDeleteWnfStateName @ 0x140900ED0 (NtDeleteWnfStateName.c)
 *     NtUnsubscribeWnfStateChange @ 0x140901320 (NtUnsubscribeWnfStateChange.c)
 *     ExpWnfCompleteThreadSubscriptions @ 0x140901A5C (ExpWnfCompleteThreadSubscriptions.c)
 *     ExpWnfSubscribeWnfStateChange @ 0x140A125DC (ExpWnfSubscribeWnfStateChange.c)
 *     NtQueryWnfStateNameInformation @ 0x140AE4930 (NtQueryWnfStateNameInformation.c)
 * Callees:
 *     RtlCopyVolatileMemory @ 0x1406B6C90 (RtlCopyVolatileMemory.c)
 */

__int64 __fastcall ExpCaptureWnfStateName(__int64 *Src, unsigned __int64 *a2, char a3)
{
  __int64 v4; // rcx
  unsigned __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // rcx
  __int64 v10; // rdx
  __int64 v11; // [rsp+38h] [rbp+10h] BYREF

  v11 = 0LL;
  if ( a3 )
  {
    v10 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)Src < 0x7FFFFFFF0000LL )
      v10 = (__int64)Src;
    RtlCopyVolatileMemory(&v11, (const void *)v10, 8uLL);
    v4 = v11;
  }
  else
  {
    v4 = *Src;
  }
  v5 = v4 ^ 0x41C64E6DA3BC0074LL;
  *a2 = v5;
  if ( (v5 & 0xF) != 1 )
    return 3221225485LL;
  v6 = (v5 >> 6) & 0xF;
  v7 = (v5 >> 10) & 1;
  v8 = (v5 >> 4) & 3;
  if ( (_DWORD)v8 != 3 && (_DWORD)v8 && (unsigned int)(v8 - 1) >= 2 )
    return 3221225485LL;
  if ( (_DWORD)v6 != 5 && (unsigned int)v6 > 2 && (unsigned int)(v6 - 3) > 1
    || (_DWORD)v7 && ((v6 & 0xFFFFFFF9) != 0 || (_DWORD)v6 == 6) )
  {
    return 3221225485LL;
  }
  else
  {
    return 0LL;
  }
}
