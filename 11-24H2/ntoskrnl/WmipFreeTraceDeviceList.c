/*
 * XREFs of WmipFreeTraceDeviceList @ 0x140A0F724
 * Callers:
 *     WmipBuildTraceDeviceList @ 0x14048564C (WmipBuildTraceDeviceList.c)
 *     WmiSetNetworkNotify @ 0x1407A5744 (WmiSetNetworkNotify.c)
 *     WmiTraceRundownNotify @ 0x140A0F684 (WmiTraceRundownNotify.c)
 * Callees:
 *     WmipUnreferenceRegEntry @ 0x14046A188 (WmipUnreferenceRegEntry.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
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
