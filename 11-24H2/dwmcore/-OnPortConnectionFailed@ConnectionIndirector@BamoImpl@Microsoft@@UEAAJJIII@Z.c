/*
 * XREFs of ?OnPortConnectionFailed@ConnectionIndirector@BamoImpl@Microsoft@@UEAAJJIII@Z @ 0x18026F4B0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::BamoImpl::ConnectionIndirector::OnPortConnectionFailed(
        Microsoft::BamoImpl::ConnectionIndirector *this)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *((_QWORD *)this + 2);
  result = 0LL;
  if ( *(_QWORD *)(v1 + 64) )
    return (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v1 + 16) + 40LL))(*(_QWORD *)(v1 + 16));
  return result;
}
