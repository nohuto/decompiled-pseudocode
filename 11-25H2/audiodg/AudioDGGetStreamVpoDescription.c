/*
 * XREFs of AudioDGGetStreamVpoDescription @ 0x14006D8A0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x140058DE0 (__security_check_cookie.c)
 *     memcpy_0 @ 0x14005B571 (memcpy_0.c)
 *     MIDL_user_allocate @ 0x140065A20 (MIDL_user_allocate.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall AudioDGGetStreamVpoDescription(
        __int64 a1,
        __int64 a2,
        _DWORD *a3,
        _OWORD *a4,
        unsigned int *a5,
        _QWORD *a6)
{
  __int64 (__fastcall *v6)(__int64, int *, __int128 *, unsigned int *, void **); // rax
  int v9; // esi
  size_t v10; // rbx
  void *v11; // rax
  void *v12; // rdi
  __int128 v13; // xmm0
  unsigned int v14; // ecx
  unsigned int v16; // [rsp+30h] [rbp-30h] BYREF
  int v17; // [rsp+34h] [rbp-2Ch] BYREF
  void *Src; // [rsp+38h] [rbp-28h] BYREF
  __int128 v19; // [rsp+40h] [rbp-20h] BYREF

  v6 = *(__int64 (__fastcall **)(__int64, int *, __int128 *, unsigned int *, void **))(*(_QWORD *)a2 + 24LL);
  v17 = 0;
  v16 = 0;
  Src = 0LL;
  v19 = 0LL;
  v9 = v6(a2, &v17, &v19, &v16, &Src);
  if ( v9 >= 0 )
  {
    v10 = 16LL * v16;
    v11 = MIDL_user_allocate(v10);
    v12 = v11;
    if ( v11 )
    {
      memcpy_0(v11, Src, v10);
      v13 = v19;
      *a3 = v17;
      v14 = v16;
      *a4 = v13;
      *a5 = v14;
      *a6 = v12;
    }
    CoTaskMemFree(Src);
  }
  return (unsigned int)v9;
}
