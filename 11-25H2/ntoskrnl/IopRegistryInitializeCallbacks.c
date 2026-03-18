/*
 * XREFs of IopRegistryInitializeCallbacks @ 0x14070D988
 * Callers:
 *     IoInitSystem @ 0x140C098E8 (IoInitSystem.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14043FFA0 (RtlInitUnicodeString.c)
 *     ZwNotifyChangeKey @ 0x14069D5A0 (ZwNotifyChangeKey.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     IopRegistryOpenDeepestPath @ 0x140A7C224 (IopRegistryOpenDeepestPath.c)
 */

__int64 IopRegistryInitializeCallbacks()
{
  unsigned int v0; // edi
  wchar_t **v1; // rbx
  wchar_t *v2; // rsi
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-28h] BYREF
  char v5; // [rsp+80h] [rbp+8h] BYREF

  v0 = 0;
  DestinationString = 0LL;
  v1 = &IopRegistryRegisteredCallbacks;
  v5 = 0;
  if ( off_140E00F00 )
  {
    v2 = 0LL;
    do
    {
      if ( v1[6] && (int)guard_dispatch_icall_no_overrides(v1) < 0 )
      {
        *((_DWORD *)v1 + 2) = 0;
      }
      else
      {
        RtlInitUnicodeString(&DestinationString, *v1);
        v1[8] = 0LL;
        v1[10] = (wchar_t *)IopRegistryCallback;
        v1[11] = v2;
        if ( (int)IopRegistryOpenDeepestPath(&DestinationString, v1 + 4, &v5) >= 0 )
        {
          ZwNotifyChangeKey(
            v1[4],
            0LL,
            (PIO_APC_ROUTINE)(v1 + 8),
            (PVOID)1,
            (PIO_STATUS_BLOCK)v1 + 6,
            *((_DWORD *)v1 + 2),
            1u,
            0LL,
            0,
            1u);
          if ( v5 )
            *((_DWORD *)v1 + 10) |= 1u;
        }
      }
      v2 = (wchar_t *)++v0;
      v1 = &(&IopRegistryRegisteredCallbacks)[14 * v0];
    }
    while ( v1[2] );
  }
  return 0LL;
}
