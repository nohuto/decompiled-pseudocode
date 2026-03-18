/*
 * XREFs of KiScanBugCheckCallbackList @ 0x1405B0A24
 * Callers:
 *     IopWriteTriageDumpToFirmware @ 0x140592224 (IopWriteTriageDumpToFirmware.c)
 *     KeBugCheck2 @ 0x1405ADDF0 (KeBugCheck2.c)
 * Callees:
 *     MmIsAddressValidEx @ 0x1402AA5A0 (MmIsAddressValidEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

void KiScanBugCheckCallbackList()
{
  __int64 v0; // rbx
  __int64 *v1; // r15
  __int64 v2; // r14
  unsigned int i; // esi
  __int64 v4; // rcx

  v0 = KeBugCheckCallbackListHead;
  if ( KeBugCheckCallbackListHead && qword_140F216B8 )
  {
    v1 = &KeBugCheckCallbackListHead;
    while ( (__int64 *)v0 != &KeBugCheckCallbackListHead && (v0 & 7) == 0 )
    {
      v2 = v0;
      for ( i = 0; i < 0x40; ++i )
      {
        if ( !MmIsAddressValidEx(v2) )
          return;
        ++v2;
      }
      if ( *(__int64 **)(v0 + 8) != v1 )
        break;
      v4 = *(_QWORD *)(v0 + 24);
      if ( *(_BYTE *)(v0 + 56) == 1
        && *(_QWORD *)(v0 + 48) == v4 + *(_QWORD *)(v0 + 16) + *(unsigned int *)(v0 + 32) + *(_QWORD *)(v0 + 40) )
      {
        *(_BYTE *)(v0 + 56) = 2;
        guard_dispatch_icall_no_overrides(v4);
        *(_BYTE *)(v0 + 56) = 3;
      }
      v1 = (__int64 *)v0;
      v0 = *(_QWORD *)v0;
    }
  }
}
