/*
 * XREFs of ?clear@?$vector_nothrow@Utest_flag@tip2@@@tip2@@QEAAXXZ @ 0x180098A20
 * Callers:
 *     ??1test_state@tip2@@QEAA@XZ @ 0x18009892C (--1test_state@tip2@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

void __fastcall tip2::vector_nothrow<tip2::test_flag>::clear(_QWORD *a1)
{
  unsigned __int64 *v1; // rdi
  unsigned __int64 v3; // rbp
  __int64 v4; // rbx
  void *v5; // rbx
  HANDLE ProcessHeap; // rax

  v1 = a1 + 2;
  if ( *a1 )
  {
    v3 = 0LL;
    if ( *v1 )
    {
      v4 = 0LL;
      do
      {
        PropVariantClear((PROPVARIANT *)(v4 + *a1 + 16LL));
        ++v3;
        v4 += 104LL;
      }
      while ( v3 < *v1 );
    }
    v5 = (void *)*a1;
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, v5);
    *a1 = 0LL;
  }
  a1[1] = 0LL;
  *v1 = 0LL;
}
