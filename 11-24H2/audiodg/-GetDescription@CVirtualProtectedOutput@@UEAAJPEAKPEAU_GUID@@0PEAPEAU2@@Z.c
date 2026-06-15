/*
 * XREFs of ?GetDescription@CVirtualProtectedOutput@@UEAAJPEAKPEAU_GUID@@0PEAPEAU2@@Z @ 0x14006D0B0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CVirtualProtectedOutput::GetDescription(
        CVirtualProtectedOutput *this,
        unsigned int *a2,
        struct _GUID *a3,
        unsigned int *a4,
        struct _GUID **a5)
{
  return (*(__int64 (__fastcall **)(_QWORD, unsigned int *, struct _GUID *, unsigned int *, struct _GUID **))(**((_QWORD **)this + 1) + 40LL))(
           *((_QWORD *)this + 1),
           a2,
           a3,
           a4,
           a5);
}
