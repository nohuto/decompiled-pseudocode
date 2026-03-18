/*
 * XREFs of ?ExpandTable@HMGRTABLE@@QEAAEXZ @ 0x14038F380
 * Callers:
 *     ?Initialize@DXGGLOBAL@@QEAAJXZ @ 0x1401CF3EC (-Initialize@DXGGLOBAL@@QEAAJXZ.c)
 *     ?AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z @ 0x1402FF830 (-AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x1400110B0 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140013010 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 *     memmove @ 0x14009F9C0 (memmove.c)
 */

unsigned __int8 __fastcall HMGRTABLE::ExpandTable(HMGRTABLE *this, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v5; // ecx
  unsigned int v6; // edi
  unsigned __int8 result; // al
  unsigned __int8 (__fastcall ***v8)(_QWORD, _QWORD); // rcx
  unsigned int *v9; // rsi
  unsigned __int64 v10; // rax
  void *v11; // rax
  void *v12; // rbp
  unsigned int v13; // r8d
  unsigned int v14; // ebp
  __int64 v15; // rdx

  if ( *((_DWORD *)this + 5) && *(_DWORD *)(*(_QWORD *)this + 16LL * *((unsigned int *)this + 3)) != -16777216 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 64;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      0xFFFFFFFFLL,
      L"m_FreeCount == 0 || m_pEntryTable[m_FreeHandleListTail].NextFreeIndex == HMGRTABLE_INVALID_INDEX",
      64LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v5 = *((_DWORD *)this + 4);
  v6 = v5 + g_HmgrTableSizeIncrement;
  if ( v5 + g_HmgrTableSizeIncrement > 0xFFFFFF || v6 < v5 )
    return 0;
  v8 = (unsigned __int8 (__fastcall ***)(_QWORD, _QWORD))*((_QWORD *)this + 3);
  v9 = (unsigned int *)((char *)this + 16);
  if ( v8 )
  {
    if ( !(**v8)(v8, v6) )
      return 0;
    v9 = (unsigned int *)((char *)this + 16);
  }
  v10 = 16LL * v6;
  if ( !is_mul_ok(v6, 0x10uLL) )
    v10 = -1LL;
  v11 = (void *)operator new[](v10, 0x4B677844u, 256LL, a4);
  v12 = v11;
  if ( !v11 )
  {
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(0LL);
    return 0;
  }
  memmove(v11, *(const void **)this, 16LL * *((unsigned int *)this + 4));
  DXGQUOTAALLOCATOR<256,1835156294>::operator delete(*(void **)this);
  v13 = *v9;
  *(_QWORD *)this = v12;
  v14 = *((_DWORD *)this + 5) + g_HmgrTableSizeIncrement;
  if ( v13 < v6 )
  {
    v15 = 16LL * v13;
    do
    {
      *(_DWORD *)(v15 + *(_QWORD *)this) = ++v13;
      v15 += 16LL;
      *(_DWORD *)(v15 + *(_QWORD *)this - 8) &= 0xFFFFFFE0;
      *(_DWORD *)(v15 + *(_QWORD *)this - 8) = *(_DWORD *)(v15 + *(_QWORD *)this - 8) & 0xFFFFFF9F | 0x20;
      *(_DWORD *)(v15 + *(_QWORD *)this - 8) &= 0xFFFFE07F;
    }
    while ( v13 < v6 );
    v9 = (unsigned int *)((char *)this + 16);
  }
  *(_DWORD *)(*(_QWORD *)this + 16LL * (v13 - 1)) = -16777216;
  if ( *((_DWORD *)this + 5) )
    *(_DWORD *)(*(_QWORD *)this + 16LL * *((unsigned int *)this + 3)) = *v9;
  else
    *((_DWORD *)this + 3) = 127;
  if ( v13 != v6 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 131;
    DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"TableIndex == NewTableSize", 131LL, 0LL, 0LL, 0LL, 0LL);
  }
  *v9 = v6;
  result = 1;
  *((_DWORD *)this + 5) = v14;
  return result;
}
