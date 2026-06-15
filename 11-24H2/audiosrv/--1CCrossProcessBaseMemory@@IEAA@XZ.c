/*
 * XREFs of ??1CCrossProcessBaseMemory@@IEAA@XZ @ 0x180068ABC
 * Callers:
 *     ??_ECCrossProcessKSMemory@@UEAAPEAXI@Z @ 0x18010BDD0 (--_ECCrossProcessKSMemory@@UEAAPEAXI@Z.c)
 *     ??1?$CCrossProcessClientMemory@UControlData_V0@@@@UEAA@XZ @ 0x1801658C8 (--1-$CCrossProcessClientMemory@UControlData_V0@@@@UEAA@XZ.c)
 *     ??1?$CCrossProcessClientMemory@UControlData_V1@@@@UEAA@XZ @ 0x180165908 (--1-$CCrossProcessClientMemory@UControlData_V1@@@@UEAA@XZ.c)
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
