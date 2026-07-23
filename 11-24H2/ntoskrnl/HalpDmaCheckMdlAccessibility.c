/*
 * XREFs of HalpDmaCheckMdlAccessibility @ 0x14038B860
 * Callers:
 *     HalMapTransferEx @ 0x14038B410 (HalMapTransferEx.c)
 *     HalFlushAdapterBuffersEx @ 0x14038BB40 (HalFlushAdapterBuffersEx.c)
 * Callees:
 *     IoFreeMdl @ 0x14025ED30 (IoFreeMdl.c)
 *     IoAllocateMdl @ 0x14025F1D0 (IoAllocateMdl.c)
 *     MmMapLockedPagesSpecifyCache @ 0x14029F5F0 (MmMapLockedPagesSpecifyCache.c)
 *     IoBuildPartialMdl @ 0x1403852A0 (IoBuildPartialMdl.c)
 *     HalpDmaGetAdapterCacheAlignment @ 0x140386AA0 (HalpDmaGetAdapterCacheAlignment.c)
 */

char *__fastcall HalpDmaCheckMdlAccessibility(
        __int64 a1,
        __int64 *a2,
        unsigned int a3,
        ULONG a4,
        char *a5,
        struct _MDL **a6)
{
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
  __int64 *v22; // rdx
  ULONG v23; // eax
  PVOID VirtualAddress; // [rsp+30h] [rbp-38h]
  _QWORD *p_Next; // [rsp+98h] [rbp+30h]

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
    while ( a2 && a4 )
    {
      v14 = *((unsigned int *)a2 + 11);
      v15 = *((_DWORD *)a2 + 10) - a3;
      if ( v15 >= a4 )
        v15 = a4;
      v16 = v14 + a3;
      if ( !*(_BYTE *)(a1 + 445) )
      {
        v17 = HalpDmaGetAdapterCacheAlignment(a1) - 1;
        if ( (v17 & v16) != 0 || (v15 & v17) != 0 )
          goto LABEL_3;
      }
      VirtualAddress = (PVOID)(a3 + v14 + a2[4]);
      Mdl = IoAllocateMdl(VirtualAddress, v15, 0, 0, 0LL);
      v19 = Mdl;
      if ( !Mdl )
        goto LABEL_3;
      if ( *a6 )
        *p_Next = Mdl;
      else
        *a6 = Mdl;
      p_Next = &Mdl->Next;
      if ( !((*((_BYTE *)a2 + 10) & 5) != 0
           ? (PVOID)a2[3]
           : MmMapLockedPagesSpecifyCache((PMDL)a2, 0, MmCached, 0LL, 0, 0x40000020u)) )
        goto LABEL_3;
      IoBuildPartialMdl((PMDL)a2, v19, VirtualAddress, v15);
      v21 = 4096 - (v16 & 0xFFF);
      v22 = &a2[((unsigned __int64)v16 >> 12) + 6];
      while ( v15 )
      {
        if ( (HalpDmaCvmConfiguration || *(_QWORD *)(a1 + 144) < (unsigned __int64)(*v22 << 12))
          && *(_DWORD *)(a1 + 520) != 3 )
        {
          goto LABEL_3;
        }
        ++v22;
        v23 = v15;
        if ( v15 >= v21 )
          v23 = v21;
        v21 = 4096;
        v15 -= v23;
        a4 -= v23;
      }
      a2 = (__int64 *)*a2;
      a3 = 0;
    }
  }
  result = a5;
  *a5 = v11;
  return result;
}
