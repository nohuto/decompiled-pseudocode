/*
 * XREFs of KsepRegistryQueryKeyInformation @ 0x14073EAE8
 * Callers:
 *     KsepDbQueryRegistryDeviceDataList @ 0x14073C704 (KsepDbQueryRegistryDeviceDataList.c)
 * Callees:
 *     KsepPoolAllocatePaged @ 0x14049AA70 (KsepPoolAllocatePaged.c)
 *     KsepPoolFreePaged @ 0x1404A18F4 (KsepPoolFreePaged.c)
 *     ZwQueryKey @ 0x1406A7670 (ZwQueryKey.c)
 */

NTSTATUS __fastcall KsepRegistryQueryKeyInformation(HANDLE KeyHandle, _QWORD *a2, _QWORD *a3)
{
  NTSTATUS result; // eax
  unsigned int *Paged; // rbx
  NTSTATUS v8; // edi
  ULONG Length; // [rsp+48h] [rbp+10h] BYREF

  Length = 0;
  *a2 = 0LL;
  *a3 = 0LL;
  result = ZwQueryKey(KeyHandle, KeyFullInformation, 0LL, 0, &Length);
  if ( result == -2147483643 || result == -1073741789 )
  {
    Paged = (unsigned int *)KsepPoolAllocatePaged(Length);
    if ( Paged )
    {
      v8 = ZwQueryKey(KeyHandle, KeyFullInformation, Paged, Length, &Length);
      if ( v8 >= 0 )
      {
        *a2 = Paged[9] + 2LL;
        *a3 = Paged[10];
      }
      KsepPoolFreePaged(Paged);
      return v8;
    }
    else
    {
      return -1073741801;
    }
  }
  return result;
}
