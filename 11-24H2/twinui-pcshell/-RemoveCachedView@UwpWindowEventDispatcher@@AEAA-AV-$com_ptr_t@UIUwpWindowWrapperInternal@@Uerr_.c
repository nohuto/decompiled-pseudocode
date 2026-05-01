/*
 * XREFs of ?RemoveCachedView@UwpWindowEventDispatcher@@AEAA?AV?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@UUwpWindowContextId@UwpWindowLifecycleManagement@Shell@Internal@Windows@@@Z @ 0x18001CC0C
 * Callers:
 *     ?UwpWindowRemoved@UwpWindowEventDispatcher@@UEAAJAEBUUwpWindowContextRemovedEventArgs@UwpWindowLifecycleManagement@Shell@Internal@Windows@@@Z @ 0x18001C920 (-UwpWindowRemoved@UwpWindowEventDispatcher@@UEAAJAEBUUwpWindowContextRemovedEventArgs@UwpWindowL.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18001D0F0 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall UwpWindowEventDispatcher::RemoveCachedView(__int64 a1, _QWORD *a2, int a3)
{
  __int64 i; // rdi
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rbx
  __int64 *v10; // rbx
  __int64 *v11; // rdi
  __int64 *v12; // rbp
  __int64 v13; // rax
  __int64 v14; // rcx
  char v16; // [rsp+50h] [rbp+8h] BYREF
  _QWORD *v17; // [rsp+58h] [rbp+10h]

  v17 = a2;
  *a2 = 0LL;
  for ( i = (__int64)(*(_QWORD *)(a1 + 392) - *(_QWORD *)(a1 + 384)) >> 3; i; --i )
  {
    v7 = *(_QWORD *)(*(_QWORD *)(a1 + 384) + 8 * i - 8);
    if ( *(_DWORD *)(*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v7 + 288LL))(v7, &v16) == a3 )
    {
      v8 = *(_QWORD *)(*(_QWORD *)(a1 + 384) + 8 * i - 8);
      v9 = *a2;
      *a2 = v8;
      if ( v8 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
      if ( v9 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
      v10 = (__int64 *)(*(_QWORD *)(a1 + 384) + 8 * i);
      v11 = v10 - 1;
      v12 = *(__int64 **)(a1 + 392);
      while ( v10 != v12 )
      {
        v13 = *v10;
        *v10 = 0LL;
        v14 = *v11;
        *v11 = v13;
        if ( v14 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
        ++v11;
        ++v10;
      }
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((void *)(*(_QWORD *)(a1 + 392) - 8LL));
      *(_QWORD *)(a1 + 392) -= 8LL;
      return a2;
    }
  }
  return a2;
}
