/*
 * XREFs of ?ndisAllocateAndInitializeTimestampForFilter@@YAPEAU_NDIS_TIMESTAMP_CAPABILITIES@@PEAU1@@Z @ 0x140088AF0
 * Callers:
 *     ?ndisIndicateInitialStateToFilter@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x140058120 (-ndisIndicateInitialStateToFilter@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z.c)
 * Callees:
 *     <none>
 */

struct _NDIS_TIMESTAMP_CAPABILITIES *__fastcall ndisAllocateAndInitializeTimestampForFilter(
        struct _NDIS_TIMESTAMP_CAPABILITIES *a1)
{
  struct _NDIS_TIMESTAMP_CAPABILITIES *result; // rax
  __int128 v3; // xmm1
  __int128 v4; // xmm0

  result = (struct _NDIS_TIMESTAMP_CAPABILITIES *)ExAllocatePool2(64LL, 56LL, 1936999502);
  if ( result )
  {
    if ( a1 )
    {
      v3 = *(_OWORD *)&a1->CrossTimestamp;
      *(_OWORD *)&result->Header.Type = *(_OWORD *)&a1->Header.Type;
      v4 = *(_OWORD *)&a1->Reserved2;
      *(_OWORD *)&result->CrossTimestamp = v3;
      *(_QWORD *)&v3 = *(_QWORD *)&a1->TimestampFlags.AllReceiveHw;
      *(_OWORD *)&result->Reserved2 = v4;
      *(_QWORD *)&result->TimestampFlags.AllReceiveHw = v3;
    }
  }
  return result;
}
