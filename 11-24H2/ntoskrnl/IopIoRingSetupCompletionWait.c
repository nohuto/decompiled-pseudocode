/*
 * XREFs of IopIoRingSetupCompletionWait @ 0x1404BF100
 * Callers:
 *     NtSubmitIoRing @ 0x1404BEE40 (NtSubmitIoRing.c)
 *     IopProcessIoRingEntry @ 0x1406F5A58 (IopProcessIoRingEntry.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14027E340 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140285130 (KeAcquireSpinLockRaiseToDpc.c)
 */

__int64 __fastcall IopIoRingSetupCompletionWait(__int64 a1, unsigned int a2, unsigned int a3, char a4, _BYTE *a5)
{
  unsigned int v5; // esi
  __int64 v6; // r13
  unsigned int v8; // edi
  KIRQL v11; // al
  __int64 v12; // r9
  unsigned int v13; // edx
  unsigned __int64 v14; // rcx

  v5 = 0;
  v6 = a2;
  v8 = a3;
  *a5 = 0;
  if ( a3 != -1 && a3 > *(_DWORD *)(a1 + 28) )
    return 3221225713LL;
  v11 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 104));
  v12 = *(_QWORD *)(a1 + 120);
  v13 = *(_DWORD *)(*(_QWORD *)(a1 + 80) + 4LL) - **(_DWORD **)(a1 + 80);
  v14 = v6 + v13 + *(_QWORD *)(a1 + 112) - v12;
  if ( v14 <= *(unsigned int *)(a1 + 28) )
  {
    if ( v8 != -1 )
    {
      if ( v8 <= (unsigned int)v14 )
        goto LABEL_11;
      if ( !a4 )
      {
        v5 = -1073741583;
        goto LABEL_13;
      }
    }
    v8 = v6 + v13 + *(_DWORD *)(a1 + 112) - v12;
LABEL_11:
    if ( v8 > v13 )
    {
      *(_BYTE *)(a1 + 160) = 1;
      *(_QWORD *)(a1 + 128) = v12 + v8 - v13;
      *a5 = 1;
    }
    goto LABEL_13;
  }
  v5 = -1069154296;
LABEL_13:
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 104), v11);
  return v5;
}
