/*
 * XREFs of ?UnloadRuntime@CMmcssTask@@AEAAXXZ @ 0x180266D88
 * Callers:
 *     ?LoadRuntime@CMmcssTask@@AEAAJXZ @ 0x1800FE280 (-LoadRuntime@CMmcssTask@@AEAAJXZ.c)
 *     ??1CMmcssTask@@QEAA@XZ @ 0x180266D60 (--1CMmcssTask@@QEAA@XZ.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18025C2F4 (--3@YAXPEAX_K@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CMmcssTask::UnloadRuntime(CMmcssTask *this)
{
  __int64 v2; // rcx
  void (*v3)(void); // rax
  HMODULE v4; // rcx

  v2 = *((_QWORD *)this + 5);
  if ( v2 )
  {
    v3 = (void (*)(void))*((_QWORD *)this + 8);
    if ( v3 && *(_QWORD *)(v2 + 136) )
    {
      v3();
      *(_DWORD *)(*((_QWORD *)this + 5) + 128LL) = 0;
    }
    operator delete(*((void **)this + 5));
    *((_QWORD *)this + 5) = 0LL;
  }
  v4 = (HMODULE)*((_QWORD *)this + 6);
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  FreeLibrary(v4);
  *((_QWORD *)this + 6) = 0LL;
}
