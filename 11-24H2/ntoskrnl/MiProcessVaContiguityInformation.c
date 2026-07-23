/*
 * XREFs of MiProcessVaContiguityInformation @ 0x14068E20C
 * Callers:
 *     NtSetInformationVirtualMemory @ 0x1409E3F70 (NtSetInformationVirtualMemory.c)
 * Callees:
 *     MiGetLargePage @ 0x1402517B0 (MiGetLargePage.c)
 *     MiInitializeDemandCoalesceContext @ 0x14026AE60 (MiInitializeDemandCoalesceContext.c)
 *     MiThreadIdealNode @ 0x14026AF90 (MiThreadIdealNode.c)
 *     MiConvertLargeActivePageToChain @ 0x1403122A0 (MiConvertLargeActivePageToChain.c)
 *     MiReleaseNonPagedResources @ 0x1403358DC (MiReleaseNonPagedResources.c)
 *     MiAcquireNonPagedResources @ 0x14033A560 (MiAcquireNonPagedResources.c)
 *     MiObtainReferencedVadEx @ 0x140344D30 (MiObtainReferencedVadEx.c)
 *     MiUnlockAndDereferenceVadShared @ 0x140362A70 (MiUnlockAndDereferenceVadShared.c)
 *     MiVadPagesTradable @ 0x1403DD010 (MiVadPagesTradable.c)
 *     MiGetVadCacheAttribute @ 0x1404A0228 (MiGetVadCacheAttribute.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     MiQueryVaPhysicalContiguity @ 0x140681F6C (MiQueryVaPhysicalContiguity.c)
 *     MiMakeVaRangePhysicallyContiguous @ 0x14068DF2C (MiMakeVaRangePhysicallyContiguous.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     MiVadSupportsPhysicalContiguityQuery @ 0x1407F87E0 (MiVadSupportsPhysicalContiguityQuery.c)
 */

