/*
 * XREFs of PpmUpdateIdleStates @ 0x140A5FB30
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x1402AE8FC (PopReleaseRwLock.c)
 *     PopExecuteOnTargetProcessors @ 0x140370234 (PopExecuteOnTargetProcessors.c)
 *     KeGetProcessorIndexFromNumber @ 0x140370440 (KeGetProcessorIndexFromNumber.c)
 *     PopAcquireRwLockExclusive @ 0x14041C564 (PopAcquireRwLockExclusive.c)
 *     PpmHvUseNativeAlgorithms @ 0x1404AE364 (PpmHvUseNativeAlgorithms.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     PpmUpdateIdleContext @ 0x1406F6CF4 (PpmUpdateIdleContext.c)
 */

__int64 __fastcall PpmUpdateIdleStates(__int64 a1)
{
  ULONG ProcessorIndexFromNumber; // eax
  __int64 v3; // rdi
  unsigned int updated; // eax
  unsigned int v5; // ebx
  unsigned int v7; // r8d
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r9
  void *v12; // rdx
  __int64 v13; // r8
  __int64 v14; // [rsp+28h] [rbp-E0h] BYREF
  _QWORD v15[33]; // [rsp+30h] [rbp-D8h] BYREF

  memset_0(&v14, 0, 0x108uLL);
  PopAcquireRwLockExclusive(&PpmIdlePolicyLock);
  if ( !a1
    || (ProcessorIndexFromNumber = KeGetProcessorIndexFromNumber((PPROCESSOR_NUMBER)(a1 + 4)),
        v3 = ProcessorIndexFromNumber,
        ProcessorIndexFromNumber == -1) )
  {
    v5 = -1073741811;
    goto LABEL_7;
  }
  if ( PpmHvUseNativeAlgorithms() )
  {
LABEL_9:
    v14 = 2097153LL;
    memset_0(v15, 0, 0x100uLL);
    v7 = *((_DWORD *)KiGlobalState + v3) & 0x3F;
    v8 = *((_DWORD *)KiGlobalState + v3) >> 6;
    if ( (unsigned __int16)v14 <= (unsigned int)v8 )
    {
      if ( WORD1(v14) <= (unsigned int)v8 )
      {
LABEL_11:
        if ( *(_BYTE *)(a1 + 17) )
        {
          v11 = 0LL;
          v12 = PpmUpdateIdleStatesInplace;
        }
        else
        {
          if ( !*(_DWORD *)(a1 + 96) )
          {
            v11 = 0LL;
            v12 = PpmRemoveIdleStates;
            v13 = 0LL;
            goto LABEL_14;
          }
          v11 = 3LL;
          v12 = PpmInstallNewIdleStates;
        }
        v13 = a1;
LABEL_14:
        updated = PopExecuteOnTargetProcessors((__int64)&v14, (__int64)v12, v13, v11);
        goto LABEL_6;
      }
      LOWORD(v14) = v8 + 1;
    }
    v9 = (unsigned int)v8;
    v10 = v15[v8];
    _bittestandset64(&v10, v7);
    v15[v9] = v10;
    goto LABEL_11;
  }
  if ( (HvlEnlightenments & 0x10000000) != 0 )
  {
    *(_QWORD *)(a1 + 48) = PpmIdleGuestPreExecute;
    *(_QWORD *)(a1 + 72) = PpmIdleGuestComplete;
    goto LABEL_9;
  }
  updated = PpmUpdateIdleContext(v3, a1);
LABEL_6:
  v5 = updated;
LABEL_7:
  PopReleaseRwLock((signed __int64 *)&PpmIdlePolicyLock);
  return v5;
}
