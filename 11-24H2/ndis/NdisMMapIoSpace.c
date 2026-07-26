/*
 * XREFs of NdisMMapIoSpace @ 0x140093B10
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qL @ 0x140014250 (WPP_RECORDER_SF_qL.c)
 *     WPP_RECORDER_SF_qLLL @ 0x140062B30 (WPP_RECORDER_SF_qLLL.c)
 *     ?ndisTranslateResources@@YAHPEAU_NDIS_MINIPORT_BLOCK@@HT_LARGE_INTEGER@@PEAT2@PEAPEAU_CM_PARTIAL_RESOURCE_DESCRIPTOR@@@Z @ 0x140090B1C (-ndisTranslateResources@@YAHPEAU_NDIS_MINIPORT_BLOCK@@HT_LARGE_INTEGER@@PEAT2@PEAPEAU_CM_PARTIAL.c)
 */

NDIS_STATUS __stdcall NdisMMapIoSpace(
        PVOID *VirtualAddress,
        NDIS_HANDLE MiniportAdapterHandle,
        NDIS_PHYSICAL_ADDRESS PhysicalAddress,
        UINT Length)
{
  __int64 v6; // rbp
  NDIS_STATUS v9; // ebx
  void *v10; // rax
  __int64 v11; // [rsp+30h] [rbp-48h]
  struct _CM_PARTIAL_RESOURCE_DESCRIPTOR *v12; // [rsp+50h] [rbp-28h] BYREF
  union _LARGE_INTEGER v13; // [rsp+88h] [rbp+10h] BYREF

  v13.QuadPart = 0LL;
  v12 = 0LL;
  v6 = Length;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qLLL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)MiniportAdapterHandle,
      1u,
      0x18u,
      (struct _GUID *)&WPP_61ca6882386639ff5ded6eed385a297b_Traceguids,
      (char)MiniportAdapterHandle,
      SBYTE4(PhysicalAddress.QuadPart),
      PhysicalAddress.QuadPart,
      Length);
  if ( (*((_DWORD *)MiniportAdapterHandle + 922) & 0x10) != 0 )
  {
    *VirtualAddress = 0LL;
    return -1073741670;
  }
  else
  {
    if ( (unsigned int)ndisTranslateResources(
                         (struct _NDIS_MINIPORT_BLOCK *)MiniportAdapterHandle,
                         3,
                         PhysicalAddress,
                         &v13,
                         &v12) )
    {
      v9 = -1073741823;
    }
    else
    {
      v10 = (void *)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))MmMapIoSpaceEx)(
                      (union _LARGE_INTEGER)v13.QuadPart,
                      v6,
                      516LL);
      *VirtualAddress = v10;
      v9 = v10 == 0LL ? 0xC000009A : 0;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v11) = v9;
      WPP_RECORDER_SF_qL(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        1u,
        0x19u,
        (struct _GUID *)&WPP_61ca6882386639ff5ded6eed385a297b_Traceguids,
        (char)MiniportAdapterHandle,
        v11);
    }
    return v9;
  }
}
