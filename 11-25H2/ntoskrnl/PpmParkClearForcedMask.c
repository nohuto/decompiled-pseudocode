/*
 * XREFs of PpmParkClearForcedMask @ 0x140AB5804
 * Callers:
 *     NtPowerInformation @ 0x14096E740 (NtPowerInformation.c)
 * Callees:
 *     PpmAcquireLock @ 0x1402045E4 (PpmAcquireLock.c)
 *     PpmReleaseLock @ 0x140204CAC (PpmReleaseLock.c)
 *     PpmCheckApplyParkConstraints @ 0x1404B3F74 (PpmCheckApplyParkConstraints.c)
 *     PpmParkApplyPolicy @ 0x1404E9D84 (PpmParkApplyPolicy.c)
 *     PpmParkParkingAvailable @ 0x140A4D7C8 (PpmParkParkingAvailable.c)
 */

__int64 __fastcall PpmParkClearForcedMask(__int16 *a1, __int64 a2, unsigned int a3)
{
  __int16 v4; // dx
  unsigned int v5; // ebx
  unsigned int v7; // r10d
  char v8; // r9
  unsigned __int16 i; // r8
  __int64 v10; // rcx
  char v11; // al

  PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock, a2, a3);
  v4 = *a1;
  if ( (unsigned __int16)*a1 < 0x20u )
  {
    v7 = PpmParkNumNodes;
    v5 = 0;
    v8 = 0;
    for ( i = 0; i < v7; ++i )
    {
      v10 = PpmParkNodes + 208LL * i;
      if ( *(_WORD *)(v10 + 4) == v4 )
      {
        v11 = *(_BYTE *)(v10 + 120);
        if ( (v11 & 1) != 0 )
        {
          v8 = 1;
          *(_BYTE *)(v10 + 120) = v11 & 0xFE;
          v4 = *a1;
        }
      }
    }
    if ( v8 )
    {
      PpmParkApplyPolicy();
      PpmParkParkingAvailable();
      PpmCheckApplyParkConstraints();
      return v5;
    }
  }
  else
  {
    v5 = -1073741811;
  }
  PpmReleaseLock(&PpmPerfPolicyLock);
  return v5;
}
