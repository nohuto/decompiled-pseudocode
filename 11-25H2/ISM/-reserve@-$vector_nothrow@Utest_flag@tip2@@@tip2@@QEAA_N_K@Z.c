/*
 * XREFs of ?reserve@?$vector_nothrow@Utest_flag@tip2@@@tip2@@QEAA_N_K@Z @ 0x180106F48
 * Callers:
 *     ??$load_nothrow@Utest_flag@tip2@@@tson@@YAXAEAVinput_archive@0@AEAV?$vector_nothrow@Utest_flag@tip2@@@tip2@@@Z @ 0x180105298 (--$load_nothrow@Utest_flag@tip2@@@tson@@YAXAEAVinput_archive@0@AEAV-$vector_nothrow@Utest_flag@t.c)
 * Callees:
 *     ??_Gtest_flag@tip2@@QEAAPEAXI@Z @ 0x1800A4624 (--_Gtest_flag@tip2@@QEAAPEAXI@Z.c)
 *     ??0test_flag@tip2@@QEAA@$$QEAU01@@Z @ 0x180105B7C (--0test_flag@tip2@@QEAA@$$QEAU01@@Z.c)
 */

char __fastcall tip2::vector_nothrow<tip2::test_flag>::reserve(void **a1, unsigned __int64 a2)
{
  HANDLE ProcessHeap; // rax
  LPVOID v5; // rax
  unsigned __int64 v6; // rbx
  LPVOID v7; // rbp
  __int64 v8; // r14
  void *v9; // rbx
  HANDLE v10; // rax

  if ( a2 <= (unsigned __int64)a1[1] )
  {
LABEL_9:
    LOBYTE(v5) = 1;
    return (char)v5;
  }
  ProcessHeap = GetProcessHeap();
  v5 = HeapAlloc(ProcessHeap, 0, 104 * a2);
  v6 = 0LL;
  v7 = v5;
  if ( v5 )
  {
    if ( *a1 )
    {
      if ( a1[2] )
      {
        v8 = 0LL;
        do
        {
          tip2::test_flag::test_flag((__int64)v7 + v8, (__int64)*a1 + v8);
          tip2::test_flag::`scalar deleting destructor'((PROPVARIANT *)((char *)*a1 + v8));
          ++v6;
          v8 += 104LL;
        }
        while ( v6 < (unsigned __int64)a1[2] );
      }
      v9 = *a1;
      v10 = GetProcessHeap();
      HeapFree(v10, 0, v9);
    }
    *a1 = v7;
    a1[1] = (void *)a2;
    goto LABEL_9;
  }
  return (char)v5;
}
