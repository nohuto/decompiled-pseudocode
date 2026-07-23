/*
 * XREFs of HalpBuildScatterGatherList @ 0x140386448
 * Callers:
 *     HalGetScatterGatherList @ 0x14038A6E0 (HalGetScatterGatherList.c)
 *     HalBuildScatterGatherListV3 @ 0x1404A4A60 (HalBuildScatterGatherListV3.c)
 *     HalBuildScatterGatherListEx @ 0x1404ACD30 (HalBuildScatterGatherListEx.c)
 *     HalGetScatterGatherListEx @ 0x14054C440 (HalGetScatterGatherListEx.c)
 * Callees:
 *     HalGetDmaTransferInfoInternal @ 0x1403867B0 (HalGetDmaTransferInfoInternal.c)
 *     HalpAllocateAdapterCallbackV3 @ 0x14038BA70 (HalpAllocateAdapterCallbackV3.c)
 *     HalpAllocateAdapterChannel @ 0x14038C740 (HalpAllocateAdapterChannel.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall HalpBuildScatterGatherList(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 **a4,
        unsigned __int64 a5,
        int a6,
        int a7,
        __int64 a8,
        __int64 a9,
        char a10,
        __int64 a11,
        int a12,
        int a13,
        int a14,
        _QWORD *a15)
{
  __int64 **v15; // rdi
  unsigned __int64 v19; // rax
  __int64 result; // rax
  int v21; // r8d
  __int64 v22; // rbx
  unsigned __int64 v23; // rax
  _QWORD *v24; // rdx
  int AdapterChannel; // edi
  __int64 Pool2; // rdx

  v15 = a4;
  if ( !a4 )
    return 3221225485LL;
  if ( a15 )
    *a15 = 0LL;
  while ( 1 )
  {
    v19 = *((unsigned int *)v15 + 10);
    if ( a5 < v19 )
      break;
    v15 = (__int64 **)*v15;
    a5 -= v19;
    if ( !v15 )
      return 3221225485LL;
  }
  result = HalGetDmaTransferInfoInternal(a1, (_DWORD)v15, a5, a6);
  if ( (int)result >= 0 )
  {
    v21 = a7;
    if ( a11 )
    {
      v22 = a11 + 40;
      *(_QWORD *)(a11 + 200) = a11;
      *(_DWORD *)(a11 + 40) = 1;
      *(_DWORD *)(a11 + 196) = a12;
    }
    else
    {
      Pool2 = ExAllocatePool2(0x42uLL, 0LL, 0x446C6148u);
      if ( !Pool2 )
        return 3221225626LL;
      v21 = a7;
      v22 = Pool2 + 40;
      *(_DWORD *)(Pool2 + 40) = 0;
      *(_QWORD *)(Pool2 + 200) = Pool2;
      *(_DWORD *)(Pool2 + 196) = 0;
    }
    if ( a15 )
      *a15 = *(_QWORD *)(v22 + 160);
    *(_DWORD *)(v22 + 156) -= 168;
    *(_QWORD *)(v22 + 8) = v15;
    *(_QWORD *)(v22 + 16) = 0LL;
    v23 = (unsigned __int64)v15[4] + *((unsigned int *)v15 + 11) + a5;
    *(_QWORD *)(v22 + 120) = a8;
    *(_QWORD *)(v22 + 32) = v23;
    *(_DWORD *)(v22 + 40) = a6;
    *(_QWORD *)(v22 + 128) = a9;
    *(_QWORD *)(v22 + 144) = a1;
    *(_BYTE *)(v22 + 152) = a10;
    *(_DWORD *)(v22 + 44) = 0;
    *(_QWORD *)(v22 + 24) = 0LL;
    if ( (v21 & 1) != 0 )
      *(_DWORD *)v22 |= 2u;
    if ( a3 )
    {
      v24 = (_QWORD *)(a3 + 16);
      *(_QWORD *)(a3 + 88) = v22;
      *(_DWORD *)(a3 + 36) |= 2u;
    }
    else
    {
      v24 = (_QWORD *)(v22 + 48);
      *(_DWORD *)(v22 + 68) &= ~2u;
    }
    v24[4] = v22;
    v24[6] = a2;
    v24[7] = *(_QWORD *)(a2 + 32);
    if ( !*(_BYTE *)(a1 + 440) && *(_DWORD *)(a1 + 520) != 3 && (*(_BYTE *)(a1 + 445) || a10) )
    {
      HalpAllocateAdapterCallbackV3(a2, *(_QWORD *)(a2 + 32), 0LL, v22);
      return 0LL;
    }
    *(_DWORD *)(v22 + 44) = 1;
    if ( a8 )
    {
      AdapterChannel = HalpAllocateAdapterChannel(a1, (_DWORD)v24, 1, 0, v21, (__int64)HalpAllocateAdapterCallbackV3);
    }
    else
    {
      AdapterChannel = HalpAllocateAdapterChannel(a1, (_DWORD)v24, 1, 0, v21, 0LL);
      if ( !AdapterChannel )
      {
        HalpAllocateAdapterCallbackV3(a2, *(_QWORD *)(a2 + 32), *(_QWORD *)(a1 + 240), v22);
        return (unsigned int)AdapterChannel;
      }
    }
    if ( AdapterChannel < 0 && !a11 )
      ExFreePoolWithTag(*(PVOID *)(v22 + 160), 0);
    return (unsigned int)AdapterChannel;
  }
  return result;
}
