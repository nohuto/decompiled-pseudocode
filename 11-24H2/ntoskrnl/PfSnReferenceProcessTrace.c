/*
 * XREFs of PfSnReferenceProcessTrace @ 0x1402ED090
 * Callers:
 *     MiCompleteProtoPteFault @ 0x1402EBD20 (MiCompleteProtoPteFault.c)
 *     PfSnLogPageFault @ 0x1402ECF60 (PfSnLogPageFault.c)
 *     PfSnEndProcessTrace @ 0x140939A40 (PfSnEndProcessTrace.c)
 *     PfSnLogStreamCreate @ 0x1409622A0 (PfSnLogStreamCreate.c)
 *     PfSnLogHelper @ 0x14096290C (PfSnLogHelper.c)
 *     PfSnAsyncContextInitialize @ 0x140962E58 (PfSnAsyncContextInitialize.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14024DD30 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140254B20 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeSetEvent @ 0x1402725A0 (KeSetEvent.c)
 *     ExAcquireRundownProtection @ 0x1402792A0 (ExAcquireRundownProtection.c)
 */

struct _EX_RUNDOWN_REF *__fastcall PfSnReferenceProcessTrace(__int64 a1)
{
  signed __int64 v2; // rdx
  signed __int64 v3; // rax
  unsigned __int64 v4; // rdi
  struct _EX_RUNDOWN_REF *result; // rax
  unsigned int v6; // edx
  signed __int64 v7; // rax
  signed __int64 v8; // rtt
  signed __int64 v9; // rax
  signed __int64 v10; // rtt
  BOOLEAN v11; // di
  KIRQL v12; // si
  struct _EX_RUNDOWN_REF *v13; // rbx
  signed __int64 v14; // rdx
  bool v15; // zf
  signed __int64 v16; // rax
  unsigned __int64 v17; // rdx

  _m_prefetchw((const void *)(a1 + 912));
  v2 = *(_QWORD *)(a1 + 912);
  if ( (v2 & 0xF) != 0 )
  {
    do
    {
      v3 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 912), v2 - 1, v2);
      if ( v2 == v3 )
        break;
      v2 = v3;
    }
    while ( (v3 & 0xF) != 0 );
  }
  v4 = v2 & 0xFFFFFFFFFFFFFFF0uLL;
  if ( (v2 & 0xFFFFFFFFFFFFFFF0uLL) == 0 )
    return (struct _EX_RUNDOWN_REF *)v4;
  v6 = v2 & 0xF;
  if ( v6 > 1 )
    return (struct _EX_RUNDOWN_REF *)v4;
  if ( v6 )
  {
    _m_prefetchw((const void *)(v4 + 360));
    v7 = *(_QWORD *)(v4 + 360);
    while ( (v7 & 1) == 0 )
    {
      v8 = v7;
      v7 = _InterlockedCompareExchange64((volatile signed __int64 *)(v4 + 360), v7 + 30, v7);
      if ( v8 == v7 )
      {
        _m_prefetchw((const void *)(a1 + 912));
        v9 = *(_QWORD *)(a1 + 912);
        while ( (v9 & 0xF) == 0 && v4 == (v9 & 0xFFFFFFFFFFFFFFF0uLL) )
        {
          v10 = v9;
          v9 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 912), v9 + 15, v9);
          if ( v10 == v9 )
            return (struct _EX_RUNDOWN_REF *)v4;
        }
        _m_prefetchw((const void *)(v4 + 360));
        v14 = *(_QWORD *)(v4 + 360);
        while ( (v14 & 1) == 0 )
        {
          v16 = _InterlockedCompareExchange64((volatile signed __int64 *)(v4 + 360), v14 - 30, v14);
          v15 = v14 == v16;
          v14 = v16;
          if ( v15 )
            return (struct _EX_RUNDOWN_REF *)v4;
        }
        v17 = v14 & 0xFFFFFFFFFFFFFFFEuLL;
        if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v17, 0xFFFFFFFFFFFFFFF1uLL) == 15
          && !_interlockedbittestandreset((volatile signed __int32 *)(v17 + 32), 0) )
        {
          KeSetEvent((PRKEVENT)(v17 + 8), 0, 0);
        }
        return (struct _EX_RUNDOWN_REF *)v4;
      }
    }
    return (struct _EX_RUNDOWN_REF *)v4;
  }
  v11 = 1;
  v12 = KeAcquireSpinLockRaiseToDpc(&qword_140E67010);
  v13 = (struct _EX_RUNDOWN_REF *)(*(_QWORD *)(a1 + 912) & 0xFFFFFFFFFFFFFFF0uLL);
  if ( v13 )
    v11 = ExAcquireRundownProtection(v13 + 45);
  KeReleaseSpinLock(&qword_140E67010, v12);
  result = 0LL;
  if ( v11 )
    return v13;
  return result;
}
