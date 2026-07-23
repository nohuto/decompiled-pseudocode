/*
 * XREFs of KeSetProcessPpmPolicy @ 0x140475710
 * Callers:
 *     PspRefreshProcessUserPresencePpmPolicyCallback @ 0x1405E2A40 (PspRefreshProcessUserPresencePpmPolicyCallback.c)
 *     PspSetProcessPpmPolicy @ 0x140AC95E0 (PspSetProcessPpmPolicy.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiComputeThreadQos @ 0x1402A8F40 (KiComputeThreadQos.c)
 *     KiAcquireThreadStateLockForWrite @ 0x1403A0670 (KiAcquireThreadStateLockForWrite.c)
 *     KiReleaseThreadStateLock @ 0x1403A0FC0 (KiReleaseThreadStateLock.c)
 *     KiReleaseProcessLockExclusive @ 0x1403A2318 (KiReleaseProcessLockExclusive.c)
 *     KiAcquireProcessLockExclusive @ 0x1403A2370 (KiAcquireProcessLockExclusive.c)
 *     KiPrcbArrayForIsolationWidth @ 0x1403EB700 (KiPrcbArrayForIsolationWidth.c)
 *     KiUpdateThreadQosGroupingSummaries @ 0x1404E0370 (KiUpdateThreadQosGroupingSummaries.c)
 */

__int64 __fastcall KeSetProcessPpmPolicy(__int64 a1, int a2)
{
  __int64 v4; // rdx
  int v5; // ebx
  signed __int32 v6; // ett
  _QWORD *i; // rdi
  volatile signed __int32 *v8; // rbx
  unsigned int v9; // r14d
  int v10; // eax
  char v11; // r14
  unsigned __int8 v12; // al
  __int64 v13; // r14
  unsigned __int64 v14; // rcx
  int v15; // edx
  __int64 v16; // r9
  __int64 v17; // rdx
  __int64 *v18; // r12
  __int64 v19; // r13
  __int64 v20; // rcx
  __int64 v21; // r8
  int v22; // edx
  __int64 v23; // r8
  __int64 v24; // rdx
  __int64 *v25; // r12
  __int64 v26; // r13
  __int64 v27; // rcx
  __int64 v28; // r9
  __int64 v30; // [rsp+30h] [rbp-39h] BYREF
  __int64 *v31; // [rsp+38h] [rbp-31h] BYREF
  __int64 *v32; // [rsp+40h] [rbp-29h] BYREF
  volatile __int64 *v33; // [rsp+48h] [rbp-21h] BYREF
  __int64 v34; // [rsp+50h] [rbp-19h] BYREF
  __int64 v35; // [rsp+58h] [rbp-11h] BYREF
  __int64 v36; // [rsp+60h] [rbp-9h] BYREF
  _OWORD v37[5]; // [rsp+68h] [rbp-1h] BYREF
  unsigned int v38; // [rsp+D0h] [rbp+67h] BYREF
  unsigned __int8 v39; // [rsp+D8h] [rbp+6Fh] BYREF
  unsigned int v40; // [rsp+E0h] [rbp+77h] BYREF

  v39 = 0;
  v30 = 0LL;
  v33 = 0LL;
  v37[0] = 0LL;
  KiAcquireProcessLockExclusive(a1, &v39);
  v5 = a2 << 7;
  do
    v6 = *(_DWORD *)(a1 + 136);
  while ( v6 != _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 136), v5 | v6 & 0xFFFFF87F, v6) );
  v34 = 0LL;
  for ( i = *(_QWORD **)(a1 + 48); i != (_QWORD *)(a1 + 48); i = (_QWORD *)*i )
  {
    v8 = (volatile signed __int32 *)(i - 95);
    v9 = 0;
    while ( _interlockedbittestandset64(v8 + 16, 0LL) )
    {
      do
      {
        if ( (++v9 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && KiCheckVpBackingLongSpinWaitHypercall() )
        {
          HvlNotifyLongSpinWait(v9);
        }
        else
        {
          _mm_pause();
        }
      }
      while ( *((_QWORD *)v8 + 8) );
    }
    v10 = KiComputeThreadQos((__int64)(i - 95));
    v11 = v10;
    if ( v10 != *((unsigned __int8 *)v8 + 516) )
    {
      v12 = KiAcquireThreadStateLockForWrite((__int64)(i - 95), &v30, &v34, &v33, (volatile signed __int64 **)v37);
      *((_BYTE *)v8 + 516) = v11;
      v13 = v30;
      v14 = (unsigned int)v12 - 2;
      if ( v12 == 2 )
      {
        if ( !*(_QWORD *)(v30 + 16) )
        {
          v22 = (*((_DWORD *)v8 + 30) >> 1) & 1;
          v36 = v30;
          v32 = 0LL;
          v40 = 0;
          KiPrcbArrayForIsolationWidth((__int64)&v36, v22, &v32, &v40);
          v24 = v40;
          if ( v40 )
          {
            v25 = v32;
            v26 = v40;
            do
            {
              v27 = *v25;
              v28 = *(_QWORD *)(*v25 + 56);
              LOBYTE(v23) = (*((_BYTE *)v8 + 516) ^ *(_BYTE *)(v28 + 64)) & 7;
              *(_BYTE *)(v28 + 64) ^= v23;
              KiUpdateThreadQosGroupingSummaries(v27, v24, v23, v28);
              ++v25;
              --v26;
            }
            while ( v26 );
          }
        }
      }
      else if ( v12 == 3 )
      {
        v15 = (*((_DWORD *)v8 + 30) >> 1) & 1;
        v35 = v30;
        v31 = 0LL;
        v38 = 0;
        KiPrcbArrayForIsolationWidth((__int64)&v35, v15, &v31, &v38);
        v17 = v38;
        if ( v38 )
        {
          v18 = v31;
          v19 = v38;
          do
          {
            v20 = *v18;
            v21 = *(_QWORD *)(*v18 + 56);
            LOBYTE(v17) = (*((_BYTE *)v8 + 516) ^ *(_BYTE *)(v21 + 64)) & 7;
            *(_BYTE *)(v21 + 64) ^= v17;
            KiUpdateThreadQosGroupingSummaries(v20, v17, v21, v16);
            ++v18;
            --v19;
          }
          while ( v19 );
        }
      }
      KiReleaseThreadStateLock(v14, v13, &v34, v33, (volatile signed __int64 **)v37);
    }
    *((_QWORD *)v8 + 8) = 0LL;
  }
  LOBYTE(v4) = v39;
  return KiReleaseProcessLockExclusive(a1, v4);
}
