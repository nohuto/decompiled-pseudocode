/*
 * XREFs of ?GetDataProviderId@AnimationDataProvider@@UEBA_KXZ @ 0x180100AA0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

unsigned __int64 __fastcall AnimationDataProvider::GetDataProviderId(AnimationDataProvider *this)
{
  return *(_QWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*((_QWORD *)this + 4) + 8LL) + 40LL))(*((_QWORD *)this + 4) + 8LL);
}
