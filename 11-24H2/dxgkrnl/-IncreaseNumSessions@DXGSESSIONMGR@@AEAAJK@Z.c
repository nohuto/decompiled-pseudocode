/*
 * XREFs of ?IncreaseNumSessions@DXGSESSIONMGR@@AEAAJK@Z @ 0x1403DB410
 * Callers:
 *     ?CreateSession@DXGSESSIONMGR@@QEAAJXZ @ 0x1403DA7D8 (-CreateSession@DXGSESSIONMGR@@QEAAJXZ.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x140020540 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1400224A0 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     memmove @ 0x1400A1D00 (memmove.c)
 */

__int64 __fastcall DXGSESSIONMGR::IncreaseNumSessions(DXGSESSIONMGR *this, unsigned int a2)
{
  __int64 v3; // rsi
  unsigned int i; // edi
  unsigned __int64 v5; // rax
  void *v6; // rax
  void *v7; // rsi
  __int64 result; // rax
  char *v9; // rcx

  v3 = a2;
  if ( *((struct _KTHREAD **)this + 3) != KeGetCurrentThread() )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 5651;
    DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"m_SessionMutex.IsOwner()", 5651LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( *((struct _KTHREAD **)this + 14) != KeGetCurrentThread() )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 5652;
    DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"m_ArrayMutex.IsOwner()", 5652LL, 0LL, 0LL, 0LL, 0LL);
  }
  for ( i = 2 * *((_DWORD *)this + 20); (unsigned int)v3 >= i; i *= 2 )
    ;
  WdLogSingleEntry3(4LL, *((unsigned int *)this + 20), i, v3);
  WdLogGlobalForLineNumber = 5662;
  v5 = 8LL * i;
  if ( !is_mul_ok(i, 8uLL) )
    v5 = -1LL;
  v6 = (void *)operator new[](v5, 0x4B677844u, 256LL);
  v7 = v6;
  if ( v6 )
  {
    memmove(v6, *((const void **)this + 6), 8LL * *((unsigned int *)this + 20));
    v9 = (char *)*((_QWORD *)this + 6);
    if ( v9 != (char *)this + 56 )
      DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v9);
    *((_QWORD *)this + 6) = v7;
    result = 0LL;
    *((_DWORD *)this + 20) = i;
  }
  else
  {
    *((_DWORD *)this + 37) |= 1u;
    WdLogSingleEntry1(6LL, i);
    WdLogGlobalForLineNumber = 5669;
    DxgkLogInternalTriageEvent(
      0LL,
      262145LL,
      0xFFFFFFFFLL,
      L"Unable to allocate new dxg session data array of size 0x%I64x",
      i,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225495LL;
  }
  return result;
}
