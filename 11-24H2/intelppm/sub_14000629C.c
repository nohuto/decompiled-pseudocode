/*
 * XREFs of sub_14000629C @ 0x14000629C
 * Callers:
 *     sub_1400046C0 @ 0x1400046C0 (sub_1400046C0.c)
 * Callees:
 *     sub_1400050F8 @ 0x1400050F8 (sub_1400050F8.c)
 */

__int64 __fastcall sub_14000629C(__int64 a1)
{
  unsigned int v2; // edi
  int v4; // [rsp+28h] [rbp-10h]

  if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
  {
    v4 = *(_DWORD *)(a1 + 56);
    sub_1400050F8((__int64)off_140018050->DeviceExtension, 4u, 2u, 0x27u, (__int64)&unk_140014CB8, v4);
  }
  v2 = 0;
  if ( *(_QWORD *)(a1 + 1176) )
  {
    _m_prefetchw((const void *)(a1 + 1172));
    if ( !(unsigned __int8)_InterlockedOr((volatile signed __int32 *)(a1 + 1172), 1u) )
      IoQueueWorkItem(*(PIO_WORKITEM *)(a1 + 1176), sub_14003BFC0, CriticalWorkQueue, 0LL);
  }
  else
  {
    return (unsigned int)-1073741823;
  }
  return v2;
}
