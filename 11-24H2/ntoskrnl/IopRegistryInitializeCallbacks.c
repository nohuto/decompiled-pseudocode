/*
 * XREFs of IopRegistryInitializeCallbacks @ 0x140719A88
 * Callers:
 *     IoInitSystem @ 0x140C1A988 (IoInitSystem.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1404241A0 (RtlInitUnicodeString.c)
 *     ZwNotifyChangeKey @ 0x1406A8870 (ZwNotifyChangeKey.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     IopRegistryOpenDeepestPath @ 0x140A7F804 (IopRegistryOpenDeepestPath.c)
 */

__int64 __fastcall IopRegistryInitializeCallbacks(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // edi
  wchar_t **v5; // rbx
  wchar_t *v6; // rsi
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-28h] BYREF
  char v9; // [rsp+80h] [rbp+8h] BYREF

  v4 = 0;
  DestinationString = 0LL;
  v5 = &IopRegistryRegisteredCallbacks;
  v9 = 0;
  if ( off_140E00F00 )
  {
    v6 = 0LL;
    do
    {
      if ( v5[6] && (int)guard_dispatch_icall_no_overrides(v5, a2, a3, a4) < 0 )
      {
        *((_DWORD *)v5 + 2) = 0;
      }
      else
      {
        RtlInitUnicodeString(&DestinationString, *v5);
        v5[8] = 0LL;
        v5[10] = (wchar_t *)IopRegistryCallback;
        v5[11] = v6;
        if ( (int)IopRegistryOpenDeepestPath(&DestinationString, v5 + 4, &v9) >= 0 )
        {
          ZwNotifyChangeKey(
            v5[4],
            0LL,
            (PIO_APC_ROUTINE)(v5 + 8),
            (PVOID)1,
            (PIO_STATUS_BLOCK)v5 + 6,
            *((_DWORD *)v5 + 2),
            1u,
            0LL,
            0,
            1u);
          if ( v9 )
            *((_DWORD *)v5 + 10) |= 1u;
        }
      }
      v6 = (wchar_t *)++v4;
      v5 = &(&IopRegistryRegisteredCallbacks)[14 * v4];
    }
    while ( v5[2] );
  }
  return 0LL;
}
