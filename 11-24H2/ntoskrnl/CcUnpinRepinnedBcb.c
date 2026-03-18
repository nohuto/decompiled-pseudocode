/*
 * XREFs of CcUnpinRepinnedBcb @ 0x140494980
 * Callers:
 *     <none>
 * Callees:
 *     MmSetAddressRangeModifiedEx @ 0x140240600 (MmSetAddressRangeModifiedEx.c)
 *     MmFlushSection @ 0x140240CC4 (MmFlushSection.c)
 *     ObFastDereferenceObjectDeferDelete @ 0x140240FA0 (ObFastDereferenceObjectDeferDelete.c)
 *     CcReferenceSharedCacheMapFileObject @ 0x14024109C (CcReferenceSharedCacheMapFileObject.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402769C0 (ExAcquireResourceExclusiveLite.c)
 *     CcPostDeferredWrites @ 0x1402AAB14 (CcPostDeferredWrites.c)
 *     CcUnpinFileDataEx @ 0x1402AB380 (CcUnpinFileDataEx.c)
 *     CcSetDirtyPinnedData @ 0x1402AB6C0 (CcSetDirtyPinnedData.c)
 *     CcIsFatalWriteError @ 0x1402CBF04 (CcIsFatalWriteError.c)
 *     CcPerfLogFlushSection @ 0x140470CF4 (CcPerfLogFlushSection.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 */

void __stdcall CcUnpinRepinnedBcb(PVOID Bcb, BOOLEAN WriteThrough, PIO_STATUS_BLOCK IoStatus)
{
  __int64 v5; // rsi
  __int64 v6; // r13
  __int64 v7; // r15
  _QWORD *v8; // rbp
  __int64 v9; // rax
  ULONG_PTR v10; // [rsp+60h] [rbp+8h]

  if ( *(_WORD *)Bcb != 765 )
    KeBugCheckEx(0x34u, 0x266CuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  v5 = *((_QWORD *)Bcb + 22);
  v6 = *(_QWORD *)(v5 + 600);
  v7 = *(_QWORD *)(v5 + 536);
  v8 = (_QWORD *)(v6 + 1104);
  if ( !CcEnablePerVolumeLazyWriter )
    v8 = (_QWORD *)(v7 + 1168);
  IoStatus->Status = 0;
  if ( WriteThrough )
  {
    if ( (*(_DWORD *)(v5 + 152) & 0x200) != 0 )
      ExAcquireResourceExclusiveLite((PERESOURCE)((char *)Bcb + 72), 1u);
    if ( *((_BYTE *)Bcb + 2) )
    {
      MmSetAddressRangeModifiedEx(*((_QWORD *)Bcb + 23), *((unsigned int *)Bcb + 1), (int)IoStatus);
      CcUnpinFileDataEx((char *)Bcb, 1, 2);
      v9 = CcReferenceSharedCacheMapFileObject(v5);
      v10 = v9;
      if ( (xmmword_140FC5B10 & 0x20000) != 0 )
      {
        CcPerfLogFlushSection(0LL, v5, (__int64 *)Bcb + 1, *((_DWORD *)Bcb + 1), 1);
        v9 = v10;
      }
      MmFlushSection(*(__int64 **)(v9 + 40), (__int64 *)Bcb + 1, *((unsigned int *)Bcb + 1), 0LL, IoStatus, 1);
      ObFastDereferenceObjectDeferDelete((__int64 *)(v5 + 96), v10);
      if ( IoStatus->Status < 0 && !CcIsFatalWriteError(*((_QWORD *)Bcb + 22), IoStatus->Status) )
        CcSetDirtyPinnedData(Bcb, 0LL);
      CcUnpinFileDataEx((char *)Bcb, 0, 0);
      if ( (_QWORD *)*v8 != v8 )
        CcPostDeferredWrites(v7, v6);
    }
    else
    {
      CcUnpinFileDataEx((char *)Bcb, 0, 0);
    }
  }
  else
  {
    CcUnpinFileDataEx((char *)Bcb, 1, 0);
    IoStatus->Status = 0;
  }
}
