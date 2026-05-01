/*
 * XREFs of ?GetEventRegistration@UwpWindowEventDispatcher@@AEAA?AV?$shared_ptr@UViewEventRegistration@@@std@@PEBG0@Z @ 0x1801951C0
 * Callers:
 *     ?UwpWindowAdded@UwpWindowEventDispatcher@@UEAAJUUwpWindowContextId@UwpWindowLifecycleManagement@Shell@Internal@Windows@@W4WindowCreatedType@@@Z @ 0x18001D870 (-UwpWindowAdded@UwpWindowEventDispatcher@@UEAAJUUwpWindowContextId@UwpWindowLifecycleManagement@.c)
 *     ?UwpWindowActivating@UwpWindowEventDispatcher@@UEAAJPEAUIUwpWindowActivatingEventArgs@UwpWindowLifecycleManagement@Shell@Internal@Windows@@@Z @ 0x180021B40 (-UwpWindowActivating@UwpWindowEventDispatcher@@UEAAJPEAUIUwpWindowActivatingEventArgs@UwpWindowL.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180048554 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 */

_QWORD *__fastcall UwpWindowEventDispatcher::GetEventRegistration(
        __int64 a1,
        _QWORD *a2,
        const WCHAR *a3,
        const WCHAR *a4)
{
  __int64 v6; // rdi
  int v7; // ebp
  __int64 v8; // r12
  char v9; // r15
  UINT32 StringLen; // ebx
  const WCHAR *StringRawBuffer; // rax
  unsigned __int8 v13; // r14
  UINT32 v14; // ebx
  const WCHAR *v15; // rax
  int v16; // eax
  __int64 v17; // rax
  __int64 v18; // rdx
  std::_Ref_count_base *v19; // rcx

  *a2 = 0LL;
  a2[1] = 0LL;
  v6 = *(_QWORD *)(a1 + 440);
  v7 = 0;
  v8 = *(_QWORD *)(a1 + 448);
  while ( v6 != v8 )
  {
    if ( WindowsIsStringEmpty(**(HSTRING **)v6) )
    {
      v9 = 1;
      if ( v7 >= 2 )
        goto LABEL_4;
    }
    else
    {
      v9 = 0;
      StringLen = WindowsGetStringLen(**(HSTRING **)v6);
      StringRawBuffer = WindowsGetStringRawBuffer(**(HSTRING **)v6, 0LL);
      if ( CompareStringOrdinal(StringRawBuffer, StringLen, a3, -1, 1) != 2 )
        goto LABEL_4;
    }
    if ( WindowsIsStringEmpty(*(HSTRING *)(*(_QWORD *)v6 + 8LL)) )
    {
      v13 = 1;
    }
    else
    {
      v13 = 0;
      v14 = WindowsGetStringLen(*(HSTRING *)(*(_QWORD *)v6 + 8LL));
      v15 = WindowsGetStringRawBuffer(*(HSTRING *)(*(_QWORD *)v6 + 8LL), 0LL);
      if ( CompareStringOrdinal(v15, v14, a4, -1, 0) != 2 )
        goto LABEL_4;
    }
    v16 = 1;
    if ( v9 )
    {
      if ( !v13 )
        v16 = (*(_BYTE *)(*(_QWORD *)v6 + 16LL) & 0x40) != 0 ? 4 : 2;
    }
    else
    {
      v16 = 2 * (v13 ^ 1) + 3;
    }
    if ( v16 > v7 )
    {
      v7 = v16;
      v17 = *(_QWORD *)(v6 + 8);
      if ( v17 )
        _InterlockedIncrement((volatile signed __int32 *)(v17 + 8));
      v18 = *(_QWORD *)(v6 + 8);
      *a2 = *(_QWORD *)v6;
      v19 = (std::_Ref_count_base *)a2[1];
      a2[1] = v18;
      if ( v19 )
        std::_Ref_count_base::_Decref(v19);
    }
    if ( v7 == 5 )
      return a2;
LABEL_4:
    v6 += 16LL;
  }
  return a2;
}
