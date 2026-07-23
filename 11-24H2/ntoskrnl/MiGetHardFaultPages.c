/*
 * XREFs of MiGetHardFaultPages @ 0x1402F4630
 * Callers:
 *     MiBuildMdlForMappedFileFault @ 0x140347688 (MiBuildMdlForMappedFileFault.c)
 * Callees:
 *     ExAcquireRundownProtection_0 @ 0x14022E830 (ExAcquireRundownProtection_0.c)
 *     MiProtectionToCacheAttribute @ 0x140253A30 (MiProtectionToCacheAttribute.c)
 *     MiInitializePageChainPacket @ 0x1402F4870 (MiInitializePageChainPacket.c)
 *     MiGetAvailablePagesBelowPriority @ 0x1402F51E0 (MiGetAvailablePagesBelowPriority.c)
 *     MiGetPageChain @ 0x140307540 (MiGetPageChain.c)
 *     MiUseSlabAllocator @ 0x140349AF8 (MiUseSlabAllocator.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

char __fastcall MiGetHardFaultPages(
        __int64 a1,
        unsigned __int64 a2,
        struct _EX_RUNDOWN_REF *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  __int64 v8; // r10
  int v12; // ebx
  int v13; // r9d
  int v14; // r14d
  __int64 v15; // r12
  int v16; // edi
  unsigned __int64 AvailablePagesBelowPriority; // rax
  int v18; // eax
  __int64 v19; // r9
  __int64 v20; // rdx
  __int64 v21; // xmm1_8
  _QWORD v23[2]; // [rsp+78h] [rbp-69h] BYREF
  _BYTE v24[88]; // [rsp+88h] [rbp-59h] BYREF
  __int128 v25; // [rsp+E0h] [rbp-1h]
  __int64 v26; // [rsp+F0h] [rbp+Fh]
  int v27; // [rsp+140h] [rbp+5Fh] BYREF

  v8 = a6;
  v27 = 0;
  LODWORD(a6) = (*(_DWORD *)(*(_QWORD *)(a6 + 208) + 32LL) >> 1) & 0x1F;
  if ( a4 )
  {
    if ( *(_BYTE *)a4 == 1 )
    {
      AvailablePagesBelowPriority = MiGetAvailablePagesBelowPriority(a3, ((*(_DWORD *)(a4 + 80) >> 3) & 7u) + 1);
      if ( a2 > AvailablePagesBelowPriority )
      {
        if ( !AvailablePagesBelowPriority )
          return AvailablePagesBelowPriority;
        a2 = AvailablePagesBelowPriority;
      }
    }
  }
  v12 = 1;
  if ( (unsigned int)MiUseSlabAllocator(
                       (_DWORD)a3,
                       *(_QWORD *)(v8 + 208),
                       a7,
                       (*(_DWORD *)(a8 + 8) >> 9) & 0x3F,
                       (__int64)&v27) )
  {
    v14 = v27;
    if ( v27 == 5 )
      v12 = 4097;
  }
  else
  {
    v14 = 9;
    v27 = 9;
  }
  v15 = a5;
  v16 = v13 + 1;
  while ( 1 )
  {
    AvailablePagesBelowPriority = *(_QWORD *)(a1 + 16);
    v23[1] = AvailablePagesBelowPriority;
    if ( AvailablePagesBelowPriority >= a2 )
      break;
    memset_0(v24, 0, 0x70uLL);
    v23[0] = 0LL;
    v18 = MiProtectionToCacheAttribute(a6);
    MiInitializePageChainPacket(
      (_DWORD)a3,
      *(_QWORD *)(v15 + 56),
      *(_BYTE *)(v15 + 69) & 1,
      *(_QWORD *)v15,
      v16,
      v18,
      v12,
      -1LL,
      *(_QWORD *)(v15 + 96),
      v14,
      (__int64)v23,
      v19,
      (__int64)v24);
    LOBYTE(AvailablePagesBelowPriority) = MiGetPageChain(v24);
    v20 = v26;
    if ( v26 )
    {
      if ( *(_QWORD *)a1 )
      {
        **(_QWORD **)(a1 + 8) = v25;
        AvailablePagesBelowPriority = *((_QWORD *)&v25 + 1);
        *(_QWORD *)(a1 + 16) += v20;
        *(_QWORD *)(a1 + 8) = AvailablePagesBelowPriority;
      }
      else
      {
        v21 = v26;
        *(_OWORD *)a1 = v25;
        *(_QWORD *)(a1 + 16) = v21;
      }
      return AvailablePagesBelowPriority;
    }
    if ( v14 == 9 )
      return AvailablePagesBelowPriority;
    if ( v14 != 5 )
    {
      if ( *(_QWORD *)(a1 + 16) )
        return AvailablePagesBelowPriority;
      if ( v23[0] )
      {
        *(_QWORD *)(v15 + 128) = v23[0];
        *(_QWORD *)(v15 + 144) = a2 - *(_QWORD *)(a1 + 16);
        *(_QWORD *)(v15 + 136) = a3;
        LOBYTE(AvailablePagesBelowPriority) = ExAcquireRundownProtection_0(a3 + 2297);
        return AvailablePagesBelowPriority;
      }
    }
    v14 = 9;
    v12 &= ~0x1000u;
    v27 = 9;
  }
  return AvailablePagesBelowPriority;
}
