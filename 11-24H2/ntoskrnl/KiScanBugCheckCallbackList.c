/*
 * XREFs of KiScanBugCheckCallbackList @ 0x1405B43D0
 * Callers:
 *     IopWriteTriageDumpToFirmware @ 0x140595A24 (IopWriteTriageDumpToFirmware.c)
 *     KeBugCheck2 @ 0x1405B1780 (KeBugCheck2.c)
 * Callees:
 *     MmIsAddressValidEx @ 0x140262FC0 (MmIsAddressValidEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

void __fastcall KiScanBugCheckCallbackList(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  __int64 *v5; // r15
  __int64 v6; // r14
  unsigned int i; // esi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8

  v4 = KeBugCheckCallbackListHead;
  if ( KeBugCheckCallbackListHead && qword_140F21E88 )
  {
    v5 = &KeBugCheckCallbackListHead;
    while ( (__int64 *)v4 != &KeBugCheckCallbackListHead && (v4 & 7) == 0 )
    {
      v6 = v4;
      for ( i = 0; i < 0x40; ++i )
      {
        if ( !MmIsAddressValidEx(v6) )
          return;
        ++v6;
      }
      if ( *(__int64 **)(v4 + 8) != v5 )
        break;
      v8 = *(unsigned int *)(v4 + 32);
      v9 = *(_QWORD *)(v4 + 24);
      v10 = v9 + *(_QWORD *)(v4 + 16) + v8 + *(_QWORD *)(v4 + 40);
      if ( *(_BYTE *)(v4 + 56) == 1 && *(_QWORD *)(v4 + 48) == v10 )
      {
        *(_BYTE *)(v4 + 56) = 2;
        guard_dispatch_icall_no_overrides(v9, v8, v10, a4);
        *(_BYTE *)(v4 + 56) = 3;
      }
      v5 = (__int64 *)v4;
      v4 = *(_QWORD *)v4;
    }
  }
}
