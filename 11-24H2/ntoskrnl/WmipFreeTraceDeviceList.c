/*
 * XREFs of WmipFreeTraceDeviceList @ 0x140A16544
 * Callers:
 *     WmipBuildTraceDeviceList @ 0x14048A824 (WmipBuildTraceDeviceList.c)
 *     WmiSetNetworkNotify @ 0x1407A5604 (WmiSetNetworkNotify.c)
 *     WmiTraceRundownNotify @ 0x140A164A4 (WmiTraceRundownNotify.c)
 * Callees:
 *     WmipUnreferenceRegEntry @ 0x14046FC2C (WmipUnreferenceRegEntry.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

void __fastcall WmipFreeTraceDeviceList(__int64 *P, unsigned int a2)
{
  __int64 *v3; // rbx
  __int64 v4; // rsi

  if ( a2 )
  {
    v3 = P;
    v4 = a2;
    do
    {
      WmipUnreferenceRegEntry(*v3);
      v3 += 2;
      --v4;
    }
    while ( v4 );
  }
  ExFreePoolWithTag(P, 0x70696D57u);
}
