/*
 * XREFs of NtUserfnINSTRINGNULL @ 0x1400F6540
 * Callers:
 *     ?_InBoxString@@YA_JJPEAUtagWND@@I_K_J1KH@Z @ 0x1400F56B4 (-_InBoxString@@YA_JJPEAUtagWND@@I_K_J1KH@Z.c)
 * Callees:
 *     W32GetCurrentThreadNonPaged @ 0x14026E814 (W32GetCurrentThreadNonPaged.c)
 *     _guard_dispatch_icall @ 0x140340330 (_guard_dispatch_icall.c)
 */

__int64 __fastcall NtUserfnINSTRINGNULL(__int64 a1, __int64 a2, __int64 a3, __int128 *a4, __int64 a5, char a6, int a7)
{
  __int128 *v7; // rbx
  unsigned int v9; // esi
  __int128 *v11; // rcx
  __int64 v12; // rax
  int v13; // eax
  __int64 v14; // rax
  __int64 UserSessionState; // rax
  __int128 v17; // [rsp+38h] [rbp-20h] BYREF

  v7 = a4;
  v9 = a2;
  v17 = 0LL;
  W32GetCurrentThreadNonPaged(a1, a2);
  if ( v7 )
  {
    if ( a7 )
    {
      v11 = a4;
      *((_QWORD *)&v17 + 1) = a4;
      DWORD1(v17) |= 0x80000000;
      v14 = -1LL;
      do
        ++v14;
      while ( *((_BYTE *)a4 + v14) );
      LODWORD(v17) = v14;
      v13 = (v14 + 1) | 0x80000000;
    }
    else
    {
      if ( ((unsigned __int8)v7 & 1) != 0 )
        ExRaiseDatatypeMisalignment();
      v11 = a4;
      *((_QWORD *)&v17 + 1) = a4;
      DWORD1(v17) &= ~0x80000000;
      v12 = -1LL;
      do
        ++v12;
      while ( *((_WORD *)a4 + v12) );
      LODWORD(v17) = 2 * v12;
      v13 = (2 * v12 + 2) & 0x7FFFFFFF;
    }
    DWORD1(v17) = v13;
    v7 = &v17;
  }
  UserSessionState = W32GetUserSessionState(v11, 0LL);
  return (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int128 *, __int64))(UserSessionState
                                                                                  + 8LL * ((a6 + 6) & 0x1F)
                                                                                  + 71176))(
           a1,
           v9,
           a3,
           v7,
           a5);
}
