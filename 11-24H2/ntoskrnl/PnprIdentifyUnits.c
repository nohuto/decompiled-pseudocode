/*
 * XREFs of PnprIdentifyUnits @ 0x14072D7EC
 * Callers:
 *     PnpReplacePartitionUnit @ 0x14072C230 (PnpReplacePartitionUnit.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     PnpQueryInterface @ 0x140982B38 (PnpQueryInterface.c)
 */

__int64 __fastcall PnprIdentifyUnits(PVOID Object, PVOID a2, _QWORD *a3, __int64 a4)
{
  int Interface; // ebx
  __int64 v8; // rdx
  int v9; // ecx
  int v10; // eax
  __int64 v11; // rcx
  int v12; // eax
  int v13; // eax
  __int64 v14; // rcx
  int v15; // eax
  int v16; // eax
  _OWORD v18[2]; // [rsp+38h] [rbp-19h] BYREF
  __int128 v19; // [rsp+58h] [rbp+7h]
  __int64 v20; // [rsp+68h] [rbp+17h]
  _OWORD v21[2]; // [rsp+70h] [rbp+1Fh] BYREF
  __int128 v22; // [rsp+90h] [rbp+3Fh]
  __int64 v23; // [rsp+A0h] [rbp+4Fh]

  v20 = 0LL;
  v23 = 0LL;
  memset(v18, 0, sizeof(v18));
  v19 = 0LL;
  memset(v21, 0, sizeof(v21));
  v22 = 0LL;
  Interface = PnpQueryInterface(a2, 0LL, v18);
  if ( Interface < 0 )
  {
    v8 = PnprContext;
    v9 = *(_DWORD *)(PnprContext + 33288);
    if ( !v9 )
      v9 = 1293;
    v10 = *(_DWORD *)(PnprContext + 33292);
    *(_DWORD *)(PnprContext + 33288) = v9;
    if ( !v10 )
      v10 = 3;
    *(_DWORD *)(v8 + 33292) = v10;
    goto LABEL_28;
  }
  Interface = PnpQueryInterface(Object, 0LL, v21);
  if ( Interface >= 0 )
  {
    if ( (_QWORD)v22 && (_QWORD)v19 && v20 )
    {
      Interface = guard_dispatch_icall_no_overrides(*((_QWORD *)&v21[0] + 1), a3);
      if ( Interface < 0 )
      {
        v8 = 1325LL;
        goto LABEL_9;
      }
      Interface = guard_dispatch_icall_no_overrides(*((_QWORD *)&v18[0] + 1), a4);
      if ( Interface < 0 )
      {
        v8 = 1333LL;
        goto LABEL_9;
      }
      if ( (unsigned __int8)guard_dispatch_icall_no_overrides(*((_QWORD *)&v18[0] + 1), *a3) )
      {
        Interface = 0;
        goto LABEL_28;
      }
      v14 = PnprContext;
      v15 = *(_DWORD *)(PnprContext + 33288);
      if ( !v15 )
        v15 = 1346;
      v8 = 4LL;
      *(_DWORD *)(PnprContext + 33288) = v15;
      v16 = *(_DWORD *)(v14 + 33292);
      if ( !v16 )
        v16 = 4;
      *(_DWORD *)(v14 + 33292) = v16;
    }
    Interface = -1073741811;
    goto LABEL_28;
  }
  v8 = 1305LL;
LABEL_9:
  v11 = PnprContext;
  v12 = *(_DWORD *)(PnprContext + 33288);
  if ( !v12 )
    v12 = v8;
  *(_DWORD *)(PnprContext + 33288) = v12;
  v13 = *(_DWORD *)(v11 + 33292);
  if ( !v13 )
    v13 = 3;
  *(_DWORD *)(v11 + 33292) = v13;
LABEL_28:
  if ( *((_QWORD *)&v18[0] + 1) )
    guard_dispatch_icall_no_overrides(*((_QWORD *)&v18[0] + 1), v8);
  if ( *((_QWORD *)&v21[0] + 1) )
    guard_dispatch_icall_no_overrides(*((_QWORD *)&v21[0] + 1), v8);
  return (unsigned int)Interface;
}
