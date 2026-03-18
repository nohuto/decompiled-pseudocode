/*
 * XREFs of DifObjTrkQeuryInvokeDeleteRange @ 0x140617E90
 * Callers:
 *     VfDriverUnloadImage @ 0x140B8A5C0 (VfDriverUnloadImage.c)
 *     VfPtFreePoolNotification @ 0x140BA96EC (VfPtFreePoolNotification.c)
 * Callees:
 *     RtlDeleteElementGenericTableAvlEx @ 0x1403F0930 (RtlDeleteElementGenericTableAvlEx.c)
 *     RtlLookupElementGenericTableFullAvl @ 0x1403F1320 (RtlLookupElementGenericTableFullAvl.c)
 *     DifAvlRealSuccessor @ 0x14045901C (DifAvlRealSuccessor.c)
 *     RtlGetElementGenericTableAvl @ 0x14048B290 (RtlGetElementGenericTableAvl.c)
 *     DifObjTrkGetPluginContext @ 0x140617CD0 (DifObjTrkGetPluginContext.c)
 *     DifObjTrkIsExceptionPluginId @ 0x140617E5C (DifObjTrkIsExceptionPluginId.c)
 *     DifAcquireSpinLockAtDpcLevelSafe @ 0x140619DE4 (DifAcquireSpinLockAtDpcLevelSafe.c)
 *     DifReleaseSpinLockFromDpcLevelSafe @ 0x140619E9C (DifReleaseSpinLockFromDpcLevelSafe.c)
 *     DifAvlRealPredecessor @ 0x140619F0C (DifAvlRealPredecessor.c)
 *     MmGetVaTypeForVerifier @ 0x140675644 (MmGetVaTypeForVerifier.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

void __fastcall DifObjTrkQeuryInvokeDeleteRange(unsigned __int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  PEX_SPIN_LOCK v4; // rsi
  int VaTypeForVerifier; // eax
  RTL_AVL_TABLE *v10; // rsi
  int *v11; // rbx
  PEX_SPIN_LOCK v12; // r14
  int *v13; // rdi
  int *i; // rcx
  int v15; // r11d
  int *v16; // rax
  unsigned int v17; // r11d
  int *v18; // rbx
  __int64 j; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  unsigned int v22; // r11d
  __int64 v23; // rax
  __int64 v24; // rbx
  __int64 v25; // r15
  __int64 v26; // r12
  __int64 v27; // r14
  unsigned int *PluginContext; // rax
  unsigned int NumberGenericTableElements; // eax
  PVOID ElementGenericTableAvl; // rax
  unsigned __int64 v31; // rdi
  _RTL_BALANCED_LINKS *Parent; // rbx
  unsigned __int64 v33; // r13
  _WORD v34[2]; // [rsp+20h] [rbp-30h] BYREF
  TABLE_SEARCH_RESULT SearchResult; // [rsp+24h] [rbp-2Ch] BYREF
  PVOID NodeOrParent; // [rsp+28h] [rbp-28h] BYREF
  __int64 Buffer; // [rsp+30h] [rbp-20h] BYREF
  unsigned __int64 v38; // [rsp+38h] [rbp-18h]
  unsigned __int64 v39; // [rsp+40h] [rbp-10h]

  v4 = DifObjTrkContext;
  Buffer = 0LL;
  v34[0] = 0;
  if ( DifObjTrkContext )
  {
    if ( DifObjTrkInitialized )
    {
      if ( a1 )
      {
        if ( a2 )
        {
          if ( a1 >= 0xFFFF800000000000uLL )
          {
            VaTypeForVerifier = MmGetVaTypeForVerifier(a1);
            if ( VaTypeForVerifier != 5 )
            {
              v10 = (RTL_AVL_TABLE *)&v4[30 * VaTypeForVerifier + 16];
              if ( v10->NumberGenericTableElements )
              {
                v38 = a1;
                v39 = a1 + a2;
                if ( (_RTL_BALANCED_LINKS *)(a1 + a2) > v10[1].BalancedRoot.Parent
                  && (_RTL_BALANCED_LINKS *)a1 <= v10[1].BalancedRoot.LeftChild )
                {
                  DifAcquireSpinLockAtDpcLevelSafe(v34);
                  NodeOrParent = 0LL;
                  SearchResult = TableEmptyTree;
                  v11 = (int *)RtlLookupElementGenericTableFullAvl(v10, &Buffer, &NodeOrParent, &SearchResult);
                  if ( v11 )
                  {
                    v12 = DifObjTrkContext;
                    memset_0((void *)(DifObjTrkContext + 166), 0, 0xA0uLL);
                    v13 = v11 - 8;
                    if ( !DifObjTrkIsExceptionPluginId(*v11, a3, a4) )
                      *((_QWORD *)v12 + 83) = v13;
                    for ( i = v11 - 8; ; i = v18 )
                    {
                      v16 = (int *)DifAvlRealSuccessor(i);
                      v18 = v16;
                      if ( !v16 || v17 > 0x14 || v38 > *((_QWORD *)v16 + 5) || v39 < *((_QWORD *)v16 + 6) )
                        break;
                      if ( !DifObjTrkIsExceptionPluginId(v16[8], a3, a4) )
                      {
                        if ( v15 == 20 )
                          break;
                        *(_QWORD *)&DifObjTrkContext[2 * v15 + 166] = v18;
                      }
                    }
                    for ( j = (__int64)v13; ; j = v24 )
                    {
                      v23 = DifAvlRealPredecessor(j);
                      v24 = v23;
                      if ( !v23 || v22 > 0x14 || v38 > *(_QWORD *)(v23 + 40) || v39 < *(_QWORD *)(v23 + 48) )
                        break;
                      if ( !DifObjTrkIsExceptionPluginId(*(_DWORD *)(v23 + 32), a3, a4) )
                      {
                        if ( v22 == 20 )
                          break;
                        *(_QWORD *)&DifObjTrkContext[2 * v22 + 166] = v24;
                      }
                    }
                    if ( v22 )
                    {
                      v25 = 166LL;
                      v26 = v22;
                      do
                      {
                        v27 = *(_QWORD *)&DifObjTrkContext[v25];
                        if ( v27 )
                        {
                          PluginContext = (unsigned int *)DifObjTrkGetPluginContext(*(_DWORD *)(v27 + 32));
                          if ( PluginContext )
                          {
                            v20 = *((_QWORD *)PluginContext + 1);
                            if ( v20 )
                              guard_dispatch_icall_no_overrides(*(_QWORD *)(v27 + 40), *PluginContext, v20, v21);
                          }
                        }
                        NumberGenericTableElements = v10->NumberGenericTableElements;
                        if ( NumberGenericTableElements == 1 )
                        {
                          RtlDeleteElementGenericTableAvlEx(v10, (_RTL_BALANCED_LINKS *)v27, v20, v21);
                          --*((_DWORD *)DifObjTrkContext + 206);
                          v10[1].BalancedRoot.LeftChild = 0LL;
                          v10[1].BalancedRoot.Parent = 0LL;
                        }
                        else if ( NumberGenericTableElements == 2 )
                        {
                          RtlDeleteElementGenericTableAvlEx(v10, (_RTL_BALANCED_LINKS *)v27, v20, v21);
                          --*((_DWORD *)DifObjTrkContext + 206);
                          ElementGenericTableAvl = RtlGetElementGenericTableAvl(v10, 0);
                          v10[1].BalancedRoot.LeftChild = (_RTL_BALANCED_LINKS *)*((_QWORD *)ElementGenericTableAvl + 2);
                          v10[1].BalancedRoot.Parent = (_RTL_BALANCED_LINKS *)*((_QWORD *)ElementGenericTableAvl + 1);
                        }
                        else
                        {
                          v31 = *(_QWORD *)(v27 + 40);
                          Parent = v10[1].BalancedRoot.Parent;
                          v33 = *(_QWORD *)(v27 + 48);
                          NodeOrParent = v10[1].BalancedRoot.LeftChild;
                          RtlDeleteElementGenericTableAvlEx(v10, (_RTL_BALANCED_LINKS *)v27, v20, v21);
                          --*((_DWORD *)DifObjTrkContext + 206);
                          if ( v31 <= (unsigned __int64)Parent )
                            v10[1].BalancedRoot.Parent = (_RTL_BALANCED_LINKS *)*((_QWORD *)RtlGetElementGenericTableAvl(
                                                                                              v10,
                                                                                              0)
                                                                                + 1);
                          if ( v33 >= (unsigned __int64)NodeOrParent )
                            v10[1].BalancedRoot.LeftChild = (_RTL_BALANCED_LINKS *)*((_QWORD *)RtlGetElementGenericTableAvl(
                                                                                                 v10,
                                                                                                 v10->NumberGenericTableElements
                                                                                               - 1)
                                                                                   + 1);
                        }
                        v25 += 2LL;
                        --v26;
                      }
                      while ( v26 );
                    }
                  }
                  DifReleaseSpinLockFromDpcLevelSafe(v34);
                }
              }
            }
          }
        }
      }
    }
  }
}
