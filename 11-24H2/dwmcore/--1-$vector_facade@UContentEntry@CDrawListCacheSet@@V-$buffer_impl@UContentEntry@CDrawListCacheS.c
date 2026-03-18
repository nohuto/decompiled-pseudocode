/*
 * XREFs of ??1?$vector_facade@UContentEntry@CDrawListCacheSet@@V?$buffer_impl@UContentEntry@CDrawListCacheSet@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA@XZ @ 0x18010FBC4
 * Callers:
 *     ??1CTreeData@@UEAA@XZ @ 0x180032F54 (--1CTreeData@@UEAA@XZ.c)
 *     ??1CProjectedShadow@@MEAA@XZ @ 0x1801D709C (--1CProjectedShadow@@MEAA@XZ.c)
 * Callees:
 *     ??1?$com_ptr_t@VCDrawListCache@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1801100F0 (--1-$com_ptr_t@VCDrawListCache@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 */

int __fastcall detail::vector_facade<CDrawListCacheSet::ContentEntry,detail::buffer_impl<CDrawListCacheSet::ContentEntry,2,1,detail::liberal_expansion_policy>>::~vector_facade<CDrawListCacheSet::ContentEntry,detail::buffer_impl<CDrawListCacheSet::ContentEntry,2,1,detail::liberal_expansion_policy>>(
        char **a1)
{
  char *v1; // rbx
  __int64 v3; // rsi
  __int64 v4; // rsi
  char *v5; // rbp
  int result; // eax
  HANDLE ProcessHeap; // rax

  v1 = *a1;
  v3 = (a1[1] - *a1) >> 4;
  if ( v3 )
  {
    v4 = 16 * v3;
    v5 = *a1;
    if ( v1 != &v1[v4] )
    {
      do
      {
        wil::com_ptr_t<CDrawListCache,wil::err_returncode_policy>::~com_ptr_t<CDrawListCache,wil::err_returncode_policy>(v5 + 8);
        v5 += 16;
      }
      while ( v5 != &v1[v4] );
      v1 = *a1;
    }
    a1[1] -= v4;
  }
  result = (_DWORD)a1 + 24;
  *a1 = 0LL;
  if ( v1 == (char *)(a1 + 3) )
    v1 = 0LL;
  if ( v1 )
  {
    ProcessHeap = GetProcessHeap();
    return HeapFree(ProcessHeap, 0, v1);
  }
  return result;
}
