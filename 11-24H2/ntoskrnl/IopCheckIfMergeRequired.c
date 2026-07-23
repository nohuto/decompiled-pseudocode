/*
 * XREFs of IopCheckIfMergeRequired @ 0x1409BCFC0
 * Callers:
 *     PnpQueuePendingSurpriseRemoval @ 0x1409BCDB8 (PnpQueuePendingSurpriseRemoval.c)
 * Callees:
 *     PiEnumerateProviderListEntry @ 0x14071BEF4 (PiEnumerateProviderListEntry.c)
 *     PipIsDeviceInDeviceObjectList @ 0x1409BDEE0 (PipIsDeviceInDeviceObjectList.c)
 *     PiGetProviderList @ 0x1409BDF50 (PiGetProviderList.c)
 */

char __fastcall IopCheckIfMergeRequired(_QWORD *a1, _QWORD *a2)
{
  __int64 v3; // rdi
  _DWORD *v5; // r8
  __int64 v6; // rcx
  __int64 v7; // r11
  unsigned __int64 v8; // rdx
  __int64 v9; // r11
  __int64 *ProviderList; // rbx
  __int64 i; // r11
  __int64 *v13; // r11

  v3 = 0LL;
  while ( 1 )
  {
    v5 = (_DWORD *)*a1;
    if ( (unsigned int)v3 >= *(_DWORD *)*a1 || !v5 )
      break;
    _mm_lfence();
    v6 = 3 * v3;
    v3 = (unsigned int)(v3 + 1);
    if ( (unsigned __int8)PipIsDeviceInDeviceObjectList(*a2, *(_QWORD *)&v5[2 * v6 + 4], 0LL) )
      return 1;
    v8 = *(_QWORD *)(v7 + 16);
    if ( !v8 )
      v8 = *(_QWORD *)(v7 + 648) & 0xFFFFFFFFFFFFFFFEuLL;
    if ( (unsigned __int8)PipIsDeviceInDeviceObjectList(*a2, *(_QWORD *)(v8 + 32), 0LL) )
      return 1;
    ProviderList = (__int64 *)PiGetProviderList(*(_QWORD *)(v9 + 32));
    for ( i = *ProviderList; (__int64 *)i != ProviderList; i = *v13 )
      PiEnumerateProviderListEntry(i);
  }
  return 0;
}
