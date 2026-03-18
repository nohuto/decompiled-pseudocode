/*
 * XREFs of TR_AcquireSecureSegments @ 0x140016D88
 * Callers:
 *     Isoch_PrepareStage @ 0x14000F1B0 (Isoch_PrepareStage.c)
 *     Bulk_PrepareStage @ 0x140014A70 (Bulk_PrepareStage.c)
 *     TR_EnsureSegments @ 0x140016630 (TR_EnsureSegments.c)
 * Callees:
 *     Debug_FreAssertMsg @ 0x140019AC8 (Debug_FreAssertMsg.c)
 *     WPP_RECORDER_SF_ @ 0x14001A724 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x14001A7FC (WPP_RECORDER_SF_d.c)
 *     SecureChannel_SendRequestSynchronously @ 0x14001AD7C (SecureChannel_SendRequestSynchronously.c)
 *     CommonBuffer_ReleaseBuffer @ 0x14001F6A4 (CommonBuffer_ReleaseBuffer.c)
 *     CommonBuffer_AcquireShadowBuffer @ 0x14003F2C0 (CommonBuffer_AcquireShadowBuffer.c)
 *     __security_check_cookie @ 0x140058AC0 (__security_check_cookie.c)
 */

__int64 __fastcall TR_AcquireSecureSegments(__int64 a1, unsigned int a2, __int64 a3)
{
  int *v3; // rdi
  __int64 v6; // rax
  unsigned int v8; // ebx
  __int64 v9; // r12
  _QWORD *v10; // rax
  _QWORD *v11; // rcx
  int v12; // ebx
  __int64 v13; // rax
  int v14; // ecx
  unsigned int v15; // edx
  unsigned int v16; // eax
  unsigned int v17; // ebx
  __int64 Pool2; // rax
  __int64 v19; // r9
  __int64 v20; // rax
  _QWORD *v21; // rdx
  const char *v22; // rcx
  __int64 v23; // r9
  __int64 v24; // r8
  __int64 v25; // rcx
  _QWORD *v27; // [rsp+30h] [rbp-50h] BYREF
  _QWORD **v28; // [rsp+38h] [rbp-48h]
  __int128 v29; // [rsp+48h] [rbp-38h] BYREF
  __int128 v30; // [rsp+58h] [rbp-28h]
  __int128 v31; // [rsp+68h] [rbp-18h]

  v28 = &v27;
  v3 = 0LL;
  v27 = &v27;
  v6 = *(_QWORD *)(a1 + 40);
  v29 = 0LL;
  v8 = 0;
  v30 = 0LL;
  v31 = 0LL;
  v9 = *(_QWORD *)(v6 + 120);
  while ( v8 < a2 )
  {
    v10 = (_QWORD *)CommonBuffer_AcquireShadowBuffer(*(unsigned int *)(a1 + 20), a1, 828862034LL);
    if ( !v10 )
      goto LABEL_6;
    v11 = v28;
    if ( *v28 != &v27 )
LABEL_32:
      __fastfail(3u);
    v10[1] = v28;
    *v10 = &v27;
    ++v8;
    *v11 = v10;
    v28 = (_QWORD **)v10;
  }
  v14 = -1;
  v15 = 8 * a2 + 8;
  if ( v15 >= 8 * a2 )
    v14 = 8 * a2 + 8;
  v16 = 0;
  if ( v15 >= 8 * a2 )
    v16 = v14;
  v17 = v16;
  Pool2 = ExAllocatePool2(64LL, v16, 1229146200LL);
  v3 = (int *)Pool2;
  if ( !Pool2 )
  {
LABEL_6:
    v12 = -1073741670;
    goto LABEL_7;
  }
  *((_QWORD *)&v30 + 1) = *(_QWORD *)(a1 + 296);
  v19 = Pool2;
  v20 = *(_QWORD *)(a1 + 40);
  LODWORD(v31) = 40;
  DWORD2(v31) = a2;
  v12 = SecureChannel_SendRequestSynchronously(*(_QWORD *)(v20 + 112), &v29, 48LL, v19, v17);
  if ( v12 < 0 )
    goto LABEL_7;
  v12 = *v3;
  if ( *v3 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v21) = 2;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(*(_QWORD *)(a1 + 40) + 72LL),
        (_DWORD)v21,
        14,
        22,
        (__int64)&WPP_dd12c690235e31d2d4306bcf93bb1f34_Traceguids,
        *v3);
    }
    v22 = "TransferRingAllocateSegments Failed";
    LOBYTE(v21) = 0;
    v23 = 1933LL;
    goto LABEL_29;
  }
  if ( v3[1] == a2 )
  {
    v21 = v27;
    v24 = 0LL;
    while ( &v27 != v21 )
    {
      v25 = *(_QWORD *)&v3[2 * v24 + 2];
      v24 = (unsigned int)(v24 + 1);
      v21[3] = v25;
      v21 = (_QWORD *)*v21;
    }
    v12 = 0;
    v22 = "Segment mismatch";
    v23 = 1961LL;
    LOBYTE(v21) = (_DWORD)v24 == a2;
LABEL_29:
    Debug_FreAssertMsg(v22, v21, "onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\tr.c", v23);
    if ( v12 < 0 )
      goto LABEL_7;
    if ( v27 != &v27 )
    {
      **(_QWORD **)(a3 + 8) = v27;
      v27[1] = *(_QWORD *)(a3 + 8);
      *v28 = (_QWORD *)a3;
      *(_QWORD *)(a3 + 8) = v28;
      v28 = &v27;
      v27 = &v27;
    }
LABEL_34:
    ExFreePoolWithTag(v3, 0x49434858u);
    return (unsigned int)v12;
  }
  v12 = -1073741823;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v21) = 2;
    WPP_RECORDER_SF_(
      *(_QWORD *)(*(_QWORD *)(a1 + 40) + 72LL),
      (_DWORD)v21,
      14,
      23,
      (__int64)&WPP_dd12c690235e31d2d4306bcf93bb1f34_Traceguids);
  }
  Debug_FreAssertMsg(
    "allocateSegmentsOut->NumberOfSegments != SegmentsRequired",
    0LL,
    "onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\tr.c",
    1942LL);
LABEL_7:
  while ( v27 != &v27 )
  {
    if ( (_QWORD **)v27[1] != &v27 )
      goto LABEL_32;
    v13 = *v27;
    if ( *(_QWORD **)(*v27 + 8LL) != v27 )
      goto LABEL_32;
    v27 = (_QWORD *)*v27;
    *(_QWORD *)(v13 + 8) = &v27;
    CommonBuffer_ReleaseBuffer(v9);
  }
  if ( v3 )
    goto LABEL_34;
  return (unsigned int)v12;
}
