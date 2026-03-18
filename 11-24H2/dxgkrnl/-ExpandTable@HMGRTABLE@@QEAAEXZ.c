/*
 * XREFs of ?ExpandTable@HMGRTABLE@@QEAAEXZ @ 0x140382F24
 * Callers:
 *     ?Initialize@DXGGLOBAL@@QEAAJXZ @ 0x1401D4724 (-Initialize@DXGGLOBAL@@QEAAJXZ.c)
 *     ?AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z @ 0x1402B64B0 (-AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x140020540 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1400224A0 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 *     memmove @ 0x1400A1D00 (memmove.c)
 */

unsigned __int8 __fastcall HMGRTABLE::ExpandTable(HMGRTABLE *this)
{
  unsigned int v2; // ecx
  unsigned int v3; // edi
  unsigned __int8 result; // al
  unsigned __int8 (__fastcall ***v5)(_QWORD, _QWORD); // rcx
  unsigned int *v6; // rsi
  unsigned __int64 v7; // rax
  void *v8; // rax
  void *v9; // rbp
  unsigned int v10; // r8d
  unsigned int v11; // ebp
  __int64 v12; // rdx

  if ( *((_DWORD *)this + 5) && *(_DWORD *)(*(_QWORD *)this + 16LL * *((unsigned int *)this + 3)) != -16777216 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 63;
    DxgkLogInternalTriageEvent(
      0LL,
      262146LL,
      0xFFFFFFFFLL,
      L"m_FreeCount == 0 || m_pEntryTable[m_FreeHandleListTail].NextFreeIndex == HMGRTABLE_INVALID_INDEX",
      63LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v2 = *((_DWORD *)this + 4);
  v3 = v2 + g_HmgrTableSizeIncrement;
  if ( v2 + g_HmgrTableSizeIncrement > 0xFFFFFF || v3 < v2 )
    return 0;
  v5 = (unsigned __int8 (__fastcall ***)(_QWORD, _QWORD))*((_QWORD *)this + 3);
  v6 = (unsigned int *)((char *)this + 16);
  if ( v5 )
  {
    if ( !(**v5)(v5, v3) )
      return 0;
    v6 = (unsigned int *)((char *)this + 16);
  }
  v7 = 16LL * v3;
  if ( !is_mul_ok(v3, 0x10uLL) )
    v7 = -1LL;
  v8 = (void *)operator new[](v7, 0x4B677844u, 256LL);
  v9 = v8;
  if ( !v8 )
  {
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(0LL);
    return 0;
  }
  memmove(v8, *(const void **)this, 16LL * *((unsigned int *)this + 4));
  DXGQUOTAALLOCATOR<256,1835156294>::operator delete(*(void **)this);
  v10 = *v6;
  *(_QWORD *)this = v9;
  v11 = *((_DWORD *)this + 5) + g_HmgrTableSizeIncrement;
  if ( v10 < v3 )
  {
    v12 = 16LL * v10;
    do
    {
      *(_DWORD *)(v12 + *(_QWORD *)this) = ++v10;
      v12 += 16LL;
      *(_DWORD *)(v12 + *(_QWORD *)this - 8) &= 0xFFFFFFE0;
      *(_DWORD *)(v12 + *(_QWORD *)this - 8) = *(_DWORD *)(v12 + *(_QWORD *)this - 8) & 0xFFFFFF9F | 0x20;
      *(_DWORD *)(v12 + *(_QWORD *)this - 8) &= 0xFFFFE07F;
    }
    while ( v10 < v3 );
    v6 = (unsigned int *)((char *)this + 16);
  }
  *(_DWORD *)(*(_QWORD *)this + 16LL * (v10 - 1)) = -16777216;
  if ( *((_DWORD *)this + 5) )
    *(_DWORD *)(*(_QWORD *)this + 16LL * *((unsigned int *)this + 3)) = *v6;
  else
    *((_DWORD *)this + 3) = 127;
  if ( v10 != v3 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 130;
    DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"TableIndex == NewTableSize", 130LL, 0LL, 0LL, 0LL, 0LL);
  }
  *v6 = v3;
  result = 1;
  *((_DWORD *)this + 5) = v11;
  return result;
}
