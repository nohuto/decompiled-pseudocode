/*
 * XREFs of ?ReleaseDrawListEntries@CDrawListCache@@AEAAXXZ @ 0x1801D6F60
 * Callers:
 *     ??1CDrawListCache@@EEAA@XZ @ 0x18014C318 (--1CDrawListCache@@EEAA@XZ.c)
 * Callees:
 *     ModuleFailFastForHRESULT @ 0x18024A244 (ModuleFailFastForHRESULT.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CDrawListCache::ReleaseDrawListEntries(CDrawListCache *this)
{
  __int64 *v1; // rsi
  __int64 v2; // rcx
  __int64 v3; // rax
  _QWORD *v4; // rbx
  unsigned __int64 v5; // rdx
  __int64 v6; // rcx
  _QWORD *v7; // rdi
  void *retaddr; // [rsp+28h] [rbp+0h]

  v1 = (__int64 *)((char *)this + 40);
  v2 = *((_QWORD *)this + 5);
  v3 = v2 & 3;
  if ( v3 == 1 )
  {
    v4 = (_QWORD *)(v2 & 0xFFFFFFFFFFFFFFFCuLL);
    v5 = v2 & 0xFFFFFFFFFFFFFFFCuLL;
    v6 = *(_QWORD *)((v2 & 0xFFFFFFFFFFFFFFFCuLL) - 16);
  }
  else
  {
    v6 = 0LL;
    if ( v3 )
    {
      if ( v3 == 2 )
      {
        v4 = 0LL;
        v5 = 0LL;
        goto LABEL_3;
      }
      if ( v3 != 3 )
        ModuleFailFastForHRESULT(-2147418113, retaddr);
    }
    v4 = v1;
    v5 = (unsigned __int64)v1;
    if ( v3 )
    {
      if ( (unsigned __int64)(v3 - 2) >= 2 )
        ModuleFailFastForHRESULT(-2147418113, retaddr);
    }
    else
    {
      v6 = 1LL;
    }
  }
LABEL_3:
  v7 = (_QWORD *)(v5 + 8 * v6);
  while ( v4 != v7 )
  {
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v4 + 8LL))(*v4);
    ++v4;
  }
  detail::vector_facade<CDrawListEntry *,detail::pointer_buffer_impl<CDrawListEntry *>>::clear(v1);
}
