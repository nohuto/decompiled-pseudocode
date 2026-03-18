/*
 * XREFs of GuessMonitorOverrideForCoordinateConversions @ 0x140046C00
 * Callers:
 *     NtUserGetClipCursor @ 0x140046AE0 (NtUserGetClipCursor.c)
 *     NtUserClipCursor @ 0x1401087D0 (NtUserClipCursor.c)
 *     NtUserLockCursor @ 0x14011DEB0 (NtUserLockCursor.c)
 * Callees:
 *     HMValidateSharedHandleNoRip @ 0x140046F28 (HMValidateSharedHandleNoRip.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall GuessMonitorOverrideForCoordinateConversions(__int64 a1, unsigned int a2, int a3)
{
  __int64 v5; // rbx
  int (*v7)(void); // rax
  __int64 (__fastcall *v8)(__int64 *, __int64); // rax
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // [rsp+30h] [rbp+8h] BYREF

  v12 = a1;
  v5 = 0LL;
  if ( ***(_DWORD ***)(W32GetUserSessionState(a1) + 57008) > 1u )
  {
    v7 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable() + 48) + 3936LL);
    if ( v7 )
    {
      if ( v7() >= 0 )
      {
        v8 = *(__int64 (__fastcall **)(__int64 *, __int64))(*(_QWORD *)(W32GetWin32kBaseApiSetTable() + 48) + 3944LL);
        if ( v8 )
        {
          v9 = 18LL;
          if ( !a3 )
            v9 = a2;
          v10 = v8(&v12, v9);
        }
        else
        {
          v10 = 0LL;
        }
        if ( v10 )
        {
          v11 = *(_QWORD *)(v10 + 40);
          if ( (((unsigned __int16)(a2 >> 8) ^ (unsigned __int16)(*(_DWORD *)(v11 + 288) >> 8)) & 0x1FF) == 0 )
            return HMValidateSharedHandleNoRip(*(_QWORD *)(v11 + 256));
        }
      }
    }
  }
  return v5;
}
