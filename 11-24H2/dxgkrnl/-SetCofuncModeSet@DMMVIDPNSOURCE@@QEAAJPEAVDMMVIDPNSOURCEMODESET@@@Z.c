/*
 * XREFs of ?SetCofuncModeSet@DMMVIDPNSOURCE@@QEAAJPEAVDMMVIDPNSOURCEMODESET@@@Z @ 0x1400267D8
 * Callers:
 *     ?AssignSourceModeSet@DXGK_VIDPN_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@IQEAUD3DKMDT_HVIDPNSOURCEMODESET__@@@Z @ 0x1403BFA30 (-AssignSourceModeSet@DXGK_VIDPN_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@IQEAUD3DKMDT_HVIDPNS.c)
 * Callees:
 *     ?reset@?$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z @ 0x14000BD78 (-reset@-$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z.c)
 *     ?FindByValue@?$Set@VDMMVIDPNSOURCEMODE@@@@QEBAPEAVDMMVIDPNSOURCEMODE@@QEBV2@@Z @ 0x140026940 (-FindByValue@-$Set@VDMMVIDPNSOURCEMODE@@@@QEBAPEAVDMMVIDPNSOURCEMODE@@QEBV2@@Z.c)
 *     ?ContainsByReference@?$DoublyLinkedList@VDMMVIDPNTARGETMODESET@@U?$DoubleLinkedListElementDeleter@VDMMVIDPNTARGETMODESET@@@@@@QEAAEQEBVDMMVIDPNTARGETMODESET@@@Z @ 0x14005FC58 (-ContainsByReference@-$DoublyLinkedList@VDMMVIDPNTARGETMODESET@@U-$DoubleLinkedListElementDelete.c)
 *     ?PinMode@DMMVIDPNSOURCEMODESET@@QEAAJI@Z @ 0x1402DD1B4 (-PinMode@DMMVIDPNSOURCEMODESET@@QEAAJI@Z.c)
 */

__int64 __fastcall DMMVIDPNSOURCE::SetCofuncModeSet(DMMVIDPNSOURCE *this, struct DMMVIDPNSOURCEMODESET **a2)
{
  __int64 *v4; // rbp
  __int64 *v5; // rsi
  __int64 result; // rax
  __int64 v7; // rax
  __int64 v8; // r11
  __int64 v9; // rdi
  __int64 v10; // r11
  _QWORD *v11; // rdx
  _QWORD *v12; // rax

  if ( a2[6] == (struct DMMVIDPNSOURCEMODESET *)(a2 + 6) )
  {
    WdLogSingleEntry2(2LL, a2, *((unsigned int *)this + 6));
    result = 3223192328LL;
    WdLogGlobalForLineNumber = 937;
    return result;
  }
  v4 = (__int64 *)((char *)this + 120);
  if ( a2 == *((struct DMMVIDPNSOURCEMODESET ***)this + 15) )
  {
    v5 = (__int64 *)((char *)this + 104);
    if ( *(_QWORD *)(*((_QWORD *)this + 13) + 144LL) )
    {
      v7 = Set<DMMVIDPNSOURCEMODE>::FindByValue(a2 + 3);
      if ( !v7 )
      {
        WdLogSingleEntry0(2LL);
        result = 3223192338LL;
        WdLogGlobalForLineNumber = 964;
        return result;
      }
      DMMVIDPNSOURCEMODESET::PinMode((DMMVIDPNSOURCEMODESET *)a2, *(_DWORD *)(v7 + 24));
    }
    *(_BYTE *)(*v5 + 136) = 0;
    if ( *(_DWORD *)(*v5 + 96) > 1u )
    {
      v8 = *((_QWORD *)this + 14);
      v9 = *v5;
      if ( !(unsigned __int8)DoublyLinkedList<DMMVIDPNTARGETMODESET,DoubleLinkedListElementDeleter<DMMVIDPNTARGETMODESET>>::ContainsByReference(
                               v8,
                               *v5) )
      {
        v11 = *(_QWORD **)(v10 + 24);
        v12 = (_QWORD *)(v9 + 8);
        if ( *v11 != v10 + 16 )
          __fastfail(3u);
        *v12 = v10 + 16;
        *(_QWORD *)(v9 + 16) = v11;
        *v11 = v12;
        *(_QWORD *)(v10 + 24) = v12;
        ++*(_QWORD *)(v10 + 32);
      }
    }
    auto_rc<DMMVIDPNSOURCEMODESET>::reset(v5, (__int64)a2);
    auto_rc<DMMVIDPNSOURCEMODESET>::reset(v4, 0LL);
    return 0LL;
  }
  else
  {
    WdLogSingleEntry2(2LL, a2, *((unsigned int *)this + 6));
    result = 3223192368LL;
    WdLogGlobalForLineNumber = 946;
  }
  return result;
}
