/*
 * XREFs of ?CreateReadBuffer@RIMDeviceCollection@@AEAAJK@Z @ 0x18004DBDC
 * Callers:
 *     ?InitializeRIM@RIMDeviceCollection@@IEAAJKPEAPEAX@Z @ 0x18004DADC (-InitializeRIM@RIMDeviceCollection@@IEAAJKPEAPEAX@Z.c)
 *     ?OnReadEvent@RIMDeviceCollection@@AEAAJXZ @ 0x18004DCAC (-OnReadEvent@RIMDeviceCollection@@AEAAJXZ.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009D588 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x18009E57C (--_U@YAPEAX_K@Z.c)
 */

__int64 __fastcall RIMDeviceCollection::CreateReadBuffer(RIMDeviceCollection *this, const struct std::nothrow_t *a2)
{
  unsigned __int64 v3; // rdi
  void *v4; // rcx
  __int64 result; // rax

  v3 = (unsigned int)a2;
  v4 = (void *)*((_QWORD *)this + 335);
  if ( v4 )
  {
    operator delete(v4, a2);
    *((_QWORD *)this + 335) = 0LL;
  }
  *((_DWORD *)this + 672) = 0;
  *((_QWORD *)this + 335) = operator new[](v3);
  result = 0LL;
  *((_DWORD *)this + 672) = v3;
  return result;
}
