/*
 * XREFs of MiInitializePageChainPacket @ 0x1402F4870
 * Callers:
 *     MiStealPage @ 0x140253D10 (MiStealPage.c)
 *     MiInitializePoolPageChainPacket @ 0x1402F45D8 (MiInitializePoolPageChainPacket.c)
 *     MiGetHardFaultPages @ 0x1402F4630 (MiGetHardFaultPages.c)
 *     MiResolvePageFileFault @ 0x14033FD3C (MiResolvePageFileFault.c)
 *     MiGetClusterPage @ 0x1404CBFA4 (MiGetClusterPage.c)
 *     MiPfPrepareSequentialReadList @ 0x140939D28 (MiPfPrepareSequentialReadList.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiInitializePageChainPacket(
        __int64 a1,
        unsigned int *a2,
        char a3,
        __int64 a4,
        int a5,
        int a6,
        int a7,
        __int64 a8,
        __int64 a9,
        unsigned __int8 a10,
        _QWORD *a11,
        __int64 a12,
        __int64 a13)
{
  int v13; // r8d
  unsigned int *p_PageColor; // rdi
  struct _KTHREAD *CurrentThread; // rcx
  struct _KPRCB *CurrentPrcb; // r8
  unsigned int IdealGlobalNode; // eax
  __int64 v18; // rdx
  unsigned __int8 i; // dl
  int v20; // ebx
  __int64 result; // rax
  __int64 v22; // rsi

  v13 = *(_DWORD *)(a13 + 28) ^ ((unsigned __int8)*(_DWORD *)(a13 + 28) ^ (unsigned __int8)(16 * a3)) & 0x30;
  *(_QWORD *)a13 = a1;
  p_PageColor = a2;
  *(_QWORD *)(a13 + 8) = a2;
  *(_DWORD *)(a13 + 28) = v13;
  *(_QWORD *)(a13 + 16) = a4;
  *(_DWORD *)(a13 + 24) = a5;
  if ( a5 )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    IdealGlobalNode = a5 - 1;
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    if ( a2 && (a2[46] & 0xF) == 0 && CurrentThread->ApcStateIndex == 1 )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      IdealGlobalNode = CurrentThread->ApcState.Process->IdealGlobalNode;
    }
    else
    {
      CurrentPrcb = (struct _KPRCB *)KiProcessorBlock[CurrentThread->IdealProcessor];
      IdealGlobalNode = CurrentPrcb->NodeColor;
    }
  }
  v18 = qword_140E38D50 + 57216LL * IdealGlobalNode;
  if ( (*(_DWORD *)(v18 + 15184) & 1) != 0 )
  {
    v22 = v18 + 15237;
    for ( i = 0; i < (unsigned __int8)MmNumberOfChannels; ++i )
    {
      if ( *(_BYTE *)(i + v22) == 1 )
        goto LABEL_8;
    }
    for ( i = 0; i < (unsigned __int8)MmNumberOfChannels; ++i )
    {
      if ( *(_BYTE *)(i + v22) == 2 )
        goto LABEL_8;
    }
  }
  i = 0;
LABEL_8:
  *(_DWORD *)(a13 + 48) = (i & 1 | (2 * (IdealGlobalNode & 0x3F | 0x380))) << 8;
  if ( !p_PageColor || (p_PageColor[46] & 0xF) != 0 )
    p_PageColor = &CurrentPrcb->PageColor;
  *(_QWORD *)(a13 + 40) = p_PageColor;
  *(_DWORD *)(a13 + 48) ^= (*(_DWORD *)(a13 + 48) ^ (a6 << 18)) & 0xC0000;
  *(_DWORD *)(a13 + 32) = a7 | 8;
  *(_QWORD *)(a13 + 56) = a8;
  if ( a11 )
    *a11 = 0LL;
  *(_QWORD *)(a13 + 72) = a11;
  *(_QWORD *)(a13 + 64) = a9;
  v20 = *(_DWORD *)(a13 + 28) ^ ((unsigned __int8)*(_DWORD *)(a13 + 28) ^ a10) & 0xF;
  *(_QWORD *)(a13 + 80) = a12;
  result = 0LL;
  *(_DWORD *)(a13 + 28) = v20;
  *(_OWORD *)(a13 + 88) = 0LL;
  *(_QWORD *)(a13 + 104) = 0LL;
  return result;
}
