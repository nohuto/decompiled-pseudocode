/*
 * XREFs of ?ExecuteObjectMain@CAtlComModule@ATL@@QEAAX_N@Z @ 0x1400438F0
 * Callers:
 *     ??0?$CAtlExeModuleT@VCAudioDGModule@@@ATL@@QEAA@XZ @ 0x140049AB8 (--0-$CAtlExeModuleT@VCAudioDGModule@@@ATL@@QEAA@XZ.c)
 *     ??1?$CAtlExeModuleT@VCAudioDGModule@@@ATL@@UEAA@XZ @ 0x1400567DC (--1-$CAtlExeModuleT@VCAudioDGModule@@@ATL@@UEAA@XZ.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall ATL::CAtlComModule::ExecuteObjectMain(ATL::CAtlComModule *this, char a2)
{
  struct ATL::_ATL_OBJMAP_ENTRY30 **v2; // rbx
  struct ATL::_ATL_OBJMAP_ENTRY30 **v4; // rax

  v2 = off_1400C3510;
  v4 = (struct ATL::_ATL_OBJMAP_ENTRY30 **)off_1400C3518;
  while ( v2 < v4 )
  {
    if ( *v2 )
    {
      LOBYTE(this) = a2;
      (*((void (__fastcall **)(ATL::CAtlComModule *))*v2 + 8))(this);
      v4 = (struct ATL::_ATL_OBJMAP_ENTRY30 **)off_1400C3518;
    }
    ++v2;
  }
}
