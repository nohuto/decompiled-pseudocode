/*
 * XREFs of ?ndisMDummyReceiveNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z @ 0x14008A580
 * Callers:
 *     NdisMIndicateReceiveNetBufferLists @ 0x140035610 (NdisMIndicateReceiveNetBufferLists.c)
 * Callees:
 *     PktMonClientNblDropNdis @ 0x140046FF0 (PktMonClientNblDropNdis.c)
 *     _guard_dispatch_icall @ 0x1400EDFC0 (_guard_dispatch_icall.c)
 */

void __fastcall ndisMDummyReceiveNetBufferLists(
        _DWORD *a1,
        struct _NET_BUFFER_LIST *a2,
        __int64 a3,
        __int64 a4,
        char a5)
{
  if ( byte_1401278B0 && (a1[1468] & 2) != 0 )
    PktMonClientNblDropNdis((__int64)(a1 + 1454), (__int64)a2, a3, 1LL, 0xC023001F, -536866808);
  if ( (a5 & 2) == 0 )
    (*((void (__fastcall **)(_QWORD, struct _NET_BUFFER_LIST *, _QWORD))a1 + 307))(*((_QWORD *)a1 + 293), a2, a5 & 1);
}
