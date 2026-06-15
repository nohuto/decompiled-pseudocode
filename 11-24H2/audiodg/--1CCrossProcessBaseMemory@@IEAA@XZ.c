/*
 * XREFs of ??1CCrossProcessBaseMemory@@IEAA@XZ @ 0x14003F444
 * Callers:
 *     ??_E?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VCCrossProcessBaseMemory@@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x14003F400 (--_E-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@VCCrossProcessBaseMemory@@@WRL@Micros.c)
 * Callees:
 *     <none>
 */

void __fastcall CCrossProcessBaseMemory::~CCrossProcessBaseMemory(CCrossProcessBaseMemory *this)
{
  const void *v2; // rcx

  *(_QWORD *)this = &CCrossProcessBaseMemory::`vftable';
  v2 = (const void *)*((_QWORD *)this + 4);
  if ( v2 )
  {
    UnmapViewOfFile(v2);
    *((_QWORD *)this + 4) = 0LL;
  }
  wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>((void **)this + 2);
}
