/*
 * XREFs of RtlStdReleaseStackTrace @ 0x140485220
 * Callers:
 *     ExInitializeResourceLite2 @ 0x1403EAA00 (ExInitializeResourceLite2.c)
 *     ExInitializeResourceLite @ 0x1403EAC90 (ExInitializeResourceLite.c)
 *     ExInitializeFastResource2 @ 0x14048A860 (ExInitializeFastResource2.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14027E340 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140285130 (KeAcquireSpinLockRaiseToDpc.c)
 *     RtlpInterlockedPushEntrySList @ 0x1406B4870 (RtlpInterlockedPushEntrySList.c)
 */

void __fastcall RtlStdReleaseStackTrace(__int64 a1, __int64 a2)
{
  __int64 v3; // rdx
  int v5; // ebp
  unsigned int v6; // eax
  _DWORD *v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // r15
  __int64 v10; // r14
  _WORD *v11; // rsi
  __int16 v12; // dx
  _QWORD *i; // rcx

  v3 = *(unsigned __int16 *)(a2 + 14);
  v5 = 0;
  v6 = 0;
  if ( (_WORD)v3 )
  {
    v7 = (_DWORD *)(a2 + 16);
    do
    {
      v6 += *v7;
      v7 += 2;
      --v3;
    }
    while ( v3 );
  }
  v8 = v6 % *(_DWORD *)(a1 + 720);
  v9 = 3 * v8;
  v10 = a1 + 24LL * (unsigned int)v8;
  *(_BYTE *)(v10 + 744) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v10 + 736));
  v11 = (_WORD *)(a2 + 8);
  v12 = *(_WORD *)(a2 + 8);
  if ( (v12 & 0x7FF) != 0x7FF )
  {
    *v11 = v12 ^ (v12 ^ (v12 - 1)) & 0x7FF;
    if ( ((v12 - 1) & 0x7FF) == 0 )
    {
      for ( i = (_QWORD *)(a1 + 728 + 8 * v9); *i; i = (_QWORD *)*i )
      {
        if ( *i == a2 )
        {
          *i = *(_QWORD *)a2;
          goto LABEL_12;
        }
      }
      __debugbreak();
LABEL_12:
      v5 = 1;
      v11 = (_WORD *)(a2 + 8);
    }
  }
  KeReleaseSpinLock((PKSPIN_LOCK)(v10 + 736), *(_BYTE *)(v10 + 744));
  if ( v5 )
  {
    RtlpInterlockedPushEntrySList(
      (PSLIST_HEADER)(a1 + 16 * (((unsigned __int64)(unsigned __int16)*v11 >> 11) + 13)),
      (PSLIST_ENTRY)(a2 + 16));
    _InterlockedAdd((volatile signed __int32 *)(a1 + 196), 1u);
  }
}
