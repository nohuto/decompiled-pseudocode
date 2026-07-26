/*
 * XREFs of ?ndisUpdateWmiPMParamsForPatterns@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1400B5D7C
 * Callers:
 *     ?ndisOidPostPMRemoveWOLPattern@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x140062ED0 (-ndisOidPostPMRemoveWOLPattern@@YAXPEAU_NDIS_REQ_TRACKER@@@Z.c)
 * Callees:
 *     ?ndisEnablePMParamForPattern@@YAXPEAU_NDIS_PM_WOL_PATTERN@@PEAU_NDIS_PM_PARAMETERS@@@Z @ 0x1400B28F0 (-ndisEnablePMParamForPattern@@YAXPEAU_NDIS_PM_WOL_PATTERN@@PEAU_NDIS_PM_PARAMETERS@@@Z.c)
 */

void __fastcall ndisUpdateWmiPMParamsForPatterns(struct _NDIS_MINIPORT_BLOCK *a1)
{
  struct _NDIS_MINIPORT_BLOCK *v1; // r10
  _SINGLE_LIST_ENTRY *i; // rax
  _SINGLE_LIST_ENTRY *j; // r9
  struct _NDIS_PM_PARAMETERS v4; // [rsp+20h] [rbp-28h] BYREF

  memset(&v4, 0, sizeof(v4));
  v1 = a1;
  for ( i = a1->WOLPatternList.Next; i; i = i->Next )
  {
    for ( j = i + 1; j; j = j->Next )
    {
      if ( j[2].Next == (_SINGLE_LIST_ENTRY *)&ndisIntReqWmi )
        ndisEnablePMParamForPattern((struct _NDIS_PM_WOL_PATTERN *)&i[6], &v4);
    }
  }
  v1->PMWmiParameters.EnabledWoLPacketPatterns = v4.EnabledWoLPacketPatterns;
}
