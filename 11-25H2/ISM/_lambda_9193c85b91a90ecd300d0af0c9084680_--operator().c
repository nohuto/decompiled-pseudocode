/*
 * XREFs of _lambda_9193c85b91a90ecd300d0af0c9084680_::operator() @ 0x1801C2E94
 * Callers:
 *     ?RegisterHotKey@HotKeyProcessor@@UEAAJUMessageObjectID@@III_N@Z @ 0x1801C4840 (-RegisterHotKey@HotKeyProcessor@@UEAAJUMessageObjectID@@III_N@Z.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180058AF4 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??0?$shared_ptr@VSystemCursorShapeBitmap2@@@std@@QEAA@AEBV01@@Z @ 0x1800CC834 (--0-$shared_ptr@VSystemCursorShapeBitmap2@@@std@@QEAA@AEBV01@@Z.c)
 *     ??$_Emplace@AEBV?$shared_ptr@UHotKeyInfo@@@std@@@?$list@V?$shared_ptr@UHotKeyInfo@@@std@@V?$allocator@V?$shared_ptr@UHotKeyInfo@@@std@@@2@@std@@QEAAPEAU?$_List_node@V?$shared_ptr@UHotKeyInfo@@@std@@PEAX@1@QEAU21@AEBV?$shared_ptr@UHotKeyInfo@@@1@@Z @ 0x1801C1D70 (--$_Emplace@AEBV-$shared_ptr@UHotKeyInfo@@@std@@@-$list@V-$shared_ptr@UHotKeyInfo@@@std@@V-$allo.c)
 *     _lambda_c0e0b7aaf59f49f216d7dff859f9f140_::operator() @ 0x1801C3004 (_lambda_c0e0b7aaf59f49f216d7dff859f9f140_--operator().c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall lambda_9193c85b91a90ecd300d0af0c9084680_::operator()(__int64 a1, _QWORD *a2)
{
  _QWORD *v2; // r15
  __int64 v4; // rsi
  __int64 *v5; // rax
  _WORD *v6; // rcx
  __int64 v7; // rdi
  char v8; // r14
  bool v9; // zf
  _QWORD *v10; // rsi
  _QWORD *v11; // rbx
  _QWORD *v12; // rax
  bool v13; // r13
  std::_Ref_count_base *v14; // rcx
  std::_Ref_count_base *v15; // rcx
  _DWORD *v17; // rcx
  __int64 v18; // [rsp+0h] [rbp-78h] BYREF
  _QWORD v19[9]; // [rsp+30h] [rbp-48h] BYREF
  __int64 *v22; // [rsp+90h] [rbp+18h]

  v2 = a2;
  v4 = *a2;
  v5 = (__int64 *)(a1 + 8);
  if ( (*(_WORD *)(*a2 + 24LL) & 0x200) == 0 )
  {
LABEL_19:
    if ( *(_QWORD *)*v5 == *(_QWORD *)*v2 )
    {
      v9 = *(_DWORD *)(*v5 + 8) == *(_DWORD *)(*v2 + 8LL);
LABEL_21:
      if ( v9 )
      {
        v8 = 1;
        goto LABEL_24;
      }
    }
LABEL_23:
    v8 = 0;
    goto LABEL_24;
  }
  v6 = *(_WORD **)a1;
  v22 = v5;
  v7 = *v5;
  if ( (*(_DWORD *)v6 & 0x200) != 0 )
  {
    if ( (*(_WORD *)(v4 + 24) & 0x100) != 0 )
    {
      *(_WORD *)(v4 + 24) = *v6 & 0x7A80;
      *(_OWORD *)*a2 = *(_OWORD *)v7;
      *(_DWORD *)(*a2 + 16LL) = **(_DWORD **)(a1 + 16);
      v8 = 1;
      **(_BYTE **)(a1 + 24) = 1;
      goto LABEL_24;
    }
    if ( *(_QWORD *)v7 == *(_QWORD *)v4 )
    {
      v9 = *(_DWORD *)(v7 + 8) == *(_DWORD *)(v4 + 8);
      goto LABEL_21;
    }
    goto LABEL_23;
  }
  v10 = *(_QWORD **)(v4 + 40);
  v11 = (_QWORD *)*v10;
  v8 = 1;
  while ( v11 != v10 )
  {
    v12 = std::shared_ptr<SystemCursorShapeBitmap2>::shared_ptr<SystemCursorShapeBitmap2>(v19, v11 + 2);
    v13 = *(_QWORD *)v7 == *(_QWORD *)*v12 && *(_DWORD *)(v7 + 8) == *(_DWORD *)(*v12 + 8LL);
    v14 = (std::_Ref_count_base *)v12[1];
    if ( v14 )
      std::_Ref_count_base::_Decref(v14);
    if ( v13 )
      break;
    v11 = (_QWORD *)*v11;
  }
  if ( v11 == *(_QWORD **)(*v2 + 40LL) )
  {
    lambda_c0e0b7aaf59f49f216d7dff859f9f140_::operator()(*(_QWORD *)(a1 + 32));
    try
    {
      std::list<std::shared_ptr<HotKeyInfo>>::_Emplace<std::shared_ptr<HotKeyInfo> const &>(
        *v2 + 40LL,
        *(_QWORD *)(*v2 + 40LL),
        *(_QWORD **)(a1 + 40));
    }
    catch ( std::bad_alloc )
    {
      v17 = *(_DWORD **)(a1 + 48);
      *v17 = -2147024882;
      if ( (Microsoft_WindowsPhone_InputEnableBits & 1) != 0 )
        McTemplateU0sqq_EventWriteTransfer(
          (__int64)v17,
          (__int64)&v18,
          "HotKeyProcessor::RegisterHotKey::<lambda_9193c85b91a90ecd300d0af0c9084680>::operator ()",
          268LL,
          14);
      v5 = v22;
      v2 = a2;
      goto LABEL_19;
    }
  }
LABEL_24:
  v15 = (std::_Ref_count_base *)v2[1];
  if ( v15 )
    std::_Ref_count_base::_Decref(v15);
  return v8;
}
