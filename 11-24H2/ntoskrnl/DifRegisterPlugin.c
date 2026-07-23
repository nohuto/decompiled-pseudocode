/*
 * XREFs of DifRegisterPlugin @ 0x140617190
 * Callers:
 *     VfPoolTrackingEntry @ 0x14060F930 (VfPoolTrackingEntry.c)
 *     VfIoPendingEntry @ 0x1406108F0 (VfIoPendingEntry.c)
 *     VfSecurityEntry @ 0x140610D90 (VfSecurityEntry.c)
 *     VfDmaPluginEntry @ 0x140612B40 (VfDmaPluginEntry.c)
 *     VfBelow4gbPluginEntry @ 0x140612C30 (VfBelow4gbPluginEntry.c)
 *     VfIrqlPluginEntry @ 0x140613350 (VfIrqlPluginEntry.c)
 *     VfRlrsEntry @ 0x140613640 (VfRlrsEntry.c)
 *     VfLwSPEntry @ 0x140648690 (VfLwSPEntry.c)
 *     VfSpecialPoolEntry @ 0x1406A4780 (VfSpecialPoolEntry.c)
 *     VfIovPluginEntry @ 0x1406A4D60 (VfIovPluginEntry.c)
 *     VfIrpTrackingPluginEntry @ 0x1406A5140 (VfIrpTrackingPluginEntry.c)
 *     VfDeadlockPluginEntry @ 0x140B9A240 (VfDeadlockPluginEntry.c)
 *     VfMiscPluginEntry @ 0x140BA0670 (VfMiscPluginEntry.c)
 * Callees:
 *     DifGetAPIThunkContextById @ 0x1404848A0 (DifGetAPIThunkContextById.c)
 *     DifCreateAPIThunkContext @ 0x140616C0C (DifCreateAPIThunkContext.c)
 *     DifDeregisterPlugin @ 0x140616C78 (DifDeregisterPlugin.c)
 *     DifiDbgPrint @ 0x140617D64 (DifiDbgPrint.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 *     VfBindDifCallbackWrappers @ 0x140B8BF40 (VfBindDifCallbackWrappers.c)
 *     VfBindDifDDIWrappers @ 0x140B8BF80 (VfBindDifDDIWrappers.c)
 *     VfCheckDifDdiExist @ 0x140B8BFE0 (VfCheckDifDdiExist.c)
 */

