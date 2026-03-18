/*
 * XREFs of ViSpecialAllocateCommonBuffer @ 0x140B89BC0
 * Callers:
 *     VfAllocateCommonBuffer @ 0x140B85580 (VfAllocateCommonBuffer.c)
 * Callees:
 *     ExInterlockedInsertHeadList @ 0x14042EB80 (ExInterlockedInsertHeadList.c)
 *     VfUtilDbgPrint @ 0x14061029C (VfUtilDbgPrint.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 *     ViInitializePadding @ 0x140B895A8 (ViInitializePadding.c)
 */

char *__fastcall ViSpecialAllocateCommonBuffer(
        __int64 a1,
        __int64 a2,
        struct _LIST_ENTRY *a3,
        unsigned int a4,
        _QWORD *a5,
        char a6)
{
  unsigned int v7; // r10d
  __int64 v9; // rdi
  struct _LIST_ENTRY *Pool2; // rsi
  __int64 v11; // r9
  int v13; // ebx
  int v14; // ebx
  unsigned int v15; // r14d
  char *v16; // rax
  char *v17; // rbx
  struct _LIST_ENTRY *v18; // [rsp+68h] [rbp+10h] BYREF

  v7 = *(_DWORD *)(a2 + 204) - *(_DWORD *)(a2 + 208);
  v18 = 0LL;
  v9 = a4;
  if ( v7 >= 0x20 || a4 > 0xFFFFDFFF )
    return 0LL;
  Pool2 = (struct _LIST_ENTRY *)ExAllocatePool2(0x40uLL, 0x40uLL, 0x566C6148uLL);
  if ( !Pool2 )
  {
    VfUtilDbgPrint("Couldn't track common buffer allocation\n");
    return 0LL;
  }
  if ( (unsigned __int64)(v9 + 8) <= 0x1000 )
  {
    v13 = 4096;
LABEL_10:
    v14 = v13 - v9;
    goto LABEL_12;
  }
  if ( (v9 & 0xFFF) != 0 )
  {
    v13 = ((v9 + 8) & 0xFFFFF000) + ((((_WORD)v9 + 8) & 0xFFF) != 0LL ? 0x1000 : 0);
    goto LABEL_10;
  }
  v14 = 4096;
LABEL_12:
  LOBYTE(v11) = a6;
  v15 = v14 + v9 + 4096;
  v16 = (char *)guard_dispatch_icall_no_overrides(*(_QWORD *)(a2 + 40), v15, &v18, v11);
  if ( !v16 )
  {
    ExFreePoolWithTag(Pool2, 0);
    return 0LL;
  }
  WORD1(Pool2->Flink) = v14;
  v17 = v16 + 4096;
  LOWORD(Pool2->Flink) = 4096;
  Pool2[1].Blink = (struct _LIST_ENTRY *)(v16 + 4096);
  LODWORD(Pool2->Blink) = v9;
  HIDWORD(Pool2->Flink) = v15;
  Pool2[1].Flink = (struct _LIST_ENTRY *)v16;
  Pool2[2].Flink = v18;
  Pool2[2].Blink = a3;
  ViInitializePadding(v16, v15, (unsigned __int64)(v16 + 4096), v9);
  *a5 = v18 + 256;
  ExInterlockedInsertHeadList((PLIST_ENTRY)(a2 + 112), Pool2 + 3, (PKSPIN_LOCK)(a2 + 128));
  _InterlockedIncrement((volatile signed __int32 *)(a2 + 204));
  return v17;
}
