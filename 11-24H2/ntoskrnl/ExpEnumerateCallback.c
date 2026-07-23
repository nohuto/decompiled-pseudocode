/*
 * XREFs of ExpEnumerateCallback @ 0x1404866D0
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x140227B30 (KeSetEvent.c)
 *     KeReleaseSpinLock @ 0x14027E340 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140285130 (KeAcquireSpinLockRaiseToDpc.c)
 */

__int64 __fastcall ExpEnumerateCallback(__int64 a1, _QWORD *a2)
{
  KSPIN_LOCK *v2; // rsi
  KIRQL v5; // al
  __int64 *v6; // r10
  KIRQL v7; // bp
  __int64 **v8; // rcx
  __int64 v9; // rbx
  __int64 v10; // r9
  __int64 *i; // rax
  int v12; // eax
  bool v13; // zf

  v2 = (KSPIN_LOCK *)(a1 + 8);
  v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 8));
  v6 = (__int64 *)(a1 + 16);
  v7 = v5;
  v8 = (__int64 **)(a1 + 16);
  v9 = 0LL;
  v10 = *a2 & -(__int64)(*a2 != 0LL);
  if ( *a2 )
    v8 = (__int64 **)*a2;
  for ( i = *v8; i != v6; i = (__int64 *)*i )
  {
    if ( !*((_BYTE *)i + 44) )
    {
      ++*((_DWORD *)i + 10);
      v9 = i[3];
      *a2 = i;
      break;
    }
  }
  if ( v10 )
  {
    v12 = *(_DWORD *)(v10 + 40) - 1;
    v13 = *(_BYTE *)(v10 + 44) == 0;
    *(_DWORD *)(v10 + 40) = v12;
    if ( !v13 && !v12 )
      KeSetEvent(&ExpCallbackEvent, 0, 0);
  }
  KeReleaseSpinLock(v2, v7);
  return v9;
}
