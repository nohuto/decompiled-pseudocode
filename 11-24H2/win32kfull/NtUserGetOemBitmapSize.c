/*
 * XREFs of NtUserGetOemBitmapSize @ 0x140296B30
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x14005FE74 (UserSetLastError.c)
 *     GetOemBitmapInfo @ 0x14007B520 (GetOemBitmapInfo.c)
 *     SetLastNtError @ 0x1401067E0 (SetLastNtError.c)
 */

__int64 __fastcall NtUserGetOemBitmapSize(unsigned int a1, _QWORD *a2)
{
  int v4; // ebx
  ULONG64 v5; // rcx
  __int64 OemBitmapInfo; // rax
  int v7; // r8d
  int v8; // edx
  __int64 v10; // [rsp+60h] [rbp+18h]

  EnterCrit(0LL, 0LL);
  v4 = 0;
  if ( a1 < 0x5D )
  {
    OemBitmapInfo = GetOemBitmapInfo(a1);
    v7 = *(__int16 *)(OemBitmapInfo + 4);
    v8 = *(__int16 *)(OemBitmapInfo + 6);
    v5 = MmUserProbeAddress;
    if ( (unsigned __int64)a2 >= MmUserProbeAddress )
      a2 = (_QWORD *)MmUserProbeAddress;
    HIDWORD(v10) = *(__int16 *)(OemBitmapInfo + 6);
    LODWORD(v10) = *(__int16 *)(OemBitmapInfo + 4);
    *a2 = v10;
    if ( v7 && v8 )
      v4 = 1;
  }
  else
  {
    UserSetLastError(87);
  }
  UserSessionSwitchLeaveCrit(v5);
  return v4;
}
