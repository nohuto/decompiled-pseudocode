/*
 * XREFs of ?ndisNsiEnumerateAllIfRcvAddresses@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@Z @ 0x1400CC780
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140014040 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qL @ 0x140014250 (WPP_RECORDER_SF_qL.c)
 *     ?ndisIfFindInterfaceByNetLuid@@YAPEAU_NDIS_IF_BLOCK@@T_NET_LUID_LH@@@Z @ 0x14002A780 (-ndisIfFindInterfaceByNetLuid@@YAPEAU_NDIS_IF_BLOCK@@T_NET_LUID_LH@@@Z.c)
 *     ndisNsiEnumerateAllIfRcvAddressesInOneInterface @ 0x1400CC8C8 (ndisNsiEnumerateAllIfRcvAddressesInOneInterface.c)
 */

__int64 __fastcall ndisNsiEnumerateAllIfRcvAddresses(struct _NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS *a1)
{
  unsigned int v2; // ebx
  KIRQL v3; // al
  union _NET_LUID_LH *v4; // rcx
  KIRQL v5; // si
  struct _NDIS_IF_BLOCK *InterfaceByNetLuid; // rax
  int v7; // edx
  int v8; // eax

  v2 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      22,
      16,
      (struct _GUID *)&WPP_43842ee2afd83130a9e5d55a54cbd7bb_Traceguids,
      (char)a1);
  v3 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.DeviceObjectExtension);
  v4 = (union _NET_LUID_LH *)*((_QWORD *)a1 + 2);
  v5 = v3;
  if ( v4 && ((*((_DWORD *)a1 + 6) - 8) & 0xFFFFFFDF) != 0 || *((_QWORD *)a1 + 7) && *((_DWORD *)a1 + 16) < 6u )
  {
    v2 = -1073741306;
  }
  else if ( v4 )
  {
    InterfaceByNetLuid = ndisIfFindInterfaceByNetLuid((union _NET_LUID_LH)v4->Value);
    if ( InterfaceByNetLuid )
    {
      if ( v7 )
      {
        v8 = ndisNsiEnumerateAllIfRcvAddressesInOneInterface(InterfaceByNetLuid);
      }
      else
      {
        *((_DWORD *)a1 + 22) = InterfaceByNetLuid->ifRcvAddressCount;
        v8 = InterfaceByNetLuid->ifRcvAddressCount != 0 ? 0x105 : 0;
      }
      v2 = v8;
    }
    else
    {
      v2 = -1073741772;
    }
  }
  KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.DeviceObjectExtension, v5);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x16u,
      0x11u,
      (struct _GUID *)&WPP_43842ee2afd83130a9e5d55a54cbd7bb_Traceguids,
      (char)a1,
      v2);
  return v2;
}
