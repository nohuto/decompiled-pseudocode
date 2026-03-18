/*
 * XREFs of KeSetProcessPpmPolicy @ 0x140200830
 * Callers:
 *     PspSetProcessPpmPolicy @ 0x140AC4BB0 (PspSetProcessPpmPolicy.c)
 * Callees:
 *     KiReleaseThreadStateLock @ 0x140201E60 (KiReleaseThreadStateLock.c)
 *     KiAcquireProcessLockExclusive @ 0x14026B2B4 (KiAcquireProcessLockExclusive.c)
 *     KiAcquireThreadStateLockForWrite @ 0x140271D50 (KiAcquireThreadStateLockForWrite.c)
 *     KiUpdateThreadQosGroupingSummaries @ 0x140317BD0 (KiUpdateThreadQosGroupingSummaries.c)
 *     KiComputeThreadQos @ 0x140318250 (KiComputeThreadQos.c)
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiReleaseProcessLockExclusive @ 0x1403AE69C (KiReleaseProcessLockExclusive.c)
 *     Feature_IdleSearchImprovements__private_IsEnabledNoReportingNoInline @ 0x1404EFFC4 (Feature_IdleSearchImprovements__private_IsEnabledNoReportingNoInline.c)
 */

__int64 __fastcall KeSetProcessPpmPolicy(__int64 a1, int a2)
{
  __int64 v4; // rdx
  int v5; // ebx
  signed __int32 v6; // ett
  _QWORD *i; // rsi
  int v8; // eax
  char v9; // di
  volatile signed __int32 *v11; // rbx
  unsigned int v12; // edi
  unsigned __int8 v13; // al
  int v14; // edi
  unsigned int v15; // ecx
  int v16; // ecx
  _BYTE *v17; // rax
  __int64 *v18; // r15
  __int64 v19; // r13
  int v20; // ecx
  _BYTE *v21; // rax
  __int64 *v22; // r15
  __int64 v23; // r13
  __int64 v24; // [rsp+30h] [rbp-38h] BYREF
  __int64 v25; // [rsp+38h] [rbp-30h] BYREF
  __int64 v26; // [rsp+40h] [rbp-28h] BYREF
  _OWORD v27[2]; // [rsp+48h] [rbp-20h] BYREF
  char v28; // [rsp+B8h] [rbp+50h] BYREF
  __int64 v29; // [rsp+C0h] [rbp+58h] BYREF
  __int64 v30; // [rsp+C8h] [rbp+60h] BYREF

  v29 = 0LL;
  v30 = 0LL;
  v28 = 0;
  v27[0] = 0LL;
  KiAcquireProcessLockExclusive(a1, &v28);
  v5 = a2 << 7;
  do
    v6 = *(_DWORD *)(a1 + 136);
  while ( v6 != _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 136), v5 | v6 & 0xFFFFF87F, v6) );
  v24 = 0LL;
  for ( i = *(_QWORD **)(a1 + 48); i != (_QWORD *)(a1 + 48); i = (_QWORD *)*i )
  {
    v11 = (volatile signed __int32 *)(i - 95);
    v12 = 0;
    while ( _interlockedbittestandset64(v11 + 16, 0LL) )
    {
      do
      {
        if ( (++v12 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall() )
        {
          HvlNotifyLongSpinWait(v12);
        }
        else
        {
          _mm_pause();
        }
      }
      while ( *((_QWORD *)v11 + 8) );
    }
    v8 = KiComputeThreadQos(i - 95);
    v9 = v8;
    if ( v8 != *((unsigned __int8 *)v11 + 516) )
    {
      v13 = KiAcquireThreadStateLockForWrite(
              (int)i - 760,
              (unsigned int)&v29,
              (unsigned int)&v24,
              (unsigned int)&v30,
              (__int64)v27);
      *((_BYTE *)v11 + 516) = v9;
      v14 = v29;
      v15 = v13 - 2;
      if ( v13 == 2 )
      {
        if ( !*(_QWORD *)(v29 + 16) )
        {
          v16 = *((_DWORD *)v11 + 30) >> 1;
          v26 = v29;
          if ( (v16 & 1) == 0 )
          {
            v18 = &v26;
            v15 = 1;
            goto LABEL_21;
          }
          v17 = *(_BYTE **)(v29 + 36440);
          v15 = (unsigned __int8)*v17;
          v18 = (__int64 *)(v17 + 8);
          if ( *v17 )
          {
LABEL_21:
            v19 = v15;
            do
            {
              *(_BYTE *)(*(_QWORD *)(*v18 + 56) + 64LL) ^= (*((_BYTE *)v11 + 516) ^ *(_BYTE *)(*(_QWORD *)(*v18 + 56)
                                                                                             + 64LL)) & 7;
              KiUpdateThreadQosGroupingSummaries();
              Feature_IdleSearchImprovements__private_IsEnabledNoReportingNoInline();
              ++v18;
              --v19;
            }
            while ( v19 );
          }
        }
      }
      else if ( v13 == 3 )
      {
        v20 = *((_DWORD *)v11 + 30) >> 1;
        v25 = v29;
        if ( (v20 & 1) != 0 )
        {
          v21 = *(_BYTE **)(v29 + 36440);
          v15 = (unsigned __int8)*v21;
          v22 = (__int64 *)(v21 + 8);
          if ( !*v21 )
            goto LABEL_23;
        }
        else
        {
          v22 = &v25;
          v15 = 1;
        }
        v23 = v15;
        do
        {
          *(_BYTE *)(*(_QWORD *)(*v22 + 56) + 64LL) ^= (*((_BYTE *)v11 + 516) ^ *(_BYTE *)(*(_QWORD *)(*v22 + 56) + 64LL)) & 7;
          KiUpdateThreadQosGroupingSummaries();
          Feature_IdleSearchImprovements__private_IsEnabledNoReportingNoInline();
          ++v22;
          --v23;
        }
        while ( v23 );
      }
LABEL_23:
      KiReleaseThreadStateLock(v15, v14, (unsigned int)&v24, v30, (__int64)v27);
    }
    *((_QWORD *)v11 + 8) = 0LL;
  }
  LOBYTE(v4) = v28;
  return KiReleaseProcessLockExclusive(a1, v4);
}
