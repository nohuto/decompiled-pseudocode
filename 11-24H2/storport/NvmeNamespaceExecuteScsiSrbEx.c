/*
 * XREFs of NvmeNamespaceExecuteScsiSrbEx @ 0x140100A80
 * Callers:
 *     NvmeNamespaceScsiIrp @ 0x14010D8B8 (NvmeNamespaceScsiIrp.c)
 * Callees:
 *     RaidNtStatusToSrbStatus @ 0x1400059F0 (RaidNtStatusToSrbStatus.c)
 *     RaidSrbStatusToNtStatus @ 0x14001EF94 (RaidSrbStatusToNtStatus.c)
 *     NvmeAdapterMapBuffers @ 0x1400D3F6C (NvmeAdapterMapBuffers.c)
 *     NvmeFreeDmaBuffer @ 0x1400F8B80 (NvmeFreeDmaBuffer.c)
 *     ScsiToNVMeCommand @ 0x140116554 (ScsiToNVMeCommand.c)
 *     ScsiToNVMeCommand2 @ 0x140116A7C (ScsiToNVMeCommand2.c)
 *     SetSrbSenseData @ 0x140117490 (SetSrbSenseData.c)
 *     NvmeNamespaceScsiReadCapacityRequest @ 0x1401186DC (NvmeNamespaceScsiReadCapacityRequest.c)
 *     NvmeControllerGetExtendedCommand @ 0x14012949C (NvmeControllerGetExtendedCommand.c)
 *     NvmeControllerProcessCommand @ 0x140129520 (NvmeControllerProcessCommand.c)
 *     NvmeControllerReclaimExtendedCommand @ 0x140129B08 (NvmeControllerReclaimExtendedCommand.c)
 */

