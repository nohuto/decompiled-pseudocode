/*
 * XREFs of RecalculateQueueInfo @ 0x1401624E0
 * Callers:
 *     zzzDestroyQueue @ 0x140161AA0 (zzzDestroyQueue.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140099660 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 */

unsigned __int64 __fastcall RecalculateQueueInfo(__int64 a1)
{
  unsigned __int64 result; // rax
  __int64 *v2; // rdi
  __int64 i; // rcx
  __int64 j; // rbx
  __int64 v5; // rcx
  __int64 v6; // rax
  bool v7; // zf
  int v8; // edx
  __int64 v9; // rax
  __int64 v10; // rax

  result = (unsigned __int64)PtiCurrent(a1);
  v2 = (__int64 *)(*(_QWORD *)(result + 496) + 176LL);
  for ( i = *v2; (__int64 *)i != v2; i = *(_QWORD *)i )
  {
    *(_DWORD *)(*(_QWORD *)(i - 304) + 472LL) = 0;
    *(_DWORD *)(*(_QWORD *)(i - 304) + 476LL) = 0;
    *(_DWORD *)(*(_QWORD *)(i - 304) + 436LL) &= ~0x2000000u;
    result = *(_QWORD *)(i - 304);
    *(_DWORD *)(result + 480) = 0;
  }
  for ( j = *v2; (__int64 *)j != v2; j = *(_QWORD *)j )
  {
    result = (unsigned int)_InterlockedCompareExchange((volatile signed __int32 *)(j - 248), 0, 0);
    if ( (result & 1) == 0 )
    {
      v5 = *(_QWORD *)(W32GetUserGdiSessionState(i) + 40);
      v6 = *(_QWORD *)(j - 312);
      v7 = *(_QWORD *)v6 == v5;
      i = 0x2000LL;
      if ( !v7 )
        i = *(unsigned int *)(v6 + 872);
      v8 = *(_DWORD *)(v6 + 876);
      v9 = *(_QWORD *)(j - 304);
      if ( *(_DWORD *)(v9 + 472) >= (unsigned int)i )
      {
        if ( *(_DWORD *)(v9 + 476) != v8 )
          *(_DWORD *)(v9 + 476) = 0;
      }
      else
      {
        *(_DWORD *)(v9 + 472) = i;
        v10 = *(_QWORD *)(j - 304);
        if ( *(_DWORD *)(v10 + 476) )
          v8 = 0;
        *(_DWORD *)(v10 + 476) = v8;
      }
      result = *(unsigned int *)(j + 584);
      if ( (result & 0x40000) != 0 )
      {
        result = *(_QWORD *)(j - 304);
        *(_DWORD *)(result + 436) |= 0x2000000u;
      }
    }
  }
  return result;
}
