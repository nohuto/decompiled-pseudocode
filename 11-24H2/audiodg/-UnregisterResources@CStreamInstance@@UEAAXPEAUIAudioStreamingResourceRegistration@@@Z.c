/*
 * XREFs of ?UnregisterResources@CStreamInstance@@UEAAXPEAUIAudioStreamingResourceRegistration@@@Z @ 0x1400412B0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CStreamInstance::UnregisterResources(
        CStreamInstance *this,
        struct IAudioStreamingResourceRegistration *a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbx

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 144);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 144));
  if ( *((_QWORD *)this + 23) )
  {
    (*(void (__fastcall **)(struct IAudioStreamingResourceRegistration *))(*(_QWORD *)a2 + 32LL))(a2);
    *((_QWORD *)this + 23) = 0LL;
  }
  if ( v2 )
    LeaveCriticalSection(v2);
}
