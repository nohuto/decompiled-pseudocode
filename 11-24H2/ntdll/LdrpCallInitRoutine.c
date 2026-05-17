/*
 * XREFs of LdrpCallInitRoutine @ 0x180012C90
 * Callers:
 *     LdrShutdownProcess @ 0x180002B70 (LdrShutdownProcess.c)
 *     LdrShutdownThread @ 0x1800045E0 (LdrShutdownThread.c)
 *     LdrpInitializeThread @ 0x180012810 (LdrpInitializeThread.c)
 *     LdrpCallTlsInitializers @ 0x180012F30 (LdrpCallTlsInitializers.c)
 *     AVrfpLoadAndInitializeProvider @ 0x180064DAC (AVrfpLoadAndInitializeProvider.c)
 *     LdrpInitializeNode @ 0x18006FB00 (LdrpInitializeNode.c)
 *     LdrpProcessDetachNode @ 0x1800E3114 (LdrpProcessDetachNode.c)
 *     AvrfMiniLoadDll @ 0x180108F94 (AvrfMiniLoadDll.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180055A20 (RtlGetCurrentServiceSessionId.c)
 *     LdrpLogEtwEvent @ 0x18009B2F0 (LdrpLogEtwEvent.c)
 *     LdrpLogError @ 0x1800FB40C (LdrpLogError.c)
 *     LdrpCallInitRoutineInternal @ 0x18015F968 (LdrpCallInitRoutineInternal.c)
 *     NtTraceEvent @ 0x180162840 (NtTraceEvent.c)
 *     __security_check_cookie @ 0x1801659C0 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x180172030 (memset$thunk$772440563353939046.c)
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
  int v18; // r9d
  unsigned __int8 v19; // [rsp+48h] [rbp-298h]
  _BYTE v20[6]; // [rsp+68h] [rbp-278h] BYREF
  __int16 v21; // [rsp+6Eh] [rbp-272h]
  __int64 v22; // [rsp+88h] [rbp-258h]
  char v23; // [rsp+90h] [rbp-250h]
  char v24; // [rsp+91h] [rbp-24Fh]

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
      memset_thunk_772440563353939046(v20, 0, 0x240uLL);
      v21 = 5283;
      if ( a2 == -1 )
      {
        v16 = 0;
      }
      else
      {
        v22 = a2;
        v16 = 1;
      }
      if ( v16 )
      {
        v23 = 0;
        v24 = a3;
      }
      if ( (unsigned int)RtlGetCurrentServiceSessionId() )
        v17 = (__int64)NtCurrentPeb()->SharedData + 554;
      else
        v17 = 2147353476LL;
      NtTraceEvent(*(unsigned __int8 *)v17, 1026LL, 10LL, v20);
    }
  }
  else
  {
    v11 = 2147353477LL;
  }
  v19 = LdrpCallInitRoutineInternal(a1, a2, a3, a4);
  v12 = NtCurrentPeb()->SharedData;
  if ( v12 && *v12 )
    v9 = (__int64)NtCurrentPeb()->SharedData + 554;
  if ( *(_BYTE *)v9 && (NtCurrentPeb()->TracingFlags & 4) != 0 )
  {
    if ( (unsigned int)RtlGetCurrentServiceSessionId() )
      v11 = (__int64)NtCurrentPeb()->SharedData + 555;
    if ( (*(_BYTE *)v11 & 0x20) != 0 )
    {
      LOBYTE(v18) = -1;
      LdrpLogEtwEvent(5270, a2, 255, v18, 0LL, 0LL);
    }
  }
  if ( !v19 && a3 == 1 )
    LdrpLogError(3221225794LL, 5270LL, 1LL, 0LL);
  return v19;
}
