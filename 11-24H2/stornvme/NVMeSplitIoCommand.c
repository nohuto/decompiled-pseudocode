/*
 * XREFs of NVMeSplitIoCommand @ 0x140024CD0
 * Callers:
 *     ScsiToNVMe @ 0x140002940 (ScsiToNVMe.c)
 *     ProcessCommandNvmePacket @ 0x14002C8E8 (ProcessCommandNvmePacket.c)
 * Callees:
 *     Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledNoReportingNoInline @ 0x140017828 (Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledNoReportingNoInline.c)
 */

__int64 __fastcall NVMeSplitIoCommand(_DWORD *a1, __int64 a2)
{
  char v3; // cl
  __int64 v4; // rbx
  unsigned int v5; // eax
  bool v6; // r10
  unsigned __int8 v7; // cl
  __int64 v8; // rdi
  __int64 v9; // r9
  __int64 v10; // rcx
  unsigned int v11; // r11d
  unsigned int v12; // eax
  int v13; // eax
  unsigned int v14; // r8d
  __int64 v15; // rax
  __int64 v16; // rdi
  int v17; // r8d
  __int64 v18; // rsi
  unsigned __int64 v19; // rdi
  __int64 v20; // rcx
  unsigned __int64 v21; // rax

  v3 = *(_BYTE *)(a2 + 2);
  if ( v3 == 40 )
    v4 = *(_QWORD *)(a2 + 104);
  else
    v4 = *(_QWORD *)(a2 + 56);
  if ( (v4 & 0xFFF) != 0 )
    v4 = v4 - (v4 & 0xFFF) + 4096;
  v6 = 0;
  if ( (a1[14] & 0x2000000) != 0 && (a1[1016] & 0x10000) != 0 )
  {
    v5 = *(_DWORD *)(v4 + 4220);
    if ( v5 > 3 && (v5 & 1) == 0 )
      v6 = 1;
  }
  if ( (*(_BYTE *)(v4 + 4225) & 2) != 0 )
  {
    if ( v3 == 40 )
      v7 = *(_BYTE *)(*(unsigned int *)(a2 + 52) + a2 + 10);
    else
      v7 = *(_BYTE *)(a2 + 7);
    v8 = *(unsigned int *)(v4 + 4140);
    v9 = *(_QWORD *)&a1[2 * v7 + 418];
    v10 = *(unsigned int *)(v4 + 4136);
    v11 = *(_DWORD *)(v9 + 52);
    if ( v6 )
    {
      v12 = 4096;
    }
    else
    {
      v13 = *(unsigned __int16 *)(v9 + 92);
      if ( (_WORD)v13 )
      {
LABEL_21:
        ++*(_DWORD *)(v9 + 36);
        v14 = v13;
        v15 = v10 | (v8 << 32);
        v16 = (*(_DWORD *)(v4 + 4120) & 0xFFF) + 4095LL;
        v17 = v14 - v15 % v14;
        *(_WORD *)(v4 + 4144) = v17 - 1;
        v18 = v11 * v17;
        v19 = (unsigned __int64)(v18 + v16) >> 12;
        if ( (unsigned int)Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledNoReportingNoInline() )
        {
          v20 = *(_QWORD *)(v4 + 4120);
          v21 = (v18 + (unsigned __int64)(v20 & 0xFFF)) >> 12;
          if ( (_DWORD)v21 )
          {
            if ( *(_DWORD *)(v4 + 4220) <= 2u )
              v20 = *(_QWORD *)(v4 + 4128);
            else
              v20 = *(_QWORD *)(v4 + 8LL * (unsigned int)(v21 - 1));
          }
          *(_QWORD *)(v4 + 4184) = v20;
          *(_DWORD *)(v4 + 4220) = v19;
        }
        if ( (_DWORD)v19 == 1 )
        {
          *(_QWORD *)(v4 + 4128) = 0LL;
        }
        else if ( (_DWORD)v19 == 2 )
        {
          *(_QWORD *)(v4 + 4128) = *(_QWORD *)v4;
        }
        *(_QWORD *)(v4 + 4192) = NVMeSplitIoCommandCompletion;
        return 0LL;
      }
      v12 = a1[13];
    }
    v13 = v12 / v11;
    goto LABEL_21;
  }
  return 0LL;
}
