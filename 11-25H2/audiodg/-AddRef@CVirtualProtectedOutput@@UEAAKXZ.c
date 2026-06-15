/*
 * XREFs of ?AddRef@CVirtualProtectedOutput@@UEAAKXZ @ 0x14006CDE0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CVirtualProtectedOutput::AddRef(CVirtualProtectedOutput *this)
{
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 1) + 8LL))(*((_QWORD *)this + 1));
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)this + 4);
}
