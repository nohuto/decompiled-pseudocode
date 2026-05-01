/*
 * XREFs of _lambda_5047f3dcb5456b18a6d7c92307eccb63_::operator() @ 0x1804E6784
 * Callers:
 *     Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_5047f3dcb5456b18a6d7c92307eccb63___::Run @ 0x1804EBB40 (Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_5047f3dcb5456b18a6d7c92307eccb63___--.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?CommitImportanceVector@WindowWrapperBase@@AEAAXXZ @ 0x1804E96C4 (-CommitImportanceVector@WindowWrapperBase@@AEAAXXZ.c)
 */

__int64 __fastcall lambda_5047f3dcb5456b18a6d7c92307eccb63_::operator()(int **a1)
{
  int v2; // ebx
  __int64 v3; // rcx
  __int64 v4; // r9
  __int64 v5; // r8
  int v6; // ecx
  __int16 v7; // dx
  char v8; // cl
  int *v9; // rcx
  int v10; // r8d
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int v13; // [rsp+30h] [rbp+8h]
  RTL_SRWLOCK *SRWLock; // [rsp+40h] [rbp+18h]

  v2 = **a1;
  v3 = *((_QWORD *)a1[1] + 35);
  try
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 200LL))(v3);
    v5 = *a1[2];
    HIWORD(v13) = HIWORD(v2);
    if ( v5 == -1 )
    {
      v7 = v2;
    }
    else
    {
      v6 = a1[1][63];
      v7 = v6;
      if ( (v5 & 1) != 0 )
        v7 = ((unsigned __int8)v2 ^ (unsigned __int8)v6) & 1 ^ v6;
      if ( (v5 & 2) != 0 )
        v7 ^= ((unsigned __int8)v2 ^ (unsigned __int8)v7) & 0xE;
      if ( (v5 & 4) != 0 )
        v7 ^= ((unsigned __int8)v2 ^ (unsigned __int8)v7) & 0x30;
      if ( (v5 & 8) != 0 )
        v7 ^= ((unsigned __int8)v2 ^ (unsigned __int8)v7) & 0x40;
      if ( (v5 & 0x10) != 0 )
        v7 ^= (v2 ^ v7) & 0x80;
      if ( (v5 & 0x20) != 0 )
        v7 ^= (v2 ^ v7) & 0x100;
      if ( (v5 & 0x40) != 0 )
        v7 ^= (v2 ^ v7) & 0x200;
      v4 = 1024LL;
      if ( (v5 & 0x80) != 0 )
        v7 ^= (v2 ^ v7) & 0x400;
      if ( (v5 & 0x100) != 0 )
        v7 ^= (v2 ^ v7) & 0x800;
      LOBYTE(v6) = BYTE2(v6);
      if ( (v5 & 0x200) != 0 )
        LOBYTE(v6) = BYTE2(v2);
      BYTE2(v13) = v6;
      v8 = HIBYTE(v6);
      if ( (v5 & 0x400) != 0 )
        v8 = HIBYTE(v2);
      HIBYTE(v13) = v8;
    }
    v9 = a1[1];
    v10 = v9[89];
    if ( (v10 & 4) == 0 )
      v7 ^= (*((_WORD *)v9 + 126) ^ v7) & 0xF;
    if ( (v10 & 8) == 0 )
      v7 ^= (*((_WORD *)v9 + 126) ^ v7) & 0x31;
    LOWORD(v13) = (*((_WORD *)v9 + 126) ^ v7) & 0xC0 ^ v7;
    if ( v13 != v9[63] )
    {
      v9[63] = v13;
      WindowWrapperBase::CommitImportanceVector((WindowWrapperBase *)v9);
    }
    if ( SRWLock )
      ReleaseSRWLockExclusive(SRWLock);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x8D4,
                           (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
                           (const char *)v4);
  }
  return result;
}
