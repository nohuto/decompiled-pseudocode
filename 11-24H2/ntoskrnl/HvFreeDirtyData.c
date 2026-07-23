/*
 * XREFs of HvFreeDirtyData @ 0x140964C50
 * Callers:
 *     CmpDeleteHive @ 0x140840A1C (CmpDeleteHive.c)
 *     HvFoldBackDirtyData @ 0x140963288 (HvFoldBackDirtyData.c)
 *     CmpFlushHive @ 0x140965AC4 (CmpFlushHive.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
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
