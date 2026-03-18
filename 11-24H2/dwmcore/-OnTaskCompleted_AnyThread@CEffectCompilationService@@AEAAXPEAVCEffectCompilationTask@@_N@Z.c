/*
 * XREFs of ?OnTaskCompleted_AnyThread@CEffectCompilationService@@AEAAXPEAVCEffectCompilationTask@@_N@Z @ 0x1801E196C
 * Callers:
 *     ?Compile_WorkerThread@CEffectCompilationTask@@AEAAXXZ @ 0x1801E17CC (-Compile_WorkerThread@CEffectCompilationTask@@AEAAXXZ.c)
 *     ?Cancel_RenderThread@CEffectCompilationTask@@AEAAXXZ @ 0x180273DF4 (-Cancel_RenderThread@CEffectCompilationTask@@AEAAXXZ.c)
 * Callees:
 *     ?RemoveAt@?$DynArray@PEAVCScratchRenderTargetBitmap@@$0A@@@QEAAJI@Z @ 0x1801B002C (-RemoveAt@-$DynArray@PEAVCScratchRenderTargetBitmap@@$0A@@@QEAAJI@Z.c)
 */

void __fastcall CEffectCompilationService::OnTaskCompleted_AnyThread(
        CEffectCompilationService *this,
        struct CEffectCompilationTask *a2,
        char a3)
{
  struct _RTL_CRITICAL_SECTION *v3; // rdi
  __int64 v7; // rdx
  struct CEffectCompilationTask ***v8; // r10
  struct CEffectCompilationTask **v9; // rax
  __int64 v10; // rax
  struct CEffectCompilationTask **v11; // r9
  struct CEffectCompilationTask *v12; // rcx

  v3 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 16);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
  if ( !*((_BYTE *)this + 240) )
  {
    v7 = 0LL;
    v8 = (struct CEffectCompilationTask ***)((char *)this + 64);
    if ( *((_DWORD *)this + 22) )
    {
      v9 = *v8;
      do
      {
        if ( *v9 == a2 )
          break;
        v7 = (unsigned int)(v7 + 1);
        ++v9;
      }
      while ( (unsigned int)v7 < *((_DWORD *)this + 22) );
    }
    if ( (unsigned int)v7 < *((_DWORD *)this + 22) )
    {
      v10 = *((unsigned int *)this + 50);
      if ( (unsigned int)v7 < (unsigned int)v10 )
      {
        if ( !a3 )
          goto LABEL_12;
      }
      else
      {
        v11 = *v8;
        v12 = (*v8)[v7];
        v11[v7] = (*v8)[v10];
        v11[(unsigned int)v10] = v12;
        LODWORD(v7) = ++*((_DWORD *)this + 50);
        if ( !a3 )
        {
          *((_BYTE *)this + 242) = 1;
LABEL_12:
          SetEvent(*((HANDLE *)this + 7));
          goto LABEL_13;
        }
      }
      DynArray<CScratchRenderTargetBitmap *,0>::RemoveAt((__int64 *)this + 8, v7);
      --*((_DWORD *)this + 50);
      goto LABEL_12;
    }
  }
LABEL_13:
  if ( v3 )
    LeaveCriticalSection(v3);
}
