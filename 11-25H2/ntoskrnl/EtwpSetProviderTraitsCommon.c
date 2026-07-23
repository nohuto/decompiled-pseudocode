/*
 * XREFs of EtwpSetProviderTraitsCommon @ 0x140896C34
 * Callers:
 *     EtwpSetProviderTraitsUm @ 0x140896A5C (EtwpSetProviderTraitsUm.c)
 *     EtwpSetProviderTraitsKm @ 0x140A83EEC (EtwpSetProviderTraitsKm.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140286F40 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14029C580 (ExAcquireFastMutex.c)
 *     RtlRbInsertNodeEx @ 0x1402E2370 (RtlRbInsertNodeEx.c)
 *     RtlRbRemoveNode @ 0x1402E2A20 (RtlRbRemoveNode.c)
 *     strnlen @ 0x1404FD140 (strnlen.c)
 *     Feature_975502650__private_IsEnabledDeviceUsageNoInline @ 0x140645964 (Feature_975502650__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     EtwpAddRegEntryToGroup @ 0x140899D60 (EtwpAddRegEntryToGroup.c)
 *     AddDecodeGuidToSessions @ 0x1409EF43C (AddDecodeGuidToSessions.c)
 *     TraitsCompare @ 0x1409F59DC (TraitsCompare.c)
 *     EtwpReleaseProviderTraitsReference @ 0x140A01F80 (EtwpReleaseProviderTraitsReference.c)
 *     EtwpGetProviderGroupFromTraits @ 0x140A15D64 (EtwpGetProviderGroupFromTraits.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall EtwpSetProviderTraitsCommon(
        int a1,
        int a2,
        __int64 a3,
        __int64 a4,
        PRTL_BALANCED_NODE Node,
        unsigned int a6,
        PKGUARDED_MUTEX a7,
        PRTL_RB_TREE Tree)
{
  PRTL_BALANCED_NODE v8; // rdi
  struct _FAST_MUTEX *v9; // rbp
  char v11; // si
  PRTL_BALANCED_NODE v12; // r13
  __int16 v13; // r15
  unsigned int v14; // ebx
  __int64 v15; // rcx
  bool v16; // zf
  unsigned int v17; // edx
  struct _FAST_MUTEX *v18; // rcx
  BOOLEAN v19; // bp
  _RTL_BALANCED_NODE *Root; // rbx
  unsigned __int64 v21; // rax
  int v22; // eax
  _RTL_BALANCED_NODE *v23; // rax
  int IsEnabledDeviceUsageNoInline; // eax
  unsigned int v25; // ecx
  unsigned int v26; // eax
  _OWORD *ProviderGroupFromTraits; // rax
  bool v29; // [rsp+30h] [rbp-78h]
  PKGUARDED_MUTEX Mutex[2]; // [rsp+48h] [rbp-60h] BYREF

  v8 = Node;
  v9 = a7;
  v11 = 0;
  v12 = Node;
  v13 = 0;
  Mutex[0] = a7;
  if ( a6 < 3 )
    goto LABEL_2;
  if ( WORD2(Node[1].Left) != a6 )
    goto LABEL_2;
  v15 = (unsigned int)strnlen((const char *)&Node[1].Left + 6, a6 - 2) + 3;
  v16 = (_DWORD)v15 == a6;
  if ( (unsigned int)v15 > a6 )
    goto LABEL_2;
  if ( (unsigned int)v15 < a6 )
  {
    while ( (int)v15 + 2 <= a6 )
    {
      v17 = *(unsigned __int16 *)((char *)&Node[1].Left + v15 + 4);
      if ( v17 < 3 )
        break;
      v15 = v17 + (unsigned int)v15;
      v16 = (_DWORD)v15 == a6;
      if ( (unsigned int)v15 >= a6 )
        goto LABEL_9;
    }
LABEL_2:
    v14 = -1073741566;
    goto LABEL_42;
  }
LABEL_9:
  if ( !v16 )
    goto LABEL_2;
  v18 = Mutex[0];
  Node->0 = 0LL;
  Node->ParentValue = 0LL;
  v19 = 1;
  LODWORD(Node[1].Children[0]) = 1;
  ExAcquireFastMutex(v18);
  v29 = (unsigned int)Feature_975502650__private_IsEnabledDeviceUsageNoInline() != 0;
  if ( (*(_BYTE *)&Tree->0 & 1) != 0 )
  {
    Root = Tree->Root;
    if ( !Tree->Root )
    {
LABEL_15:
      Root = 0LL;
      goto LABEL_16;
    }
    v21 = (unsigned __int64)Tree ^ (unsigned __int64)Root;
  }
  else
  {
    v21 = (unsigned __int64)Tree->Root;
    Root = Tree->Root;
  }
  if ( !v21 )
    goto LABEL_15;
  if ( !Root )
  {
LABEL_16:
    v19 = 0;
LABEL_17:
    RtlRbInsertNodeEx(Tree, Root, v19, Node);
    v12 = 0LL;
    goto LABEL_18;
  }
  while ( 1 )
  {
    v22 = TraitsCompare(Node, Root);
    if ( v22 > 0 )
    {
      v23 = Root->Children[1];
      if ( !v23 )
        goto LABEL_17;
      goto LABEL_27;
    }
    if ( v22 >= 0 )
      break;
    v23 = Root->Children[0];
    if ( !Root->Children[0] )
      goto LABEL_16;
LABEL_27:
    Root = v23;
  }
  v11 = 1;
  v8 = Root;
  IsEnabledDeviceUsageNoInline = Feature_975502650__private_IsEnabledDeviceUsageNoInline();
  v25 = (unsigned int)Root[1].Children[0];
  v16 = IsEnabledDeviceUsageNoInline == 0;
  v26 = v25 + 1;
  if ( !v16 && v26 < v25 )
  {
    v11 = v29;
    v14 = -1073741675;
    v9 = Mutex[0];
    goto LABEL_42;
  }
  LODWORD(Root[1].Children[0]) = v26;
LABEL_18:
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a4 + 104), (signed __int64)v8, 0LL) )
  {
    if ( v11 )
    {
      --LODWORD(v8[1].Children[0]);
    }
    else
    {
      RtlRbRemoveNode(Tree, v8);
      v12 = v8;
    }
    v14 = -1073741823;
  }
  else
  {
    v14 = 0;
  }
  v11 = 0;
  v9 = Mutex[0];
  if ( !(unsigned int)Feature_975502650__private_IsEnabledDeviceUsageNoInline() )
    v11 = v29;
  KeReleaseGuardedMutex(Mutex[0]);
  if ( !v14 )
  {
    if ( WORD2(v8[1].Left) == 22 && *(_DWORD *)((char *)&v8[1].Left + 6) == 33559296 )
    {
      v13 = (unsigned __int8)AddDecodeGuidToSessions(a4) != 0 ? 0x200 : 0;
    }
    else if ( !*(_QWORD *)(a4 + 40) )
    {
      *(_OWORD *)Mutex = 0LL;
      ProviderGroupFromTraits = (_OWORD *)EtwpGetProviderGroupFromTraits();
      if ( ProviderGroupFromTraits )
      {
        *(_OWORD *)Mutex = *ProviderGroupFromTraits;
        v14 = EtwpAddRegEntryToGroup(a4, (unsigned int)Mutex, a1, a2, a3);
        if ( v14 )
        {
          EtwpReleaseProviderTraitsReference(a4);
          goto LABEL_42;
        }
      }
    }
    _InterlockedOr16((volatile signed __int16 *)(a4 + 98), v13 | 0x100);
  }
LABEL_42:
  if ( (unsigned int)Feature_975502650__private_IsEnabledDeviceUsageNoInline() && v11 )
    KeReleaseGuardedMutex(v9);
  if ( v12 )
    ExFreePoolWithTag(v12, 0);
  return v14;
}
