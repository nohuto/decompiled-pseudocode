/*
 * XREFs of ?IncreaseNumSessions@DXGSESSIONMGR@@AEAAJK@Z @ 0x1403E29D0
 * Callers:
 *     ?CreateSession@DXGSESSIONMGR@@QEAAJXZ @ 0x1403E1E58 (-CreateSession@DXGSESSIONMGR@@QEAAJXZ.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x1400110B0 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140013010 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     memmove @ 0x14009F9C0 (memmove.c)
 */

__int64 __fastcall DXGSESSIONMGR::IncreaseNumSessions(DXGSESSIONMGR *this, unsigned int a2)
{
  __int64 v3; // rsi
  unsigned int i; // edi
  __int64 v5; // r9
  unsigned __int64 v6; // rax
  void *v7; // rax
  void *v8; // rsi
  __int64 result; // rax
  char *v10; // rcx

  v3 = a2;
  if ( *((struct _KTHREAD **)this + 3) != KeGetCurrentThread() )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 5599;
    DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"m_SessionMutex.IsOwner()", 5599LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( *((struct _KTHREAD **)this + 14) != KeGetCurrentThread() )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 5600;
    DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"m_ArrayMutex.IsOwner()", 5600LL, 0LL, 0LL, 0LL, 0LL);
  }
  for ( i = 2 * *((_DWORD *)this + 20); (unsigned int)v3 >= i; i *= 2 )
    ;
  WdLogSingleEntry3(4LL, *((unsigned int *)this + 20), i, v3);
  WdLogGlobalForLineNumber = 5610;
  v6 = 8LL * i;
  if ( !is_mul_ok(i, 8uLL) )
    v6 = -1LL;
  v7 = (void *)operator new[](v6, 0x4B677844u, 256LL, v5);
  v8 = v7;
  if ( v7 )
  {
    memmove(v7, *((const void **)this + 6), 8LL * *((unsigned int *)this + 20));
    v10 = (char *)*((_QWORD *)this + 6);
    if ( v10 != (char *)this + 56 )
      DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v10);
    *((_QWORD *)this + 6) = v8;
    result = 0LL;
    *((_DWORD *)this + 20) = i;
  }
  else
  {
    *((_DWORD *)this + 37) |= 1u;
    WdLogSingleEntry1(6LL, i);
    WdLogGlobalForLineNumber = 5617;
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
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
