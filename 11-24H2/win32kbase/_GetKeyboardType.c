/*
 * XREFs of _GetKeyboardType @ 0x140123568
 * Callers:
 *     NtUserGetKeyboardType @ 0x140123530 (NtUserGetKeyboardType.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetKeyboardType(__int64 a1)
{
  unsigned int v1; // ebx
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx
  unsigned int v6; // eax
  __int64 result; // rax
  unsigned __int16 v8; // cx
  __int64 v9; // rcx
  __int64 v10; // rcx
  unsigned __int16 *v11; // rdi
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rcx
  int v15; // eax

  v1 = 0;
  if ( (_DWORD)a1 )
  {
    v2 = (unsigned int)(a1 - 1);
    if ( (_DWORD)v2 )
    {
      v3 = (unsigned int)(v2 - 1);
      if ( !(_DWORD)v3 )
        return *(unsigned __int16 *)(W32GetUserSessionState(v3) + 12836);
      v4 = (unsigned int)(v3 - 2147483644);
      if ( (_DWORD)v4 )
      {
        if ( (_DWORD)v4 == 1 && *(_QWORD *)(W32GetUserSessionState(v4) + 14224) )
          return *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v9) + 14224) + 48LL) + 32LL)
                                 + 100LL);
      }
      else if ( *(_QWORD *)(W32GetUserSessionState(v4) + 14224) )
      {
        v6 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v5) + 14224) + 48LL) + 32LL) + 96LL);
        if ( v6 )
        {
          if ( v6 != 81 )
            return v6;
          return v1;
        }
      }
      return 0LL;
    }
    v11 = *(unsigned __int16 **)(W32GetUserSessionState(v2) + 14072);
    if ( *(_QWORD *)(W32GetUserSessionState(v12) + 14224) )
    {
      v14 = *(_QWORD *)(W32GetUserSessionState(v13) + 14224);
      if ( *(_QWORD *)(*(_QWORD *)(v14 + 56) + 48LL) )
      {
        v14 = *(_QWORD *)(W32GetUserSessionState(v14) + 14224);
        v11 = *(unsigned __int16 **)(*(_QWORD *)(v14 + 56) + 48LL);
      }
      v15 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v14) + 14224) + 56LL) + 32LL) + 100LL);
    }
    else
    {
      LOBYTE(v15) = *(_BYTE *)(W32GetUserSessionState(v13) + 12833);
    }
    if ( v11 )
    {
      v8 = v11[1];
      if ( (v8 & 0x10) != 0 )
        return 0LL;
      if ( (v8 & 0x20) != 0 )
        return 2LL;
      v1 = *v11 << 8;
    }
    return v1 | v15 & 0xF;
  }
  if ( !*(_QWORD *)(W32GetUserSessionState(a1) + 14224) )
    return *(unsigned __int8 *)(W32GetUserSessionState(v10) + 12832);
  v10 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v10) + 14224) + 56LL) + 32LL);
  result = *(unsigned int *)(v10 + 96);
  if ( !(_DWORD)result || (_DWORD)result == 81 )
    return *(unsigned __int8 *)(W32GetUserSessionState(v10) + 12832);
  return result;
}
