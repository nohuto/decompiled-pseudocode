/*
 * XREFs of ?RemoveFromCpuManager@GraphStreamingResourceManager@@UEAAXXZ @ 0x140045020
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall GraphStreamingResourceManager::RemoveFromCpuManager(GraphStreamingResourceManager *this)
{
  struct _RTL_CRITICAL_SECTION *v1; // rbx

  v1 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 16);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
  if ( *((_QWORD *)this + 34) )
    (*(void (__fastcall **)(char *))(*((_QWORD *)this - 1) + 80LL))((char *)this - 8);
  if ( v1 )
    LeaveCriticalSection(v1);
}
