/*
 * XREFs of ?ReleaseModeSet@DMMVIDPNTARGET@@QEAAJPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x14000BAF0
 * Callers:
 *     ?ReleaseTargetModeSet@DXGDMM_VIDPN_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@QEAUD3DKMDT_HVIDPNTARGETMODESET__@@@Z @ 0x1403AF500 (-ReleaseTargetModeSet@DXGDMM_VIDPN_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@QEAUD3DKMDT_HVIDP.c)
 * Callees:
 *     ?reset@?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x14000BDB4 (-reset@-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x14000BE00 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?ContainsByReference@?$DoublyLinkedList@VDMMVIDPNTARGETMODESET@@U?$DoubleLinkedListElementDeleter@VDMMVIDPNTARGETMODESET@@@@@@QEAAEQEBVDMMVIDPNTARGETMODESET@@@Z @ 0x14005FC58 (-ContainsByReference@-$DoublyLinkedList@VDMMVIDPNTARGETMODESET@@U-$DoubleLinkedListElementDelete.c)
 */

__int64 __fastcall DMMVIDPNTARGET::ReleaseModeSet(
        struct DMMVIDPNTARGETMODESET **this,
        struct DMMVIDPNTARGETMODESET *a2)
{
  DMMVIDPNTARGET *v4; // rdx
  __int64 result; // rax
  __int64 v6; // r11
  _QWORD *v7; // rax
  __int64 v8; // rdx
  _QWORD *v9; // rcx

  if ( !a2 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 908;
  }
  v4 = (DMMVIDPNTARGET *)*((_QWORD *)a2 + 14);
  if ( v4 == (DMMVIDPNTARGET *)this )
  {
    if ( a2 == this[14] )
    {
      WdLogSingleEntry2(7LL, a2, *((unsigned int *)this + 6));
      WdLogGlobalForLineNumber = 925;
      auto_rc<DMMVIDPNTARGETMODESET>::reset(this + 14, 0LL);
      if ( *((_DWORD *)a2 + 24) != 1 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 930;
      }
    }
    if ( *((_DWORD *)a2 + 24) == 1
      && (unsigned __int8)DoublyLinkedList<DMMVIDPNTARGETMODESET,DoubleLinkedListElementDeleter<DMMVIDPNTARGETMODESET>>::ContainsByReference(
                            this[15],
                            a2) )
    {
      v7 = (_QWORD *)((char *)a2 + 8);
      v8 = *((_QWORD *)a2 + 1);
      if ( *(struct DMMVIDPNTARGETMODESET **)(v8 + 8) != (struct DMMVIDPNTARGETMODESET *)((char *)a2 + 8)
        || (v9 = (_QWORD *)*((_QWORD *)a2 + 2), (_QWORD *)*v9 != v7) )
      {
        __fastfail(3u);
      }
      *v9 = v8;
      *(_QWORD *)(v8 + 8) = v9;
      *v7 = 0LL;
      *((_QWORD *)a2 + 2) = 0LL;
      --*(_QWORD *)(v6 + 32);
    }
    ReferenceCounted::Release((struct DMMVIDPNTARGETMODESET *)((char *)a2 + 88));
    return 0LL;
  }
  else
  {
    WdLogSingleEntry3(2LL, v4, a2, this);
    result = 3223192368LL;
    WdLogGlobalForLineNumber = 914;
  }
  return result;
}
