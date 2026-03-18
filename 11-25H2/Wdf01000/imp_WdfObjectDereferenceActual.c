/*
 * XREFs of imp_WdfObjectDereferenceActual @ 0x140060110
 * Callers:
 *     <none>
 * Callees:
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x14008306C (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     _guard_dispatch_icall @ 0x1400AC680 (_guard_dispatch_icall.c)
 */

void __fastcall imp_WdfObjectDereferenceActual(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 Object,
        void *Tag,
        unsigned int Line,
        const char *File)
{
  unsigned __int16 *v5; // r10
  __int64 v6; // rdx
  __int64 v7; // rax
  void *retaddr; // [rsp+38h] [rbp+0h]

  if ( !Object )
    FxVerifierNullBugCheck((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], retaddr);
  v5 = (unsigned __int16 *)(~Object & 0xFFFFFFFFFFFFFFF8uLL);
  if ( (Object & 1) == 0 )
  {
    v7 = *(_QWORD *)v5;
    goto LABEL_4;
  }
  v6 = *v5;
  v5 = (unsigned __int16 *)((char *)v5 - v6);
  v7 = *(_QWORD *)v5;
  if ( !(_WORD)v6 )
  {
LABEL_4:
    (*(void (__fastcall **)(unsigned __int16 *, void *, _QWORD, const char *))(v7 + 16))(v5, Tag, Line, File);
    return;
  }
  (*(void (__fastcall **)(unsigned __int16 *, __int64, void *))(v7 + 32))(v5, v6, Tag);
}
