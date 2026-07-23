/*
 * XREFs of KiEpfComplete @ 0x1405C0988
 * Callers:
 *     KiEpfDrainCompletionQueue @ 0x1405C0A9C (KiEpfDrainCompletionQueue.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14022F250 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x1402850F0 (KxAcquireSpinLock.c)
 *     KeSignalGate @ 0x140314A48 (KeSignalGate.c)
 */

void __fastcall KiEpfComplete(unsigned __int64 a1)
{
  __int64 v2; // rbx
  volatile signed __int32 *v3; // rdx
  volatile signed __int32 *i; // rax
  volatile signed __int32 *v5; // rdi
  volatile signed __int32 *v6; // rcx
  volatile signed __int32 **v7; // rdx
  __int64 v8; // rax

  v2 = KiEpfHashTable + 32LL * (((unsigned int)a1 + (unsigned int)(a1 >> 12)) % 0x25);
  KxAcquireSpinLock((PKSPIN_LOCK)(v2 + 16));
  v3 = *(volatile signed __int32 **)v2;
  for ( i = *(volatile signed __int32 **)v2; ; i = *(volatile signed __int32 **)i )
  {
    v5 = 0LL;
    if ( i == (volatile signed __int32 *)v2 )
      break;
    v5 = i;
    v6 = *(volatile signed __int32 **)i;
    if ( *((_QWORD *)i + 2) == a1 )
    {
      if ( *((volatile signed __int32 **)v6 + 1) == i )
      {
        v7 = (volatile signed __int32 **)*((_QWORD *)i + 1);
        if ( *v7 == i )
        {
          *v7 = v6;
          *((_QWORD *)v6 + 1) = v7;
          goto LABEL_13;
        }
      }
LABEL_16:
      __fastfail(3u);
    }
  }
  if ( v3 == (volatile signed __int32 *)v2 )
  {
    ++*(_DWORD *)(v2 + 24);
  }
  else
  {
    v5 = *(volatile signed __int32 **)v2;
    if ( *((_QWORD *)v3 + 1) != v2 )
      goto LABEL_16;
    v8 = *(_QWORD *)v3;
    if ( *(volatile signed __int32 **)(*(_QWORD *)v3 + 8LL) != v3 )
      goto LABEL_16;
    *(_QWORD *)v2 = v8;
    *(_QWORD *)(v8 + 8) = v2;
  }
LABEL_13:
  KxReleaseSpinLock((volatile signed __int64 *)(v2 + 16));
  if ( v5 )
  {
    _InterlockedIncrement(&dword_140F102A4);
    KeSignalGate(v5 + 6, 0LL);
  }
}