__int64 __fastcall MiProcessVaContiguityInformation(unsigned __int64 *a1, __int64 a2, unsigned int a3)
{
  __int64 v4; // r13
  __int64 v6; // rsi
  int v7; // ebx
  struct _LIST_ENTRY **p_Blink; // r12
  __int64 v9; // rdx
  unsigned __int64 v10; // r15
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // r8
  __int64 v13; // r9
  unsigned __int64 *v14; // rdi
  __int64 v15; // rax
  int VadCacheAttribute; // eax
  unsigned int v17; // edi
  unsigned __int64 v18; // r15
  unsigned __int64 v19; // rax
  unsigned __int8 CurrentIrql; // r13
  __int64 LargePage; // rax
  __int64 v22; // r12
  __int64 v23; // r9
  unsigned int v24; // ebx
  unsigned int VaRangePhysicallyContiguous; // [rsp+40h] [rbp-69h] BYREF
  int v27; // [rsp+44h] [rbp-65h]
  unsigned int v28; // [rsp+48h] [rbp-61h]
  ULONG *v29; // [rsp+50h] [rbp-59h]
  __int64 v30; // [rsp+58h] [rbp-51h]
  struct _LIST_ENTRY **v31; // [rsp+60h] [rbp-49h]
  unsigned __int64 i; // [rsp+68h] [rbp-41h]
  unsigned __int64 *v33; // [rsp+70h] [rbp-39h]
  __int64 v34; // [rsp+78h] [rbp-31h]
  _OWORD v35[3]; // [rsp+80h] [rbp-29h] BYREF
  __int64 v36; // [rsp+B0h] [rbp+7h]
  int v37; // [rsp+B8h] [rbp+Fh]

  VaRangePhysicallyContiguous = 0;
  v36 = 0LL;
  v37 = 0;
  memset(v35, 0, sizeof(v35));
  v4 = a3;
  v6 = 0LL;
  v7 = 0;
  v27 = 0;
  v28 = a3;
  v34 = a3;
  p_Blink = &KeGetCurrentThread()->ApcState.Process[2].ReadyListHead.Blink;
  v31 = p_Blink;
  v9 = MiPageSizes[a3];
  v29 = (ULONG *)*((_QWORD *)qword_140E300C8 + *((unsigned __int16 *)p_Blink + 87));
  v10 = v9 << 12;
  v30 = v9 << 12;
  MiInitializeDemandCoalesceContext(v35, v9, 1uLL, 1);
  if ( (int)MiAcquireNonPagedResources(v29, MiPageSizes[v4], 1024LL, 6LL) < 0 )
    return (unsigned int)-1073741670;
  v14 = &a1[2 * a2];
  v33 = v14;
LABEL_3:
  if ( a1 >= v14 )
  {
    v24 = 0;
  }
  else
  {
    v11 = a1[1] % v10;
    if ( !v11 )
    {
      v12 = *a1;
      if ( (*a1 & ~(v10 - 1)) == *a1 )
      {
        if ( v6 )
        {
          if ( v12 >= (*(unsigned int *)(v6 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v6 + 32) << 32)) << 12 )
          {
            v11 = ((*(unsigned int *)(v6 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v6 + 33) << 32)) << 12) | 0xFFF;
            if ( v12 <= v11 )
            {
LABEL_15:
              if ( v7 )
                v17 = v7 - 1;
              else
                v17 = MiThreadIdealNode((__int64)p_Blink, 0LL);
              v18 = *a1;
              v19 = *a1 + a1[1];
              for ( i = v19; ; v19 = i )
              {
                if ( v18 >= v19 )
                {
                  v14 = v33;
                  a1 += 2;
                  v10 = v30;
                  goto LABEL_3;
                }
                if ( !(unsigned int)MiQueryVaPhysicalContiguity((__int64)p_Blink, v18, v4, 1LL) )
                {
                  CurrentIrql = KeGetCurrentIrql();
                  __writecr8(2uLL);
                  if ( KiIrqlFlags )
                  {
                    LOBYTE(v11) = 2;
                    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, v11);
                  }
                  LargePage = MiGetLargePage((__int64)v29, v18, v28, v17, v27, 0x14u, (__int64)v35, 0LL);
                  v22 = LargePage;
                  if ( LargePage )
                    MiConvertLargeActivePageToChain(LargePage);
                  if ( KiIrqlFlags )
                    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
                  __writecr8(CurrentIrql);
                  if ( !v22 )
                  {
                    v24 = -1073741801;
                    goto LABEL_37;
                  }
                  LODWORD(v4) = v28;
                  v23 = v22;
                  p_Blink = v31;
                  VaRangePhysicallyContiguous = MiMakeVaRangePhysicallyContiguous((__int64)v31, v18, v28, v23);
                }
                v18 += v30;
              }
            }
          }
          MiUnlockAndDereferenceVadShared(v6, v11, v12, v13);
        }
        v15 = MiObtainReferencedVadEx(*a1, 2LL, (int *)&VaRangePhysicallyContiguous, v13);
        v6 = v15;
        if ( v15 )
        {
          v11 = ((*(unsigned int *)(v15 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v15 + 33) << 32)) << 12) | 0xFFF;
          if ( *a1 + a1[1] - 1 > v11 )
          {
            v24 = -1073741800;
          }
          else
          {
            if ( (unsigned int)MiVadSupportsPhysicalContiguityQuery(v15) && MiVadPagesTradable(v6) )
            {
              VadCacheAttribute = MiGetVadCacheAttribute(v6);
              v7 = (*(_DWORD *)(v6 + 48) >> 12) & 0x7F;
              v27 = VadCacheAttribute;
              goto LABEL_15;
            }
            v24 = -1073741637;
          }
          goto LABEL_38;
        }
        v24 = VaRangePhysicallyContiguous;
        goto LABEL_39;
      }
    }
    v24 = -1073741811;
  }
LABEL_37:
  if ( v6 )
LABEL_38:
    MiUnlockAndDereferenceVadShared(v6, v11, v12, v13);
LABEL_39:
  MiReleaseNonPagedResources((__int64)v29, MiPageSizes[v34]);
  return v24;
}
