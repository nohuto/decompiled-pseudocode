/*
 * XREFs of ?_InBoxString@@YA_JJPEAUtagWND@@I_K_J1KH@Z @ 0x1400F56B4
 * Callers:
 *     NtUserfnINCBOXSTRING @ 0x1400F45F0 (NtUserfnINCBOXSTRING.c)
 *     NtUserfnINLBOXSTRING @ 0x1400F4670 (NtUserfnINLBOXSTRING.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     IsPseudoPwnd @ 0x1400F5860 (IsPseudoPwnd.c)
 *     NtUserfnINSTRING @ 0x1400F6230 (NtUserfnINSTRING.c)
 *     NtUserfnINSTRINGNULL @ 0x1400F6540 (NtUserfnINSTRINGNULL.c)
 *     _guard_dispatch_icall @ 0x140340330 (_guard_dispatch_icall.c)
 */

__int64 __fastcall _InBoxString(
        __int64 a1,
        struct tagWND *a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        unsigned __int64 a6,
        unsigned int a7,
        int a8)
{
  int v11; // edi
  struct tagTHREADINFO *v12; // rbx
  __int64 v13; // rcx
  int v14; // r8d
  __int64 v15; // rdx
  bool v16; // zf
  int v17; // r15d
  __int64 v18; // rdi
  __int64 v19; // rdx
  __int64 v20; // rdx
  __int64 UserSessionState; // rax
  __int64 result; // rax

  v11 = a1;
  v12 = PtiCurrent(a1, (__int64)a2);
  if ( !(unsigned int)IsPseudoPwnd(a2) && v12 )
  {
    v13 = *((_QWORD *)a2 + 5);
    if ( v11 == 678 )
    {
      v14 = 399;
      v15 = *(_DWORD *)(v13 + 28) >> 6;
      LOBYTE(v15) = (*(_DWORD *)(v13 + 28) & 0x40) != 0;
      v16 = (*(_DWORD *)(v13 + 28) & 0x30) == 0;
    }
    else
    {
      v13 = *(unsigned int *)(v13 + 28);
      v14 = 332;
      v15 = (unsigned int)v13 >> 9;
      LOBYTE(v15) = (v13 & 0x200) != 0;
      v16 = (v13 & 0x30) == 0;
    }
    v17 = *((_DWORD *)v12 + 401);
    if ( (_BYTE)v15 || v16 )
    {
      *((_DWORD *)v12 + 401) = 2;
      if ( a3 == v14 )
        result = NtUserfnINSTRINGNULL((_DWORD)a2, a3, a4, a5, a6, a7, a8);
      else
        result = NtUserfnINSTRING((_DWORD)a2, a3, a4, a5, a6, a7, a8);
      goto LABEL_10;
    }
    v18 = ((_BYTE)a7 + 6) & 0x1F;
    if ( *(__int64 (__fastcall **)(int, int, int, int, __int64))(W32GetUserSessionState(v13, v15) + 8 * v18 + 71176) != xxxSendMessageFF
      && *(__int64 (__fastcall **)(int, int, int, int, void *))(W32GetUserSessionState(xxxSendMessageFF, v19)
                                                              + 8 * v18
                                                              + 71176) != xxxWrapSendMessageBSM )
    {
      *((_DWORD *)v12 + 401) = 1;
      UserSessionState = W32GetUserSessionState(xxxWrapSendMessageBSM, v20);
      result = (*(__int64 (__fastcall **)(struct tagWND *, _QWORD, __int64, __int64, unsigned __int64))(UserSessionState + 8 * v18 + 71176))(
                 a2,
                 a3,
                 a4,
                 a5,
                 a6);
LABEL_10:
      *((_DWORD *)v12 + 401) = v17;
      return result;
    }
  }
  return -1LL;
}
