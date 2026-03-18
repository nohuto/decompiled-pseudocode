/*
 * XREFs of ?RemoveCrossChannelVisualChild@CApplicationChannel@DirectComposition@@SAJIIII@Z @ 0x14006FDF0
 * Callers:
 *     NtDCompositionRemoveCrossDeviceVisualChild @ 0x140070A50 (NtDCompositionRemoveCrossDeviceVisualChild.c)
 * Callees:
 *     ?ReferenceHandleAndLock@CApplicationChannel@DirectComposition@@SAJIPEAPEAV12@@Z @ 0x14006DF90 (-ReferenceHandleAndLock@CApplicationChannel@DirectComposition@@SAJIPEAPEAV12@@Z.c)
 *     ?GetSystemVisualFromCrossChannelVisualChild@CApplicationChannel@DirectComposition@@QEAAJIPEAVResourceHandle@@@Z @ 0x140070A68 (-GetSystemVisualFromCrossChannelVisualChild@CApplicationChannel@DirectComposition@@QEAAJIPEAVRes.c)
 *     ?ReleaseSystemResource@CConnection@DirectComposition@@QEAAXVResourceHandle@@@Z @ 0x140074B38 (-ReleaseSystemResource@CConnection@DirectComposition@@QEAAXVResourceHandle@@@Z.c)
 *     ?CompleteRemoveCrossChannelVisualChild@CApplicationChannel@DirectComposition@@QEAAJIIVResourceHandle@@@Z @ 0x14015C2C4 (-CompleteRemoveCrossChannelVisualChild@CApplicationChannel@DirectComposition@@QEAAJIIVResourceHa.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DirectComposition::CApplicationChannel::RemoveCrossChannelVisualChild(
        unsigned int a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4)
{
  unsigned int v4; // ebx
  __int64 v5; // rbp
  int SystemVisualFromCrossChannelVisualChild; // edi
  struct DirectComposition::CApplicationChannel *v10; // rbx
  struct DirectComposition::CApplicationChannel *v11; // rsi
  struct DirectComposition::CApplicationChannel *v13[5]; // [rsp+20h] [rbp-28h] BYREF
  unsigned int v14; // [rsp+50h] [rbp+8h] BYREF

  v4 = 0;
  v5 = 0LL;
  v14 = 0;
  if ( a3 == a1 )
    goto LABEL_5;
  v13[0] = 0LL;
  SystemVisualFromCrossChannelVisualChild = DirectComposition::CApplicationChannel::ReferenceHandleAndLock(a3, v13);
  if ( SystemVisualFromCrossChannelVisualChild >= 0 )
  {
    v10 = v13[0];
    v5 = *((_QWORD *)v13[0] + 5);
    SystemVisualFromCrossChannelVisualChild = DirectComposition::CApplicationChannel::GetSystemVisualFromCrossChannelVisualChild(
                                                v13[0],
                                                a4,
                                                (struct ResourceHandle *)&v14);
    (**(void (__fastcall ***)(struct DirectComposition::CApplicationChannel *))v10)(v10);
    v4 = v14;
  }
  a4 = 0;
  if ( SystemVisualFromCrossChannelVisualChild >= 0 )
  {
LABEL_5:
    v13[0] = 0LL;
    SystemVisualFromCrossChannelVisualChild = DirectComposition::CApplicationChannel::ReferenceHandleAndLock(a1, v13);
    if ( SystemVisualFromCrossChannelVisualChild >= 0 )
    {
      v11 = v13[0];
      if ( !v5 || *((_QWORD *)v13[0] + 5) == v5 )
      {
        v5 = *((_QWORD *)v13[0] + 5);
        SystemVisualFromCrossChannelVisualChild = DirectComposition::CApplicationChannel::CompleteRemoveCrossChannelVisualChild(
                                                    v13[0],
                                                    a2,
                                                    a4,
                                                    v4);
      }
      else
      {
        SystemVisualFromCrossChannelVisualChild = -1073741811;
      }
      (**(void (__fastcall ***)(struct DirectComposition::CApplicationChannel *))v11)(v11);
    }
  }
  if ( v4 )
    DirectComposition::CConnection::ReleaseSystemResource(v5, v4);
  return (unsigned int)SystemVisualFromCrossChannelVisualChild;
}
