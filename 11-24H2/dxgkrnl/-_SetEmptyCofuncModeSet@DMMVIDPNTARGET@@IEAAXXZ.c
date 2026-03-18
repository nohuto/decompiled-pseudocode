/*
 * XREFs of ?_SetEmptyCofuncModeSet@DMMVIDPNTARGET@@IEAAXXZ @ 0x14000D8BC
 * Callers:
 *     ??0DMMVIDPNTARGET@@QEAA@QEAVDMMVIDPNTARGETSET@@QEAVDMMVIDEOPRESENTTARGET@@@Z @ 0x14000D60C (--0DMMVIDPNTARGET@@QEAA@QEAVDMMVIDPNTARGETSET@@QEAVDMMVIDEOPRESENTTARGET@@@Z.c)
 *     ?RemovePath@DMMVIDPNTOPOLOGY@@QEAAJIIPEAPEAVDMMVIDPNPRESENTPATH@@@Z @ 0x14031A9CC (-RemovePath@DMMVIDPNTOPOLOGY@@QEAAJIIPEAPEAVDMMVIDPNPRESENTPATH@@@Z.c)
 * Callees:
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x14000BE00 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ??0DMMVIDPNTARGETMODESET@@IEAA@PEAVDMMVIDPNTARGET@@@Z @ 0x14000D954 (--0DMMVIDPNTARGETMODESET@@IEAA@PEAVDMMVIDPNTARGET@@@Z.c)
 */

void __fastcall DMMVIDPNTARGET::_SetEmptyCofuncModeSet(DMMVIDPNTARGET *this)
{
  DMMVIDPNTARGETMODESET *Pool2; // rax
  DMMVIDPNTARGETMODESET *v3; // rax
  DMMVIDPNTARGETMODESET *v4; // rdi
  __int64 v5; // rcx

  while ( 1 )
  {
    Pool2 = (DMMVIDPNTARGETMODESET *)ExAllocatePool2(256LL, 152LL, 1313891414LL);
    if ( Pool2 )
    {
      v3 = DMMVIDPNTARGETMODESET::DMMVIDPNTARGETMODESET(Pool2, this);
      v4 = v3;
      if ( v3 )
        break;
    }
    WdLogSingleEntry0(6LL);
    WdLogGlobalForLineNumber = 1200;
    ZwYieldExecution();
  }
  v5 = *((_QWORD *)this + 13);
  if ( v5 && v3 != (DMMVIDPNTARGETMODESET *)v5 )
    ReferenceCounted::Release((ReferenceCounted *)(v5 + 88));
  *((_QWORD *)this + 13) = v4;
}
