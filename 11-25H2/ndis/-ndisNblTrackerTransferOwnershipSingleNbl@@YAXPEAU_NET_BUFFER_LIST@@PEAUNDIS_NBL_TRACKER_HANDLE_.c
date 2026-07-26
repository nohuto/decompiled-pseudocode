/*
 * XREFs of ?ndisNblTrackerTransferOwnershipSingleNbl@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@1E@Z @ 0x1400AA0B8
 * Callers:
 *     ?ethFilterDprIndicateReceivePacket@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z @ 0x1400425F0 (-ethFilterDprIndicateReceivePacket@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z.c)
 *     ?ndisMIndicatePacket@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z @ 0x1400B8F60 (-ndisMIndicatePacket@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z.c)
 * Callees:
 *     ?ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z @ 0x14001F630 (-ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEA.c)
 *     ?ndisSourceHandleFromOwner@@YAPEAXT_NDIS_NBL_TRACKER_OWNER@@@Z @ 0x140033770 (-ndisSourceHandleFromOwner@@YAPEAXT_NDIS_NBL_TRACKER_OWNER@@@Z.c)
 *     ?ndisNblTrackerTransferOneNbl@@YAXPEAU_NET_BUFFER_LIST@@T_NDIS_NBL_TRACKER_OWNER@@PEAUNDIS_NBL_TRACKER_HANDLE__@@1PEAXPEA_J4@Z @ 0x140047EB0 (-ndisNblTrackerTransferOneNbl@@YAXPEAU_NET_BUFFER_LIST@@T_NDIS_NBL_TRACKER_OWNER@@PEAUNDIS_NBL_T.c)
 *     ?ndisNblTrackerDecrementOwnershipCount@@YAXT_NDIS_NBL_TRACKER_OWNER@@_JPEAE2@Z @ 0x14004CDC0 (-ndisNblTrackerDecrementOwnershipCount@@YAXT_NDIS_NBL_TRACKER_OWNER@@_JPEAE2@Z.c)
 */

void __fastcall ndisNblTrackerTransferOwnershipSingleNbl(
        struct _NET_BUFFER_LIST *a1,
        struct NDIS_NBL_TRACKER_HANDLE__ *a2,
        unsigned __int64 a3)
{
  __int64 v3; // r14
  unsigned __int64 v6; // rdi
  unsigned __int8 *v7; // rax
  void *v8; // rbx
  unsigned __int64 v9; // rsi
  char v10[16]; // [rsp+40h] [rbp-10h] BYREF
  __int64 v11; // [rsp+80h] [rbp+30h] BYREF
  unsigned __int64 v12; // [rsp+88h] [rbp+38h] BYREF
  char v13; // [rsp+98h] [rbp+48h] BYREF

  v3 = ndisNblTrackerEpoch;
  v10[0] = 1;
  v12 = 0LL;
  v11 = 0LL;
  v13 = 0;
  if ( *(int *)ndisNblTrackerMode >= 3 )
    ndisNblTrackerRecordEventInternal((unsigned __int64)a1, 0LL, 0x86u, (void *)a3, 1u);
  v6 = a3 & 0xFFFFFFFFFFFFFFFDuLL;
  v7 = (unsigned __int8 *)ndisSourceHandleFromOwner(a3 & 0xFFFFFFFFFFFFFFFDuLL);
  if ( (a3 & 1) != 0 )
    v6 = (2 * v3) ^ (a3 ^ (2 * v3)) & 0xFFFFFFFFFFFFFFFDuLL;
  v8 = a1->NetBufferListInfo[27];
  ndisNblTrackerTransferOneNbl(a1, (__int64)v8, 0LL, v6, v7, &v12, &v11);
  v9 = v12;
  ndisNblTrackerDecrementOwnershipCount((unsigned __int64)v8, v12, v10, &v13);
  ndisNblTrackerDecrementOwnershipCount(v6, v9 - v11, v10, &v13);
}
