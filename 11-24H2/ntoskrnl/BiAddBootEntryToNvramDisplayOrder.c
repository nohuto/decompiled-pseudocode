/*
 * XREFs of BiAddBootEntryToNvramDisplayOrder @ 0x140815254
 * Callers:
 *     BiBindEfiEntries @ 0x140A96064 (BiBindEfiEntries.c)
 * Callees:
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     BiQueryBootEntryOrder @ 0x1409A6E98 (BiQueryBootEntryOrder.c)
 *     BiSetBootEntryOrder @ 0x1409A7FB8 (BiSetBootEntryOrder.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall BiAddBootEntryToNvramDisplayOrder(__int64 a1)
{
  ULONG *v2; // rdi
  int v3; // eax
  void *v4; // rbp
  unsigned int v5; // esi
  __int64 i; // rbx
  __int64 Pool2; // rax
  unsigned int v9; // [rsp+48h] [rbp+10h] BYREF
  void *Src; // [rsp+50h] [rbp+18h] BYREF

  v9 = 0;
  Src = 0LL;
  v2 = 0LL;
  v3 = BiQueryBootEntryOrder(&Src, &v9);
  v4 = Src;
  v5 = v3;
  if ( v3 >= 0 )
  {
    for ( i = 0LL; (unsigned int)i < v9; i = (unsigned int)(i + 1) )
    {
      if ( *((_DWORD *)Src + i) == *(_DWORD *)(*(_QWORD *)(a1 + 40) + 8LL) )
        goto LABEL_11;
    }
    Pool2 = ExAllocatePool2(0x102uLL, 4LL * (unsigned int)(i + 1), 0x4B444342u);
    v2 = (ULONG *)Pool2;
    if ( Pool2 )
    {
      if ( (_DWORD)i )
        memmove((void *)(Pool2 + 4), v4, 4LL * (unsigned int)i);
      *v2 = *(_DWORD *)(*(_QWORD *)(a1 + 40) + 8LL);
      v5 = BiSetBootEntryOrder(v2, (int)i + 1);
    }
    else
    {
      v5 = -1073741801;
    }
  }
LABEL_11:
  if ( v4 )
    ExFreePoolWithTag(v4, 0x4B444342u);
  if ( v2 )
    ExFreePoolWithTag(v2, 0x4B444342u);
  return v5;
}
