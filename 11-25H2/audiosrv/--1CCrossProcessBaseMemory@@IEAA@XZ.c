/*
 * XREFs of ??1CCrossProcessBaseMemory@@IEAA@XZ @ 0x180079F9C
 * Callers:
 *     ??_ECCrossProcessKSMemory@@UEAAPEAXI@Z @ 0x180105BD0 (--_ECCrossProcessKSMemory@@UEAAPEAXI@Z.c)
 *     ??1?$CCrossProcessClientMemory@UControlData_V0@@@@UEAA@XZ @ 0x18015CB18 (--1-$CCrossProcessClientMemory@UControlData_V0@@@@UEAA@XZ.c)
 *     ??1?$CCrossProcessClientMemory@UControlData_V1@@@@UEAA@XZ @ 0x18015CB58 (--1-$CCrossProcessClientMemory@UControlData_V1@@@@UEAA@XZ.c)
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
  wil::details::unique_storage<wil::details::handle_invalid_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_invalid_resource_policy<int (*)(void *),&int CloseHandle(void *)>>((void **)this + 2);
}
