/*
 * XREFs of ?_SetEmptyCofuncModeSet@DMMVIDPNSOURCE@@IEAAXXZ @ 0x14001D080
 * Callers:
 *     ??0DMMVIDPNSOURCE@@QEAA@QEAVDMMVIDPNSOURCESET@@QEAVDMMVIDEOPRESENTSOURCE@@@Z @ 0x14001D2D0 (--0DMMVIDPNSOURCE@@QEAA@QEAVDMMVIDPNSOURCESET@@QEAVDMMVIDEOPRESENTSOURCE@@@Z.c)
 *     ?RemovePath@DMMVIDPNTOPOLOGY@@QEAAJIIPEAPEAVDMMVIDPNPRESENTPATH@@@Z @ 0x1402CE928 (-RemovePath@DMMVIDPNTOPOLOGY@@QEAAJIIPEAPEAVDMMVIDPNPRESENTPATH@@@Z.c)
 * Callees:
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x14001B3E0 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ??0DMMVIDPNSOURCEMODESET@@IEAA@PEAVDMMVIDPNSOURCE@@@Z @ 0x14001D118 (--0DMMVIDPNSOURCEMODESET@@IEAA@PEAVDMMVIDPNSOURCE@@@Z.c)
 */

void __fastcall DMMVIDPNSOURCE::_SetEmptyCofuncModeSet(DMMVIDPNSOURCE *this, __int64 a2, __int64 a3, __int64 a4)
{
  DMMVIDPNSOURCEMODESET *Pool2; // rax
  DMMVIDPNSOURCEMODESET *v6; // rax
  DMMVIDPNSOURCEMODESET *v7; // rdi
  __int64 v8; // rcx

  while ( 1 )
  {
    Pool2 = (DMMVIDPNSOURCEMODESET *)ExAllocatePool2(256LL, 152LL, 1313891414LL, a4);
    if ( Pool2 )
    {
      v6 = DMMVIDPNSOURCEMODESET::DMMVIDPNSOURCEMODESET(Pool2, this);
      v7 = v6;
      if ( v6 )
        break;
    }
    WdLogSingleEntry0(6LL);
    WdLogGlobalForLineNumber = 1189;
    ZwYieldExecution();
  }
  v8 = *((_QWORD *)this + 13);
  if ( v8 && v6 != (DMMVIDPNSOURCEMODESET *)v8 )
    ReferenceCounted::Release((ReferenceCounted *)(v8 + 88));
  *((_QWORD *)this + 13) = v7;
}