__int64 __fastcall DifRegisterPlugin(__int64 a1, unsigned int a2, unsigned int a3, _OWORD *a4)
{
  unsigned int v4; // ebx
  __int64 v5; // r12
  int v6; // eax
  unsigned int v7; // eax
  __int64 v8; // rdi
  unsigned int v9; // r9d
  __int64 *APIThunkContextById; // rsi
  __int64 v11; // rsi
  void *Pool2; // rax
  void *v13; // rbp
  __int64 v14; // rax
  __int64 v15; // rsi
  __int64 v16; // r14
  __int64 v17; // r15
  __int64 v18; // rax
  __int64 **v19; // rcx
  __int64 *v20; // rax
  __int64 v21; // rax
  __int64 v22; // rcx
  _QWORD *v23; // rax
  _QWORD *v24; // rcx
  _QWORD *v25; // rax
  __int64 v26; // rcx
  char v27; // al
  __int64 APIThunkContext; // rax
  __int64 *v29; // rax
  __int64 **v30; // rdx
  __int64 v31; // rax
  __int64 **v32; // rcx
  __int64 *v33; // rax
  __int64 v34; // rdx
  _OWORD *v35; // rax
  __int64 v37; // [rsp+70h] [rbp+8h]
  unsigned int v38; // [rsp+78h] [rbp+10h]
  unsigned int v39; // [rsp+80h] [rbp+18h]

  v38 = a2;
  v37 = a1;
  v4 = 0;
  v5 = a3;
  if ( a3 >= 0x40 || (v6 = *((_DWORD *)&VfRuleClasses + ((unsigned __int64)a3 >> 5)), !_bittest(&v6, a3 & 0x1F)) )
  {
    v4 = -1073738636;
LABEL_48:
    DifiDbgPrint("Loading plugin %d failed!!!\n", a2);
    DifDeregisterPlugin((_DWORD *)(unsigned int)v5);
    return v4;
  }
  if ( DifPluginStates[a3] )
    return v4;
  v7 = 0;
  while ( 1 )
  {
    v39 = v7;
    if ( v7 >= a2 )
      break;
    v8 = a1 + 32LL * v7;
    v9 = *(_DWORD *)(v8 + 8);
    if ( v9 < 0x80000000 && !(unsigned __int8)VfCheckDifDdiExist(v9) )
    {
      DifiDbgPrint("API %d is not available for the plugin %d.\n", v9, v5);
      goto LABEL_28;
    }
    APIThunkContextById = DifGetAPIThunkContextById(v9);
    if ( APIThunkContextById )
    {
      if ( *(_QWORD *)(v8 + 16) )
      {
        APIThunkContext = DifCreateAPIThunkContext(v8, 1, v5);
        if ( !APIThunkContext )
          goto LABEL_38;
        v29 = (__int64 *)(APIThunkContext + 16);
        v30 = (__int64 **)APIThunkContextById[5];
        if ( *v30 != APIThunkContextById + 4 )
          goto LABEL_41;
        *v29 = (__int64)(APIThunkContextById + 4);
        v29[1] = (__int64)v30;
        *v30 = v29;
        APIThunkContextById[5] = (__int64)v29;
      }
      if ( *(_QWORD *)(v8 + 24) )
      {
        v31 = DifCreateAPIThunkContext(v8, 0, v5);
        if ( !v31 )
          goto LABEL_38;
        v32 = (__int64 **)(APIThunkContextById + 6);
        v33 = (__int64 *)(v31 + 16);
        v34 = APIThunkContextById[6];
        if ( *(__int64 **)(v34 + 8) != APIThunkContextById + 6 )
LABEL_41:
          __fastfail(3u);
        *v33 = v34;
        v33[1] = (__int64)v32;
        *(_QWORD *)(v34 + 8) = v33;
        *v32 = v33;
      }
    }
    else
    {
      v11 = -1LL;
      do
        ++v11;
      while ( *(_BYTE *)(*(_QWORD *)v8 + v11) );
      Pool2 = (void *)ExAllocatePool2(0x40uLL, v11 + 1, 0x70416644u);
      v13 = Pool2;
      if ( !Pool2 )
        goto LABEL_38;
      memmove(Pool2, *(const void **)v8, v11 + 1);
      v14 = ExAllocatePool2(0x40uLL, 0x40uLL, 0x70416644u);
      v15 = v14;
      if ( !v14 )
      {
        v4 = -1073741801;
        ExFreePoolWithTag(v13, 0x4E666944u);
        goto LABEL_48;
      }
      *(_QWORD *)v14 = v13;
      v16 = v14 + 32;
      v17 = v14 + 48;
      *(_DWORD *)(v14 + 8) = *(_DWORD *)(v8 + 8);
      *(_QWORD *)(v14 + 40) = v14 + 32;
      *(_QWORD *)(v14 + 32) = v14 + 32;
      *(_QWORD *)(v14 + 56) = v14 + 48;
      *(_QWORD *)(v14 + 48) = v14 + 48;
      if ( *(_QWORD *)(v8 + 16) )
      {
        v18 = DifCreateAPIThunkContext(v8, 1, v5);
        if ( !v18 )
          goto LABEL_37;
        v19 = *(__int64 ***)(v16 + 8);
        v20 = (__int64 *)(v18 + 16);
        if ( *v19 != (__int64 *)v16 )
          goto LABEL_41;
        *v20 = v16;
        v20[1] = (__int64)v19;
        *v19 = v20;
        *(_QWORD *)(v16 + 8) = v20;
      }
      if ( *(_QWORD *)(v8 + 24) )
      {
        v21 = DifCreateAPIThunkContext(v8, 0, v5);
        if ( !v21 )
        {
LABEL_37:
          ExFreePoolWithTag(v13, 0x4E666944u);
          ExFreePoolWithTag((PVOID)v15, 0x4E666944u);
LABEL_38:
          v4 = -1073741801;
          goto LABEL_48;
        }
        v22 = *(_QWORD *)v17;
        v23 = (_QWORD *)(v21 + 16);
        if ( *(_QWORD *)(*(_QWORD *)v17 + 8LL) != v17 )
          goto LABEL_41;
        *v23 = v22;
        v23[1] = v17;
        *(_QWORD *)(v22 + 8) = v23;
        *(_QWORD *)v17 = v23;
      }
      v24 = (_QWORD *)qword_140F03C38;
      v25 = (_QWORD *)(v15 + 16);
      if ( *(__int64 **)qword_140F03C38 != &DifAPIThunkContextHead )
        goto LABEL_41;
      *v25 = &DifAPIThunkContextHead;
      *(_QWORD *)(v15 + 24) = v24;
      *v24 = v25;
      qword_140F03C38 = v15 + 16;
      v26 = *(unsigned int *)(v15 + 8);
      if ( (unsigned int)v26 >= 0x10000000 )
      {
        if ( (unsigned int)v26 >= 0x80000000 )
          goto LABEL_28;
        v27 = VfBindDifCallbackWrappers(v26, off_140E01F38[(unsigned int)(v26 - 0x10000000)], v15);
      }
      else
      {
        v27 = VfBindDifDDIWrappers(v26, *(&off_140E02048 + v26), v15);
      }
      if ( !v27 )
      {
        DifiDbgPrint("Binding failure for 0x%x\n", *(_DWORD *)(v15 + 8));
        v4 = -1073738625;
        goto LABEL_48;
      }
    }
LABEL_28:
    a2 = v38;
    v7 = v39 + 1;
    a1 = v37;
  }
  if ( a4 )
  {
    v35 = (_OWORD *)ExAllocatePool2(0x40uLL, 0x20uLL, 0x70416644u);
    if ( !v35 )
      goto LABEL_38;
    *v35 = *a4;
    v35[1] = a4[1];
  }
  else
  {
    v35 = 0LL;
  }
  DifPluginSettings[v5] = (__int64)v35;
  DifPluginStates[v5] = 1;
  return v4;
}
