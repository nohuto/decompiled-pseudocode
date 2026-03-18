/*
 * XREFs of PpmParkApplyForcedMask @ 0x140AB1350
 * Callers:
 *     NtPowerInformation @ 0x14096E740 (NtPowerInformation.c)
 * Callees:
 *     PpmAcquireLock @ 0x1402045E4 (PpmAcquireLock.c)
 *     PpmReleaseLock @ 0x140204CAC (PpmReleaseLock.c)
 *     PpmCheckApplyParkConstraints @ 0x1404B3F74 (PpmCheckApplyParkConstraints.c)
 *     PpmParkApplyPolicy @ 0x1404E9D84 (PpmParkApplyPolicy.c)
 *     PpmParkParkingAvailable @ 0x140A4D7C8 (PpmParkParkingAvailable.c)
 */

__int64 __fastcall PpmParkApplyForcedMask(__int64 *a1, __int64 a2, unsigned int a3)
{
  unsigned __int16 v3; // r14
  __int64 v5; // rbp
  unsigned int v6; // ebx
  __int64 *v7; // rsi
  unsigned int v9; // r9d
  char v10; // cl
  unsigned __int16 v11; // r8
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // [rsp+40h] [rbp+8h] BYREF

  v3 = *((_WORD *)a1 + 4);
  v5 = *a1;
  v6 = 0;
  v15 = 0LL;
  v7 = (__int64 *)a2;
  PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock, a2, a3);
  if ( v3 > 0x20u || *((_WORD *)a1 + 5) || *((_WORD *)a1 + 6) || *((_WORD *)a1 + 7) )
    goto LABEL_7;
  if ( v7 )
  {
    if ( (~v5 & *v7) != 0 )
      goto LABEL_7;
  }
  else
  {
    v7 = &v15;
  }
  v9 = PpmParkNumNodes;
  v10 = 0;
  v11 = 0;
  if ( PpmParkNumNodes )
  {
    do
    {
      v12 = PpmParkNodes + 208LL * v11;
      if ( *(_WORD *)(v12 + 4) == v3 )
      {
        v13 = *(_QWORD *)(v12 + 16);
        *(_QWORD *)(v12 + 24) = v5 & v13;
        v14 = *v7 & v13;
        *(_BYTE *)(v12 + 120) |= 1u;
        *(_QWORD *)(v12 + 40) = v14;
        v10 = 1;
      }
      ++v11;
    }
    while ( v11 < v9 );
    if ( v10 )
    {
      PpmParkApplyPolicy();
      PpmParkParkingAvailable();
      PpmCheckApplyParkConstraints();
      return v6;
    }
  }
LABEL_7:
  v6 = -1073741811;
  PpmReleaseLock(&PpmPerfPolicyLock);
  return v6;
}
