/*
 * XREFs of NvmeValidateProtocolCommandIoctl @ 0x140088828
 * Callers:
 *     NvmeAdapterStorageProtocolCommandIoctl @ 0x14019CCFC (NvmeAdapterStorageProtocolCommandIoctl.c)
 *     NvmeNamespaceStorageProtocolCommandIoctl @ 0x1401AA82C (NvmeNamespaceStorageProtocolCommandIoctl.c)
 * Callees:
 *     StorEtwNvmeControllerEvent @ 0x1400A9028 (StorEtwNvmeControllerEvent.c)
 */

__int64 __fastcall NvmeValidateProtocolCommandIoctl(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  unsigned int v3; // r9d
  __int64 v4; // rbx
  unsigned __int64 v6; // rax
  int v7; // r14d
  unsigned __int64 v8; // r8
  __int64 v9; // r10
  unsigned __int64 v10; // rdx
  __int64 v11; // rdx
  unsigned __int64 v12; // rcx
  __int64 v13; // r8
  unsigned __int64 v14; // rbp
  __int64 v15; // rax
  __int64 v16; // rcx
  unsigned __int64 v17; // rbp
  __int64 v18; // rax
  __int64 v19; // rcx
  unsigned __int64 v20; // rbp
  __int64 v21; // rcx
  __int64 v22; // r8
  unsigned __int64 v23; // rdx
  int v24; // edx
  unsigned __int64 v25; // rax
  int v26; // ecx
  char v27; // al

  v2 = *(_QWORD *)(a2 + 184);
  v3 = 0;
  v4 = *(_QWORD *)(a2 + 24);
  v6 = *(unsigned int *)(v2 + 16);
  if ( (unsigned int)v6 >= 0x54 )
  {
    if ( *(_QWORD *)v4 != 0x5400000001LL || *(_DWORD *)(v4 + 8) != 3 || (v7 = *(_DWORD *)(v4 + 24), v7 != 64) )
    {
      if ( a1 )
        StorEtwNvmeControllerEvent(
          a1,
          0,
          2,
          (unsigned int)L"Invalid protocol command version or type. Only NVMe protocol commands are supported at this time.",
          (__int64)L"Version",
          *(_DWORD *)v4,
          (__int64)L"Length",
          *(_DWORD *)(v4 + 4),
          (__int64)L"ProtocolType",
          *(_DWORD *)(v4 + 8),
          (__int64)L"CommandLength",
          *(_DWORD *)(v4 + 24),
          (__int64)&word_140150F48,
          0,
          (__int64)&word_140150F48,
          0,
          (__int64)&word_140150F48,
          0,
          (__int64)&word_140150F48,
          0);
      goto LABEL_71;
    }
    v8 = *(unsigned int *)(v2 + 16);
    if ( v6 < 0x90 )
    {
      if ( a1 )
        StorEtwNvmeControllerEvent(
          a1,
          0,
          2,
          (unsigned int)L"Invalid protocol command. Not enough input buffer for an NVMe protocol command.",
          (__int64)L"InputLength",
          v6,
          (__int64)L"CommandLength",
          64,
          (__int64)&word_140150F48,
          0,
          (__int64)&word_140150F48,
          0,
          (__int64)&word_140150F48,
          0,
          (__int64)&word_140150F48,
          0,
          (__int64)&word_140150F48,
          0,
          (__int64)&word_140150F48,
          0);
      v3 = -1073741820;
      goto LABEL_72;
    }
    v9 = *(unsigned int *)(v4 + 28);
    if ( (_DWORD)v9 )
    {
      v10 = *(unsigned int *)(v4 + 44);
      if ( v10 < 0x90 || (v10 & 7) != 0 || *(unsigned int *)(v2 + 8) < v10 + v9 )
      {
        if ( a1 )
          StorEtwNvmeControllerEvent(
            a1,
            0,
            2,
            (unsigned int)L"Invalid protocol command. ErrorInfo buffer formatting is invalid.",
            (__int64)L"ErrorInfoOffset",
            v10,
            (__int64)L"ErrorInfoLength",
            *(_DWORD *)(v4 + 28),
            (__int64)L"CommandLength",
            64,
            (__int64)L"OutputLength",
            *(_DWORD *)(v2 + 8),
            (__int64)&word_140150F48,
            0,
            (__int64)&word_140150F48,
            0,
            (__int64)&word_140150F48,
            0,
            (__int64)&word_140150F48,
            0);
LABEL_71:
        v3 = -1073741811;
LABEL_72:
        *(_DWORD *)(v4 + 16) = 3;
        return v3;
      }
    }
    v11 = *(unsigned int *)(v4 + 32);
    if ( (_DWORD)v11 )
    {
      v12 = *(unsigned int *)(v4 + 48);
      if ( v12 < 0x90 || (v12 & 7) != 0 || v8 < v12 + v11 )
      {
        if ( a1 )
          StorEtwNvmeControllerEvent(
            a1,
            0,
            2,
            (unsigned int)L"Invalid protocol command. DataToDeviceTransfer buffer formatting is invalid (1).",
            (__int64)L"DataToDeviceTransferLength",
            v11,
            (__int64)L"DataToDeviceBufferOffset",
            v12,
            (__int64)L"CommandLength",
            64,
            (__int64)L"InputLength",
            v8,
            (__int64)&word_140150F48,
            0,
            (__int64)&word_140150F48,
            0,
            (__int64)&word_140150F48,
            0,
            (__int64)&word_140150F48,
            0);
        goto LABEL_71;
      }
    }
    v13 = *(unsigned int *)(v4 + 36);
    if ( (_DWORD)v13 )
    {
      v14 = *(unsigned int *)(v4 + 52);
      if ( v14 < 0x90 || (v14 & 7) != 0 || *(unsigned int *)(v2 + 8) < v13 + v14 )
      {
        if ( a1 )
          StorEtwNvmeControllerEvent(
            a1,
            0,
            2,
            (unsigned int)L"Invalid protocol command. DataFromDeviceTransfer buffer formatting is invalid (1).",
            (__int64)L"DataFromDeviceTransferLength",
            v13,
            (__int64)L"DataFromDeviceBufferOffset",
            v14,
            (__int64)L"CommandLength",
            v7,
            (__int64)L"OutputLength",
            *(_DWORD *)(v2 + 8),
            (__int64)&word_140150F48,
            0,
            (__int64)&word_140150F48,
            0,
            (__int64)&word_140150F48,
            0,
            (__int64)&word_140150F48,
            0);
        goto LABEL_71;
      }
    }
    if ( (_DWORD)v11 )
    {
      v15 = *(unsigned int *)(v4 + 28);
      if ( (_DWORD)v15 )
      {
        v16 = *(unsigned int *)(v4 + 44);
        v17 = *(unsigned int *)(v4 + 48);
        if ( v17 < v16 + v15 )
        {
          if ( a1 )
            StorEtwNvmeControllerEvent(
              a1,
              0,
              2,
              (unsigned int)L"Invalid protocol command. DataToDeviceTransfer buffer formatting is invalid (2).",
              (__int64)L"DataToDeviceTransferLength",
              v11,
              (__int64)L"DataToDeviceBufferOffset",
              v17,
              (__int64)L"ErrorInfoLength",
              *(_DWORD *)(v4 + 28),
              (__int64)L"ErrorInfoOffset",
              v16,
              (__int64)&word_140150F48,
              0,
              (__int64)&word_140150F48,
              0,
              (__int64)&word_140150F48,
              0,
              (__int64)&word_140150F48,
              0);
          goto LABEL_71;
        }
      }
    }
    if ( (_DWORD)v13 )
    {
      v18 = *(unsigned int *)(v4 + 28);
      if ( (_DWORD)v18 )
      {
        v19 = *(unsigned int *)(v4 + 44);
        v20 = *(unsigned int *)(v4 + 52);
        if ( v20 < v19 + v18 )
        {
          if ( a1 )
            StorEtwNvmeControllerEvent(
              a1,
              0,
              2,
              (unsigned int)L"Invalid protocol command. DataFromDeviceTransfer buffer formatting is invalid (2).",
              (__int64)L"DataFromDeviceTransferLength",
              v13,
              (__int64)L"DataFromDeviceBufferOffset",
              v20,
              (__int64)L"ErrorInfoLength",
              *(_DWORD *)(v4 + 28),
              (__int64)L"ErrorInfoOffset",
              v19,
              (__int64)&word_140150F48,
              0,
              (__int64)&word_140150F48,
              0,
              (__int64)&word_140150F48,
              0,
              (__int64)&word_140150F48,
              0);
          goto LABEL_71;
        }
      }
      if ( (_DWORD)v11 )
      {
        v21 = *(unsigned int *)(v4 + 48);
        v22 = *(unsigned int *)(v4 + 32);
        v23 = *(unsigned int *)(v4 + 52);
        if ( v23 < v21 + v22 )
        {
          if ( a1 )
            StorEtwNvmeControllerEvent(
              a1,
              0,
              2,
              (unsigned int)L"Invalid protocol command. DataToDeviceTransfer buffer formatting is invalid (3).",
              (__int64)L"DataToDeviceTransferLength",
              v22,
              (__int64)L"DataToDeviceBufferOffset",
              v21,
              (__int64)L"DataFromDeviceBufferOffset",
              v23,
              (__int64)&word_140150F48,
              0,
              (__int64)&word_140150F48,
              0,
              (__int64)&word_140150F48,
              0,
              (__int64)&word_140150F48,
              0,
              (__int64)&word_140150F48,
              0);
          goto LABEL_71;
        }
      }
    }
    if ( *(_DWORD *)(v4 + 8) != 3 )
      return v3;
    v24 = *(_DWORD *)(v4 + 56);
    if ( v24 == 1 )
    {
      if ( (unsigned __int8)*(_DWORD *)(v4 + 80) == 2 )
      {
        v25 = *(unsigned int *)(v4 + 36);
        if ( 4 * (*(unsigned __int16 *)(v4 + 122) | (unsigned __int64)(unsigned int)(*(_DWORD *)(v4 + 124) << 16)) + 4 > v25 )
        {
          if ( a1 )
            StorEtwNvmeControllerEvent(
              a1,
              0,
              2,
              (unsigned int)L"Invalid protocol command. NVMe command specifies transfer size bigger than supplied buffer.",
              (__int64)L"DataFromDeviceTransferLength",
              v25,
              (__int64)L"RequestedTransferLength",
              4 * *(_WORD *)(v4 + 122) + 4,
              (__int64)&word_140150F48,
              0,
              (__int64)&word_140150F48,
              0,
              (__int64)&word_140150F48,
              0,
              (__int64)&word_140150F48,
              0,
              (__int64)&word_140150F48,
              0,
              (__int64)&word_140150F48,
              0);
          goto LABEL_71;
        }
      }
    }
    else if ( v24 != 2 )
    {
      if ( a1 )
        StorEtwNvmeControllerEvent(
          a1,
          0,
          2,
          (unsigned int)L"Invalid protocol command. Only Admin and NVM protocol commands are supported.",
          (__int64)L"CommandSpecific",
          v24,
          (__int64)&word_140150F48,
          0,
          (__int64)&word_140150F48,
          0,
          (__int64)&word_140150F48,
          0,
          (__int64)&word_140150F48,
          0,
          (__int64)&word_140150F48,
          0,
          (__int64)&word_140150F48,
          0,
          (__int64)&word_140150F48,
          0);
      goto LABEL_71;
    }
    if ( g_InWinPE )
      return v3;
    if ( v24 == 1 )
    {
      v26 = *(_DWORD *)(v4 + 80);
      if ( (unsigned __int8)v26 >= 0xC0u )
        return v3;
    }
    else
    {
      v26 = *(_DWORD *)(v4 + 80);
      if ( (unsigned __int8)v26 >= 0x80u )
        return v3;
    }
    if ( (unsigned __int8)v26 != 2 )
    {
      if ( (unsigned __int8)v26 == 4 )
      {
        v27 = StorageTestFlags & 1;
LABEL_64:
        if ( v27 )
          return v3;
        goto LABEL_65;
      }
      if ( (unsigned __int8)v26 != 20 )
      {
LABEL_65:
        if ( a1 )
          StorEtwNvmeControllerEvent(
            a1,
            0,
            2,
            (unsigned int)L"Invalid protocol command. This protocol command is disallowed outside of WinPE environment.",
            (__int64)L"Opcode",
            *(_DWORD *)(v4 + 80),
            (__int64)&word_140150F48,
            0,
            (__int64)&word_140150F48,
            0,
            (__int64)&word_140150F48,
            0,
            (__int64)&word_140150F48,
            0,
            (__int64)&word_140150F48,
            0,
            (__int64)&word_140150F48,
            0,
            (__int64)&word_140150F48,
            0);
        v3 = -1056964602;
        goto LABEL_72;
      }
    }
    v27 = 1;
    goto LABEL_64;
  }
  if ( a1 )
    StorEtwNvmeControllerEvent(
      a1,
      0,
      2,
      (unsigned int)L"Invalid protocol command. Not enough input buffer to contain STORAGE_PROTOCOL_COMMAND.",
      (__int64)L"InputLength",
      v6,
      (__int64)L"MinimumLength",
      84,
      (__int64)&word_140150F48,
      0,
      (__int64)&word_140150F48,
      0,
      (__int64)&word_140150F48,
      0,
      (__int64)&word_140150F48,
      0,
      (__int64)&word_140150F48,
      0,
      (__int64)&word_140150F48,
      0);
  if ( *(_DWORD *)(v2 + 16) >= 0x14u )
    *(_DWORD *)(v4 + 16) = 3;
  return (unsigned int)-1073741820;
}
