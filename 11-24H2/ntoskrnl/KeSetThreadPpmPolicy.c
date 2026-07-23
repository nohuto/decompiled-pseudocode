/*
 * XREFs of KeSetThreadPpmPolicy @ 0x140486864
 * Callers:
 *     PspSetThreadPpmPolicy @ 0x1408EB1D0 (PspSetThreadPpmPolicy.c)
 * Callees:
 *     KiComputeThreadQos @ 0x1402A8F40 (KiComputeThreadQos.c)
 *     KiAcquireThreadLockRaiseToDpc @ 0x1402D1150 (KiAcquireThreadLockRaiseToDpc.c)
 *     KiReleaseThreadLockLowerIrql @ 0x14032DD90 (KiReleaseThreadLockLowerIrql.c)
 *     KiAcquireThreadStateLockForWrite @ 0x1403A0670 (KiAcquireThreadStateLockForWrite.c)
 *     KiReleaseThreadStateLock @ 0x1403A0FC0 (KiReleaseThreadStateLock.c)
 *     KiPrcbArrayForIsolationWidth @ 0x1403EB700 (KiPrcbArrayForIsolationWidth.c)
 *     KiUpdateThreadQosGroupingSummaries @ 0x1404E0370 (KiUpdateThreadQosGroupingSummaries.c)
 */

__int64 __fastcall KeSetThreadPpmPolicy(__int64 a1, char a2)
{
  int v4; // eax
  char v5; // bl
  unsigned __int8 v6; // al
  __int64 v7; // rbx
  unsigned __int64 v8; // rcx
  int v9; // edx
  __int64 v10; // r9
  __int64 v11; // rdx
  __int64 *v12; // rsi
  __int64 v13; // r14
  __int64 v14; // rcx
  __int64 v15; // r8
  int v16; // edx
  __int64 v17; // r8
  __int64 v18; // rdx
  __int64 *v19; // rsi
  __int64 v20; // r14
  __int64 v21; // rcx
  __int64 v22; // r9
  __int64 *v24; // [rsp+30h] [rbp-40h] BYREF
  __int64 *v25; // [rsp+38h] [rbp-38h] BYREF
  volatile __int64 *v26; // [rsp+40h] [rbp-30h] BYREF
  __int64 v27; // [rsp+48h] [rbp-28h] BYREF
  __int64 v28; // [rsp+50h] [rbp-20h] BYREF
  __int64 v29; // [rsp+58h] [rbp-18h] BYREF
  __int128 v30; // [rsp+60h] [rbp-10h] BYREF
  unsigned int v31; // [rsp+A0h] [rbp+30h] BYREF
  unsigned __int8 v32; // [rsp+A8h] [rbp+38h] BYREF
  unsigned int v33; // [rsp+B0h] [rbp+40h] BYREF
  __int64 v34; // [rsp+B8h] [rbp+48h] BYREF

  v32 = 0;
  v34 = 0LL;
  v26 = 0LL;
  KiAcquireThreadLockRaiseToDpc(a1, &v32);
  *(_BYTE *)(a1 + 958) = a2;
  v4 = KiComputeThreadQos(a1);
  v5 = v4;
  if ( v4 != *(unsigned __int8 *)(a1 + 516) )
  {
    v27 = 0LL;
    v30 = 0LL;
    v6 = KiAcquireThreadStateLockForWrite(a1, &v34, &v27, &v26, (volatile signed __int64 **)&v30);
    *(_BYTE *)(a1 + 516) = v5;
    v7 = v34;
    v8 = (unsigned int)v6 - 2;
    if ( v6 == 2 )
    {
      if ( !*(_QWORD *)(v34 + 16) )
      {
        v16 = (*(_DWORD *)(a1 + 120) >> 1) & 1;
        v29 = v34;
        v25 = 0LL;
        v33 = 0;
        KiPrcbArrayForIsolationWidth((__int64)&v29, v16, &v25, &v33);
        v18 = v33;
        if ( v33 )
        {
          v19 = v25;
          v20 = v33;
          do
          {
            v21 = *v19;
            v22 = *(_QWORD *)(*v19 + 56);
            LOBYTE(v17) = (*(_BYTE *)(a1 + 516) ^ *(_BYTE *)(v22 + 64)) & 7;
            *(_BYTE *)(v22 + 64) ^= v17;
            KiUpdateThreadQosGroupingSummaries(v21, v18, v17, v22);
            ++v19;
            --v20;
          }
          while ( v20 );
        }
      }
    }
    else if ( v6 == 3 )
    {
      v9 = (*(_DWORD *)(a1 + 120) >> 1) & 1;
      v28 = v34;
      v24 = 0LL;
      v31 = 0;
      KiPrcbArrayForIsolationWidth((__int64)&v28, v9, &v24, &v31);
      v11 = v31;
      if ( v31 )
      {
        v12 = v24;
        v13 = v31;
        do
        {
          v14 = *v12;
          v15 = *(_QWORD *)(*v12 + 56);
          LOBYTE(v11) = (*(_BYTE *)(a1 + 516) ^ *(_BYTE *)(v15 + 64)) & 7;
          *(_BYTE *)(v15 + 64) ^= v11;
          KiUpdateThreadQosGroupingSummaries(v14, v11, v15, v10);
          ++v12;
          --v13;
        }
        while ( v13 );
      }
    }
    KiReleaseThreadStateLock(v8, v7, &v27, v26, (volatile signed __int64 **)&v30);
  }
  return KiReleaseThreadLockLowerIrql(a1, v32);
}
