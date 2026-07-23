/*
 * XREFs of PpmParkApplyForcedMask @ 0x140AC893C
 * Callers:
 *     NtPowerInformation @ 0x1409EDB00 (NtPowerInformation.c)
 * Callees:
 *     KeAddGroupAffinityEx @ 0x140287710 (KeAddGroupAffinityEx.c)
 *     PpmReleaseLock @ 0x1402AE140 (PpmReleaseLock.c)
 *     PpmAcquireLock @ 0x1402AE7DC (PpmAcquireLock.c)
 *     KeAndAffinityEx2 @ 0x14032C8C0 (KeAndAffinityEx2.c)
 *     PpmCheckApplyParkConstraints @ 0x14044BDC4 (PpmCheckApplyParkConstraints.c)
 *     PpmParkApplyPolicy @ 0x1404E4B18 (PpmParkApplyPolicy.c)
 *     Feature_PpmParkEx__private_IsEnabledDeviceUsageNoInline @ 0x1405B2224 (Feature_PpmParkEx__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     PpmParkParkingAvailable @ 0x140A6B7A0 (PpmParkParkingAvailable.c)
 */

__int64 __fastcall PpmParkApplyForcedMask(__int64 a1, __int64 *a2)
{
  unsigned int v4; // ebx
  __int64 v5; // r15
  __int64 v6; // r12
  __int64 v7; // rdx
  unsigned int v8; // r8d
  char v10; // r13
  unsigned __int16 v11; // si
  __int64 v12; // rdi
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rcx
  __int64 v18; // [rsp+28h] [rbp-E0h] BYREF
  __int64 v19; // [rsp+30h] [rbp-D8h]
  struct _KAFFINITY_EX v20; // [rsp+38h] [rbp-D0h] BYREF
  struct _KAFFINITY_EX v21; // [rsp+148h] [rbp+40h] BYREF

  memset_0(&v20, 0, sizeof(v20));
  v4 = 0;
  v18 = 0LL;
  memset_0(&v21, 0, sizeof(v21));
  v5 = *(_QWORD *)a1;
  v6 = *(unsigned __int16 *)(a1 + 8);
  v19 = *(_QWORD *)a1;
  PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock, v7, v8);
  if ( (unsigned __int16)v6 > 0x20u || *(_WORD *)(a1 + 10) || *(_WORD *)(a1 + 12) || *(_WORD *)(a1 + 14) )
    goto LABEL_7;
  if ( a2 )
  {
    if ( (~v5 & *a2) != 0 )
      goto LABEL_7;
  }
  else
  {
    a2 = &v18;
  }
  if ( (unsigned int)Feature_PpmParkEx__private_IsEnabledDeviceUsageNoInline() )
  {
    *(_QWORD *)&v20.Count = 2097153LL;
    memset_0(&v20.8, 0, sizeof(v20.8));
    *(_QWORD *)&v21.Count = 2097153LL;
    memset_0(&v21.8, 0, sizeof(v21.8));
    KeAddGroupAffinityEx(&v20.Count, v6, v5);
    KeAddGroupAffinityEx(&v21.Count, v6, *a2);
  }
  v10 = 0;
  v11 = 0;
  if ( !PpmParkNumNodes )
    goto LABEL_7;
  do
  {
    v12 = PpmParkNodes + 1296LL * v11;
    if ( !(unsigned int)Feature_PpmParkEx__private_IsEnabledDeviceUsageNoInline() )
    {
      if ( *(_WORD *)(v12 + 4) != (_WORD)v6 )
        goto LABEL_20;
      v17 = *(_QWORD *)(v12 + 16);
      *(_QWORD *)(v12 + 24) = v5 & v17;
      v14 = *a2 & v17;
      *(_QWORD *)(v12 + 40) = v14;
      goto LABEL_19;
    }
    if ( (unsigned __int16)v6 < *(_WORD *)(v12 + 48) && *(_QWORD *)(v12 + 48 + 8 * v6 + 8) )
    {
      KeAndAffinityEx2((struct _KAFFINITY_EX *)(v12 + 48), &v20, v12 + 312);
      KeAndAffinityEx2((struct _KAFFINITY_EX *)(v12 + 48), &v21, v12 + 840);
LABEL_19:
      v10 = 1;
      *(_BYTE *)(v12 + 1184) |= 1u;
    }
LABEL_20:
    v5 = v19;
    ++v11;
  }
  while ( v11 < (unsigned int)PpmParkNumNodes );
  if ( v10 )
  {
    PpmParkApplyPolicy(v14, v13, v15, v16);
    PpmParkParkingAvailable();
    PpmCheckApplyParkConstraints();
    return v4;
  }
LABEL_7:
  v4 = -1073741811;
  PpmReleaseLock(&PpmPerfPolicyLock);
  return v4;
}
