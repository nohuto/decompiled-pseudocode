/*
 * XREFs of ??$_Move_unchecked@PEAUCursorVisualData@@PEAU1@@std@@YAPEAUCursorVisualData@@PEAU1@00@Z @ 0x180259954
 * Callers:
 *     ?erase@?$vector@UCursorVisualData@@V?$allocator@UCursorVisualData@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UCursorVisualData@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@UCursorVisualData@@@std@@@std@@@2@@Z @ 0x18025C968 (-erase@-$vector@UCursorVisualData@@V-$allocator@UCursorVisualData@@@std@@@std@@QEAA-AV-$_Vector_.c)
 * Callees:
 *     ??4?$com_ptr_t@VIBitmapRealization@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800691E0 (--4-$com_ptr_t@VIBitmapRealization@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall std::_Move_unchecked<CursorVisualData *,CursorVisualData *>(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  __int64 v5; // rsi
  __int64 v6; // rdi
  __int64 v7; // rcx
  __int64 v8; // r14

  v3 = a3;
  if ( a1 != a2 )
  {
    v5 = a1 + 16;
    v6 = a1 - a3;
    do
    {
      v7 = *(_QWORD *)(v5 - 8);
      v8 = *(_QWORD *)(v3 + 8);
      *(_QWORD *)(v3 + 8) = v7;
      if ( v7 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
      if ( v8 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
      *(_DWORD *)(v3 + 16) = *(_DWORD *)v5;
      *(_BYTE *)(v3 + 20) = *(_BYTE *)(v5 + 4);
      wil::com_ptr_t<IBitmapRealization,wil::err_returncode_policy>::operator=(
        (__int64 *)(v3 + 24),
        (__int64 *)(v5 + 8));
      v3 += 32LL;
      v5 += 32LL;
    }
    while ( v6 + v3 != a2 );
  }
  return v3;
}
