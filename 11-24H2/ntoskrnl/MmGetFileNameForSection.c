/*
 * XREFs of MmGetFileNameForSection @ 0x140A7DBDC
 * Callers:
 *     DbgkpSectionToFileHandle @ 0x140A7DB28 (DbgkpSectionToFileHandle.c)
 * Callees:
 *     MiAllocatePool @ 0x140277450 (MiAllocatePool.c)
 *     MiSectionControlArea @ 0x140355A80 (MiSectionControlArea.c)
 *     MiReferenceControlAreaFile @ 0x14041CAA0 (MiReferenceControlAreaFile.c)
 *     MiDereferenceControlAreaFile @ 0x14041F2B0 (MiDereferenceControlAreaFile.c)
 *     ObQueryNameStringMode @ 0x1409524C0 (ObQueryNameStringMode.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MmGetFileNameForSection(__int64 a1, __int64 *a2)
{
  int v2; // eax
  unsigned int v3; // ebx
  __int64 Pool; // rax
  unsigned __int64 v7; // r14
  char *v8; // rsi
  int v9; // eax
  int v10; // ebp
  unsigned int v11; // ebp
  __int64 v12; // rax
  __int64 result; // rax
  unsigned int v14; // [rsp+50h] [rbp+8h] BYREF

  v2 = *(_DWORD *)(a1 + 56);
  v3 = 0;
  v14 = 0;
  *a2 = 0LL;
  if ( (v2 & 0x20) == 0 )
    return 3221225545LL;
  Pool = MiAllocatePool(0x100uLL, 0x400uLL, 538996045);
  *a2 = Pool;
  if ( !Pool )
    return 3221225495LL;
  v7 = MiSectionControlArea(a1);
  v8 = (char *)MiReferenceControlAreaFile(v7);
  v9 = ObQueryNameStringMode(v8, *a2, 0x400u, &v14, 0);
  v10 = v9;
  if ( v9 >= 0 )
  {
LABEL_8:
    MiDereferenceControlAreaFile(v7, (signed __int64)v8);
    return v3;
  }
  if ( v9 != -1073741820 )
    goto LABEL_13;
  ExFreePoolWithTag((PVOID)*a2, 0);
  v11 = v14 + 1024;
  if ( v14 >= 0xFFFFFC00 || v14 == 0 )
  {
    *a2 = 0LL;
    MiDereferenceControlAreaFile(v7, (signed __int64)v8);
    return 3221225495LL;
  }
  v12 = MiAllocatePool(0x100uLL, v11, 538996045);
  *a2 = v12;
  if ( !v12 )
  {
    v3 = -1073741801;
    goto LABEL_8;
  }
  v10 = ObQueryNameStringMode(v8, v12, v11, &v14, 0);
  if ( v10 >= 0 )
    goto LABEL_8;
LABEL_13:
  MiDereferenceControlAreaFile(v7, (signed __int64)v8);
  ExFreePoolWithTag((PVOID)*a2, 0);
  result = (unsigned int)v10;
  *a2 = 0LL;
  return result;
}
