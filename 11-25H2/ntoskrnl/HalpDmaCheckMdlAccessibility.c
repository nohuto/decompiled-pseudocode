/*
 * XREFs of HalpDmaCheckMdlAccessibility @ 0x140332BD0
 * Callers:
 *     HalFlushAdapterBuffersEx @ 0x140332110 (HalFlushAdapterBuffersEx.c)
 *     HalMapTransferEx @ 0x140332780 (HalMapTransferEx.c)
 * Callees:
 *     IoAllocateMdl @ 0x1402D5350 (IoAllocateMdl.c)
 *     IoFreeMdl @ 0x1402D5960 (IoFreeMdl.c)
 *     MmMapLockedPagesSpecifyCache @ 0x140329CF0 (MmMapLockedPagesSpecifyCache.c)
 *     HalpDmaGetAdapterCacheAlignment @ 0x140333410 (HalpDmaGetAdapterCacheAlignment.c)
 *     IoBuildPartialMdl @ 0x1403A2E50 (IoBuildPartialMdl.c)
 */

char *__fastcall HalpDmaCheckMdlAccessibility(__int64 a1, _QWORD *a2, __int64 a3, ULONG a4, char *a5, struct _MDL **a6)
{
  _QWORD *v8; // rdi
  struct _MDL *v10; // rcx
  char v11; // r12
  char *result; // rax
  struct _MDL *Next; // rbx
  __int64 v14; // r9
  ULONG v15; // ebx
  unsigned int v16; // r13d
  int v17; // eax
  PMDL Mdl; // rax
  struct _MDL *v19; // r14
  unsigned int v21; // ecx
  ULONG v22; // eax
  PVOID VirtualAddress; // [rsp+30h] [rbp-38h]
  _QWORD *p_Next; // [rsp+98h] [rbp+30h]

  v8 = a2;
  *a6 = 0LL;
  p_Next = 0LL;
  if ( KeGetCurrentIrql() > 2u || *(_BYTE *)(a1 + 445) )
  {
LABEL_3:
    v10 = *a6;
    if ( *a6 )
    {
      do
      {
        Next = v10->Next;
        IoFreeMdl(v10);
        *a6 = Next;
        v10 = Next;
      }
      while ( Next );
    }
    v11 = 0;
  }
  else
  {
    v11 = 1;
    while ( v8 && a4 )
    {
      v14 = *((unsigned int *)v8 + 11);
      v15 = *((_DWORD *)v8 + 10) - a3;
      if ( v15 >= a4 )
        v15 = a4;
      v16 = v14 + a3;
      if ( !*(_BYTE *)(a1 + 445) )
      {
        v17 = HalpDmaGetAdapterCacheAlignment(a1, a2, a3, v14) - 1;
        if ( (v17 & v16) != 0 || (v15 & v17) != 0 )
          goto LABEL_3;
      }
      VirtualAddress = (PVOID)((unsigned int)a3 + v14 + v8[4]);
      Mdl = IoAllocateMdl(VirtualAddress, v15, 0, 0, 0LL);
      v19 = Mdl;
      if ( !Mdl )
        goto LABEL_3;
      if ( *a6 )
        *p_Next = Mdl;
      else
        *a6 = Mdl;
      p_Next = &Mdl->Next;
      if ( !((*((_BYTE *)v8 + 10) & 5) != 0
           ? (PVOID)v8[3]
           : MmMapLockedPagesSpecifyCache((PMDL)v8, 0, MmCached, 0LL, 0, 0x40000020u)) )
        goto LABEL_3;
      IoBuildPartialMdl((PMDL)v8, v19, VirtualAddress, v15);
      v21 = 4096 - (v16 & 0xFFF);
      a2 = &v8[((unsigned __int64)v16 >> 12) + 6];
      while ( v15 )
      {
        if ( (HalpDmaCvmConfiguration || *(_QWORD *)(a1 + 144) < *a2 << 12) && *(_DWORD *)(a1 + 520) != 3 )
          goto LABEL_3;
        ++a2;
        v22 = v15;
        if ( v15 >= v21 )
          v22 = v21;
        v21 = 4096;
        v15 -= v22;
        a4 -= v22;
      }
      v8 = (_QWORD *)*v8;
      a3 = 0LL;
    }
  }
  result = a5;
  *a5 = v11;
  return result;
}
