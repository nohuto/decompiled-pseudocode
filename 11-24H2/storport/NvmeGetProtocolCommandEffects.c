/*
 * XREFs of NvmeGetProtocolCommandEffects @ 0x1400881D0
 * Callers:
 *     NvmeAdapterStorageProtocolCommandIoctl @ 0x14019CCFC (NvmeAdapterStorageProtocolCommandIoctl.c)
 *     NvmeNamespaceStorageProtocolCommandIoctl @ 0x1401AA82C (NvmeNamespaceStorageProtocolCommandIoctl.c)
 * Callees:
 *     StorEtwNvmeControllerEvent @ 0x1400A9028 (StorEtwNvmeControllerEvent.c)
 */

__int64 __fastcall NvmeGetProtocolCommandEffects(__int64 a1, __int64 a2, _BYTE *a3, _BYTE *a4)
{
  _DWORD *v4; // rbx
  unsigned int v5; // r10d
  int v7; // r11d
  int v8; // eax
  int v9; // edx
  bool v10; // cf
  __int64 v11; // rcx
  __int64 v12; // r9
  int *v13; // rcx
  int v14; // ecx

  v4 = *(_DWORD **)(a2 + 24);
  v5 = 0;
  *a3 = 0;
  *a4 = 0;
  v7 = a1;
  if ( !a1 )
    return (unsigned int)-1056964602;
  v8 = v4[2];
  if ( v8 != 3 )
  {
    StorEtwNvmeControllerEvent(
      a1,
      0,
      2,
      (unsigned int)L"Invalid protocol command. Only ProtocolTypeNvme is supported at this time.",
      (__int64)L"ProtocolType",
      v8,
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
    return (unsigned int)-1056964602;
  }
  v9 = v4[14];
  if ( v9 == 1 )
  {
    v10 = (unsigned __int8)v4[20] < 0xC0u;
    goto LABEL_9;
  }
  if ( v9 == 2 )
  {
    v10 = (unsigned __int8)v4[20] < 0x80u;
LABEL_9:
    if ( v10 )
      return v5;
  }
  v11 = *(_QWORD *)(a1 + 1232);
  if ( v11 )
  {
    v12 = (unsigned __int8)v4[20];
    v13 = (int *)(v11 + 4 * v12);
    if ( v9 != 1 )
      v13 += 256;
    v14 = *v13;
    if ( (v14 & 1) != 0 )
    {
      if ( (v14 & 0x18) != 0 || (v14 & 0x70000) == 0x20000 )
      {
        *a3 = 1;
      }
      else if ( (v14 & 4) != 0 || (v14 & 0x70000) == 0x10000 )
      {
        *a4 = 1;
      }
    }
    else
    {
      StorEtwNvmeControllerEvent(
        v7,
        0,
        2,
        (unsigned int)L"Invalid protocol command. Command Effects Log indicates command is not supported.",
        (__int64)L"Opcode",
        v12,
        (__int64)L"CommandSpecific",
        v9,
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
      v5 = -1073741808;
      v4[4] = 3;
    }
  }
  else
  {
    StorEtwNvmeControllerEvent(
      v7,
      0,
      2,
      (unsigned int)L"Invalid protocol command. Command Effects Log not found, failing request.",
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
      0,
      (__int64)&word_140150F48,
      0);
    return (unsigned int)-1073741595;
  }
  return v5;
}
