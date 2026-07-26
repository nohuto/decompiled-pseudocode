/*
 * XREFs of ?ndisEntrySetScanForward@@YAEPEAGPEAU_NDIS_RSS_ENTRY_SET@@@Z @ 0x1400ABAC4
 * Callers:
 *     ?ndisInternalSetRSSv2IndirectionTable@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@GPEAU_PROCESSOR_NUMBER@@U3@G22@Z @ 0x1400ABFB4 (-ndisInternalSetRSSv2IndirectionTable@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@GPEAU.c)
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall ndisEntrySetScanForward(unsigned __int16 *a1, struct _NDIS_RSS_ENTRY_SET *a2)
{
  unsigned __int8 v2; // r9
  unsigned __int16 v5; // r8
  __int64 v6; // rdx
  unsigned __int16 v7; // ax
  unsigned __int64 v8; // rcx
  __int64 v10; // rax
  unsigned __int16 v11; // r8
  unsigned __int8 result; // al

  v2 = 0;
  if ( *a1 == 0xFFFF )
  {
    v5 = 0;
    v6 = -1LL;
  }
  else
  {
    v7 = *a1 + 1;
    v5 = v7 >> 6;
    v6 = ~((1LL << (v7 & 0x3F)) - 1);
  }
  while ( v5 < 2u )
  {
    v8 = v6 & *((_QWORD *)a2 + v5);
    v6 = -1LL;
    if ( _BitScanForward64((unsigned __int64 *)&v10, v8) )
    {
      v2 = 1;
      v11 = v10 + (v5 << 6);
      goto LABEL_9;
    }
    ++v5;
  }
  v11 = -1;
LABEL_9:
  result = v2;
  *a1 = v11;
  return result;
}
