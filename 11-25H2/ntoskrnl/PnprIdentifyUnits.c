/*
 * XREFs of PnprIdentifyUnits @ 0x14072385C
 * Callers:
 *     PnpReplacePartitionUnit @ 0x1407222A0 (PnpReplacePartitionUnit.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     PnpQueryInterface @ 0x14082CC7C (PnpQueryInterface.c)
 */

__int64 __fastcall PnprIdentifyUnits(PVOID Object, PVOID a2)
{
  int Interface; // ebx
  __int64 v4; // rdx
  int v5; // ecx
  int v6; // eax
  int v7; // edx
  __int64 v8; // rcx
  int v9; // eax
  int v10; // eax
  __int64 v11; // rcx
  int v12; // eax
  int v13; // eax
  _OWORD v15[2]; // [rsp+38h] [rbp-19h] BYREF
  __int128 v16; // [rsp+58h] [rbp+7h]
  __int64 v17; // [rsp+68h] [rbp+17h]
  _OWORD v18[2]; // [rsp+70h] [rbp+1Fh] BYREF
  __int128 v19; // [rsp+90h] [rbp+3Fh]
  __int64 v20; // [rsp+A0h] [rbp+4Fh]

  v17 = 0LL;
  v20 = 0LL;
  memset(v15, 0, sizeof(v15));
  v16 = 0LL;
  memset(v18, 0, sizeof(v18));
  v19 = 0LL;
  Interface = PnpQueryInterface(a2, 0LL, v15);
  if ( Interface < 0 )
  {
    v4 = PnprContext;
    v5 = *(_DWORD *)(PnprContext + 33288);
    if ( !v5 )
      v5 = 1293;
    v6 = *(_DWORD *)(PnprContext + 33292);
    *(_DWORD *)(PnprContext + 33288) = v5;
    if ( !v6 )
      v6 = 3;
    *(_DWORD *)(v4 + 33292) = v6;
    goto LABEL_28;
  }
  Interface = PnpQueryInterface(Object, 0LL, v18);
  if ( Interface >= 0 )
  {
    if ( (_QWORD)v19 && (_QWORD)v16 && v17 )
    {
      Interface = guard_dispatch_icall_no_overrides(*((_QWORD *)&v18[0] + 1));
      if ( Interface < 0 )
      {
        v7 = 1325;
        goto LABEL_9;
      }
      Interface = guard_dispatch_icall_no_overrides(*((_QWORD *)&v15[0] + 1));
      if ( Interface < 0 )
      {
        v7 = 1333;
        goto LABEL_9;
      }
      if ( (unsigned __int8)guard_dispatch_icall_no_overrides(*((_QWORD *)&v15[0] + 1)) )
      {
        Interface = 0;
        goto LABEL_28;
      }
      v11 = PnprContext;
      v12 = *(_DWORD *)(PnprContext + 33288);
      if ( !v12 )
        v12 = 1346;
      *(_DWORD *)(PnprContext + 33288) = v12;
      v13 = *(_DWORD *)(v11 + 33292);
      if ( !v13 )
        v13 = 4;
      *(_DWORD *)(v11 + 33292) = v13;
    }
    Interface = -1073741811;
    goto LABEL_28;
  }
  v7 = 1305;
LABEL_9:
  v8 = PnprContext;
  v9 = *(_DWORD *)(PnprContext + 33288);
  if ( !v9 )
    v9 = v7;
  *(_DWORD *)(PnprContext + 33288) = v9;
  v10 = *(_DWORD *)(v8 + 33292);
  if ( !v10 )
    v10 = 3;
  *(_DWORD *)(v8 + 33292) = v10;
LABEL_28:
  if ( *((_QWORD *)&v15[0] + 1) )
    guard_dispatch_icall_no_overrides(*((_QWORD *)&v15[0] + 1));
  if ( *((_QWORD *)&v18[0] + 1) )
    guard_dispatch_icall_no_overrides(*((_QWORD *)&v18[0] + 1));
  return (unsigned int)Interface;
}
