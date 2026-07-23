/*
 * XREFs of PnpRecordBlackboxPnpEventInformation @ 0x1409BBCEC
 * Callers:
 *     PnpProcessQueryRemoveAndEject @ 0x1409BBF7C (PnpProcessQueryRemoveAndEject.c)
 * Callees:
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     PiGetTargetDeviceNode @ 0x1409BBE78 (PiGetTargetDeviceNode.c)
 *     NtPowerInformation @ 0x1409EDB00 (NtPowerInformation.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall PnpRecordBlackboxPnpEventInformation(__int64 a1, int a2, __int64 a3, char a4)
{
  int v5; // r14d
  const void **v6; // rsi
  __int64 v7; // rbx
  __int64 v8; // r8
  char v9; // r9
  __int64 TargetDeviceNode; // r15
  unsigned int v11; // ebp
  int v12; // eax
  __int64 Pool2; // rax
  _DWORD *v14; // rdi
  __int128 v15; // xmm0
  _QWORD InputBuffer[3]; // [rsp+30h] [rbp-58h] BYREF
  int v17; // [rsp+48h] [rbp-40h]
  int v18; // [rsp+4Ch] [rbp-3Ch]

  v5 = 0;
  v6 = 0LL;
  v7 = MEMORY[0xFFFFF78000000014];
  TargetDeviceNode = PiGetTargetDeviceNode();
  v11 = *(unsigned __int16 *)(TargetDeviceNode + 40) + 50;
  if ( a3 )
  {
    v6 = (const void **)(a3 + 8);
    if ( !v9 && a3 != -8 )
    {
      v12 = *(unsigned __int16 *)v6;
      if ( (_WORD)v12 )
      {
        if ( *(_QWORD *)(a3 + 16) != v8 )
          v5 = v12 + 2;
      }
    }
  }
  Pool2 = ExAllocatePool2(0x40uLL, v5 + v11, 0x4B706E50u);
  v14 = (_DWORD *)Pool2;
  if ( Pool2 )
  {
    InputBuffer[2] = 0LL;
    v18 = 0;
    v15 = *(_OWORD *)(a1 + 88);
    *(_QWORD *)(Pool2 + 16) = v7;
    *(_OWORD *)Pool2 = v15;
    *(_DWORD *)(Pool2 + 32) = *(_DWORD *)(a1 + 16);
    *(_DWORD *)(Pool2 + 24) = a2;
    *(_BYTE *)(Pool2 + 28) = a4;
    memmove((void *)(Pool2 + 44), *(const void **)(TargetDeviceNode + 48), *(unsigned __int16 *)(TargetDeviceNode + 40));
    *((_WORD *)v14 + ((unsigned __int64)*(unsigned __int16 *)(TargetDeviceNode + 40) >> 1) + 22) = 0;
    if ( v5 )
    {
      v14[9] = *(_DWORD *)a3;
      v14[10] = v11;
      memmove((char *)v14 + v11, v6[1], *(unsigned __int16 *)v6);
      *(_WORD *)((char *)v14 + 2 * ((unsigned __int64)*(unsigned __int16 *)v6 >> 1) + v11) = 0;
    }
    v17 = 2;
    InputBuffer[0] = v14;
    InputBuffer[1] = v5 + v11;
    NtPowerInformation(UpdateBlackBoxRecorder, InputBuffer, 0x20u, 0LL, 0);
    ExFreePoolWithTag(v14, 0x4B706E50u);
  }
}
