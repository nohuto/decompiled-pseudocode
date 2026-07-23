/*
 * XREFs of WmipGenerateMofResourceNotification @ 0x140AAB0F4
 * Callers:
 *     WmipAddDataSource @ 0x1409B01A8 (WmipAddDataSource.c)
 *     WmipMRCleanup @ 0x140AA14B0 (WmipMRCleanup.c)
 * Callees:
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     WmipProcessEvent @ 0x1409B1F20 (WmipProcessEvent.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall WmipGenerateMofResourceNotification(_WORD *Src, _WORD *a2, _OWORD *a3, int a4)
{
  __int64 v4; // rax
  __int64 v6; // r10
  __int64 v10; // rsi
  __int64 v11; // rbp
  ULONG_PTR v12; // rbx
  char *Pool2; // rax
  char *v14; // rdi
  int v15; // eax
  size_t v16; // rsi
  __int64 v17; // rdx

  v4 = -1LL;
  v6 = -1LL;
  do
    ++v6;
  while ( Src[v6] );
  v10 = 2 * v6 + 4;
  do
    ++v4;
  while ( a2[v4] );
  v11 = 2 * v4 + 4;
  v12 = v10 + 2 * v4 + 76;
  Pool2 = (char *)ExAllocatePool2(0x100uLL, v12, 0x70696D57u);
  v14 = Pool2;
  if ( Pool2 )
  {
    memset_0(Pool2, 0, v12);
    *(_DWORD *)v14 = v12;
    *((_DWORD *)v14 + 1) = a4;
    *((_QWORD *)v14 + 1) = 1LL;
    *((_DWORD *)v14 + 11) = 266;
    *(_OWORD *)(v14 + 24) = *a3;
    *((_QWORD *)v14 + 2) = MEMORY[0xFFFFF78000000014];
    v15 = v10 + v11;
    *((_WORD *)v14 + 32) = 0;
    v16 = v10 - 2;
    *((_DWORD *)v14 + 12) = 64;
    *((_DWORD *)v14 + 14) = 72;
    *((_DWORD *)v14 + 15) = v15;
    *((_WORD *)v14 + 36) = v16;
    memmove(v14 + 74, Src, v16);
    v16 >>= 1;
    *(_WORD *)&v14[2 * v16 + 74] = v11 - 2;
    memmove(&v14[2 * v16 + 76], a2, v11 - 2);
    LOBYTE(v17) = 1;
    WmipProcessEvent((unsigned int *)v14, v17, 0);
    ExFreePoolWithTag(v14, 0);
  }
}
