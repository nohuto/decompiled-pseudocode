/*
 * XREFs of HvFreeDirtyData @ 0x140A2F2C8
 * Callers:
 *     CmpDeleteHive @ 0x1408488CC (CmpDeleteHive.c)
 *     CmpFlushHive @ 0x140883A5C (CmpFlushHive.c)
 *     HvFoldBackDirtyData @ 0x140A2F230 (HvFoldBackDirtyData.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

void __fastcall HvFreeDirtyData(__int64 a1)
{
  void *v2; // rcx
  PVOID *v3; // rdi
  __int64 i; // rsi
  void *v5; // rcx

  v2 = *(void **)(a1 + 1696);
  if ( v2 )
  {
    ExFreePoolWithTag(v2, 0);
    *(_DWORD *)(a1 + 1688) = 0;
    v3 = (PVOID *)(a1 + 1712);
    *(_QWORD *)(a1 + 1696) = 0LL;
    for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 1720); i = (unsigned int)(i + 1) )
    {
      v5 = (void *)*((_QWORD *)*v3 + 3 * i + 1);
      if ( v5 )
      {
        ExFreePoolWithTag(v5, 0);
        *((_QWORD *)*v3 + 3 * i + 1) = 0LL;
      }
    }
    ExFreePoolWithTag(*v3, 0);
    *v3 = 0LL;
    *(_DWORD *)(a1 + 1720) = 0;
    *(_DWORD *)(a1 + 1724) = 0;
  }
}
