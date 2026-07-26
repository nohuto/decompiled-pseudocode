/*
 * XREFs of ?ndisInitializeDirectedWolPattern@@YAXPEAU_DIRECT_WOL_PATTERN@@KPEAU_RTL_BITMAP@@PEAPEAE@Z @ 0x1400BA9BC
 * Callers:
 *     ?ndisAddWoLDirectedMAC@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14014AA60 (-ndisAddWoLDirectedMAC@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     memcpy_s @ 0x14009AF00 (memcpy_s.c)
 *     memset @ 0x1400EE380 (memset.c)
 */

void __fastcall ndisInitializeDirectedWolPattern(
        struct _DIRECT_WOL_PATTERN *a1,
        __int64 a2,
        struct _RTL_BITMAP *a3,
        unsigned __int8 **a4)
{
  memset(a1, 0, 0xEEuLL);
  *(_DWORD *)a1 = 12845696;
  *((_WORD *)a1 + 8) = 50;
  *((_DWORD *)a1 + 3) = 1;
  *((_DWORD *)a1 + 2) = 0x10000000;
  memcpy_s((char *)a1 + 18, 0x80uLL, L"NAPS Directed MAC Pattern", 0x32uLL);
  *((_DWORD *)a1 + 43) = 34;
  *((_DWORD *)a1 + 1) = 1;
  *((_DWORD *)a1 + 37) = 131073;
  *((_DWORD *)a1 + 40) = a3 != 0LL ? 0xC4 : 0;
  *((_DWORD *)a1 + 41) = a3 != 0LL ? 8 : 0;
  *((_DWORD *)a1 + 42) = a4 != 0LL ? 0xCC : 0;
  if ( a3 )
    RtlInitializeBitMap(a3, (PULONG)a1 + 49, 0x40u);
  if ( a4 )
    *a4 = (unsigned __int8 *)a1 + 204;
}
