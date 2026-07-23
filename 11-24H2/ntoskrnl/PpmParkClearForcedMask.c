/*
 * XREFs of PpmParkClearForcedMask @ 0x140AC8B58
 * Callers:
 *     NtPowerInformation @ 0x1409EDB00 (NtPowerInformation.c)
 * Callees:
 *     PpmReleaseLock @ 0x1402AE140 (PpmReleaseLock.c)
 *     PpmAcquireLock @ 0x1402AE7DC (PpmAcquireLock.c)
 *     PpmCheckApplyParkConstraints @ 0x14044BDC4 (PpmCheckApplyParkConstraints.c)
 *     PpmParkApplyPolicy @ 0x1404E4B18 (PpmParkApplyPolicy.c)
 *     Feature_PpmParkEx__private_IsEnabledDeviceUsageNoInline @ 0x1405B2224 (Feature_PpmParkEx__private_IsEnabledDeviceUsageNoInline.c)
 *     PpmParkParkingAvailable @ 0x140A6B7A0 (PpmParkParkingAvailable.c)
 */

__int64 __fastcall PpmParkClearForcedMask(_WORD *a1, __int64 a2, unsigned int a3)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  unsigned int v8; // ebx
  char v10; // bp
  unsigned __int16 i; // si
  __int64 v12; // rdi
  __int64 v13; // rax
  char v14; // al

  PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock, a2, a3);
  if ( *a1 >= 0x20u )
  {
    v8 = -1073741811;
    goto LABEL_3;
  }
  v8 = 0;
  v10 = 0;
  for ( i = 0; i < (unsigned int)PpmParkNumNodes; ++i )
  {
    v12 = PpmParkNodes + 1296LL * i;
    if ( (unsigned int)Feature_PpmParkEx__private_IsEnabledDeviceUsageNoInline() )
    {
      v13 = (unsigned __int16)*a1;
      if ( (unsigned __int16)v13 < *(_WORD *)(v12 + 48) && *(_QWORD *)(v12 + 8 * v13 + 56) )
      {
LABEL_11:
        v14 = *(_BYTE *)(v12 + 1184);
        if ( (v14 & 1) != 0 )
        {
          v10 = 1;
          *(_BYTE *)(v12 + 1184) = v14 & 0xFE;
        }
      }
    }
    else if ( *(_WORD *)(v12 + 4) == *a1 )
    {
      goto LABEL_11;
    }
  }
  if ( v10 )
  {
    PpmParkApplyPolicy(v5, v4, v6, v7);
    PpmParkParkingAvailable();
    PpmCheckApplyParkConstraints();
    return v8;
  }
LABEL_3:
  PpmReleaseLock(&PpmPerfPolicyLock);
  return v8;
}
