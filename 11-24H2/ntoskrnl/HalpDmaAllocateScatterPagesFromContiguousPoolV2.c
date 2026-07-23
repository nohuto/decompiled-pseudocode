/*
 * XREFs of HalpDmaAllocateScatterPagesFromContiguousPoolV2 @ 0x140386AD4
 * Callers:
 *     HalpDmaAllocateScatterPagesFromContiguousPool @ 0x140386D38 (HalpDmaAllocateScatterPagesFromContiguousPool.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x14022B260 (KeReleaseInStackQueuedSpinLock.c)
 *     RtlSetBits @ 0x14027C2D0 (RtlSetBits.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1403597C0 (KeAcquireInStackQueuedSpinLock.c)
 *     RtlNumberOfSetBits @ 0x140377880 (RtlNumberOfSetBits.c)
 */

__int64 __fastcall HalpDmaAllocateScatterPagesFromContiguousPoolV2(
        __int64 a1,
        __int64 a2,
        ULONG a3,
        char a4,
        char a5,
        ULONG *a6)
{
  __int64 v9; // r14
  __int64 v10; // r15
  ULONG v11; // edi
  ULONG v12; // r12d
  int v13; // edx
  int v14; // r9d
  ULONG v15; // r8d
  char *v16; // r11
  ULONG v17; // r10d
  ULONG v18; // ecx
  __int64 *v19; // rbx
  __int64 i; // rax
  ULONG v21; // ebx
  __int64 v22; // rdx
  ULONG v23; // eax
  unsigned int SizeOfBitMap; // edx
  _RTL_BITMAP *v25; // rbx
  __int64 result; // rax
  unsigned int v27; // eax
  unsigned int v28; // ecx
  ULONG v29; // eax
  PRTL_BITMAP BitMapHeader; // [rsp+20h] [rbp-58h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+28h] [rbp-50h] BYREF
  __int64 v32; // [rsp+88h] [rbp+10h]

  memset(&LockHandle, 0, sizeof(LockHandle));
  v9 = 0LL;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a2 + 128), &LockHandle);
  if ( a5 )
  {
    v27 = *(_DWORD *)(a2 + 216);
    v9 = a2;
    v28 = *(_DWORD *)(a2 + 220);
    if ( v27 <= v28 )
    {
LABEL_29:
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      goto LABEL_33;
    }
    v29 = v27 - v28;
    if ( a3 > v29 )
      a3 = v29;
  }
  if ( a4 )
  {
    v25 = *(_RTL_BITMAP **)(a2 + 24);
    if ( v25->SizeOfBitMap - RtlNumberOfSetBits(v25) < a3 )
      goto LABEL_29;
  }
  v10 = 0LL;
  v11 = 0;
  v32 = 0LL;
  v12 = 0;
LABEL_4:
  if ( v11 < a3 )
  {
    BitMapHeader = *(PRTL_BITMAP *)(a2 + 24);
    v13 = BitMapHeader->SizeOfBitMap - 1;
    v14 = ((__int64)BitMapHeader->Buffer & 4) != 0LL ? 0x20 : 0;
    v15 = v12 < BitMapHeader->SizeOfBitMap ? v12 : 0;
    v16 = (char *)BitMapHeader->Buffer - (((__int64)BitMapHeader->Buffer & 4) != 0 ? 4 : 0);
    while ( 1 )
    {
      v17 = v14 + v13;
      v18 = v14 + v15;
      if ( v13 - v15 == -1 )
        goto LABEL_23;
      v19 = (__int64 *)&v16[8 * ((unsigned __int64)v18 >> 6)];
      for ( i = *v19 | ((1LL << (v18 & 0x3F)) - 1); i == -1; i = *v19 )
      {
        if ( ++v19 > (__int64 *)&v16[8 * ((unsigned __int64)v17 >> 6)] )
          goto LABEL_23;
      }
      _BitScanForward64((unsigned __int64 *)&i, ~i);
      v21 = i + ((unsigned int)(((char *)v19 - v16) >> 3) << 6);
      if ( v21 > v17 )
      {
LABEL_23:
        v21 = -1;
      }
      else if ( v21 != -1 )
      {
        v21 -= v14;
LABEL_14:
        v12 = v21;
        if ( v21 == -1 )
          break;
        RtlSetBits(BitMapHeader, v21, 1u);
        v22 = *(_QWORD *)(a2 + 48);
        while ( v22 )
        {
          v23 = *(_DWORD *)(v22 + 8);
          if ( v21 < v23 )
          {
            v22 = *(_QWORD *)(v22 + 16) + 72LL * v21;
            break;
          }
          v22 = *(_QWORD *)v22;
          v21 -= v23;
        }
        if ( v10 )
          *(_QWORD *)(v32 + 8) = v22;
        else
          v10 = v22;
        v32 = v22;
        ++v11;
        goto LABEL_4;
      }
      if ( !v15 )
        goto LABEL_14;
      SizeOfBitMap = v12 + 1;
      if ( v12 + 1 > BitMapHeader->SizeOfBitMap )
        SizeOfBitMap = BitMapHeader->SizeOfBitMap;
      v13 = SizeOfBitMap - 1;
      v15 = 0;
    }
  }
  if ( a5 )
    *(_DWORD *)(v9 + 216) -= v11;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( v11 )
  {
    result = v10;
    *a6 = v11;
  }
  else
  {
LABEL_33:
    *a6 = 0;
    return 0LL;
  }
  return result;
}
