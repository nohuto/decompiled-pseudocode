/*
 * XREFs of imp_WdfObjectReferenceActual @ 0x14005A2F0
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z @ 0x140049FC8 (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x14008305C (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     _guard_dispatch_icall @ 0x1400AC750 (_guard_dispatch_icall.c)
 */

void __fastcall imp_WdfObjectReferenceActual(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 Object,
        void *Tag,
        int Line,
        char *File)
{
  volatile signed __int32 *v5; // rcx
  __int64 v6; // rdx
  unsigned int RefCount; // edx
  FxTagTracker *v8; // rcx
  void *retaddr; // [rsp+38h] [rbp+0h]

  if ( !Object )
    FxVerifierNullBugCheck((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], retaddr);
  v5 = (volatile signed __int32 *)(~Object & 0xFFFFFFFFFFFFFFF8uLL);
  if ( (Object & 1) != 0 && (v6 = *(unsigned __int16 *)v5, v5 = (volatile signed __int32 *)((char *)v5 - v6), (_WORD)v6) )
  {
    (*(void (__fastcall **)(volatile signed __int32 *, __int64, void *))(*(_QWORD *)v5 + 24LL))(v5, v6, Tag);
  }
  else
  {
    RefCount = _InterlockedIncrement(v5 + 3);
    if ( *((char *)v5 + 24) < 0 )
    {
      v8 = (FxTagTracker *)*((_QWORD *)v5 - 6);
      if ( v8 )
        FxTagTracker::UpdateTagHistory(v8, Tag, Line, File, TagAddRef, RefCount);
    }
  }
}
