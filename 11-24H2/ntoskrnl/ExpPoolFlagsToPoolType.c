/*
 * XREFs of ExpPoolFlagsToPoolType @ 0x140B76080
 * Callers:
 *     ExInsertPoolTag @ 0x14021B9D0 (ExInsertPoolTag.c)
 *     ExpInsertPoolTracker @ 0x14021BE10 (ExpInsertPoolTracker.c)
 *     ExAllocateHeapPool @ 0x140277790 (ExAllocateHeapPool.c)
 *     ExFreeHeapPool @ 0x140359950 (ExFreeHeapPool.c)
 *     ExAllocateContiguousHeapPool @ 0x140396AFC (ExAllocateContiguousHeapPool.c)
 *     ExRemovePoolTag @ 0x1403985B4 (ExRemovePoolTag.c)
 *     ExpFreeHeapSpecialPool @ 0x140398994 (ExpFreeHeapSpecialPool.c)
 *     ExPoolCleanupExpansionTable @ 0x1406528C4 (ExPoolCleanupExpansionTable.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 *     VerifierExAllocatePool2 @ 0x140B93190 (VerifierExAllocatePool2.c)
 *     VfHandlePoolAlloc @ 0x140BAAAA0 (VfHandlePoolAlloc.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ExpPoolFlagsToPoolType(__int64 a1, int a2, int *a3, _BYTE *a4, _BYTE *a5)
{
  int v5; // r10d
  __int64 v8; // rax
  int v9; // edx
  int v10; // r9d
  int v11; // edx
  int v12; // r8d
  int v13; // edx
  __int64 v15; // rax

  v5 = 0;
  *a3 = 0;
  *a4 = 0;
  *a5 = 0;
  if ( (a1 & 0xFFFFF000) != 0 || (a1 & 0x10) != 0 && !a2 )
    return 3221225485LL;
  v8 = a1 & 0x1C0;
  if ( v8 == 256 )
  {
    v5 = 1;
    if ( (a1 & 0x10) != 0 )
      v5 = -2147483647;
  }
  else
  {
    v15 = v8 - 64;
    if ( v15 )
    {
      if ( v15 != 64 )
        return 3221225485LL;
    }
    else
    {
      v5 = 512;
    }
  }
  v9 = v5 | 0x20;
  if ( (a1 & 4) == 0 )
    v9 = v5;
  v10 = v9 | 0x400;
  if ( (a1 & 2) != 0 )
    v10 = v9;
  if ( (a1 & 0x100000629LL) != 0 )
  {
    v11 = v10 | 4;
    if ( (a1 & 8) == 0 )
      v11 = v10;
    v12 = v11 | 0x80;
    if ( (a1 & 0x200) == 0 )
      v12 = v11;
    v10 = v12 | 0x40;
    if ( (a1 & 0x400) == 0 )
      v10 = v12;
    v13 = v10;
    if ( (a1 & 1) != 0 )
    {
      v10 |= 8u;
      *a4 = 1;
      if ( (a1 & 0x20) != 0 )
        v10 = v13;
    }
    else if ( (a1 & 0x20) != 0 )
    {
      v10 |= 0x10u;
    }
    if ( (a1 & 0x100000000LL) != 0 )
      *a5 = 1;
  }
  *a3 = v10;
  return 0LL;
}
