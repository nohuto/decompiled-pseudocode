/*
 * XREFs of ?SetCofuncModeSet@DMMVIDPNTARGET@@QEAAJPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x14004C804
 * Callers:
 *     ?AssignTargetModeSet@DXGK_VIDPN_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@IQEAUD3DKMDT_HVIDPNTARGETMODESET__@@@Z @ 0x1403B7440 (-AssignTargetModeSet@DXGK_VIDPN_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@IQEAUD3DKMDT_HVIDPNT.c)
 * Callees:
 *     ?reset@?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x14001B394 (-reset@-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     ?FindByValue@?$Set@VDMMVIDPNTARGETMODE@@@@QEBAPEAVDMMVIDPNTARGETMODE@@QEBV2@@Z @ 0x14003537C (-FindByValue@-$Set@VDMMVIDPNTARGETMODE@@@@QEBAPEAVDMMVIDPNTARGETMODE@@QEBV2@@Z.c)
 *     ?ContainsByReference@?$DoublyLinkedList@VDMMVIDPNTARGETMODESET@@U?$DoubleLinkedListElementDeleter@VDMMVIDPNTARGETMODESET@@@@@@QEAAEQEBVDMMVIDPNTARGETMODESET@@@Z @ 0x14005F3A0 (-ContainsByReference@-$DoublyLinkedList@VDMMVIDPNTARGETMODESET@@U-$DoubleLinkedListElementDelete.c)
 *     ?PinMode@DMMVIDPNTARGETMODESET@@QEAAJI@Z @ 0x1402D5558 (-PinMode@DMMVIDPNTARGETMODESET@@QEAAJI@Z.c)
 */

__int64 __fastcall DMMVIDPNTARGET::SetCofuncModeSet(
        struct DMMVIDPNTARGETMODESET **this,
        struct DMMVIDPNTARGETMODESET **a2)
{
  __int64 *v4; // rbp
  __int64 *v5; // rsi
  __int64 v6; // rdx
  __int64 result; // rax
  __int64 v8; // rax
  struct DMMVIDPNTARGETMODESET *v9; // r11
  __int64 v10; // rdi
  __int64 v11; // r11
  _QWORD *v12; // rdx
  _QWORD *v13; // rax

  if ( a2[6] == (struct DMMVIDPNTARGETMODESET *)(a2 + 6) )
  {
    WdLogSingleEntry2(2LL, a2, *((unsigned int *)this + 6));
    result = 3223192329LL;
    WdLogGlobalForLineNumber = 953;
    return result;
  }
  v4 = (__int64 *)(this + 14);
  if ( a2 != (struct DMMVIDPNTARGETMODESET **)this[14] )
  {
    WdLogSingleEntry2(2LL, a2, *((unsigned int *)this + 6));
    result = 3223192368LL;
    WdLogGlobalForLineNumber = 962;
    return result;
  }
  v5 = (__int64 *)(this + 13);
  v6 = *((_QWORD *)this[13] + 18);
  if ( v6 )
  {
    v8 = Set<DMMVIDPNTARGETMODE>::FindByValue((__int64)(a2 + 3), v6);
    if ( !v8 )
      return 3223192338LL;
    DMMVIDPNTARGETMODESET::PinMode((DMMVIDPNTARGETMODESET *)a2, *(_DWORD *)(v8 + 24));
  }
  *(_BYTE *)(*v5 + 136) = 0;
  if ( *(_DWORD *)(*v5 + 96) > 1u )
  {
    v9 = this[15];
    v10 = *v5;
    if ( !(unsigned __int8)DoublyLinkedList<DMMVIDPNTARGETMODESET,DoubleLinkedListElementDeleter<DMMVIDPNTARGETMODESET>>::ContainsByReference(
                             v9,
                             *v5) )
    {
      v12 = *(_QWORD **)(v11 + 24);
      v13 = (_QWORD *)(v10 + 8);
      if ( *v12 != v11 + 16 )
        __fastfail(3u);
      *v13 = v11 + 16;
      *(_QWORD *)(v10 + 16) = v12;
      *v12 = v13;
      *(_QWORD *)(v11 + 24) = v13;
      ++*(_QWORD *)(v11 + 32);
    }
  }
  auto_rc<DMMVIDPNTARGETMODESET>::reset(v5, (__int64)a2);
  auto_rc<DMMVIDPNTARGETMODESET>::reset(v4, 0LL);
  return 0LL;
}
