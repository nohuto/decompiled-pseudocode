/*
 * XREFs of LdrpCallInitRoutine @ 0x18003F690
 * Callers:
 *     LdrpInitializeThread @ 0x18003F210 (LdrpInitializeThread.c)
 *     LdrpCallTlsInitializers @ 0x18003F930 (LdrpCallTlsInitializers.c)
 *     LdrpInitializeNode @ 0x18008C3E0 (LdrpInitializeNode.c)
 *     LdrShutdownThread @ 0x1800AB0D0 (LdrShutdownThread.c)
 *     LdrShutdownProcess @ 0x1800ABBC0 (LdrShutdownProcess.c)
 *     AVrfpLoadAndInitializeProvider @ 0x1800ACC7C (AVrfpLoadAndInitializeProvider.c)
 *     LdrpProcessDetachNode @ 0x1800DE6E4 (LdrpProcessDetachNode.c)
 *     AvrfMiniLoadDll @ 0x180103EC4 (AvrfMiniLoadDll.c)
 * Callees:
 *     LdrpLogEtwEvent @ 0x180030140 (LdrpLogEtwEvent.c)
 *     RtlGetCurrentServiceSessionId @ 0x18006B600 (RtlGetCurrentServiceSessionId.c)
 *     LdrpLogError @ 0x1800F633C (LdrpLogError.c)
 *     LdrpCallInitRoutineInternal @ 0x18015DD28 (LdrpCallInitRoutineInternal.c)
 *     NtTraceEvent @ 0x180160C00 (NtTraceEvent.c)
 *     __security_check_cookie @ 0x180163D80 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x180171030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall LdrpCallInitRoutine(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  _DWORD *SharedData; // rdx
  __int64 v9; // rbx
  __int64 v10; // rcx
  __int64 v11; // r12
  _DWORD *v12; // rcx
  _DWORD *v14; // rcx
  __int64 v15; // rcx
  int v16; // eax
  __int64 v17; // rcx
  unsigned __int8 v18; // [rsp+48h] [rbp-298h]
  _BYTE Fields[6]; // [rsp+68h] [rbp-278h] BYREF
  __int16 v20; // [rsp+6Eh] [rbp-272h]
  __int64 v21; // [rsp+88h] [rbp-258h]
  char v22; // [rsp+90h] [rbp-250h]
  char v23; // [rsp+91h] [rbp-24Fh]

  SharedData = NtCurrentPeb()->SharedData;
  if ( SharedData && *SharedData )
  {
    v10 = (__int64)NtCurrentPeb()->SharedData + 554;
    v9 = 2147353476LL;
  }
  else
  {
    v9 = 2147353476LL;
    v10 = 2147353476LL;
  }
  if ( *(_BYTE *)v10 && (NtCurrentPeb()->TracingFlags & 4) != 0 )
  {
    v14 = NtCurrentPeb()->SharedData;
    if ( v14 && *v14 )
    {
      v15 = (__int64)NtCurrentPeb()->SharedData + 555;
      v11 = 2147353477LL;
    }
    else
    {
      v11 = 2147353477LL;
      v15 = 2147353477LL;
    }
    if ( (*(_BYTE *)v15 & 0x20) != 0 )
    {
      memset_thunk_772440563353939046(Fields, 0, 0x240uLL);
      v20 = 5283;
      if ( a2 == -1 )
      {
        v16 = 0;
      }
      else
      {
        v21 = a2;
        v16 = 1;
      }
      if ( v16 )
      {
        v22 = 0;
        v23 = a3;
      }
      if ( RtlGetCurrentServiceSessionId() )
        v17 = (__int64)NtCurrentPeb()->SharedData + 554;
      else
        v17 = 2147353476LL;
      NtTraceEvent((HANDLE)*(unsigned __int8 *)v17, 0x402u, 0xAu, Fields);
    }
  }
  else
  {
    v11 = 2147353477LL;
  }
  v18 = LdrpCallInitRoutineInternal(a1, a2, a3, a4);
  v12 = NtCurrentPeb()->SharedData;
  if ( v12 && *v12 )
    v9 = (__int64)NtCurrentPeb()->SharedData + 554;
  if ( *(_BYTE *)v9 && (NtCurrentPeb()->TracingFlags & 4) != 0 )
  {
    if ( RtlGetCurrentServiceSessionId() )
      v11 = (__int64)NtCurrentPeb()->SharedData + 555;
    if ( (*(_BYTE *)v11 & 0x20) != 0 )
      LdrpLogEtwEvent(5270, a2, 255, 255, 0LL, 0LL);
  }
  if ( !v18 && a3 == 1 )
    LdrpLogError(3221225794LL, 5270LL, 1LL, 0LL);
  return v18;
}
