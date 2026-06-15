/*
 * XREFs of ??_GCAudioServiceModule@@UEAAPEAXI@Z @ 0x1800CBE70
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800A426C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1?$CAtlExeModuleT@VCAudioServiceModule@@@ATL@@UEAA@XZ @ 0x1800CB758 (--1-$CAtlExeModuleT@VCAudioServiceModule@@@ATL@@UEAA@XZ.c)
 */

CAudioServiceModule *__fastcall CAudioServiceModule::`scalar deleting destructor'(CAudioServiceModule *this, char a2)
{
  *(_QWORD *)this = &CAudioServiceModule::`vftable';
  ATL::CAtlExeModuleT<CAudioServiceModule>::~CAtlExeModuleT<CAudioServiceModule>(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x68);
  return this;
}
