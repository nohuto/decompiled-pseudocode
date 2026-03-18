/*
 * XREFs of KeSetThreadPpmPolicy @ 0x1402005B4
 * Callers:
 *     PspSetThreadPpmPolicy @ 0x1408BA020 (PspSetThreadPpmPolicy.c)
 * Callees:
 *     KiReleaseThreadStateLock @ 0x140201E60 (KiReleaseThreadStateLock.c)
 *     KiAcquireThreadLockRaiseToDpc @ 0x140204DB0 (KiAcquireThreadLockRaiseToDpc.c)
 *     KiReleaseThreadLockLowerIrql @ 0x140204FF0 (KiReleaseThreadLockLowerIrql.c)
 *     KiAcquireThreadStateLockForWrite @ 0x140271D50 (KiAcquireThreadStateLockForWrite.c)
 *     KiUpdateThreadQosGroupingSummaries @ 0x140317BD0 (KiUpdateThreadQosGroupingSummaries.c)
 *     KiComputeThreadQos @ 0x140318250 (KiComputeThreadQos.c)
 *     Feature_IdleSearchImprovements__private_IsEnabledNoReportingNoInline @ 0x1404EFFC4 (Feature_IdleSearchImprovements__private_IsEnabledNoReportingNoInline.c)
 */

__int64 __fastcall KeSetThreadPpmPolicy(__int64 a1, char a2)
{
  int v4; // eax
  __int64 v5; // rdx
  char v6; // bl
  unsigned __int8 v8; // al
  int v9; // ebx
  unsigned int v10; // ecx
  int v11; // ecx
  _BYTE *v12; // rax
  __int64 *v13; // rsi
  __int64 v14; // r14
  int v15; // ecx
  _BYTE *v16; // rax
  __int64 *v17; // rsi
  __int64 v18; // r14
  __int64 v19; // [rsp+30h] [rbp-30h] BYREF
  __int64 v20; // [rsp+38h] [rbp-28h] BYREF
  __int64 v21; // [rsp+40h] [rbp-20h] BYREF
  __int128 v22; // [rsp+48h] [rbp-18h] BYREF
  char v23; // [rsp+98h] [rbp+38h] BYREF
  __int64 v24; // [rsp+A0h] [rbp+40h] BYREF
  __int64 v25; // [rsp+A8h] [rbp+48h] BYREF

  v23 = 0;
  v24 = 0LL;
  v25 = 0LL;
  KiAcquireThreadLockRaiseToDpc(a1, &v23);
  *(_BYTE *)(a1 + 958) = a2;
  v4 = KiComputeThreadQos(a1);
  v6 = v4;
  if ( v4 != *(unsigned __int8 *)(a1 + 516) )
  {
    v19 = 0LL;
    v22 = 0LL;
    v8 = KiAcquireThreadStateLockForWrite(a1, (unsigned int)&v24, (unsigned int)&v19, (unsigned int)&v25, (__int64)&v22);
    *(_BYTE *)(a1 + 516) = v6;
    v9 = v24;
    v10 = v8 - 2;
    if ( v8 == 2 )
    {
      if ( !*(_QWORD *)(v24 + 16) )
      {
        v11 = *(_DWORD *)(a1 + 120) >> 1;
        v21 = v24;
        if ( (v11 & 1) == 0 )
        {
          v13 = &v21;
          v10 = 1;
LABEL_7:
          v14 = v10;
          do
          {
            *(_BYTE *)(*(_QWORD *)(*v13 + 56) + 64LL) ^= (*(_BYTE *)(a1 + 516) ^ *(_BYTE *)(*(_QWORD *)(*v13 + 56) + 64LL)) & 7;
            KiUpdateThreadQosGroupingSummaries();
            Feature_IdleSearchImprovements__private_IsEnabledNoReportingNoInline();
            ++v13;
            --v14;
          }
          while ( v14 );
          goto LABEL_9;
        }
        v12 = *(_BYTE **)(v24 + 36440);
        v10 = (unsigned __int8)*v12;
        v13 = (__int64 *)(v12 + 8);
        if ( *v12 )
          goto LABEL_7;
      }
    }
    else if ( v8 == 3 )
    {
      v15 = *(_DWORD *)(a1 + 120) >> 1;
      v20 = v24;
      if ( (v15 & 1) != 0 )
      {
        v16 = *(_BYTE **)(v24 + 36440);
        v10 = (unsigned __int8)*v16;
        v17 = (__int64 *)(v16 + 8);
        if ( !*v16 )
          goto LABEL_9;
      }
      else
      {
        v17 = &v20;
        v10 = 1;
      }
      v18 = v10;
      do
      {
        *(_BYTE *)(*(_QWORD *)(*v17 + 56) + 64LL) ^= (*(_BYTE *)(a1 + 516) ^ *(_BYTE *)(*(_QWORD *)(*v17 + 56) + 64LL)) & 7;
        KiUpdateThreadQosGroupingSummaries();
        Feature_IdleSearchImprovements__private_IsEnabledNoReportingNoInline();
        ++v17;
        --v18;
      }
      while ( v18 );
    }
LABEL_9:
    KiReleaseThreadStateLock(v10, v9, (unsigned int)&v19, v25, (__int64)&v22);
  }
  LOBYTE(v5) = v23;
  return KiReleaseThreadLockLowerIrql(a1, v5);
}
