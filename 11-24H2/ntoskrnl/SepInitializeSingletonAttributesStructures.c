/*
 * XREFs of SepInitializeSingletonAttributesStructures @ 0x140C3D02C
 * Callers:
 *     SepInitializationPhase1 @ 0x14078EEB0 (SepInitializationPhase1.c)
 * Callees:
 *     RtlpCreateHashTable @ 0x14047C520 (RtlpCreateHashTable.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 SepInitializeSingletonAttributesStructures()
{
  PEX_SPIN_LOCK v0; // rax
  unsigned int v1; // ebx
  ULONG_PTR v2; // rax
  _QWORD *Pool2; // rdi
  void *v4; // rax
  void *v5; // rsi
  _QWORD *v6; // rax
  PEX_SPIN_LOCK v7; // rcx
  void *v8; // rcx
  ULONG_PTR v9; // rcx

  v0 = SepSingletonGlobal;
  v1 = 0;
  *((_DWORD *)SepSingletonGlobal + 1) = 0;
  *((_QWORD *)v0 + 1) = 0LL;
  *((_DWORD *)v0 + 4) = 0;
  *v0 = 0;
  v2 = SeLuidToIndexMapping;
  *(_QWORD *)SeLuidToIndexMapping = 0LL;
  *(_QWORD *)(v2 + 8) = 0LL;
  if ( (SepTokenSingletonAttributesConfig & 3) == 3 )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(0x100uLL, 8uLL, 0x74446553uLL);
    if ( Pool2 )
    {
      v4 = (void *)ExAllocatePool2(0x40uLL, 0x600uLL, 0x74446553uLL);
      v5 = v4;
      if ( v4 )
      {
        memset_0(v4, 0, 0x600uLL);
        v6 = (_QWORD *)ExAllocatePool2(0x40uLL, 8uLL, 0x74446553uLL);
        v7 = SepSingletonGlobal;
        *((_QWORD *)SepSingletonGlobal + 1) = v6;
        if ( v6 )
        {
          *v6 = v5;
          ++*((_DWORD *)v7 + 1);
          if ( RtlpCreateHashTable((__int64 *)(SeLuidToIndexMapping + 8), 0x80u, 0, 0) )
          {
            v9 = SeLuidToIndexMapping;
            *(_DWORD *)(SeLuidToIndexMapping + 16) = 64;
            *(_QWORD *)(v9 + 24) = Pool2;
            *Pool2 = 0LL;
            return v1;
          }
        }
        v1 = -1073741801;
        ExFreePoolWithTag(v5, 0x74446553u);
      }
      else
      {
        v1 = -1073741801;
      }
      ExFreePoolWithTag(Pool2, 0x74446553u);
    }
    else
    {
      v1 = -1073741801;
    }
    v8 = (void *)*((_QWORD *)SepSingletonGlobal + 1);
    if ( v8 )
      ExFreePoolWithTag(v8, 0x74446553u);
  }
  return v1;
}
