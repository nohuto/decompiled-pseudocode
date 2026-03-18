/*
 * XREFs of WriteCookAccess @ 0x1400015F0
 * Callers:
 *     <none>
 * Callees:
 *     QueueContext @ 0x140001C48 (QueueContext.c)
 *     HeapFree @ 0x140004AB0 (HeapFree.c)
 *     DequeueAndReadyContext @ 0x140005CE4 (DequeueAndReadyContext.c)
 *     LogError @ 0x14000FE74 (LogError.c)
 *     AcpiDiagTraceAmlError @ 0x14000FF1C (AcpiDiagTraceAmlError.c)
 *     PrintDebugMessage @ 0x140010060 (PrintDebugMessage.c)
 *     _guard_dispatch_icall @ 0x140070B90 (_guard_dispatch_icall.c)
 */

__int64 __fastcall WriteCookAccess(__int64 a1, __int64 a2, unsigned int a3)
{
  _DWORD *v3; // rdi
  unsigned int v4; // esi
  int v7; // r8d
  _DWORD *v8; // r12
  __int64 v9; // r14
  char v10; // r12
  __int64 v11; // r9
  unsigned int v12; // eax
  int v14; // r8d
  int v15; // r8d
  KIRQL v16; // bl
  char v17; // r13
  KIRQL v18; // al
  __int32 v19; // esi
  __int64 v20; // r8
  __int64 v21; // rdx
  unsigned int v22; // eax
  KIRQL v23; // [rsp+90h] [rbp+18h]

  v3 = (_DWORD *)(a2 + 16);
  v4 = a3;
  if ( a3 )
    v7 = 3;
  else
    v7 = *v3 & 0xF;
  v8 = (_DWORD *)(a2 + 16);
  v9 = *(_QWORD *)(*(_QWORD *)(a2 + 32) + 96LL);
  if ( !v7 )
  {
    if ( !*(_BYTE *)(a2 + 88) )
    {
      *v3 += 2;
      goto LABEL_6;
    }
    v17 = 0;
    if ( (gDebugger & 0x100) != 0 )
    {
      _m_prefetchw(&gDebugger);
      v17 = _InterlockedAnd(&gDebugger, 0xFFFFFFEF);
    }
    v18 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v9 + 24));
    v23 = v18;
    v19 = _InterlockedExchange((volatile __int32 *)(v9 + 16), 1);
    if ( v19 )
    {
      QueueContext(a1, 0xFFFFLL, v9 + 32);
      v18 = v23;
    }
    KeReleaseSpinLock((PKSPIN_LOCK)(v9 + 24), v18);
    if ( v19 )
      return 32772;
    v20 = *(_QWORD *)(a2 + 40);
    v21 = *(_QWORD *)(a2 + 32);
    v8 = (_DWORD *)(a2 + 16);
    ++*(_DWORD *)(a2 + 16);
    v22 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD, __int64, _QWORD, __int64 (__fastcall *)(), __int64))(v20 + 16))(
            0LL,
            v21 + 120,
            *(_QWORD *)(a2 + 48),
            *(unsigned int *)(a2 + 56),
            a2 + 80,
            *(_QWORD *)(v20 + 24),
            RestartCtxtCallback,
            a1 + 328);
    v4 = v22;
    if ( (v17 & 0x10) != 0 )
      _InterlockedOr(&gDebugger, 0x10u);
    if ( v22 == 259 )
      return 32772;
    if ( v22 )
      goto LABEL_20;
    goto LABEL_30;
  }
  v14 = v7 - 1;
  if ( !v14 )
  {
LABEL_30:
    *(_QWORD *)(a2 + 64) |= *(_QWORD *)(a2 + 80) & ~*(_QWORD *)(a2 + 72);
    ++*v8;
    goto LABEL_6;
  }
  v15 = v14 - 1;
  if ( v15 )
  {
    if ( v15 != 1 )
      return v4;
    goto LABEL_16;
  }
LABEL_6:
  v10 = 0;
  if ( (gDebugger & 0x100) != 0 )
  {
    _m_prefetchw(&gDebugger);
    v10 = _InterlockedAnd(&gDebugger, 0xFFFFFFEF);
  }
  v11 = *(_QWORD *)(a2 + 40);
  ++*v3;
  v12 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, _QWORD, __int64, _QWORD, __int64 (__fastcall *)(), __int64))(v11 + 16))(
          1LL,
          *(_QWORD *)(a2 + 32) + 120LL,
          *(_QWORD *)(a2 + 48),
          *(unsigned int *)(a2 + 56),
          a2 + 64,
          *(_QWORD *)(v11 + 24),
          RestartCtxtCallback,
          a1 + 328);
  v4 = v12;
  if ( (v10 & 0x10) != 0 )
    _InterlockedOr(&gDebugger, 0x10u);
  if ( v12 == 259 )
    return 32772;
  if ( v12 )
  {
LABEL_20:
    LogError(3222536216LL);
    AcpiDiagTraceAmlError(a1, 3222536216LL);
    PrintDebugMessage(212, *(unsigned __int8 *)(v9 + 12), v4, 0, 0LL);
    return (unsigned int)-1072431080;
  }
LABEL_16:
  if ( *(_BYTE *)(a2 + 88) )
  {
    v16 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v9 + 24));
    DequeueAndReadyContext(v9 + 32);
    _InterlockedExchange((volatile __int32 *)(v9 + 16), 0);
    KeReleaseSpinLock((PKSPIN_LOCK)(v9 + 24), v16);
  }
  *(_QWORD *)(a1 + 416) = *(_QWORD *)(*(_QWORD *)(a1 + 416) + 8LL);
  HeapFree();
  return v4;
}
