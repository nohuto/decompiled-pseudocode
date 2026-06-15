/*
 * XREFs of ??1CHandle@ATL@@QEAA@XZ @ 0x140065174
 * Callers:
 *     ?PreMessageLoop@?$CAtlExeModuleT@VCAudioDGModule@@@ATL@@QEAAJH@Z @ 0x14001E210 (-PreMessageLoop@-$CAtlExeModuleT@VCAudioDGModule@@@ATL@@QEAAJH@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall ATL::CHandle::~CHandle(void **this)
{
  void *v2; // rcx

  v2 = *this;
  if ( v2 )
  {
    CloseHandle(v2);
    *this = 0LL;
  }
}
