/*
 * XREFs of Bulk_TransferData_ConfigureBuffer @ 0x140022490
 * Callers:
 *     Bulk_RetrieveNextStage @ 0x14001ADD0 (Bulk_RetrieveNextStage.c)
 * Callees:
 *     WPP_RECORDER_SF_ddL @ 0x140001D34 (WPP_RECORDER_SF_ddL.c)
 */

__int64 __fastcall Bulk_TransferData_ConfigureBuffer(__int64 a1)
{
  __int64 v1; // rdi
  unsigned int v2; // esi
  int v4; // ecx
  __int64 v5; // rbp
  __int64 v6; // rax
  int v8; // ecx
  __int64 v9; // rax
  PMDL Mdl; // rax
  __int64 v11; // rcx
  PVOID v12; // rax
  unsigned __int16 v13; // r9
  __int64 v14; // r10
  __int64 v15; // r9
  __int64 v16; // rdx
  __int64 Priority; // [rsp+28h] [rbp-20h]

  v1 = *(_QWORD *)(a1 + 48);
  v2 = 0;
  if ( *(_WORD *)(v1 + 2) == 56 )
  {
LABEL_2:
    v4 = *(_DWORD *)(a1 + 76);
    v5 = *(_QWORD *)(a1 + 56);
    if ( v4 == 2 || (v8 = v4 - 1) == 0 )
    {
      v6 = *(_QWORD *)(v1 + 40);
      if ( v6 )
      {
        *(_QWORD *)(a1 + 88) = v6;
      }
      else
      {
        v11 = *(_QWORD *)(v1 + 48);
        if ( (*(_BYTE *)(v11 + 10) & 5) != 0 )
          v12 = *(PVOID *)(v11 + 24);
        else
          v12 = MmMapLockedPagesSpecifyCache((PMDL)v11, 0, MmCached, 0LL, 0, ExDefaultMdlProtection | 0x40000010u);
        *(_QWORD *)(a1 + 88) = v12;
        if ( !v12 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v13 = 38;
LABEL_26:
            LODWORD(Priority) = *(unsigned __int8 *)(*(_QWORD *)(v5 + 48) + 135LL);
            WPP_RECORDER_SF_ddL(
              *(_QWORD *)(*(_QWORD *)(v5 + 56) + 80LL),
              2u,
              0xEu,
              v13,
              (__int64)&WPP_af203940883a35574f6554fa7269ecc3_Traceguids,
              Priority,
              *(_DWORD *)(*(_QWORD *)(v5 + 56) + 144LL),
              *(_DWORD *)(v5 + 64));
          }
          return (unsigned int)-1073741670;
        }
      }
    }
    else if ( v8 == 2 )
    {
      v9 = *(_QWORD *)(v1 + 48);
      if ( v9 )
      {
        *(_QWORD *)(a1 + 80) = v9;
        return v2;
      }
      Mdl = IoAllocateMdl(*(PVOID *)(v1 + 40), *(_DWORD *)(a1 + 104), 0, 0, 0LL);
      *(_QWORD *)(a1 + 80) = Mdl;
      if ( Mdl )
      {
LABEL_11:
        MmBuildMdlForNonPagedPool(*(PMDL *)(a1 + 80));
        return v2;
      }
      if ( (*(_DWORD *)(v1 + 32) & 0x10) != 0 && *(_QWORD *)(v5 + 120) )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
          WPP_RECORDER_SF_ddL(
            *(_QWORD *)(*(_QWORD *)(v5 + 56) + 80LL),
            5u,
            0xEu,
            0x27u,
            (__int64)&WPP_af203940883a35574f6554fa7269ecc3_Traceguids,
            *(unsigned __int8 *)(*(_QWORD *)(v5 + 48) + 135LL),
            *(_DWORD *)(*(_QWORD *)(v5 + 56) + 144LL),
            *(_DWORD *)(v5 + 64));
        v14 = *(_QWORD *)(v5 + 120);
        v15 = *(unsigned int *)(a1 + 104);
        *(_QWORD *)(a1 + 80) = v14;
        v16 = *(_QWORD *)(v1 + 40);
        *(_QWORD *)v14 = 0LL;
        *(_WORD *)(v14 + 10) = 0;
        *(_DWORD *)(v14 + 40) = v15;
        *(_QWORD *)(v14 + 32) = v16 & 0xFFFFFFFFFFFFF000uLL;
        *(_WORD *)(v14 + 8) = 8 * ((((unsigned __int64)(v16 & 0xFFF) + v15 + 4095) >> 12) + 6);
        *(_DWORD *)(v14 + 44) = v16 & 0xFFF;
        goto LABEL_11;
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v13 = 40;
        goto LABEL_26;
      }
      return (unsigned int)-1073741670;
    }
  }
  else
  {
    switch ( *(_WORD *)(v1 + 2) )
    {
      case '9':
      case ':':
        return v2;
      default:
        goto LABEL_2;
    }
  }
  return v2;
}
