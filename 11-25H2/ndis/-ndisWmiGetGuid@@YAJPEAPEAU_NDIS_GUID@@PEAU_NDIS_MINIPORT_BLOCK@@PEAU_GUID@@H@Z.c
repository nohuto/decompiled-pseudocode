/*
 * XREFs of ?ndisWmiGetGuid@@YAJPEAPEAU_NDIS_GUID@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_GUID@@H@Z @ 0x14002D480
 * Callers:
 *     ndisQueryGuidData @ 0x140029FB0 (ndisQueryGuidData.c)
 *     ndisQueryGuidDataSize @ 0x14002A950 (ndisQueryGuidDataSize.c)
 *     ndisWMIDispatch @ 0x14002BA20 (ndisWMIDispatch.c)
 *     ?ndisWmiQueryAllData@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_GUID@@PEAU_GUID@@PEAUtagWNODE_ALL_DATA@@KPEAK@Z @ 0x14002C670 (-ndisWmiQueryAllData@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_GUID@@PEAU_GUID@@PEAUtagWNODE_ALL_D.c)
 *     ?ndisWmiChangeSingleInstance@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_GUID@@QEAUtagWNODE_SINGLE_INSTANCE@@@Z @ 0x14002CA50 (-ndisWmiChangeSingleInstance@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_GUID@@QEAUtagWNODE_SINGLE_I.c)
 *     ?ndisWmiExecuteMethod@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_GUID@@PEAUtagWNODE_METHOD_ITEM@@KPEAK@Z @ 0x14002D500 (-ndisWmiExecuteMethod@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_GUID@@PEAUtagWNODE_METHOD_ITEM@@KP.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ndisWmiGetGuid(struct _NDIS_GUID **a1, struct _NDIS_MINIPORT_BLOCK *a2, struct _GUID *a3, int a4)
{
  _NDIS_GUID *pNdisGuidMap; // rax
  unsigned int cNdisGuidMap; // edx
  unsigned int i; // r10d
  bool v8; // zf
  __int64 v10; // r9

  *a1 = 0LL;
  pNdisGuidMap = a2->pNdisGuidMap;
  if ( pNdisGuidMap )
  {
    cNdisGuidMap = a2->cNdisGuidMap;
    for ( i = 0; ; ++i )
    {
      if ( i >= cNdisGuidMap )
        return 3221225473LL;
      if ( a3 )
      {
        v10 = *(_QWORD *)&pNdisGuidMap->Guid.Data1 - *(_QWORD *)&a3->Data1;
        if ( *(_QWORD *)&pNdisGuidMap->Guid.Data1 == *(_QWORD *)&a3->Data1 )
          v10 = *(_QWORD *)pNdisGuidMap->Guid.Data4 - *(_QWORD *)a3->Data4;
        v8 = v10 == 0;
      }
      else
      {
        if ( (pNdisGuidMap->Flags & 2) == 0 )
          goto LABEL_6;
        v8 = pNdisGuidMap->Oid == a4;
      }
      if ( v8 )
      {
        *a1 = pNdisGuidMap;
        return 0LL;
      }
LABEL_6:
      ++pNdisGuidMap;
    }
  }
  return 3221225473LL;
}
