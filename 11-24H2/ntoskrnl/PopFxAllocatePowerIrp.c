/*
 * XREFs of PopFxAllocatePowerIrp @ 0x1402E6A5C
 * Callers:
 *     PopAllocateIrp @ 0x1403A8268 (PopAllocateIrp.c)
 * Callees:
 *     KeResetEvent @ 0x14029EAC0 (KeResetEvent.c)
 *     ExAcquireSpinLockExclusive @ 0x14029EF70 (ExAcquireSpinLockExclusive.c)
 *     PopFxAddLogEntry @ 0x1402E69B4 (PopFxAddLogEntry.c)
 *     ExReleaseSpinLockExclusive @ 0x1402E6E40 (ExReleaseSpinLockExclusive.c)
 *     PopFxTryReferenceDevice @ 0x1403A6408 (PopFxTryReferenceDevice.c)
 *     PopFxDereferenceDevice @ 0x1403A7F58 (PopFxDereferenceDevice.c)
 */

__int64 __fastcall PopFxAllocatePowerIrp(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4,
        __int64 a5,
        char a6,
        _QWORD *OldIrql,
        _QWORD *a8)
{
  volatile LONG *v9; // rbp
  KIRQL v14; // al
  __int64 v15; // r8
  __int64 v16; // rdi
  int v17; // esi
  signed __int32 v18; // edx
  char v19; // al
  signed __int32 v20; // r8d
  unsigned __int32 v21; // eax
  signed __int32 v22; // r8d
  signed __int32 v24; // r8d
  signed __int32 v25; // eax
  signed __int32 v26; // ett
  unsigned __int32 v27; // ett
  KIRQL OldIrqla; // [rsp+80h] [rbp+38h]

  v9 = (volatile LONG *)(a1 + 88);
  *OldIrql = 0LL;
  *a8 = 0LL;
  v14 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 88));
  v16 = *(_QWORD *)(a1 + 80);
  OldIrqla = v14;
  if ( v16 )
  {
    v17 = PopFxTryReferenceDevice(v16, 0LL, v15);
    if ( v17 < 0 )
      goto LABEL_11;
    _m_prefetchw((const void *)(v16 + 32));
    v18 = _InterlockedOr((volatile signed __int32 *)(v16 + 32), 0) & 0x10;
    _m_prefetchw((const void *)(v16 + 32));
    v19 = _InterlockedOr((volatile signed __int32 *)(v16 + 32), 0);
    if ( v18 )
    {
      if ( (v19 & 0x20) == 0 )
        goto LABEL_9;
      _m_prefetchw((const void *)(v16 + 32));
      v25 = *(_DWORD *)(v16 + 32);
      do
      {
        v26 = v25;
        v25 = _InterlockedCompareExchange((volatile signed __int32 *)(v16 + 32), v25, v25);
      }
      while ( v26 != v25 );
      _m_prefetchw((const void *)(v16 + 32));
      if ( ((v25 & 0x100) != 0) != (((unsigned int)_InterlockedOr((volatile signed __int32 *)(v16 + 32), 0) >> 9) & 1) )
        goto LABEL_9;
      goto LABEL_22;
    }
    if ( (v19 & 0x10) != 0 )
    {
LABEL_10:
      PopFxDereferenceDevice(v16, 0LL);
      goto LABEL_11;
    }
    if ( a6 )
    {
      _InterlockedOr((volatile signed __int32 *)(v16 + 32), 0);
      _InterlockedXor((volatile signed __int32 *)(v16 + 32), 0x100u);
      _m_prefetchw((const void *)(v16 + 32));
      v24 = _InterlockedOr((volatile signed __int32 *)(v16 + 32), 0) & 0x100;
      _m_prefetchw((const void *)(v16 + 32));
      if ( (v24 != 0) == (((unsigned int)_InterlockedOr((volatile signed __int32 *)(v16 + 32), 0) >> 9) & 1) )
        _InterlockedAnd((volatile signed __int32 *)(v16 + 32), 0xFFFFFFDF);
      _InterlockedOr((volatile signed __int32 *)(v16 + 32), 0x10u);
      v17 = 0;
      *OldIrql = *(_QWORD *)(v16 + 16);
      *a8 = *(_QWORD *)(v16 + 24);
    }
    else
    {
      _m_prefetchw((const void *)(v16 + 32));
      if ( (_InterlockedOr((volatile signed __int32 *)(v16 + 32), 0) & 0x20) != 0 )
      {
        _m_prefetchw((const void *)(v16 + 32));
        v20 = _InterlockedOr((volatile signed __int32 *)(v16 + 32), 0) & 0x100;
        _m_prefetchw((const void *)(v16 + 32));
        v21 = *(_DWORD *)(v16 + 32);
        do
        {
          v27 = v21;
          v21 = _InterlockedCompareExchange((volatile signed __int32 *)(v16 + 32), v21, v21);
        }
        while ( v27 != v21 );
        if ( (v20 != 0) != ((v21 >> 9) & 1) )
        {
LABEL_9:
          _m_prefetchw((const void *)(v16 + 32));
          v22 = _InterlockedOr((volatile signed __int32 *)(v16 + 32), 0) & 0x200;
          _InterlockedOr((volatile signed __int32 *)(v16 + 32), 0x20u);
          _InterlockedXor((volatile signed __int32 *)(v16 + 32), 0x200u);
          v17 = 259;
          *(_QWORD *)((v22 != 0 ? 8 : 0) + v16 + 552) = a2;
          *(_DWORD *)((v22 != 0 ? 4 : 0) + v16 + 568) = a3;
          *(_QWORD *)((v22 != 0 ? 8 : 0) + v16 + 576) = a4;
          *(_QWORD *)((v22 != 0 ? 8 : 0) + v16 + 592) = a5;
          goto LABEL_10;
        }
LABEL_22:
        v17 = -1073741670;
        goto LABEL_10;
      }
      _InterlockedOr((volatile signed __int32 *)(v16 + 32), 0x10u);
      KeResetEvent((PRKEVENT)(v16 + 608));
      v17 = 0;
      *OldIrql = *(_QWORD *)(v16 + 16);
      *a8 = *(_QWORD *)(v16 + 24);
    }
  }
  else
  {
    v17 = -1073741130;
  }
LABEL_11:
  ExReleaseSpinLockExclusive(v9, OldIrqla);
  if ( v16 )
    PopFxAddLogEntry(*(_QWORD *)(v16 + 48), 0, 21, v17);
  return (unsigned int)v17;
}
