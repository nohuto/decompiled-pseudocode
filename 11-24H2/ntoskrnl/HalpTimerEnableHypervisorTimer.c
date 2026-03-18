/*
 * XREFs of HalpTimerEnableHypervisorTimer @ 0x1404CD038
 * Callers:
 *     HalpTimerInitializeHypervisorTimer @ 0x14054A1C4 (HalpTimerInitializeHypervisorTimer.c)
 *     HalpAcpiPostSleep @ 0x140B6A5BC (HalpAcpiPostSleep.c)
 * Callees:
 *     HalpInterruptGsiToLine @ 0x1403B9678 (HalpInterruptGsiToLine.c)
 *     HalpReleaseHighLevelLock @ 0x1403B9898 (HalpReleaseHighLevelLock.c)
 *     HalpAcquireHighLevelLock @ 0x1403B9FD0 (HalpAcquireHighLevelLock.c)
 *     HalpInterruptSetLineState @ 0x1403BBB90 (HalpInterruptSetLineState.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpTimerEnableHypervisorTimer(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  __int64 result; // rax
  __int64 v6; // rdx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  bool v11; // sf
  int v12; // eax
  unsigned int v13; // eax
  unsigned __int8 v14; // di
  int v15; // ebx
  char v16; // [rsp+38h] [rbp-48h]
  unsigned __int64 v17; // [rsp+40h] [rbp-40h] BYREF
  _DWORD v18[2]; // [rsp+48h] [rbp-38h] BYREF
  int v19; // [rsp+50h] [rbp-30h] BYREF
  __int64 v20; // [rsp+54h] [rbp-2Ch]
  int v21; // [rsp+5Ch] [rbp-24h]
  __int128 *v22; // [rsp+60h] [rbp-20h]
  __int128 v23; // [rsp+68h] [rbp-18h] BYREF

  v4 = HalpHypervisorHpet;
  result = 0LL;
  v21 = 0;
  v17 = 0LL;
  v20 = 0LL;
  v23 = 0LL;
  if ( HalpHypervisorHpet )
  {
    result = guard_dispatch_icall_no_overrides(*(_QWORD *)(HalpHypervisorHpet + 72), a2, a3, a4);
    if ( (int)result >= 0 )
    {
      if ( (*(_DWORD *)(v4 + 184) & 0x10) != 0 )
      {
        LOBYTE(v6) = 1;
        result = guard_dispatch_icall_no_overrides(
                   *(_QWORD *)(v4 + 72),
                   v6,
                   *(_QWORD *)(v4 + 232),
                   *(unsigned int *)(v4 + 240));
        v11 = (int)result < 0;
      }
      else
      {
        v12 = *(_DWORD *)(v4 + 224);
        if ( (v12 & 0x200) != 0 )
        {
          result = HalpInterruptGsiToLine(*(unsigned int *)(v4 + 88), &v17);
          if ( (int)result < 0 )
            return result;
        }
        else if ( (v12 & 0x100) != 0 )
        {
          v13 = *(_DWORD *)(v4 + 84);
          if ( v13 >= 8 )
          {
            LODWORD(v17) = 45057;
            v13 -= 8;
          }
          else
          {
            LODWORD(v17) = 45056;
          }
          HIDWORD(v17) = v13;
        }
        v18[0] = -1;
        v22 = &v23;
        v19 = 3;
        v18[1] = 1;
        v14 = HalpAcquireHighLevelLock(&HalpInterruptLock);
        v15 = HalpInterruptSetLineState(
                &v17,
                212,
                15,
                *(_DWORD *)(v4 + 96),
                *(_DWORD *)(v4 + 92),
                (__int64)&v19,
                (__int64)v18,
                v16);
        result = HalpReleaseHighLevelLock((volatile signed __int64 *)&HalpInterruptLock, v14);
        v11 = v15 < 0;
      }
      if ( !v11 )
        return guard_dispatch_icall_no_overrides(v8, v7, v9, v10);
    }
  }
  return result;
}
