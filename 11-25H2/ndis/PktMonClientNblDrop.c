/*
 * XREFs of PktMonClientNblDrop @ 0x14003AAA0
 * Callers:
 *     NdisFSendNetBufferLists @ 0x14001FCC0 (NdisFSendNetBufferLists.c)
 *     NdisFIndicateReceiveNetBufferLists @ 0x140033A40 (NdisFIndicateReceiveNetBufferLists.c)
 *     NdisMIndicateReceiveNetBufferLists @ 0x140035610 (NdisMIndicateReceiveNetBufferLists.c)
 *     ?ndisMTopReceiveNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z @ 0x140037240 (-ndisMTopReceiveNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z.c)
 *     ?ndisInvokeNextReceiveHandler@@YAXPEAU_NET_BUFFER_LIST@@KKKPEAU_NDIS_OBJECT_HEADER@@PEAXP6AX20KKK@Z@Z @ 0x140038FF0 (-ndisInvokeNextReceiveHandler@@YAXPEAU_NET_BUFFER_LIST@@KKKPEAU_NDIS_OBJECT_HEADER@@PEAXP6AX20KK.c)
 *     ?ndisMIndicateNetBufferListsToOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_BUFFER_LIST@@KKK@Z @ 0x140039CC0 (-ndisMIndicateNetBufferListsToOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_BUFFER_LIST@@KKK@Z.c)
 *     ?ndisFilterIndicateReceiveNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z @ 0x14003ABD0 (-ndisFilterIndicateReceiveNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z.c)
 *     PktMonClientNblDropNdis @ 0x140046FF0 (PktMonClientNblDropNdis.c)
 *     NdisMSendNetBufferListsComplete @ 0x140047050 (NdisMSendNetBufferListsComplete.c)
 * Callees:
 *     __security_check_cookie @ 0x1400EDF40 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400EDFC0 (_guard_dispatch_icall.c)
 */

void __fastcall PktMonClientNblDrop(__int64 a1, __int64 a2, int a3, __int64 a4, __int64 a5, int a6, int a7, int a8)
{
  __int64 v11; // rdx
  __int16 v12; // [rsp+30h] [rbp-58h] BYREF
  int v13; // [rsp+32h] [rbp-56h]
  __int16 v14; // [rsp+36h] [rbp-52h]
  __int64 v15; // [rsp+38h] [rbp-50h]
  int v16; // [rsp+40h] [rbp-48h]
  int v17; // [rsp+44h] [rbp-44h]
  int v18; // [rsp+48h] [rbp-40h]
  int v19; // [rsp+4Ch] [rbp-3Ch]
  __int64 v20; // [rsp+50h] [rbp-38h]
  _WORD v21[2]; // [rsp+58h] [rbp-30h] BYREF
  int v22; // [rsp+5Ch] [rbp-2Ch]
  int v23; // [rsp+60h] [rbp-28h]

  v13 = 0;
  v14 = 0;
  v19 = 0;
  v21[1] = 0;
  if ( byte_1401278B0 && (*(_DWORD *)(a1 + 56) & 2) != 0 && (*(_DWORD *)(a2 + 128) & 0x8000) == 0 )
  {
    if ( ExAcquireRundownProtectionCacheAware(RunRefCacheAware) )
    {
      v11 = *(_QWORD *)(a1 + 40);
      v15 = a2;
      v12 = 40;
      v18 = a6;
      v21[0] = 12;
      v22 = a7;
      v23 = a8;
      v16 = 1;
      v17 = a3;
      v20 = 0LL;
      (*(void (__fastcall **)(_QWORD, __int64, __int16 *, _WORD *, _QWORD))(*((_QWORD *)&xmmword_1401278D0 + 1) + 48LL))(
        xmmword_1401278D0,
        v11,
        &v12,
        v21,
        0LL);
      ExReleaseRundownProtectionCacheAware(RunRefCacheAware);
    }
  }
}
