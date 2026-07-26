/*
 * XREFs of ndisImmediateReadWritePort @ 0x1400D4E88
 * Callers:
 *     NdisImmediateReadPortUchar @ 0x1400D51D0 (NdisImmediateReadPortUchar.c)
 *     NdisImmediateReadPortUlong @ 0x1400D51F0 (NdisImmediateReadPortUlong.c)
 *     NdisImmediateReadPortUshort @ 0x1400D5210 (NdisImmediateReadPortUshort.c)
 *     NdisImmediateWritePortUchar @ 0x1400D5250 (NdisImmediateWritePortUchar.c)
 *     NdisImmediateWritePortUlong @ 0x1400D5280 (NdisImmediateWritePortUlong.c)
 *     NdisImmediateWritePortUshort @ 0x1400D52B0 (NdisImmediateWritePortUshort.c)
 * Callees:
 *     ?ndisTranslateResources@@YAHPEAU_NDIS_MINIPORT_BLOCK@@HT_LARGE_INTEGER@@PEAT2@PEAPEAU_CM_PARTIAL_RESOURCE_DESCRIPTOR@@@Z @ 0x140090B1C (-ndisTranslateResources@@YAHPEAU_NDIS_MINIPORT_BLOCK@@HT_LARGE_INTEGER@@PEAT2@PEAPEAU_CM_PARTIAL.c)
 *     ndisEndMapping @ 0x1400D4E60 (ndisEndMapping.c)
 *     ndisStartMapping @ 0x1400D50E4 (ndisStartMapping.c)
 */

char __fastcall ndisImmediateReadWritePort(__int64 a1, unsigned int a2, unsigned __int8 *a3, unsigned int a4, char a5)
{
  __int64 v5; // rcx
  char LowPart; // si
  int v10; // r12d
  int v11; // r13d
  int started; // eax
  union _LARGE_INTEGER v14; // [rsp+40h] [rbp-10h] BYREF
  struct _CM_PARTIAL_RESOURCE_DESCRIPTOR *v15; // [rsp+48h] [rbp-8h] BYREF
  __int64 v16; // [rsp+80h] [rbp+30h] BYREF
  PHYSICAL_ADDRESS BusAddress; // [rsp+88h] [rbp+38h] BYREF

  v5 = *(_QWORD *)(a1 + 8);
  LowPart = 0;
  LOBYTE(BusAddress.LowPart) = 0;
  v10 = *(_DWORD *)(v5 + 3720);
  v11 = *(_DWORD *)(v5 + 3724);
  v16 = 0LL;
  v15 = 0LL;
  if ( a5 )
  {
    switch ( a4 )
    {
      case 1u:
        *a3 = -1;
        break;
      case 2u:
        *(_WORD *)a3 = -1;
        break;
      case 4u:
        *(_DWORD *)a3 = -1;
        break;
    }
  }
  v14.QuadPart = 0LL;
  started = ndisTranslateResources((struct _NDIS_MINIPORT_BLOCK *)v5, 1, (union _LARGE_INTEGER)a2, &v14, &v15);
  if ( !started )
  {
    LODWORD(v16) = v14.LowPart;
    if ( !v15 )
    {
      started = ndisStartMapping(v10, v11, a2, a4, v10 != 0, (__int64)&v16, (PHYSICAL_ADDRESS)&BusAddress);
      if ( started < 0 )
        return started;
      LowPart = BusAddress.LowPart;
    }
    if ( a5 )
    {
      if ( a4 == 1 )
      {
        LOBYTE(started) = __inbyte(v16);
        *a3 = started;
      }
      else
      {
        LOBYTE(started) = a4 - 2;
        if ( a4 == 2 )
        {
          LOWORD(started) = __inword(v16);
          *(_WORD *)a3 = started;
        }
        else if ( a4 == 4 )
        {
          started = __indword(v16);
          *(_DWORD *)a3 = started;
        }
      }
    }
    else if ( a4 == 1 )
    {
      LOBYTE(started) = *a3;
      __outbyte(v16, *a3);
    }
    else
    {
      LOBYTE(started) = a4 - 2;
      if ( a4 == 2 )
      {
        LOWORD(started) = *(_WORD *)a3;
        __outword(v16, *(_WORD *)a3);
      }
      else if ( a4 == 4 )
      {
        started = *(_DWORD *)a3;
        __outdword(v16, *(_DWORD *)a3);
      }
    }
    if ( LowPart )
      LOBYTE(started) = ndisEndMapping((void *)v16, a4, LowPart);
  }
  return started;
}
