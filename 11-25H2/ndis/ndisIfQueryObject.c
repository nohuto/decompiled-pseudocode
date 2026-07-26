/*
 * XREFs of ndisIfQueryObject @ 0x14015A900
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisIfReferenceMiniport@@YAPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_IF_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z @ 0x14000E590 (-ndisIfReferenceMiniport@@YAPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_IF_BLOCK@@W4_NDIS_MPIF_REFTAG@@@.c)
 *     ?ndisIfDereferenceMiniport@@YAXPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z @ 0x14004B0D0 (-ndisIfDereferenceMiniport@@YAXPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG.c)
 *     WPP_RECORDER_SF_DqL @ 0x14004CC60 (WPP_RECORDER_SF_DqL.c)
 *     WPP_RECORDER_SF_DqLL @ 0x14005E870 (WPP_RECORDER_SF_DqLL.c)
 *     ndisIfQueryFilterObject @ 0x14015AA30 (ndisIfQueryFilterObject.c)
 *     ndisIfQueryMiniportObjectNotPresent @ 0x14015AED0 (ndisIfQueryMiniportObjectNotPresent.c)
 *     ndisIfQueryMiniportObject @ 0x14015B230 (ndisIfQueryMiniportObject.c)
 */

__int64 __fastcall ndisIfQueryObject(struct _NDIS_IF_BLOCK *a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v6; // ebp
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned int FilterObject; // r14d
  struct _NDIS_MINIPORT_BLOCK *v13; // rax
  struct _NDIS_MINIPORT_BLOCK *v14; // rdx
  int v15; // [rsp+20h] [rbp-48h]

  v6 = a2;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_DqL(*((_QWORD *)WPP_GLOBAL_Control + 8), a2, a3, 0x13u, v15);
  if ( !a1 )
    return 3221225485LL;
  if ( a1->IsNdisFilter )
  {
    FilterObject = ndisIfQueryFilterObject(a1->Filter, v6);
  }
  else
  {
    v13 = ndisIfReferenceMiniport(a1, 2u);
    if ( v13 )
    {
      FilterObject = ndisIfQueryMiniportObject(v13, v6);
      ndisIfDereferenceMiniport(a1, v14, 2u);
    }
    else
    {
      FilterObject = ndisIfQueryMiniportObjectNotPresent(a1, v6, a3, a4);
    }
  }
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_DqLL(*((_QWORD *)WPP_GLOBAL_Control + 8), v8, v9, v10, v15);
  return FilterObject;
}
