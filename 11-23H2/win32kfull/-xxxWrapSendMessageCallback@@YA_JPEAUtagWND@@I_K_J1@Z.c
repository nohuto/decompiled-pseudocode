/*
 * XREFs of ?xxxWrapSendMessageCallback@@YA_JPEAUtagWND@@I_K_J1@Z @ 0x1C0033280
 * Callers:
 *     <none>
 * Callees:
 *     xxxSendMessageCallback @ 0x1C00333BC (xxxSendMessageCallback.c)
 *     UserSetLastError @ 0x1C00EDA4C (UserSetLastError.c)
 */

__int64 __fastcall xxxWrapSendMessageCallback(
        struct tagWND *a1,
        unsigned int a2,
        unsigned __int64 a3,
        __int64 a4,
        ULONG64 a5)
{
  _BYTE *v8; // rdx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdi
  __int64 v12; // r8
  __int128 v14; // [rsp+58h] [rbp-50h]
  __int128 v15; // [rsp+68h] [rbp-40h] BYREF
  __int64 v16; // [rsp+78h] [rbp-30h]

  v15 = 0LL;
  v16 = 0LL;
  if ( (a2 & 0xFFFE0000) != 0 )
  {
    UserSetLastError(87LL);
    return 0LL;
  }
  else
  {
    if ( (a5 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v8 = (_BYTE *)a5;
    if ( a5 >= MmUserProbeAddress )
      v8 = (_BYTE *)MmUserProbeAddress;
    *v8 = *v8;
    v8[15] = v8[15];
    v14 = *(_OWORD *)a5;
    if ( a1 != (struct tagWND *)-1LL )
      ThreadLockAlways(a1, &v15);
    v11 = (int)xxxSendMessageCallback(a1, a2, a3, v14, *((__int64 *)&v14 + 1), 1, 0, 1);
    if ( a1 != (struct tagWND *)-1LL )
      ThreadUnlock1(v10, v9, v12);
    return v11;
  }
}
