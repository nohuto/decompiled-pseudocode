/*
 * XREFs of NtUserfnINCNTOUTSTRING @ 0x1402A1E50
 * Callers:
 *     <none>
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     _guard_dispatch_icall @ 0x140340330 (_guard_dispatch_icall.c)
 */

__int64 __fastcall NtUserfnINCNTOUTSTRING(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int16 *a4,
        __int64 a5,
        char a6,
        int a7)
{
  unsigned int v9; // r14d
  unsigned __int16 *v11; // rax
  signed int v12; // edx
  __int64 result; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 UserSessionState; // rax
  __int128 v17; // [rsp+48h] [rbp-20h] BYREF

  v9 = a2;
  v17 = 0LL;
  PtiCurrent(a1, a2);
  DWORD1(v17) = a7 << 31;
  v11 = a4;
  if ( (unsigned __int64)a4 >= MmUserProbeAddress )
    v11 = (unsigned __int16 *)MmUserProbeAddress;
  v12 = *v11 | DWORD1(v17) & 0x80000000;
  DWORD1(v17) = v12;
  if ( !a7 )
  {
    v12 = (2 * v12) | v12 & 0x80000000;
    DWORD1(v17) = v12;
  }
  if ( (v12 & 0x7FFFFFFFu) < 2 )
    return 0LL;
  LODWORD(v17) = 0;
  *((_QWORD *)&v17 + 1) = a4;
  ProbeForWrite(a4, v12 & 0x7FFFFFFF, (v12 >> 31) + 2);
  UserSessionState = W32GetUserSessionState(v15, v14);
  result = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int128 *, __int64))(UserSessionState
                                                                                    + 8LL * ((a6 + 6) & 0x1F)
                                                                                    + 71176))(
             a1,
             v9,
             a3,
             &v17,
             a5);
  if ( !result )
  {
    if ( a7 )
      *(_BYTE *)a4 = 0;
    else
      *a4 = 0;
  }
  return result;
}
