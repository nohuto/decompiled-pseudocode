/*
 * XREFs of ?ndisNDKCheckIfEnabledOnMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140167480
 * Callers:
 *     ndisQueryGuidData @ 0x14002D4C0 (ndisQueryGuidData.c)
 * Callees:
 *     ?ndisGetNDKBlock@@YAPEAU_NDIS_NDK_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14006D2C0 (-ndisGetNDKBlock@@YAPEAU_NDIS_NDK_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 */

struct _NDIS_NDK_BLOCK *__fastcall ndisNDKCheckIfEnabledOnMiniport(struct _NDIS_MINIPORT_BLOCK *a1)
{
  struct _NDIS_NDK_BLOCK *result; // rax

  result = ndisGetNDKBlock(a1);
  if ( result )
    return (struct _NDIS_NDK_BLOCK *)*((unsigned __int8 *)result + 24);
  return result;
}
