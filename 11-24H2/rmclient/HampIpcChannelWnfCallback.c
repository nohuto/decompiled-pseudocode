/*
 * XREFs of HampIpcChannelWnfCallback @ 0x18000A350
 * Callers:
 *     <none>
 * Callees:
 *     HampIpcChannelObjectComparePayloadForTree @ 0x18000A520 (HampIpcChannelObjectComparePayloadForTree.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18001D010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall HampIpcChannelWnfCallback(__int64 a1, __int64 a2)
{
  DWORD CurrentThreadId; // eax
  _QWORD **v5; // rdi
  _QWORD *v6; // rbx
  __int64 result; // rax
  unsigned __int64 v8; // rbx
  int v9; // edi
  int v10; // eax
  unsigned __int64 v11; // rax
  __int64 v12; // rcx
  _QWORD *v13; // rax

  RtlAcquireSRWLockExclusive(a1 + 8);
  CurrentThreadId = GetCurrentThreadId();
  v5 = (_QWORD **)(a1 + 40);
  while ( 1 )
  {
    *(_DWORD *)(a1 + 16) = CurrentThreadId;
    v6 = *v5;
    if ( *v5 == v5 )
      break;
    v12 = *v6;
    if ( *(_QWORD **)(*v6 + 8LL) != v6 || (v13 = (_QWORD *)v6[1], (_QWORD *)*v13 != v6) )
      __fastfail(3u);
    *v13 = v12;
    *(_QWORD *)(v12 + 8) = v13;
    *(_OWORD *)v6 = 0LL;
    *(_DWORD *)(a1 + 16) = 0;
    RtlReleaseSRWLockExclusive(a1 + 8);
    (*(void (__fastcall **)(__int64, _QWORD *, _QWORD))(a1 + 56))(a1, v6 - 3, 0LL);
    RtlAcquireSRWLockExclusive(a1 + 8);
    CurrentThreadId = GetCurrentThreadId();
  }
  *(_DWORD *)(a1 + 16) = 0;
  result = RtlReleaseSRWLockExclusive(a1 + 8);
  if ( a2 )
  {
    RtlAcquireSRWLockExclusive(a1 + 8);
    *(_DWORD *)(a1 + 16) = GetCurrentThreadId();
    v8 = *(_QWORD *)(a1 + 24);
    v9 = *(_BYTE *)(a1 + 32) & 1;
    if ( (*(_BYTE *)(a1 + 32) & 1) != 0 )
    {
      if ( !v8 )
      {
LABEL_11:
        *(_DWORD *)(a1 + 16) = 0;
        result = RtlReleaseSRWLockExclusive(a1 + 8);
        if ( v8 )
          return (*(__int64 (__fastcall **)(__int64, unsigned __int64, __int64))(a1 + 56))(a1, v8, a2);
        return result;
      }
      v8 ^= a1 + 24;
    }
    if ( v8 )
    {
      while ( 1 )
      {
        v10 = HampIpcChannelObjectComparePayloadForTree(a2, v8);
        if ( v10 < 0 )
        {
          v11 = *(_QWORD *)v8;
          if ( v9 && v11 )
            goto LABEL_24;
        }
        else
        {
          if ( v10 <= 0 )
            goto LABEL_11;
          v11 = *(_QWORD *)(v8 + 8);
          if ( v9 && v11 )
          {
LABEL_24:
            v8 ^= v11;
            goto LABEL_10;
          }
        }
        v8 = v11;
LABEL_10:
        if ( !v8 )
          goto LABEL_11;
      }
    }
    goto LABEL_11;
  }
  return result;
}
