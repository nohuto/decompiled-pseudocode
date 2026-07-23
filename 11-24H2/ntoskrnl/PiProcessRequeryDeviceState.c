/*
 * XREFs of PiProcessRequeryDeviceState @ 0x1408B902C
 * Callers:
 *     PnpDeviceActionWorker @ 0x140467910 (PnpDeviceActionWorker.c)
 * Callees:
 *     IoAddTriageDumpDataBlock @ 0x1403E65A0 (IoAddTriageDumpDataBlock.c)
 *     Feature_IoInvalidateDeviceState_Unconditional__private_ReportDeviceUsage @ 0x140468194 (Feature_IoInvalidateDeviceState_Unconditional__private_ReportDeviceUsage.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     PiProcessQueryDeviceState @ 0x1408B91C4 (PiProcessQueryDeviceState.c)
 */

__int64 __fastcall PiProcessRequeryDeviceState(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rdi
  __int64 v5; // rcx
  _WORD *v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rdi
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rcx

  v2 = *(_QWORD *)(a1 + 16);
  if ( !v2 )
    goto LABEL_6;
  v3 = *(_QWORD *)(*(_QWORD *)(v2 + 312) + 40LL);
  if ( !v3 || (*(_DWORD *)(v3 + 396) & 0x20000) != 0 )
  {
    IoAddTriageDumpDataBlock(v2, (PVOID)*(unsigned __int16 *)(v2 + 2));
    v5 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8LL);
    if ( v5 )
    {
      IoAddTriageDumpDataBlock(v5, (PVOID)(unsigned int)*(__int16 *)(v5 + 2));
      v6 = (_WORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 8LL) + 56LL);
      if ( *v6 )
      {
        IoAddTriageDumpDataBlock((ULONG)v6, (PVOID)2);
        IoAddTriageDumpDataBlock(
          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 8LL) + 64LL),
          (PVOID)*(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 8LL) + 56LL));
      }
    }
    v7 = *(_QWORD *)(a1 + 16);
    if ( v7 )
    {
      v8 = *(_QWORD *)(v7 + 312);
      if ( *(_QWORD *)(v8 + 40) )
      {
        v9 = *(_QWORD *)(v8 + 40);
        IoAddTriageDumpDataBlock(v9, (PVOID)0x388);
        if ( *(_WORD *)(v9 + 40) )
        {
          IoAddTriageDumpDataBlock(v9 + 40, (PVOID)2);
          IoAddTriageDumpDataBlock(*(_QWORD *)(v9 + 48), (PVOID)*(unsigned __int16 *)(v9 + 40));
        }
        v10 = *(_QWORD *)(a1 + 16);
        v11 = v10 + 312;
        if ( v10 )
          v12 = *(_QWORD *)(*(_QWORD *)v11 + 40LL);
        else
          v12 = 0LL;
        if ( *(_WORD *)(v12 + 56) )
        {
          if ( v10 )
            v13 = *(_QWORD *)(*(_QWORD *)v11 + 40LL);
          else
            LODWORD(v13) = 0;
          IoAddTriageDumpDataBlock(v13 + 56, (PVOID)2);
          v14 = *(_QWORD *)(a1 + 16);
          if ( v14 )
          {
            v15 = *(_QWORD *)(*(_QWORD *)(v14 + 312) + 40LL);
            v16 = v15;
          }
          else
          {
            v15 = 0LL;
            v16 = 0LL;
          }
          IoAddTriageDumpDataBlock(*(_QWORD *)(v16 + 64), (PVOID)*(unsigned __int16 *)(v15 + 56));
        }
        v17 = *(_QWORD *)(a1 + 16);
        v18 = v17 + 312;
        if ( v17 )
          v19 = *(_QWORD *)(*(_QWORD *)v18 + 40LL);
        else
          v19 = 0LL;
        if ( *(_QWORD *)(v19 + 16) )
        {
          v20 = v17 ? *(_QWORD *)(*(_QWORD *)v18 + 40LL) : 0LL;
          if ( *(_WORD *)(*(_QWORD *)(v20 + 16) + 56LL) )
          {
            if ( v17 )
              v21 = *(_QWORD *)(*(_QWORD *)v18 + 40LL);
            else
              v21 = 0LL;
            IoAddTriageDumpDataBlock(*(_QWORD *)(v21 + 16) + 56, (PVOID)2);
            v22 = *(_QWORD *)(a1 + 16);
            if ( v22 )
            {
              v23 = *(_QWORD *)(*(_QWORD *)(v22 + 312) + 40LL);
              v24 = v23;
            }
            else
            {
              v23 = 0LL;
              v24 = 0LL;
            }
            IoAddTriageDumpDataBlock(
              *(_QWORD *)(*(_QWORD *)(v24 + 16) + 64LL),
              (PVOID)*(unsigned __int16 *)(*(_QWORD *)(v23 + 16) + 56LL));
          }
        }
      }
    }
LABEL_6:
    KeBugCheckEx(0xCAu, 2uLL, *(_QWORD *)(a1 + 16), 0LL, 0LL);
  }
  Feature_IoInvalidateDeviceState_Unconditional__private_ReportDeviceUsage();
  if ( (*(_DWORD *)(v3 + 704) & 0x20000) != 0 )
    return PiProcessQueryDeviceState(*(_QWORD *)(a1 + 16));
  else
    return 3221225860LL;
}
