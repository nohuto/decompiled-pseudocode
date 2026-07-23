/*
 * XREFs of PnpQueryID @ 0x140A28110
 * Callers:
 *     PipProcessStartPhase3 @ 0x14097B0A4 (PipProcessStartPhase3.c)
 *     PiProcessNewDeviceNode @ 0x140A76864 (PiProcessNewDeviceNode.c)
 * Callees:
 *     PnpLogEvent @ 0x140720FF0 (PnpLogEvent.c)
 *     PnpSetInvalidIDEvent @ 0x14072C00C (PnpSetInvalidIDEvent.c)
 *     PipSetDevNodeProblem @ 0x14097AC5C (PipSetDevNodeProblem.c)
 *     PipSetDevNodeFlags @ 0x14097B5F8 (PipSetDevNodeFlags.c)
 *     PnpIrpQueryID @ 0x140A28284 (PnpIrpQueryID.c)
 *     PnpFixupID @ 0x140A2830C (PnpFixupID.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PnpQueryID(__int64 a1, __int64 a2, PVOID *a3, _DWORD *a4)
{
  __int64 v5; // rcx
  int v8; // esi
  int ID; // eax
  unsigned int v10; // ebx
  int v11; // r9d
  int v12; // edx
  int v13; // r8d
  int v14; // eax
  __int64 v16; // rcx
  const void **v17; // rcx
  const void *v18[5]; // [rsp+30h] [rbp-28h] BYREF

  HIDWORD(v18[0]) = 0;
  v5 = *(_QWORD *)(a1 + 32);
  *a4 = 0;
  v8 = a2;
  ID = PnpIrpQueryID(v5, a2, a3);
  v10 = ID;
  if ( ID >= 0 )
  {
    if ( v8 )
    {
      if ( v8 == 1 || v8 == 2 )
      {
        v11 = -1;
        v12 = 1024;
        v13 = 1;
LABEL_6:
        v14 = PnpFixupID((unsigned int)*a3, v12, v13, v11, *(_QWORD *)(a1 + 16) + 56LL);
LABEL_7:
        *a4 = 2 * v14;
        if ( 2 * v14 )
          return v10;
        v10 = -1073479624;
        goto LABEL_14;
      }
      if ( v8 != 3 )
      {
        v14 = 0;
        goto LABEL_7;
      }
      v11 = 0;
    }
    else
    {
      v11 = 1;
    }
    v13 = 0;
    v12 = 200;
    goto LABEL_6;
  }
  if ( ID == -1073479624 || !v8 || v8 == 3 && ID == -1073741670 )
  {
LABEL_14:
    PipSetDevNodeProblem(a1, 9, v10);
    v16 = *(_QWORD *)(a1 + 16);
    if ( (*(_DWORD *)(v16 + 396) & 0x200000) == 0 )
    {
      PipSetDevNodeFlags(v16, 0x200000u);
      PnpSetInvalidIDEvent((const void **)(*(_QWORD *)(a1 + 16) + 40LL));
    }
    if ( v10 != -1073479624 && !v8 && v10 != -1073741670 && v10 != -1073741810 )
    {
      v17 = (const void **)(*(_QWORD *)(a1 + 16) + 56LL);
      LODWORD(v18[0]) = 5242958;
      v18[1] = L"failed IRP_MN_QUERY_ID-BusQueryDeviceID";
      PnpLogEvent(v17, v18, v10, 0LL, 0);
    }
  }
  if ( *a3 )
  {
    ExFreePoolWithTag(*a3, 0);
    *a3 = 0LL;
    *a4 = 0;
  }
  return v10;
}
