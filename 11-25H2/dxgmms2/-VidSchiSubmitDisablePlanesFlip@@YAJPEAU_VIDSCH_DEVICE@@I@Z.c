/*
 * XREFs of ?VidSchiSubmitDisablePlanesFlip@@YAJPEAU_VIDSCH_DEVICE@@I@Z @ 0x140027BAC
 * Callers:
 *     VidSchiSetFlipDevice @ 0x140029540 (VidSchiSetFlipDevice.c)
 * Callees:
 *     VidSchiExecuteMmIoFlip @ 0x14000CF44 (VidSchiExecuteMmIoFlip.c)
 *     ?ZeroFlipQueueEntry@_VIDSCH_FLIP_QUEUE_ENTRY@@QEAAXXZ @ 0x14001292C (-ZeroFlipQueueEntry@_VIDSCH_FLIP_QUEUE_ENTRY@@QEAAXXZ.c)
 *     ?ProcessHwQueues@HwQueueStagingList@@QEAAXPEAU_KLOCK_QUEUE_HANDLE@@@Z @ 0x14001D740 (-ProcessHwQueues@HwQueueStagingList@@QEAAXPEAU_KLOCK_QUEUE_HANDLE@@@Z.c)
 *     ?IncrementNumberOfQueuedFlipPerSource@@YAXPEAU_VIDSCH_GLOBAL@@I@Z @ 0x1400271C8 (-IncrementNumberOfQueuedFlipPerSource@@YAXPEAU_VIDSCH_GLOBAL@@I@Z.c)
 *     ?InitializeSubmitData@CVidSchSubmitData@@QEAAXXZ @ 0x1400273C4 (-InitializeSubmitData@CVidSchSubmitData@@QEAAXXZ.c)
 *     ?Acquire@AcquireSpinLock@@QEAAXXZ @ 0x14002C1B0 (-Acquire@AcquireSpinLock@@QEAAXXZ.c)
 *     ?Release@AcquireSpinLock@@QEAAXXZ @ 0x14002D720 (-Release@AcquireSpinLock@@QEAAXXZ.c)
 *     _guard_dispatch_icall @ 0x1400562A0 (_guard_dispatch_icall.c)
 *     memmove @ 0x140056480 (memmove.c)
 *     VidSchIsVSyncEnabled @ 0x1400D9780 (VidSchIsVSyncEnabled.c)
 */

