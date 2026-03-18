/*
 * XREFs of MiMakeVaRangeNoAccess @ 0x140498B94
 * Callers:
 *     MiProtectPrivateMemory @ 0x140237480 (MiProtectPrivateMemory.c)
 * Callees:
 *     MiRewritePteWithLockBit @ 0x14020CBCC (MiRewritePteWithLockBit.c)
 *     MiInitializeTbFlushList @ 0x140233BB0 (MiInitializeTbFlushList.c)
 *     MiUpdatePfnProtection @ 0x140238918 (MiUpdatePfnProtection.c)
 *     MiRotatedToFrameBuffer @ 0x140238E74 (MiRotatedToFrameBuffer.c)
 *     MiInsertTbFlushEntry @ 0x1402432E0 (MiInsertTbFlushEntry.c)
 *     MiFreeWsleList @ 0x140287894 (MiFreeWsleList.c)
 *     MiUnlockVa @ 0x1402C7B34 (MiUnlockVa.c)
 *     MiGetLeafVa @ 0x1402DEE20 (MiGetLeafVa.c)
 *     MiGetWsleContents @ 0x1402E5390 (MiGetWsleContents.c)
 *     MiMakeTransitionPte @ 0x1402E67B0 (MiMakeTransitionPte.c)
 *     MiInsertLargeTbFlushEntry @ 0x1403A4A2C (MiInsertLargeTbFlushEntry.c)
 *     MiCaptureWriteWatchDirtyBit @ 0x1404F31F8 (MiCaptureWriteWatchDirtyBit.c)
 */

__int64 __fastcall MiMakeVaRangeNoAccess(__int64 a1, ULONG_PTR *a2, unsigned __int64 a3, __int64 a4, _DWORD *a5)
{
  unsigned __int64 v6; // rdx
  struct _LIST_ENTRY **p_Blink; // r14
  ULONG_PTR v9; // rsi
  char v10; // r12
  __int64 v11; // r11
  unsigned __int64 v12; // rbp
  volatile unsigned __int64 v13; // rbx
  __int64 v15; // rax
  __int64 v16; // r8
  unsigned __int64 v17; // r13
  unsigned int v18; // ecx
  unsigned int v19; // ebx
  __int64 v20; // rsi
  BOOL v21; // ebp
  unsigned __int64 i; // r15
  unsigned __int64 LeafVa; // rax
  ULONG_PTR TransitionPte; // rax
  BOOL v25; // [rsp+30h] [rbp-48h]
  __int64 v26; // [rsp+38h] [rbp-40h]

  v6 = *(unsigned int *)(a1 + 48);
  p_Blink = &KeGetCurrentThread()->ApcState.Process[2].ReadyListHead.Blink;
  if ( (v6 & 0xA00000) != 0xA00000 || (v15 = (v6 >> 19) & 3, v16 = MiVadPageSizes[v15], v16 == 1) )
  {
    v9 = a4 + 4136;
    v10 = 0;
    MiInitializeTbFlushList(a4 + 4136, (__int64)p_Blink, *(_DWORD *)(a4 + 4148), 2, 1);
    v12 = (__int64)((_QWORD)a2 << 25) >> 16;
    if ( ((unsigned __int64)a2 & 0xFFFFFFFFFFFFF000uLL) != (a3 & 0xFFFFFFFFFFFFF000uLL) )
      a3 = ((unsigned __int64)a2 & 0xFFFFFFFFFFFFF000uLL) + 4088;
    if ( (unsigned __int64)a2 > a3 )
    {
LABEL_6:
      if ( *(_DWORD *)(v9 + 28) )
        MiFreeWsleList((__int64)p_Blink, v9, 0);
      return 0LL;
    }
    while ( 1 )
    {
      v13 = *a2;
      if ( (*a2 & 1) == 0
        || (*(_DWORD *)(v11 + 48) & 0x70) == 0x40 && (unsigned int)MiRotatedToFrameBuffer((unsigned __int64)a2)
        || *(__int64 *)(48 * ((v13 >> 12) & 0xFFFFFFFFFFLL) - 0x21FFFFFFFFD8LL) < 0 )
      {
        goto LABEL_6;
      }
      if ( (MiGetWsleContents(0xFFFFDE0000000028uLL, v12) & 0xF) == 8 )
        break;
      MiInsertTbFlushEntry(v9, v12, 1LL, 0);
      if ( *(_DWORD *)(v9 + 28) == *(_DWORD *)(v9 + 12) )
        goto LABEL_18;
LABEL_13:
      v11 = a1;
      v12 += 4096LL;
      if ( (unsigned __int64)++a2 > a3 )
        goto LABEL_6;
    }
    v10 = 1;
    *a5 = 1;
LABEL_18:
    if ( *(_DWORD *)(v9 + 28) )
      MiFreeWsleList((__int64)p_Blink, v9, 0);
    if ( v10 )
    {
      MiUnlockVa((__int64)p_Blink, v12);
      v10 = 0;
    }
    goto LABEL_13;
  }
  v17 = 16LL;
  v25 = (v6 & 0x600000) == 6291456;
  v18 = MiVadPageIndices[v15];
  if ( v16 != 16 )
    v17 = 1LL;
  v19 = 0;
  if ( v18 > 1 )
  {
    MiInsertTbFlushEntry(a4, (__int64)((_QWORD)a2 << 25) >> 16, v16, 0);
  }
  else
  {
    v19 = 2 - v18;
    MiInsertLargeTbFlushEntry(a4, 2 - v18, (unsigned __int64)a2);
  }
  v20 = (*a2 >> 12) & 0xFFFFFFFFFFLL;
  v21 = v25;
  v26 = 48 * v20 - 0x220000000000LL;
  for ( i = 0LL; i < v17; ++i )
  {
    if ( v21 && (*a2 & 0x42) != 0 )
    {
      LeafVa = MiGetLeafVa((unsigned __int64)a2);
      MiCaptureWriteWatchDirtyBit(KeGetCurrentThread()->ApcState.Process, LeafVa, a1);
      v21 = 0;
    }
    TransitionPte = MiMakeTransitionPte(v20, 24);
    if ( v19 )
      MiRewritePteWithLockBit((__int64)p_Blink, 0, (volatile __int64 *)a2, TransitionPte);
    else
      *a2 = TransitionPte;
    ++a2;
    ++v20;
  }
  *(_DWORD *)(a4 + 20) |= 1u;
  MiUpdatePfnProtection(a1, v26, 0x18u);
  return 1LL;
}
