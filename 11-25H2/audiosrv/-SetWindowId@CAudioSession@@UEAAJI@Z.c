/*
 * XREFs of ?SetWindowId@CAudioSession@@UEAAJI@Z @ 0x1800743C0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CAudioSession::SetWindowId(CAudioSession *this, unsigned int a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rdi
  __int64 v5; // rbp
  __int64 i; // rbx
  __int64 v7; // rcx

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 64);
  *((_DWORD *)this + 52) = a2;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 64));
  v5 = *((_QWORD *)this + 15);
  for ( i = *((_QWORD *)this + 14); i != v5; i += 8LL )
  {
    v7 = *(_QWORD *)(*(_QWORD *)i + 216LL);
    *(_DWORD *)(*(_QWORD *)i + 80LL) = a2;
    if ( v7 )
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v7 + 32LL))(v7, a2);
  }
  if ( v2 )
    LeaveCriticalSection(v2);
  return 0LL;
}
