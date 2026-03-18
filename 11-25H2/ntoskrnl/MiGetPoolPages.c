/*
 * XREFs of MiGetPoolPages @ 0x140378DE4
 * Callers:
 *     RtlpHpEnvAllocVA @ 0x1402C26C0 (RtlpHpEnvAllocVA.c)
 * Callees:
 *     MiGetPageChain @ 0x140241940 (MiGetPageChain.c)
 *     MiReturnPhysicalPoolPages @ 0x1402C4578 (MiReturnPhysicalPoolPages.c)
 *     MiReturnExcessPoolCharges @ 0x140378924 (MiReturnExcessPoolCharges.c)
 *     MiGetCachedPoolPages @ 0x140378FFC (MiGetCachedPoolPages.c)
 *     MiObtainPoolCharges @ 0x1403790F8 (MiObtainPoolCharges.c)
 *     MiInitializePoolPageChainPacket @ 0x140379580 (MiInitializePoolPageChainPacket.c)
 *     MiSufficientAvailablePages @ 0x14037A4B0 (MiSufficientAvailablePages.c)
 *     MiRetryNonPagedAllocation @ 0x1404807B0 (MiRetryNonPagedAllocation.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

__int64 __fastcall MiGetPoolPages(__int64 a1)
{
  __int64 v2; // rsi
  __int64 v3; // rbp
  __int64 v5; // rbx
  __int16 v6; // dx
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v8; // r14d
  __int64 v9; // rdx
  __int64 v10; // xmm1_8
  __int64 v11; // rax
  _QWORD v12[3]; // [rsp+20h] [rbp-88h] BYREF
  unsigned int v13; // [rsp+38h] [rbp-70h]
  __int128 v15; // [rsp+78h] [rbp-30h]
  __int64 v16; // [rsp+88h] [rbp-20h]

  memset_0(v12, 0, 0x70uLL);
  v2 = a1 + 16;
  v3 = a1 + 16;
  *(_OWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  if ( *(_QWORD *)(384LL * *(unsigned int *)(a1 + 96) + qword_140E2D8B8 + 96) )
  {
    if ( (unsigned int)MiGetCachedPoolPages(a1) )
      return 0LL;
    v3 = a1 + 16;
  }
  v5 = *(_QWORD *)(a1 + 8) - *(_QWORD *)(a1 + 32);
  if ( (unsigned int)MiObtainPoolCharges(v5, 0LL) )
  {
    v6 = *(_WORD *)(a1 + 100);
    v13 = *(_DWORD *)(a1 + 96) + 1;
    CurrentThread = KeGetCurrentThread();
    v8 = ((v6 & 0x200) != 0 ? 688 : 640) | 1;
    if ( *(_BYTE *)(a1 + 102) != 2 )
      v8 = (v6 & 0x200) != 0 ? 688 : 640;
    if ( (*((_DWORD *)&CurrentThread[1].SwapListEntry + 3) & 2) != 0 )
    {
      v2 = v3;
      *(_WORD *)(a1 + 100) = v6 | 0x400;
    }
    if ( !v5 )
      return 0LL;
    while ( v5 == 1
         || (*(_WORD *)(a1 + 100) & 0x400) == 0
         || (unsigned int)MiSufficientAvailablePages(&MiSystemPartition, v5 + 160) )
    {
      MiRetryNonPagedAllocation((*(unsigned __int16 *)(a1 + 100) >> 10) & 1);
      MiInitializePoolPageChainPacket(v13, v8, v5, v12);
      MiGetPageChain(v12);
      v9 = v16;
      if ( v16 )
      {
        if ( *(_QWORD *)v2 )
        {
          **(_QWORD **)(v2 + 8) = v15;
          v11 = *((_QWORD *)&v15 + 1);
          *(_QWORD *)(v2 + 16) += v9;
          *(_QWORD *)(v2 + 8) = v11;
        }
        else
        {
          v10 = v16;
          *(_OWORD *)v2 = v15;
          *(_QWORD *)(v2 + 16) = v10;
        }
        v5 -= v9;
      }
      else if ( !(unsigned int)MiRetryNonPagedAllocation((*(unsigned __int16 *)(a1 + 100) >> 10) & 1) )
      {
        break;
      }
      if ( !v5 )
        break;
    }
    if ( !v5 )
      return 0LL;
    MiReturnPhysicalPoolPages(a1 + 16, 0);
    MiReturnExcessPoolCharges(v5, 0);
  }
  else
  {
    MiReturnPhysicalPoolPages(a1 + 16, 0);
  }
  return 3221225626LL;
}
