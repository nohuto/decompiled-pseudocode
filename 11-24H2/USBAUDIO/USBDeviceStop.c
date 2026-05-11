/*
 * XREFs of USBDeviceStop @ 0x140040000
 * Callers:
 *     USBDeviceSurpriseRemove @ 0x14002D830 (USBDeviceSurpriseRemove.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14001BB50 (_guard_dispatch_icall.c)
 *     USBHwStopAllMIDIPipes @ 0x14002D30C (USBHwStopAllMIDIPipes.c)
 *     USBHwSelectNULLConfiguration @ 0x140035A9C (USBHwSelectNULLConfiguration.c)
 */

__int64 __fastcall USBDeviceStop(__int64 a1)
{
  __int64 v1; // rsi
  int v2; // ebx
  __int64 v4; // rbp
  __int64 v5; // rcx

  v1 = *(_QWORD *)(a1 + 16);
  v2 = 0;
  v4 = *(_QWORD *)(v1 + 72);
  if ( *(_QWORD *)(v4 + 192) == v4 + 192 || (v2 = USBHwStopAllMIDIPipes(a1), v2 >= 0) )
  {
    if ( !*(_BYTE *)(v1 + 67) )
      v2 = USBHwSelectNULLConfiguration(a1);
  }
  v5 = *(_QWORD *)(v4 + 56);
  if ( v5 )
    (*(void (__fastcall **)(_QWORD))(v5 + 24))(*(_QWORD *)(v5 + 8));
  return (unsigned int)v2;
}
