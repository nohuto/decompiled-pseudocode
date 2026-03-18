/*
 * XREFs of PnprIdentifyUnits @ 0x14072F7DC
 * Callers:
 *     PnpReplacePartitionUnit @ 0x14072E220 (PnpReplacePartitionUnit.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     PnpQueryInterface @ 0x1409C4D84 (PnpQueryInterface.c)
 */

__int64 __fastcall PnprIdentifyUnits(PVOID Object, PVOID a2, _QWORD *a3, __int64 a4)
{
  int Interface; // ebx
  __int64 v8; // r9
  __int64 v9; // rdx
  __int64 v10; // r8
  int v11; // ecx
  int v12; // eax
  __int64 v13; // rcx
  int v14; // eax
  int v15; // eax
  __int64 v16; // r8
  __int64 v17; // r8
  __int64 v18; // rcx
  int v19; // eax
  int v20; // eax
  _OWORD v22[2]; // [rsp+38h] [rbp-19h] BYREF
  __int128 v23; // [rsp+58h] [rbp+7h]
  __int64 v24; // [rsp+68h] [rbp+17h]
  _OWORD v25[2]; // [rsp+70h] [rbp+1Fh] BYREF
  __int128 v26; // [rsp+90h] [rbp+3Fh]
  __int64 v27; // [rsp+A0h] [rbp+4Fh]

  v24 = 0LL;
  v27 = 0LL;
  memset(v22, 0, sizeof(v22));
  v23 = 0LL;
  memset(v25, 0, sizeof(v25));
  v26 = 0LL;
  Interface = PnpQueryInterface(a2, 0LL, v22);
  if ( Interface < 0 )
  {
    v9 = PnprContext;
    v10 = 3LL;
    v11 = *(_DWORD *)(PnprContext + 33288);
    if ( !v11 )
      v11 = 1293;
    v12 = *(_DWORD *)(PnprContext + 33292);
    *(_DWORD *)(PnprContext + 33288) = v11;
    if ( !v12 )
      v12 = 3;
    *(_DWORD *)(v9 + 33292) = v12;
    goto LABEL_28;
  }
  Interface = PnpQueryInterface(Object, 0LL, v25);
  if ( Interface >= 0 )
  {
    if ( (_QWORD)v26 && (_QWORD)v23 && v24 )
    {
      Interface = guard_dispatch_icall_no_overrides(*((_QWORD *)&v25[0] + 1), a3, v10, v8);
      if ( Interface < 0 )
      {
        v9 = 1325LL;
        goto LABEL_9;
      }
      Interface = guard_dispatch_icall_no_overrides(*((_QWORD *)&v22[0] + 1), a4, v16, v8);
      if ( Interface < 0 )
      {
        v9 = 1333LL;
        goto LABEL_9;
      }
      if ( (unsigned __int8)guard_dispatch_icall_no_overrides(*((_QWORD *)&v22[0] + 1), *a3, v17, v8) )
      {
        Interface = 0;
        goto LABEL_28;
      }
      v18 = PnprContext;
      v19 = *(_DWORD *)(PnprContext + 33288);
      if ( !v19 )
        v19 = 1346;
      v9 = 4LL;
      *(_DWORD *)(PnprContext + 33288) = v19;
      v20 = *(_DWORD *)(v18 + 33292);
      if ( !v20 )
        v20 = 4;
      *(_DWORD *)(v18 + 33292) = v20;
    }
    Interface = -1073741811;
    goto LABEL_28;
  }
  v9 = 1305LL;
LABEL_9:
  v13 = PnprContext;
  v10 = 3LL;
  v14 = *(_DWORD *)(PnprContext + 33288);
  if ( !v14 )
    v14 = v9;
  *(_DWORD *)(PnprContext + 33288) = v14;
  v15 = *(_DWORD *)(v13 + 33292);
  if ( !v15 )
    v15 = 3;
  *(_DWORD *)(v13 + 33292) = v15;
LABEL_28:
  if ( *((_QWORD *)&v22[0] + 1) )
    guard_dispatch_icall_no_overrides(*((_QWORD *)&v22[0] + 1), v9, v10, v8);
  if ( *((_QWORD *)&v25[0] + 1) )
    guard_dispatch_icall_no_overrides(*((_QWORD *)&v25[0] + 1), v9, v10, v8);
  return (unsigned int)Interface;
}
