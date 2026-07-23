/*
 * XREFs of SmAcquireReleaseResAvailForRead @ 0x14033E9F0
 * Callers:
 *     ?SmIoCtxWorkItemComplete@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU_ST_WORK_ITEM_HDR@@PEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@J@Z @ 0x14022FD60 (-SmIoCtxWorkItemComplete@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU_ST_WORK_ITEM_HDR@@PEAU1@PEAU-$SM.c)
 *     ?SmPageRead@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@PEAU_MDL@@PEAXPEAU_IO_STATUS_BLOCK@@@Z @ 0x1402F63B8 (-SmPageRead@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@PEAU_MDL@@PEAXPEAU_IO_STAT.c)
 * Callees:
 *     MiChargePartitionResidentAvailable @ 0x14033ECD0 (MiChargePartitionResidentAvailable.c)
 */

__int64 __fastcall SmAcquireReleaseResAvailForRead(__int64 a1, signed __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v7; // rdx
  ULONG *v8; // r10
  struct _KPRCB *v9; // r8
  unsigned __int32 v10; // eax
  unsigned __int32 v11; // ett
  unsigned int v12; // ecx
  unsigned __int64 v14; // r8
  __int64 v15; // r11
  struct _KPRCB *CurrentPrcb; // r10
  signed __int32 CachedResidentAvailable; // edx
  bool v18; // zf
  signed __int32 v19; // eax

  if ( (_DWORD)a4 )
  {
    if ( *(_QWORD *)(a1 + 2216) == a2 )
    {
      _InterlockedExchange64((volatile __int64 *)(a1 + 2216), 0LL);
    }
    else
    {
      v14 = a3 + 48;
      v15 = **(_QWORD **)(a1 + 2096);
      if ( (ULONG *)v15 == &MiSystemPartition )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        CachedResidentAvailable = CurrentPrcb->CachedResidentAvailable;
        if ( CachedResidentAvailable != -1 )
        {
          do
          {
            if ( v14 + CachedResidentAvailable > 0x100 || v14 >= 0x80000 )
              break;
            v19 = _InterlockedCompareExchange(
                    (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                    CachedResidentAvailable + v14,
                    CachedResidentAvailable);
            v18 = CachedResidentAvailable == v19;
            CachedResidentAvailable = v19;
            if ( v18 )
              return 1;
          }
          while ( v19 != -1 );
          if ( CachedResidentAvailable > 192
            && CachedResidentAvailable == _InterlockedCompareExchange(
                                            (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                                            192,
                                            CachedResidentAvailable) )
          {
            v14 += CachedResidentAvailable - 192;
          }
        }
      }
      if ( v14 )
        _InterlockedAdd64((volatile signed __int64 *)(v15 + 18752), v14);
    }
    return 1;
  }
  v7 = a3 + 48;
  v8 = **(ULONG ***)(a1 + 2096);
  if ( v8 == &MiSystemPartition )
  {
    v9 = KeGetCurrentPrcb();
    a4 = 0xFFFFFFFFLL;
    v10 = v9->CachedResidentAvailable;
    while ( v7 <= v10 && v10 != -1 )
    {
      v11 = v10;
      v10 = _InterlockedCompareExchange((volatile signed __int32 *)&v9->CachedResidentAvailable, v10 - v7, v10);
      if ( v11 == v10 )
        return 1;
    }
  }
  if ( (unsigned int)MiChargePartitionResidentAvailable(v8, v7, 0LL, a4) )
    return 1;
  if ( *(_QWORD *)(a1 + 2216) )
    return 0;
  v12 = 1;
  if ( a3 != 1 || _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 2216), a2, 0LL) )
    return 0;
  return v12;
}
