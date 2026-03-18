/*
 * XREFs of TR_AcquireSecureSegments @ 0x14001FC88
 * Callers:
 *     Bulk_PrepareStage @ 0x14001B580 (Bulk_PrepareStage.c)
 *     Isoch_PrepareStage @ 0x14001DDB0 (Isoch_PrepareStage.c)
 *     TR_EnsureSegments @ 0x14001F530 (TR_EnsureSegments.c)
 * Callees:
 *     CommonBuffer_ReleaseBuffer @ 0x1400034F4 (CommonBuffer_ReleaseBuffer.c)
 *     SecureChannel_SendRequestSynchronously @ 0x14000C25C (SecureChannel_SendRequestSynchronously.c)
 *     WPP_RECORDER_SF_ @ 0x14000CCC8 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x14000CDA0 (WPP_RECORDER_SF_d.c)
 *     Debug_FreAssertMsg @ 0x14000D87C (Debug_FreAssertMsg.c)
 *     CommonBuffer_AcquireShadowBuffer @ 0x14003F3EC (CommonBuffer_AcquireShadowBuffer.c)
 *     __security_check_cookie @ 0x1400596A0 (__security_check_cookie.c)
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
  __int64 v13; // rdx
  __int64 v14; // rax
  int v15; // ecx
  unsigned int v16; // edx
  unsigned int v17; // eax
  int v18; // ebx
  __int64 Pool2; // rax
  __int64 v20; // r9
  __int64 v21; // rax
  int v22; // edx
  const char *v23; // rcx
  char v24; // dl
  int v25; // r9d
  _QWORD *v26; // rdx
  __int64 v27; // r8
  __int64 v28; // rcx
  _QWORD *v30; // [rsp+30h] [rbp-50h] BYREF
  _QWORD **v31; // [rsp+38h] [rbp-48h]
  GUID v32; // [rsp+48h] [rbp-38h] BYREF
  __int128 v33; // [rsp+58h] [rbp-28h]
  __int128 v34; // [rsp+68h] [rbp-18h]

  v31 = &v30;
  v3 = 0LL;
  v30 = &v30;
  v6 = *(_QWORD *)(a1 + 40);
  v32 = 0LL;
  v8 = 0;
  v33 = 0LL;
  v34 = 0LL;
  v9 = *(_QWORD *)(v6 + 120);
  while ( v8 < a2 )
  {
    v10 = (_QWORD *)CommonBuffer_AcquireShadowBuffer(*(unsigned int *)(a1 + 20), a1, 828862034LL);
    if ( !v10 )
      goto LABEL_6;
    v11 = v31;
    if ( *v31 != &v30 )
LABEL_32:
      __fastfail(3u);
    v10[1] = v31;
    *v10 = &v30;
    ++v8;
    *v11 = v10;
    v31 = (_QWORD **)v10;
  }
  v15 = -1;
  v16 = 8 * a2 + 8;
  if ( v16 >= 8 * a2 )
    v15 = 8 * a2 + 8;
  v17 = 0;
  if ( v16 >= 8 * a2 )
    v17 = v15;
  v18 = v17;
  Pool2 = ExAllocatePool2(64LL, v17, 1229146200LL);
  v3 = (int *)Pool2;
  if ( !Pool2 )
  {
LABEL_6:
    v12 = -1073741670;
    goto LABEL_7;
  }
  *((_QWORD *)&v33 + 1) = *(_QWORD *)(a1 + 296);
  v20 = Pool2;
  v21 = *(_QWORD *)(a1 + 40);
  LODWORD(v34) = 40;
  DWORD2(v34) = a2;
  v12 = SecureChannel_SendRequestSynchronously(*(_QWORD *)(v21 + 112), &v32, 48, v20, v18);
  if ( v12 < 0 )
    goto LABEL_7;
  v12 = *v3;
  if ( *v3 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v22) = 2;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(*(_QWORD *)(a1 + 40) + 72LL),
        v22,
        14,
        22,
        (__int64)&WPP_dd12c690235e31d2d4306bcf93bb1f34_Traceguids,
        *v3);
    }
    v23 = "TransferRingAllocateSegments Failed";
    v24 = 0;
    v25 = 1933;
    goto LABEL_29;
  }
  if ( v3[1] == a2 )
  {
    v26 = v30;
    v27 = 0LL;
    while ( &v30 != v26 )
    {
      v28 = *(_QWORD *)&v3[2 * v27 + 2];
      v27 = (unsigned int)(v27 + 1);
      v26[3] = v28;
      v26 = (_QWORD *)*v26;
    }
    v12 = 0;
    v23 = "Segment mismatch";
    v25 = 1961;
    v24 = (_DWORD)v27 == a2;
LABEL_29:
    Debug_FreAssertMsg((__int64)v23, v24, (int)"onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\tr.c", v25);
    if ( v12 < 0 )
      goto LABEL_7;
    if ( v30 != &v30 )
    {
      **(_QWORD **)(a3 + 8) = v30;
      v30[1] = *(_QWORD *)(a3 + 8);
      *v31 = (_QWORD *)a3;
      *(_QWORD *)(a3 + 8) = v31;
      v31 = &v30;
      v30 = &v30;
    }
LABEL_34:
    ExFreePoolWithTag(v3, 0x49434858u);
    return (unsigned int)v12;
  }
  v12 = -1073741823;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v22) = 2;
    WPP_RECORDER_SF_(
      *(_QWORD *)(*(_QWORD *)(a1 + 40) + 72LL),
      v22,
      14,
      23,
      (__int64)&WPP_dd12c690235e31d2d4306bcf93bb1f34_Traceguids);
  }
  Debug_FreAssertMsg(
    (__int64)"allocateSegmentsOut->NumberOfSegments != SegmentsRequired",
    0,
    (int)"onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\tr.c",
    1942);
LABEL_7:
  while ( 1 )
  {
    v13 = (__int64)v30;
    if ( v30 == &v30 )
      break;
    if ( (_QWORD **)v30[1] != &v30 )
      goto LABEL_32;
    v14 = *v30;
    if ( *(_QWORD **)(*v30 + 8LL) != v30 )
      goto LABEL_32;
    v30 = (_QWORD *)*v30;
    *(_QWORD *)(v14 + 8) = &v30;
    CommonBuffer_ReleaseBuffer(v9, v13);
  }
  if ( v3 )
    goto LABEL_34;
  return (unsigned int)v12;
}
