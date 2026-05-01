/*
 * XREFs of _lambda_f4e7ecfc19990a45018f7857351c4cad_::operator() @ 0x1801F947C
 * Callers:
 *     Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_f4e7ecfc19990a45018f7857351c4cad___::Run @ 0x1801F9BB0 (Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_f4e7ecfc19990a45018f7857351c4cad___--.c)
 * Callees:
 *     ?CommitImportanceVector@UwpWindowWrapperBase@@AEAAXXZ @ 0x1800C2CB4 (-CommitImportanceVector@UwpWindowWrapperBase@@AEAAXXZ.c)
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x1800D246C (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall lambda_f4e7ecfc19990a45018f7857351c4cad_::operator()(int **a1)
{
  int v2; // ebx
  __int64 v3; // rcx
  __int64 v4; // r8
  int v5; // ecx
  __int16 v6; // dx
  char v7; // cl
  int *v8; // rcx
  int v9; // r8d
  const char *v10; // r9
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int v13; // [rsp+30h] [rbp+8h]
  RTL_SRWLOCK *v14; // [rsp+40h] [rbp+18h] BYREF

  v2 = **a1;
  v3 = *((_QWORD *)a1[1] + 35);
  try
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 208LL))(v3);
    v4 = *a1[2];
    HIWORD(v13) = HIWORD(v2);
    if ( v4 == -1 )
    {
      v6 = v2;
    }
    else
    {
      v5 = a1[1][63];
      v6 = v5;
      if ( (v4 & 1) != 0 )
        v6 = ((unsigned __int8)v2 ^ (unsigned __int8)v5) & 1 ^ v5;
      if ( (v4 & 2) != 0 )
        v6 ^= ((unsigned __int8)v2 ^ (unsigned __int8)v6) & 0xE;
      if ( (v4 & 4) != 0 )
        v6 ^= ((unsigned __int8)v2 ^ (unsigned __int8)v6) & 0x30;
      if ( (v4 & 8) != 0 )
        v6 ^= ((unsigned __int8)v2 ^ (unsigned __int8)v6) & 0x40;
      if ( (v4 & 0x10) != 0 )
        v6 ^= (v2 ^ v6) & 0x80;
      if ( (v4 & 0x20) != 0 )
        v6 ^= (v2 ^ v6) & 0x100;
      if ( (v4 & 0x40) != 0 )
        v6 ^= (v2 ^ v6) & 0x200;
      if ( (v4 & 0x80) != 0 )
        v6 ^= (v2 ^ v6) & 0x400;
      if ( (v4 & 0x100) != 0 )
        v6 ^= (v2 ^ v6) & 0x800;
      LOBYTE(v5) = BYTE2(v5);
      if ( (v4 & 0x200) != 0 )
        LOBYTE(v5) = BYTE2(v2);
      BYTE2(v13) = v5;
      v7 = HIBYTE(v5);
      if ( (v4 & 0x400) != 0 )
        v7 = HIBYTE(v2);
      HIBYTE(v13) = v7;
    }
    v8 = a1[1];
    v9 = v8[89];
    if ( (v9 & 4) == 0 )
      v6 ^= (*((_WORD *)v8 + 126) ^ v6) & 0xF;
    if ( (v9 & 8) == 0 )
      v6 ^= (*((_WORD *)v8 + 126) ^ v6) & 0x31;
    LOWORD(v13) = (*((_WORD *)v8 + 126) ^ v6) & 0xC0 ^ v6;
    if ( v13 != v8[63] )
    {
      v8[63] = v13;
      UwpWindowWrapperBase::CommitImportanceVector((UwpWindowWrapperBase *)v8);
    }
    CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v14);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x97B,
                           (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapperbase.cpp",
                           v10);
  }
  return result;
}
