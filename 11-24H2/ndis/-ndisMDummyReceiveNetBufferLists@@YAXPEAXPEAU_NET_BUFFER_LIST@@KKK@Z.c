/*
 * XREFs of ?ndisMDummyReceiveNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z @ 0x14006E080
 * Callers:
 *     NdisMIndicateReceiveNetBufferLists @ 0x14001DE10 (NdisMIndicateReceiveNetBufferLists.c)
 * Callees:
 *     PktMonClientNblDropNdis @ 0x1400410D0 (PktMonClientNblDropNdis.c)
 *     _guard_dispatch_icall @ 0x1400E7130 (_guard_dispatch_icall.c)
 */

void __fastcall ndisMDummyReceiveNetBufferLists(
        _DWORD *a1,
        struct _NET_BUFFER_LIST *a2,
        __int64 a3,
        __int64 a4,
        char a5)
{
  if ( byte_14011D800 && (a1[1468] & 2) != 0 )
    PktMonClientNblDropNdis((__int64)(a1 + 1454), (__int64)a2, a3, 1LL, -1071448033, -536866808);
  if ( (a5 & 2) == 0 )
    (*((void (__fastcall **)(_QWORD, struct _NET_BUFFER_LIST *, _QWORD))a1 + 307))(*((_QWORD *)a1 + 293), a2, a5 & 1);
}
