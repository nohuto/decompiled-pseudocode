/*
 * XREFs of EtwpSetProviderTraitsCommon @ 0x1409F69B4
 * Callers:
 *     EtwpSetProviderTraitsKm @ 0x1409F66EC (EtwpSetProviderTraitsKm.c)
 *     EtwpSetProviderTraitsUm @ 0x1409F67DC (EtwpSetProviderTraitsUm.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x1402C7000 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14031DD30 (ExAcquireFastMutex.c)
 *     RtlRbInsertNodeEx @ 0x1403651C0 (RtlRbInsertNodeEx.c)
 *     RtlRbRemoveNode @ 0x140365870 (RtlRbRemoveNode.c)
 *     strnlen @ 0x1404FD180 (strnlen.c)
 *     Feature_ModernWpp__private_IsEnabledDeviceUsageNoInline @ 0x14064D73C (Feature_ModernWpp__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     EtwpReleaseProviderTraitsReference @ 0x140837CFC (EtwpReleaseProviderTraitsReference.c)
 *     TraitsCompare @ 0x1409E92F4 (TraitsCompare.c)
 *     EtwpGetProviderGroupFromTraits @ 0x140A15AC4 (EtwpGetProviderGroupFromTraits.c)
 *     AddDecodeGuidToSessions @ 0x140A5A96C (AddDecodeGuidToSessions.c)
 *     EtwpAddRegEntryToGroup @ 0x140AD9390 (EtwpAddRegEntryToGroup.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall EtwpSetProviderTraitsCommon(
        int a1,
        int a2,
        __int64 a3,
        __int64 a4,
        PRTL_BALANCED_NODE Node,
        unsigned int a6,
        PKGUARDED_MUTEX Mutex,
        PRTL_RB_TREE Tree)
{
  PRTL_BALANCED_NODE v8; // rdi
  PRTL_BALANCED_NODE v10; // r13
  __int16 v11; // r15
  unsigned int v12; // ebx
  __int64 v13; // rcx
  bool v14; // zf
  unsigned int v15; // edx
  BOOLEAN v16; // si
  __int64 Root; // rbx
  unsigned __int64 v18; // rax
  char v19; // r14
  int v20; // eax
  __int64 v21; // rax
  unsigned int v22; // eax
  _OWORD *ProviderGroupFromTraits; // rax
  PKGUARDED_MUTEX v28[2]; // [rsp+48h] [rbp-60h] BYREF

  v8 = Node;
  v10 = Node;
  v11 = 0;
  v28[0] = Mutex;
  if ( a6 < 3 )
    goto LABEL_2;
  if ( WORD2(Node[1].Left) != a6 )
    goto LABEL_2;
  v13 = (unsigned int)strnlen((const char *)&Node[1].Left + 6, a6 - 2) + 3;
  v14 = (_DWORD)v13 == a6;
  if ( (unsigned int)v13 > a6 )
    goto LABEL_2;
  if ( (unsigned int)v13 < a6 )
  {
    while ( (int)v13 + 2 <= a6 )
    {
      v15 = *(unsigned __int16 *)((char *)&Node[1].Left + v13 + 4);
      if ( v15 < 3 )
        break;
      v13 = v15 + (unsigned int)v13;
      v14 = (_DWORD)v13 == a6;
      if ( (unsigned int)v13 >= a6 )
        goto LABEL_9;
    }
LABEL_2:
    v12 = -1073741566;
    goto LABEL_40;
  }
LABEL_9:
  if ( !v14 )
    goto LABEL_2;
  Node->0 = 0LL;
  Node->ParentValue = 0LL;
  v16 = 1;
  LODWORD(Node[1].Children[0]) = 1;
  ExAcquireFastMutex(Mutex);
  if ( (*(_BYTE *)&Tree->0 & 1) != 0 )
  {
    Root = (__int64)Tree->Root;
    if ( !Tree->Root )
    {
LABEL_15:
      Root = 0LL;
      v19 = 0;
      goto LABEL_16;
    }
    v18 = (unsigned __int64)Tree ^ Root;
  }
  else
  {
    v18 = (unsigned __int64)Tree->Root;
    Root = (__int64)Tree->Root;
  }
  if ( !v18 )
    goto LABEL_15;
  v19 = 0;
  if ( Root )
  {
    while ( 1 )
    {
      v20 = TraitsCompare((__int64)Node, Root);
      if ( v20 <= 0 )
      {
        if ( v20 >= 0 )
        {
          v22 = *(_DWORD *)(Root + 24);
          v19 = 1;
          v8 = (PRTL_BALANCED_NODE)Root;
          if ( v22 + 1 >= v22 )
          {
            *(_DWORD *)(Root + 24) = v22 + 1;
            goto LABEL_18;
          }
          v12 = -1073741675;
          KeReleaseGuardedMutex(v28[0]);
          goto LABEL_40;
        }
        v21 = *(_QWORD *)Root;
        if ( !*(_QWORD *)Root )
        {
          v16 = 0;
          goto LABEL_17;
        }
      }
      else
      {
        v21 = *(_QWORD *)(Root + 8);
        if ( !v21 )
          goto LABEL_17;
      }
      Root = v21;
    }
  }
LABEL_16:
  v16 = 0;
LABEL_17:
  RtlRbInsertNodeEx(Tree, (PRTL_BALANCED_NODE)Root, v16, Node);
  v10 = 0LL;
LABEL_18:
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a4 + 112), (signed __int64)v8, 0LL) )
  {
    if ( v19 )
    {
      --LODWORD(v8[1].Children[0]);
    }
    else
    {
      RtlRbRemoveNode(Tree, v8);
      v10 = v8;
    }
    v12 = -1073741823;
  }
  else
  {
    v12 = 0;
  }
  KeReleaseGuardedMutex(v28[0]);
  if ( !v12 )
  {
    Feature_ModernWpp__private_IsEnabledDeviceUsageNoInline();
    if ( WORD2(v8[1].Left) == 22 && *(_DWORD *)((char *)&v8[1].Left + 6) == 33559296 )
    {
      v11 = (unsigned __int8)AddDecodeGuidToSessions(a4) != 0 ? 0x200 : 0;
    }
    else if ( !*(_QWORD *)(a4 + 40) )
    {
      *(_OWORD *)v28 = 0LL;
      ProviderGroupFromTraits = (_OWORD *)EtwpGetProviderGroupFromTraits((char *)&v8[1].Left + 4);
      if ( ProviderGroupFromTraits )
      {
        *(_OWORD *)v28 = *ProviderGroupFromTraits;
        v12 = EtwpAddRegEntryToGroup(a4, (unsigned int)v28, a1, a2, a3);
        if ( v12 )
        {
          EtwpReleaseProviderTraitsReference(a4);
          goto LABEL_40;
        }
      }
    }
    _InterlockedOr16((volatile signed __int16 *)(a4 + 98), v11 | 0x100);
  }
LABEL_40:
  if ( v10 )
    ExFreePoolWithTag(v10, 0);
  return v12;
}
