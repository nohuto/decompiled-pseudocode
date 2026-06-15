/*
 * XREFs of _dynamic_atexit_destructor_for__g_endpointStoreCache__ @ 0x180172FE0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@VCEndpointStore@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180029ADC (--1-$com_ptr_t@VCEndpointStore@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800A426C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void dynamic_atexit_destructor_for__g_endpointStoreCache__()
{
  volatile signed __int32 **v0; // rdi
  volatile signed __int32 *v1; // rbx

  v0 = (volatile signed __int32 **)qword_1801DB6D8;
  qword_1801DB6D8 = 0LL;
  if ( v0 )
  {
    do
    {
      v1 = *v0;
      wil::com_ptr_t<CEndpointStore,wil::err_returncode_policy>::~com_ptr_t<CEndpointStore,wil::err_returncode_policy>(v0 + 1);
      operator delete(v0, (const struct std::nothrow_t *)0x10);
      v0 = (volatile signed __int32 **)v1;
    }
    while ( v1 );
  }
}
