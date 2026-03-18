/*
 * XREFs of _dynamic_atexit_destructor_for__CCustomKernelEffect::s_rgspCache__ @ 0x1802E8B80
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$unique_ptr@VCShaderCache@@U?$default_delete@VCShaderCache@@@std@@@std@@QEAA@XZ @ 0x1802E4DE0 (--1-$unique_ptr@VCShaderCache@@U-$default_delete@VCShaderCache@@@std@@@std@@QEAA@XZ.c)
 */

CShaderCache *dynamic_atexit_destructor_for__CCustomKernelEffect::s_rgspCache__()
{
  __int64 v0; // rbx
  CShaderCache **v1; // rdi
  CShaderCache *result; // rax

  v0 = 9LL;
  v1 = (CShaderCache **)&qword_180406C58;
  do
  {
    result = std::unique_ptr<CShaderCache>::~unique_ptr<CShaderCache>(--v1);
    --v0;
  }
  while ( v0 );
  return result;
}
