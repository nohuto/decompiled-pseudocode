/*
 * XREFs of ?_SetEmptyCofuncModeSet@DMMVIDPNTARGET@@IEAAXXZ @ 0x14001CE9C
 * Callers:
 *     ??0DMMVIDPNTARGET@@QEAA@QEAVDMMVIDPNTARGETSET@@QEAVDMMVIDEOPRESENTTARGET@@@Z @ 0x14001CBEC (--0DMMVIDPNTARGET@@QEAA@QEAVDMMVIDPNTARGETSET@@QEAVDMMVIDEOPRESENTTARGET@@@Z.c)
 *     ?RemovePath@DMMVIDPNTOPOLOGY@@QEAAJIIPEAPEAVDMMVIDPNPRESENTPATH@@@Z @ 0x1402CE928 (-RemovePath@DMMVIDPNTOPOLOGY@@QEAAJIIPEAPEAVDMMVIDPNPRESENTPATH@@@Z.c)
 * Callees:
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x14001B3E0 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ??0DMMVIDPNTARGETMODESET@@IEAA@PEAVDMMVIDPNTARGET@@@Z @ 0x14001CF34 (--0DMMVIDPNTARGETMODESET@@IEAA@PEAVDMMVIDPNTARGET@@@Z.c)
 */

void __fastcall DMMVIDPNTARGET::_SetEmptyCofuncModeSet(DMMVIDPNTARGET *this, __int64 a2, __int64 a3, __int64 a4)
{
  DMMVIDPNTARGETMODESET *Pool2; // rax
  DMMVIDPNTARGETMODESET *v6; // rax
  DMMVIDPNTARGETMODESET *v7; // rdi
  __int64 v8; // rcx

  while ( 1 )
  {
    Pool2 = (DMMVIDPNTARGETMODESET *)ExAllocatePool2(256LL, 152LL, 1313891414LL, a4);
    if ( Pool2 )
    {
      v6 = DMMVIDPNTARGETMODESET::DMMVIDPNTARGETMODESET(Pool2, this);
      v7 = v6;
      if ( v6 )
        break;
    }
    WdLogSingleEntry0(6LL);
    WdLogGlobalForLineNumber = 1200;
    ZwYieldExecution();
  }
  v8 = *((_QWORD *)this + 13);
  if ( v8 && v6 != (DMMVIDPNTARGETMODESET *)v8 )
    ReferenceCounted::Release((ReferenceCounted *)(v8 + 88));
  *((_QWORD *)this + 13) = v7;
}
