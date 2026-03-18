/*
 * XREFs of TR_EnsureSegments @ 0x140016630
 * Callers:
 *     UsbDevice_HandleAddAndDropEndpointsState @ 0x14003A4EC (UsbDevice_HandleAddAndDropEndpointsState.c)
 *     Bulk_EP_EnableForwardProgress @ 0x14004CF10 (Bulk_EP_EnableForwardProgress.c)
 *     TR_Create @ 0x140082E54 (TR_Create.c)
 * Callees:
 *     WPP_RECORDER_SF_DDDD @ 0x140004124 (WPP_RECORDER_SF_DDDD.c)
 *     WPP_RECORDER_SF_DDDDD @ 0x140012D68 (WPP_RECORDER_SF_DDDDD.c)
 *     CommonBuffer_AcquireBuffers @ 0x1400168C0 (CommonBuffer_AcquireBuffers.c)
 *     TR_AcquireSecureSegments @ 0x140016D88 (TR_AcquireSecureSegments.c)
 */

__int64 __fastcall TR_EnsureSegments(__int64 a1, unsigned int a2, char a3)
{
  __int64 v4; // rsi
  unsigned int v7; // ebx
  void *v8; // r13
  KIRQL v9; // al
  _QWORD *v10; // rdi
  _QWORD *v11; // rcx
  unsigned int v13; // r15d
  int v14; // eax
  unsigned int v15; // ebx
  KIRQL v16; // al
  _QWORD *v17; // rcx
  __int64 v18; // [rsp+28h] [rbp-60h]
  int v19; // [rsp+28h] [rbp-60h]
  __int64 v20; // [rsp+30h] [rbp-58h]
  int v21; // [rsp+30h] [rbp-58h]
  __int64 v22; // [rsp+38h] [rbp-50h]
  int v23; // [rsp+38h] [rbp-50h]
  __int64 v24; // [rsp+40h] [rbp-48h]
  int v25; // [rsp+40h] [rbp-48h]
  int v26; // [rsp+48h] [rbp-40h]
  _QWORD *v27; // [rsp+50h] [rbp-38h] BYREF
  _QWORD *v28; // [rsp+58h] [rbp-30h]

  v4 = 0LL;
  v7 = 0;
  v8 = *(void **)(*(_QWORD *)(a1 + 40) + 120LL);
  v9 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
  v10 = (_QWORD *)(a1 + 208);
  *(_BYTE *)(a1 + 104) = v9;
  v11 = *(_QWORD **)(a1 + 208);
  if ( (_QWORD *)(a1 + 208) != v11 )
  {
    do
    {
      v11 = (_QWORD *)*v11;
      ++v7;
    }
    while ( v10 != v11 );
  }
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), v9);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    v26 = a2;
    v25 = v7;
    v23 = *(_DWORD *)(a1 + 64);
    v21 = *(_DWORD *)(*(_QWORD *)(a1 + 56) + 152LL);
    v19 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 143LL);
    WPP_RECORDER_SF_DDDDD(
      *(_QWORD *)(*(_QWORD *)(a1 + 40) + 72LL),
      5u,
      *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 143LL),
      0x10u,
      (__int64)&WPP_dd12c690235e31d2d4306bcf93bb1f34_Traceguids,
      v19,
      v21,
      v23,
      v25,
      v26);
  }
  if ( a2 <= v7 )
    return 0LL;
  v13 = a2 - v7;
  v28 = &v27;
  v27 = &v27;
  if ( a3 )
  {
    v4 = a1 + 128;
    *(_QWORD *)(a1 + 144) = a1;
    *(_QWORD *)(a1 + 168) = TR_CommonBufferCallback;
    *(_DWORD *)(a1 + 152) = v13;
    *(_DWORD *)(a1 + 156) = *(_DWORD *)(a1 + 20);
    *(_DWORD *)(a1 + 160) = 828862034;
  }
  if ( *(_BYTE *)(a1 + 288) )
    v14 = TR_AcquireSecureSegments(a1, v13, &v27);
  else
    v14 = CommonBuffer_AcquireBuffers(v8, a1, 828862034, v4);
  v15 = v14;
  if ( v14 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v24) = v13;
      LODWORD(v22) = *(_DWORD *)(a1 + 64);
      LODWORD(v20) = *(_DWORD *)(*(_QWORD *)(a1 + 56) + 152LL);
      LODWORD(v18) = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 143LL);
      WPP_RECORDER_SF_DDDD(
        *(_QWORD *)(*(_QWORD *)(a1 + 40) + 72LL),
        2u,
        0xEu,
        0x11u,
        (__int64)&WPP_dd12c690235e31d2d4306bcf93bb1f34_Traceguids,
        v18,
        v20,
        v22,
        v24);
    }
  }
  else
  {
    v16 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
    v17 = v27;
    *(_BYTE *)(a1 + 104) = v16;
    if ( v17 != &v27 )
    {
      **(_QWORD **)(a1 + 216) = v17;
      v27[1] = *(_QWORD *)(a1 + 216);
      *v28 = v10;
      *(_QWORD *)(a1 + 216) = v28;
      v28 = &v27;
      v27 = &v27;
    }
    KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), *(_BYTE *)(a1 + 104));
  }
  return v15;
}
