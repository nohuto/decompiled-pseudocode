/*
 * XREFs of ViWdBeforeCancelIrp @ 0x140B9EA78
 * Callers:
 *     IovCancelIrp @ 0x140B846F0 (IovCancelIrp.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14022F250 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x1402850F0 (KxAcquireSpinLock.c)
 */

void __fastcall ViWdBeforeCancelIrp(__int64 *a1)
{
  __int16 v1; // di
  unsigned int v3; // esi
  __int64 *v4; // rax
  __int64 **v5; // rdx
  __int64 i; // rcx

  v1 = VfWdCancelTimeoutTicks;
  if ( VfWdCancelTimeoutTicks )
  {
    ++ViWdCancelIrpCount;
    v3 = VfWdCancelTimeoutTicks + ViWdTickCount;
    KxAcquireSpinLock(&VfWdIrpListLock);
    if ( *((_BYTE *)a1 + 28) )
    {
      if ( *((_DWORD *)a1 + 6) <= v3 )
      {
LABEL_13:
        KxReleaseSpinLock((volatile signed __int64 *)&VfWdIrpListLock);
        return;
      }
      v4 = (__int64 *)*a1;
      if ( *(__int64 **)(*a1 + 8) != a1 || (v5 = (__int64 **)a1[1], *v5 != a1) )
        __fastfail(3u);
      *v5 = v4;
      v4[1] = (__int64)v5;
      --ViWdIrpListLength;
    }
    *((_DWORD *)a1 + 6) = v3;
    *((_WORD *)a1 + 15) = v1;
    for ( i = qword_140FFDBF8; (__int64 *)i != &VfWdIrpListHead && *(_DWORD *)(i + 24) > v3; i = *(_QWORD *)(i + 8) )
      ;
    a1[1] = i;
    *a1 = *(_QWORD *)i;
    *(_QWORD *)(*(_QWORD *)i + 8LL) = a1;
    *(_QWORD *)i = a1;
    *((_BYTE *)a1 + 28) = 1;
    if ( ++ViWdIrpListLength > ViWdIrpListLengthMaximum )
      ViWdIrpListLengthMaximum = ViWdIrpListLength;
    goto LABEL_13;
  }
}
