/*
 * XREFs of HalpTimerEnableHypervisorTimer @ 0x1404C6408
 * Callers:
 *     HalpTimerInitializeHypervisorTimer @ 0x140547A84 (HalpTimerInitializeHypervisorTimer.c)
 *     HalpAcpiPostSleep @ 0x140B6BE80 (HalpAcpiPostSleep.c)
 * Callees:
 *     HalpInterruptSetLineState @ 0x1402B4E20 (HalpInterruptSetLineState.c)
 *     HalpReleaseHighLevelLock @ 0x140372268 (HalpReleaseHighLevelLock.c)
 *     HalpAcquireHighLevelLock @ 0x1403729A0 (HalpAcquireHighLevelLock.c)
 *     HalpInterruptGsiToLine @ 0x1403733E0 (HalpInterruptGsiToLine.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpTimerEnableHypervisorTimer(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 result; // rax
  __int64 v4; // rdx
  __int64 v5; // rdx
  __int64 v6; // rcx
  bool v7; // sf
  int v8; // eax
  unsigned int v9; // eax
  unsigned __int8 v10; // di
  int v11; // ebx
  char v12; // [rsp+38h] [rbp-48h]
  unsigned __int64 v13; // [rsp+40h] [rbp-40h] BYREF
  _DWORD v14[2]; // [rsp+48h] [rbp-38h] BYREF
  int v15; // [rsp+50h] [rbp-30h] BYREF
  __int64 v16; // [rsp+54h] [rbp-2Ch]
  int v17; // [rsp+5Ch] [rbp-24h]
  __int128 *v18; // [rsp+60h] [rbp-20h]
  __int128 v19; // [rsp+68h] [rbp-18h] BYREF

  v2 = HalpHypervisorHpet;
  result = 0LL;
  v17 = 0;
  v13 = 0LL;
  v16 = 0LL;
  v19 = 0LL;
  if ( HalpHypervisorHpet )
  {
    result = guard_dispatch_icall_no_overrides(*(_QWORD *)(HalpHypervisorHpet + 72), a2);
    if ( (int)result >= 0 )
    {
      if ( (*(_DWORD *)(v2 + 184) & 0x10) != 0 )
      {
        LOBYTE(v4) = 1;
        result = guard_dispatch_icall_no_overrides(*(_QWORD *)(v2 + 72), v4);
        v7 = (int)result < 0;
      }
      else
      {
        v8 = *(_DWORD *)(v2 + 224);
        if ( (v8 & 0x200) != 0 )
        {
          result = HalpInterruptGsiToLine(*(_DWORD *)(v2 + 88), &v13);
          if ( (int)result < 0 )
            return result;
        }
        else if ( (v8 & 0x100) != 0 )
        {
          v9 = *(_DWORD *)(v2 + 84);
          if ( v9 >= 8 )
          {
            LODWORD(v13) = 45057;
            v9 -= 8;
          }
          else
          {
            LODWORD(v13) = 45056;
          }
          HIDWORD(v13) = v9;
        }
        v14[0] = -1;
        v18 = &v19;
        v15 = 3;
        v14[1] = 1;
        v10 = HalpAcquireHighLevelLock(&HalpInterruptLock);
        v11 = HalpInterruptSetLineState(
                &v13,
                0xD4u,
                15,
                *(_DWORD *)(v2 + 96),
                *(_DWORD *)(v2 + 92),
                (__int64)&v15,
                (__int64)v14,
                v12);
        result = HalpReleaseHighLevelLock((volatile signed __int64 *)&HalpInterruptLock, v10);
        v7 = v11 < 0;
      }
      if ( !v7 )
        return guard_dispatch_icall_no_overrides(v6, v5);
    }
  }
  return result;
}
