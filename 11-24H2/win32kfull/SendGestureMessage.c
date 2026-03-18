/*
 * XREFs of SendGestureMessage @ 0x1402186E8
 * Callers:
 *     NtUserfnGESTURE @ 0x1402185F0 (NtUserfnGESTURE.c)
 * Callees:
 *     UserSetLastError @ 0x14005FE74 (UserSetLastError.c)
 *     SetLastNtError @ 0x1401067E0 (SetLastNtError.c)
 *     _FreeGestureInfo @ 0x140266FF0 (_FreeGestureInfo.c)
 *     AllocGestureInfo @ 0x14026761C (AllocGestureInfo.c)
 *     ValidateGestureInfo @ 0x14026CA44 (ValidateGestureInfo.c)
 *     RtlCopyFromUser @ 0x14026E428 (RtlCopyFromUser.c)
 *     _guard_dispatch_icall @ 0x140340330 (_guard_dispatch_icall.c)
 */

__int64 __fastcall SendGestureMessage(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        int a6,
        _QWORD *a7)
{
  int v8; // ebx
  __int64 v11; // rdi
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 CurrentProcessWow64Process; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rdi
  __int64 UserSessionState; // rax
  __int128 v21; // [rsp+48h] [rbp-80h] BYREF
  __int128 v22; // [rsp+58h] [rbp-70h]
  __int128 v23; // [rsp+68h] [rbp-60h]
  SIZE_T Length; // [rsp+78h] [rbp-50h]
  __int128 v25; // [rsp+80h] [rbp-48h] BYREF
  __int128 v26; // [rsp+90h] [rbp-38h]
  __int128 v27; // [rsp+A0h] [rbp-28h]
  SIZE_T v28; // [rsp+B0h] [rbp-18h]

  v8 = a3;
  v25 = 0LL;
  v26 = 0LL;
  v27 = 0LL;
  v28 = 0LL;
  v11 = 0LL;
  if ( (unsigned __int64)(a1 - 1) > 0xFFFFFFFFFFFFFFFDuLL
    || !a4
    || (unsigned __int64)(a3 - 1) > 0xFFFFFFFE
    || (unsigned int)a3 < 0x38 )
  {
    UserSetLastError(87);
    return 0LL;
  }
  v21 = 0LL;
  v22 = 0LL;
  v23 = 0LL;
  Length = 0LL;
  RtlCopyFromUser(&v21, (void *)a4, 0x38uLL);
  v25 = v21;
  v26 = v22;
  v27 = v23;
  v28 = Length;
  if ( (_DWORD)Length != v8 - 56 )
  {
    UserSetLastError(87);
    return 0LL;
  }
  if ( (_DWORD)Length )
  {
    v11 = a4 + 56;
    CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v13, v12, v14);
    ProbeForRead((volatile void *)(a4 + 56), (unsigned int)Length, CurrentProcessWow64Process != 0 ? 1 : 4);
  }
  if ( !(unsigned int)ValidateGestureInfo(&v25) )
    return 0LL;
  v19 = AllocGestureInfo(a1, 0LL, &v25, v11);
  if ( !v19 )
    return 0LL;
  UserSessionState = W32GetUserSessionState(v18, v17);
  *a7 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64, __int64))(UserSessionState
                                                                             + 8LL * (((_BYTE)a6 + 6) & 0x1F)
                                                                             + 71176))(
          a1,
          a2,
          DWORD2(v25),
          v19,
          a5);
  if ( a6 == 683 || a6 == 684 || a6 == 692 )
    FreeGestureInfo(v19, 1LL);
  return 1LL;
}
