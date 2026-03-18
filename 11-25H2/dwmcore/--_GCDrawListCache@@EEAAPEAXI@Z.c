/*
 * XREFs of ??_GCDrawListCache@@EEAAPEAXI@Z @ 0x18000E090
 * Callers:
 *     ??1CDrawListEntryBuilder@@QEAA@XZ @ 0x18000F0B8 (--1CDrawListEntryBuilder@@QEAA@XZ.c)
 * Callees:
 *     ??1?$pointer_buffer_impl@PEAVCDrawListEntry@@@detail@@QEAA@XZ @ 0x18000E208 (--1-$pointer_buffer_impl@PEAVCDrawListEntry@@@detail@@QEAA@XZ.c)
 *     ?clear@?$vector_facade@PEAVCDrawListEntry@@V?$pointer_buffer_impl@PEAVCDrawListEntry@@@detail@@@detail@@QEAAXXZ @ 0x1800D2540 (-clear@-$vector_facade@PEAVCDrawListEntry@@V-$pointer_buffer_impl@PEAVCDrawListEntry@@@detail@@@.c)
 *     ?Free@?$CThreadLocalObjectCache@VCDrawListCache@@V1@@@SAXPEAX@Z @ 0x18014C350 (-Free@-$CThreadLocalObjectCache@VCDrawListCache@@V1@@@SAXPEAX@Z.c)
 *     ?FinalRelease@?$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ @ 0x180217010 (-FinalRelease@-$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ.c)
 *     ModuleFailFastForHRESULT @ 0x18024A244 (ModuleFailFastForHRESULT.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

CDrawListCache *__fastcall CDrawListCache::`scalar deleting destructor'(CDrawListCache *this, char a2)
{
  __int64 v2; // r9
  char *v3; // rsi
  __int64 v4; // r10
  __int64 v7; // rax
  char *v8; // rbx
  char *v9; // rcx
  char *v10; // rbp
  __int64 v12; // rax
  void *retaddr; // [rsp+38h] [rbp+0h]

  v2 = 0LL;
  *(_QWORD *)this = &CDrawListCache::`vftable';
  v3 = (char *)this + 40;
  v4 = *((_QWORD *)this + 5);
  v7 = v4 & 3;
  if ( (v4 & 3) != 0 )
  {
    if ( (*((_DWORD *)this + 10) & 3) == 1LL )
    {
      v8 = (char *)(v4 & 0xFFFFFFFFFFFFFFFCuLL);
LABEL_4:
      v9 = (char *)(v4 & 0xFFFFFFFFFFFFFFFCuLL);
LABEL_5:
      v2 = *(_QWORD *)((v4 & 0xFFFFFFFFFFFFFFFCuLL) - 16);
      goto LABEL_6;
    }
    if ( (*((_DWORD *)this + 10) & 3) == 2LL )
    {
      v8 = 0LL;
      goto LABEL_23;
    }
    if ( (*((_DWORD *)this + 10) & 3) != 3LL )
      ModuleFailFastForHRESULT(-2147418113, retaddr);
  }
  v8 = (char *)this + 40;
  if ( (v4 & 3) != 0 )
  {
    if ( v7 == 1 )
      goto LABEL_4;
    if ( v7 == 2 )
    {
LABEL_23:
      v9 = 0LL;
      goto LABEL_6;
    }
  }
  v9 = (char *)this + 40;
  if ( (v4 & 3) == 0 )
  {
    v2 = 1LL;
    goto LABEL_6;
  }
  v12 = v7 - 1;
  if ( !v12 )
    goto LABEL_5;
  if ( (unsigned __int64)(v12 - 1) >= 2 )
    ModuleFailFastForHRESULT(-2147418113, retaddr);
LABEL_6:
  v10 = &v9[8 * v2];
  while ( v8 != v10 )
  {
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v8 + 8LL))(*(_QWORD *)v8);
    v8 += 8;
  }
  detail::vector_facade<CDrawListEntry *,detail::pointer_buffer_impl<CDrawListEntry *>>::clear(v3);
  detail::vector_facade<CDrawListEntry *,detail::pointer_buffer_impl<CDrawListEntry *>>::clear(v3);
  detail::pointer_buffer_impl<CDrawListEntry *>::~pointer_buffer_impl<CDrawListEntry *>(v3);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CMILRefCountBaseT<IUnknownWeakRef,CMilObjectDeleter>::FinalRelease(this, 88LL);
    else
      CThreadLocalObjectCache<CDrawListCache,CDrawListCache>::Free(this);
  }
  return this;
}
