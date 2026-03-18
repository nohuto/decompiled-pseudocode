/*
 * XREFs of KiSetProcessorSignature @ 0x1405C3320
 * Callers:
 *     KiInitializeBootStructures @ 0x140B580C0 (KiInitializeBootStructures.c)
 *     KiSetFeatureBits @ 0x140B59BF4 (KiSetFeatureBits.c)
 * Callees:
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     RtlDetectProcessorFeatures @ 0x140B60270 (RtlDetectProcessorFeatures.c)
 *     KiPublishProcessorFeatures @ 0x140C29D68 (KiPublishProcessorFeatures.c)
 */

__int64 __fastcall KiSetProcessorSignature(__int64 a1, int a2)
{
  __int64 result; // rax
  ULONG_PTR BugCheckParameter2; // [rsp+40h] [rbp+8h] BYREF
  int v5; // [rsp+48h] [rbp+10h] BYREF
  __int64 v6; // [rsp+50h] [rbp+18h] BYREF

  v6 = 0LL;
  BugCheckParameter2 = 0LL;
  v5 = 0;
  *(_DWORD *)(a1 + 1736) = a2;
  RtlDetectProcessorFeatures(*(unsigned int *)(a1 + 36), &v6, &BugCheckParameter2, &v5);
  *(_QWORD *)(a1 + 36768) = v6;
  *(_DWORD *)(a1 + 1740) = v5;
  result = *(unsigned int *)(a1 + 36);
  if ( (_DWORD)result )
  {
    if ( BugCheckParameter2 != KeFeatureBits2 )
      KeBugCheckEx(0x5Du, 0xFFFFFFF7uLL, BugCheckParameter2, KeFeatureBits2, *(unsigned int *)(a1 + 36));
  }
  else
  {
    KeFeatureBits2 |= BugCheckParameter2;
    return KiPublishProcessorFeatures(a1);
  }
  return result;
}
