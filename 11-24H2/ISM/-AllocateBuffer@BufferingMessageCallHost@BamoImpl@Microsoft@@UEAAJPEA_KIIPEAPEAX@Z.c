/*
 * XREFs of ?AllocateBuffer@BufferingMessageCallHost@BamoImpl@Microsoft@@UEAAJPEA_KIIPEAPEAX@Z @ 0x1800AC9E0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::BamoImpl::BufferingMessageCallHost::AllocateBuffer(
        Microsoft::BamoImpl::BufferingMessageCallHost *this,
        unsigned __int64 *a2)
{
  return (*(__int64 (__fastcall **)(_QWORD, unsigned __int64 *))(**((_QWORD **)this + 1) + 24LL))(
           *((_QWORD *)this + 1),
           a2);
}