__int64 __fastcall VidSchiSubmitDisablePlanesFlip(struct _VIDSCH_DEVICE *a1, unsigned int a2)
{
  __int64 v2; // rdi
  __int64 v4; // rbx
  __int64 v5; // r15
  __int64 v6; // r12
  _DWORD *v7; // r13
  __int64 v8; // rax
  unsigned int *v10; // r8
  unsigned int v11; // edx
  __int64 v12; // rcx
  unsigned int v13; // r8d
  bool v14; // zf
  unsigned int v15; // eax
  char v16; // cl
  _DWORD *v17; // rbx
  int v18; // ecx
  void *v19; // rcx
  unsigned int v20; // r14d
  unsigned int v21; // ebx
  unsigned int v22; // esi
  void (__fastcall *v23)(_QWORD); // rax
  unsigned int *Src; // [rsp+58h] [rbp-51h]
  PVOID Entry; // [rsp+60h] [rbp-49h] BYREF
  __int64 v26; // [rsp+68h] [rbp-41h]
  __int64 v27; // [rsp+70h] [rbp-39h] BYREF
  _QWORD v28[2]; // [rsp+78h] [rbp-31h] BYREF
  char v29; // [rsp+88h] [rbp-21h]
  int v30; // [rsp+8Ch] [rbp-1Dh]
  _QWORD v31[4]; // [rsp+90h] [rbp-19h] BYREF
  __int16 v32; // [rsp+B0h] [rbp+7h]
  char v33; // [rsp+110h] [rbp+67h] BYREF
  unsigned int v34; // [rsp+118h] [rbp+6Fh]
  char v35; // [rsp+120h] [rbp+77h] BYREF
  unsigned int v36; // [rsp+128h] [rbp+7Fh]

  v34 = a2;
  v2 = *((_QWORD *)a1 + 4);
  v4 = a2;
  v5 = a2;
  v6 = *(_QWORD *)(v2 + 8LL * a2 + 3432);
  if ( !v6 )
    return 0LL;
  v7 = *(_DWORD **)(v6 + 32);
  if ( !v7 )
    return 0LL;
  v8 = *(_QWORD *)(v2 + 16);
  Entry = 0LL;
  v26 = *(_QWORD *)(v8 + 3128);
  CVidSchSubmitData::InitializeSubmitData((CVidSchSubmitData *)&Entry);
  if ( Entry )
  {
    v10 = (unsigned int *)((char *)Entry + 600);
    if ( !*((_BYTE *)Entry + 356) )
      v10 = (unsigned int *)((char *)Entry + 496);
    Src = v10;
    *v10 ^= (*v10 ^ (((1 << *(_DWORD *)(v2 + 152)) - 1) << 10)) & 0xFFC00;
    _InterlockedAdd((volatile signed __int32 *)(v2 + 792), 1u);
    IncrementNumberOfQueuedFlipPerSource((struct _VIDSCH_GLOBAL *)v2, v4);
    _InterlockedAdd((volatile signed __int32 *)a1 + 457, 1u);
    _InterlockedAdd((volatile signed __int32 *)a1 + v4 + 441, 1u);
    VidSchIsVSyncEnabled((struct _VIDSCH_GLOBAL *)v2, v11);
    if ( *(_DWORD *)(*(_QWORD *)(v2 + 8 * v4 + 3432) + 44488LL) != -1 )
    {
      v23 = *(void (__fastcall **)(_QWORD))(v2 + 3288);
      if ( v23 )
        v23(*(_QWORD *)(v2 + 3352));
    }
    v32 = 0;
    v31[0] = v2 + 1984;
    AcquireSpinLock::Acquire((AcquireSpinLock *)v31);
    v27 = v2;
    v30 = 2;
    v28[1] = v28;
    v29 = 0;
    v28[0] = v28;
    _InterlockedAdd((volatile signed __int32 *)a1 + v5 + 425, 1u);
    v12 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 5) + 32LL)
                                + 8LL * *(unsigned int *)(*((_QWORD *)a1 + 4) + 4LL))
                    + 8 * v5
                    + 88);
    _InterlockedAdd((volatile signed __int32 *)(*(_QWORD *)(v2 + 8 * v5 + 6712) + 8LL), 1u);
    _InterlockedAdd((volatile signed __int32 *)(v12 + 8), 1u);
    ++*(_DWORD *)(v2 + 860);
    ++*((_DWORD *)a1 + 458);
    ++*(_DWORD *)(v6 + 3236);
    v13 = ((unsigned __int16)*Src | (unsigned __int16)(*Src >> 10)) & 0x3FF;
    v14 = !_BitScanForward(&v15, v13);
    v36 = v15;
    while ( 1 )
    {
      v16 = -1;
      if ( !v14 )
        v16 = v15;
      if ( !v13 )
        break;
      ++*(_DWORD *)(304LL * v16 + *(_QWORD *)(v2 + 8 * v5 + 3432) + 196);
      v13 &= ~(1 << v16);
      v14 = !_BitScanForward(&v15, v13);
    }
    v36 = v7[14];
    v17 = &v7[350 * v36];
    _VIDSCH_FLIP_QUEUE_ENTRY::ZeroFlipQueueEntry((_VIDSCH_FLIP_QUEUE_ENTRY *)(v17 + 30));
    v18 = v17[318] | 0x10;
    *((_QWORD *)v17 + 145) = a1;
    v17[318] = v18;
    v17[294] = *((_DWORD *)a1 + v5 + 127);
    v17[318] = v18 | 0x180;
    v19 = (void *)*((_QWORD *)v17 + 164);
    v17[298] = 0;
    memmove(v19, Src, Src[3]);
    v20 = v36;
    v7[14] = ((_BYTE)v36 + 1) & 0x3F;
    _InterlockedAdd((volatile signed __int32 *)(v2 + 864), 1u);
    _InterlockedAdd((volatile signed __int32 *)(v6 + 3240), 1u);
    v17[293] = 4;
    v21 = v34;
    v33 = 0;
    v35 = 0;
    v22 = VidSchiExecuteMmIoFlip((struct HwQueueStagingList *)&v27, v2, v34, v7, v20, &v35, &v33);
    if ( v33 )
      v22 = VidSchiExecuteMmIoFlip((struct HwQueueStagingList *)&v27, v2, v21, v7, v20, &v35, &v33);
    if ( !v29 )
    {
      if ( v30 )
        HwQueueStagingList::ProcessHwQueues((HwQueueStagingList *)&v27, 0LL);
    }
    AcquireSpinLock::Release((AcquireSpinLock *)v31);
    ExFreeToLookasideListEx((PLOOKASIDE_LIST_EX)(v26 + 1424), Entry);
    return v22;
  }
  else
  {
    _InterlockedAdd(&dword_140081890, 1u);
    WdLogSingleEntry1(6LL, 23003LL);
    WdLogGlobalForLineNumber = 23003;
    ((void (__fastcall *)(_QWORD, __int64, __int64, const wchar_t *, __int64, _QWORD, _QWORD, _QWORD, _QWORD))DxgCoreInterface[88])(
      0LL,
      262145LL,
      0xFFFFFFFFLL,
      L"Failed to allocate VidSchSubmitData",
      23003LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225495LL;
  }
}
