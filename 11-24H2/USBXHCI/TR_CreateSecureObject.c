/*
 * XREFs of TR_CreateSecureObject @ 0x14004AE90
 * Callers:
 *     TR_Create @ 0x140082E54 (TR_Create.c)
 * Callees:
 *     Debug_FreAssertMsg @ 0x140019AC8 (Debug_FreAssertMsg.c)
 *     WPP_RECORDER_SF_d @ 0x14001A7FC (WPP_RECORDER_SF_d.c)
 *     SecureChannel_SendRequestSynchronously @ 0x14001AD7C (SecureChannel_SendRequestSynchronously.c)
 *     CommonBuffer_ReleaseBuffer @ 0x14001F6A4 (CommonBuffer_ReleaseBuffer.c)
 *     XilEndpoint_GetRemoteHandle @ 0x140046D44 (XilEndpoint_GetRemoteHandle.c)
 *     __security_check_cookie @ 0x140058AC0 (__security_check_cookie.c)
 *     memset @ 0x140058EC0 (memset.c)
 */

__int64 __fastcall TR_CreateSecureObject(__int64 a1)
{
  __int64 v2; // rax
  int v3; // esi
  __int64 v4; // r15
  __int64 Pool2; // rax
  _QWORD *v6; // rdi
  __int64 v7; // rcx
  __int64 RemoteHandle; // rax
  __int64 v9; // rcx
  int v10; // edx
  int v11; // esi
  _QWORD *v12; // rcx
  __int128 v14; // [rsp+38h] [rbp-29h] BYREF
  __int64 v15; // [rsp+48h] [rbp-19h]
  GUID v16[4]; // [rsp+58h] [rbp-9h] BYREF

  LODWORD(v15) = 0;
  v2 = *(_QWORD *)(a1 + 40);
  v14 = 0LL;
  if ( *(_BYTE *)(v2 + 1001) && KeGetCurrentIrql() )
    Debug_FreAssertMsg(
      (__int64)"Code Path Requires Passive Level",
      0,
      (int)"onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\tr.c",
      2010);
  v3 = *(_DWORD *)(a1 + 20);
  v4 = *(_QWORD *)(*(_QWORD *)(a1 + 40) + 120LL);
  Pool2 = ExAllocatePool2(64LL, (unsigned int)(v3 + 104), 1229146200LL);
  v6 = (_QWORD *)Pool2;
  if ( !Pool2 )
    return (unsigned int)-1073741670;
  *(_DWORD *)(Pool2 + 40) = v3 + 104;
  *(_QWORD *)(Pool2 + 16) = Pool2 + 104;
  *(_DWORD *)(Pool2 + 44) = v3;
  *(_DWORD *)(Pool2 + 64) = 828862034;
  *(_QWORD *)(Pool2 + 72) = a1;
  *(_DWORD *)(Pool2 + 80) = 2;
  memset(v16, 0, sizeof(v16));
  v7 = *(_QWORD *)(a1 + 56);
  v16[2].Data1 = 39;
  RemoteHandle = XilEndpoint_GetRemoteHandle(v7);
  v9 = *(_QWORD *)(a1 + 40);
  *(_QWORD *)v16[2].Data4 = RemoteHandle;
  v16[3].Data1 = *(_DWORD *)(a1 + 64);
  *(_DWORD *)&v16[3].Data2 = *(_DWORD *)(a1 + 20);
  v16[3].Data4[0] = (*(_QWORD *)(v9 + 736) & 0x4000000000000LL) != 0;
  v11 = SecureChannel_SendRequestSynchronously(*(_QWORD *)(v9 + 112), v16, 64, (__int64)&v14, 24);
  if ( v11 < 0 )
    goto LABEL_10;
  if ( (int)v14 < 0 )
  {
    v11 = v14;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v10) = 2;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(*(_QWORD *)(a1 + 40) + 72LL),
        v10,
        14,
        24,
        (__int64)&WPP_dd12c690235e31d2d4306bcf93bb1f34_Traceguids,
        v14);
    }
    Debug_FreAssertMsg(
      (__int64)"TransferRingCreate Failed",
      0,
      (int)"onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\tr.c",
      2067);
LABEL_10:
    CommonBuffer_ReleaseBuffer(v4, (__int64)v6);
    return (unsigned int)v11;
  }
  *(_QWORD *)(a1 + 296) = *((_QWORD *)&v14 + 1);
  v6[3] = v15;
  *(_BYTE *)(a1 + 104) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
  v12 = *(_QWORD **)(a1 + 216);
  if ( *v12 != a1 + 208 )
    __fastfail(3u);
  v6[1] = v12;
  *v6 = a1 + 208;
  *v12 = v6;
  *(_QWORD *)(a1 + 216) = v6;
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), *(_BYTE *)(a1 + 104));
  return (unsigned int)v11;
}