__int64 __fastcall NvmeNamespaceExecuteScsiSrbEx(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  __int64 v3; // r15
  __int64 v4; // rbx
  __int64 v6; // rdi
  _BYTE *v7; // rsi
  char v8; // r14
  unsigned int v9; // r11d
  unsigned int i; // r9d
  _BYTE *v11; // r10
  __int64 v12; // rcx
  int v13; // ecx
  int v14; // ecx
  char v15; // r14
  unsigned int v16; // r11d
  unsigned int j; // r10d
  __int64 v18; // rcx
  unsigned __int64 v19; // r9
  int v20; // ecx
  int v21; // ecx
  char v22; // cl
  unsigned int v23; // esi
  int CapacityRequest; // eax
  __int64 v25; // r8
  char v26; // r9
  __int64 ExtendedCommand; // rax
  int v28; // ecx
  char v29; // cl
  __int64 v30; // rdx
  unsigned int v31; // ecx
  __int64 v32; // rax
  __int64 v33; // rax
  unsigned int v34; // edx
  __int64 v35; // r9

  v3 = a3;
  v4 = a2;
  v6 = 0LL;
  if ( *(_BYTE *)(a2 + 2) != 40 )
  {
    v7 = (_BYTE *)(a2 + 72);
    LOBYTE(a2) = *(_BYTE *)(a2 + 10);
    goto LABEL_39;
  }
  v7 = 0LL;
  v8 = 0;
  if ( !*(_DWORD *)(a2 + 20) )
  {
    v9 = *(_DWORD *)(a2 + 56);
    for ( i = 0; i < v9; ++i )
    {
      v11 = v7;
      v12 = *(unsigned int *)(v4 + 4LL * i + 120);
      if ( (unsigned int)v12 >= 0x80 )
      {
        a3 = *(unsigned int *)(v4 + 16);
        if ( (unsigned int)v12 < (unsigned int)a3 )
        {
          a2 = (unsigned int)v12;
          v13 = *(_DWORD *)(v12 + v4) - 64;
          if ( v13 )
          {
            v14 = v13 - 1;
            if ( v14 )
            {
              if ( v14 == 1 && a2 + 40 <= a3 )
              {
                v7 = (_BYTE *)(a2 + v4 + 32);
                if ( !*(_DWORD *)(a2 + v4 + 12) )
                  v7 = v11;
                break;
              }
            }
            else if ( a2 + 56 <= a3 )
            {
              v8 = 1;
              if ( !*(_BYTE *)(a2 + v4 + 10) )
                break;
              v7 = (_BYTE *)(a2 + v4 + 24);
            }
          }
          else if ( a2 + 40 <= a3 )
          {
            if ( *(_BYTE *)(a2 + v4 + 10) )
              v7 = (_BYTE *)(a2 + v4 + 24);
            break;
          }
          if ( v8 )
            break;
        }
      }
    }
  }
  v15 = 0;
  LOBYTE(a2) = 0;
  if ( !*(_DWORD *)(v4 + 20) )
  {
    v16 = *(_DWORD *)(v4 + 56);
    for ( j = 0; j < v16; ++j )
    {
      v18 = *(unsigned int *)(v4 + 4LL * j + 120);
      if ( (unsigned int)v18 >= 0x80 )
      {
        v19 = *(unsigned int *)(v4 + 16);
        if ( (unsigned int)v18 < (unsigned int)v19 )
        {
          a3 = (unsigned int)v18;
          v20 = *(_DWORD *)(v18 + v4) - 64;
          if ( v20 )
          {
            v21 = v20 - 1;
            if ( v21 )
            {
              if ( v21 == 1 && a3 + 40 <= v19 )
                break;
            }
            else if ( a3 + 56 <= v19 )
            {
              LOBYTE(a2) = *(_BYTE *)(a3 + v4 + 10);
              v15 = 1;
            }
          }
          else if ( a3 + 40 <= v19 )
          {
            LOBYTE(a2) = *(_BYTE *)(a3 + v4 + 10);
            break;
          }
          if ( v15 )
            break;
        }
      }
    }
  }
LABEL_39:
  if ( v7 && (unsigned __int8)a2 >= 6u )
  {
    v22 = *v7;
    if ( *v7 == 0xA2 || v22 == -75 )
      goto LABEL_51;
    if ( (*(_BYTE *)(a1 + 112) & 2) != 0 && *(_DWORD *)(a1 + 64) )
    {
      if ( v22 == -96 )
      {
        LOBYTE(a3) = 5;
        LOBYTE(a2) = 6;
        SetSrbSenseData(v4, a2, a3, 32, 0);
        *(_QWORD *)(v3 + 56) = 0LL;
        return (unsigned int)-1073741808;
      }
      if ( v22 == 37 || v22 == -98 )
      {
        CapacityRequest = NvmeNamespaceScsiReadCapacityRequest(a1, a2, v4, v7);
        goto LABEL_72;
      }
LABEL_51:
      ExtendedCommand = NvmeControllerGetExtendedCommand(*(_QWORD *)(a1 + 16));
      v6 = ExtendedCommand;
      if ( !ExtendedCommand )
      {
        v23 = -1073741670;
        *(_BYTE *)(v4 + 3) = RaidNtStatusToSrbStatus(-1073741670);
        return v23;
      }
      if ( FeatureFixTRIMAddSCSIPassthrough )
        ScsiToNVMeCommand2(a1, v4, v3, ExtendedCommand);
      else
        ScsiToNVMeCommand(a1, v4, v3, ExtendedCommand);
      v29 = *(_BYTE *)(v4 + 3);
      if ( (v29 & 0x3F) != 0 )
      {
        v23 = RaidSrbStatusToNtStatus(v29);
        if ( (v23 & 0x80000000) == 0 )
          goto LABEL_78;
        goto LABEL_73;
      }
      if ( !FeatureFixTRIMAddSCSIPassthrough )
      {
        LOBYTE(v28) = *v7;
        if ( (unsigned __int8)(*v7 - 53) <= 0x2Au && (v30 = 0x60000002001LL, _bittest64(&v30, (unsigned int)(v28 - 53)))
          || (_BYTE)v28 == 0x91 )
        {
          v31 = *(_DWORD *)(*(_QWORD *)v6 + 4256LL) & 0xFFFFFFFE;
        }
        else
        {
          v31 = *(_DWORD *)(*(_QWORD *)v6 + 4256LL) | 1;
        }
        *(_DWORD *)(*(_QWORD *)v6 + 4256LL) = v31;
      }
      *(_DWORD *)(*(_QWORD *)v6 + 4256LL) |= 0x20u;
      *(_QWORD *)(*(_QWORD *)v6 + 4184LL) = v3;
      v32 = *(_QWORD *)v6;
      if ( FeatureFixTRIMAddSCSIPassthrough )
      {
        if ( !*(_QWORD *)(v32 + 4192) )
        {
          *(_QWORD *)(v32 + 4192) = NvmeNamespaceExecuteScsiSrbExComplete;
          *(_QWORD *)(*(_QWORD *)v6 + 4200LL) = v6;
        }
        *(_QWORD *)(*(_QWORD *)v6 + 4216LL) = a1;
      }
      else
      {
        *(_QWORD *)(v32 + 4192) = NvmeNamespaceExecuteScsiSrbComplete;
        *(_QWORD *)(*(_QWORD *)v6 + 4200LL) = v6;
        *(_QWORD *)(*(_QWORD *)v6 + 4216LL) = a1;
        NvmeAdapterMapBuffers(*(_DWORD **)(*(_QWORD *)(a1 + 16) + 128LL), v3);
      }
      CapacityRequest = NvmeControllerProcessCommand(*(_QWORD *)(a1 + 16), v6);
LABEL_72:
      v23 = CapacityRequest;
      if ( CapacityRequest >= 0 )
        return v23;
LABEL_73:
      if ( !v6 )
        return v23;
      if ( FeatureFixTRIMAddSCSIPassthrough )
      {
        v33 = *(_QWORD *)v6;
        v34 = *(_DWORD *)(*(_QWORD *)v6 + 4248LL);
        if ( v34 )
        {
          v35 = *(_QWORD *)(v33 + 4160);
          if ( v35 )
            NvmeFreeDmaBuffer(*(_QWORD *)(a1 + 16), v34, v25, v35, *(_QWORD *)(v33 + 4168));
        }
      }
LABEL_78:
      _interlockedbittestandreset((volatile signed __int32 *)(*(_QWORD *)v6 + 4256LL), 3u);
      NvmeControllerReclaimExtendedCommand(*(_QWORD *)(a1 + 16), v6);
      return v23;
    }
    v26 = 37;
    LOBYTE(a2) = 8;
  }
  else
  {
    v26 = 32;
    LOBYTE(a2) = 6;
  }
  LOBYTE(a3) = 5;
  SetSrbSenseData(v4, a2, a3, v26, 0);
  return 3221225488LL;
}
