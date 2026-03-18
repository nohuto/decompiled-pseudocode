/*
 * XREFs of _MapDesktopObject @ 0x140077144
 * Callers:
 *     NtUserMapDesktopObject @ 0x140076F30 (NtUserMapDesktopObject.c)
 * Callees:
 *     ??1CDisableILCheckAuto@@QEAA@XZ @ 0x140061790 (--1CDisableILCheckAuto@@QEAA@XZ.c)
 *     ??0CDisableILCheckAuto@@QEAA@XZ @ 0x1400617A8 (--0CDisableILCheckAuto@@QEAA@XZ.c)
 *     HMValidateHandleWithDescriptor @ 0x140077C08 (HMValidateHandleWithDescriptor.c)
 */

__int64 __fastcall MapDesktopObject(__int64 a1, __int64 a2)
{
  __int64 v3; // rdx
  __int64 v4; // rax
  __int64 v5; // rbx
  __int64 v6; // rcx
  __int64 v7; // rdi
  __int64 v8; // rsi
  __int64 CurrentProcessWin32Process; // rax
  __int64 v10; // rcx
  __int64 v11; // rbx
  _QWORD *i; // rbx
  __int64 v14; // rbx
  _BYTE v15[24]; // [rsp+20h] [rbp-18h] BYREF

  CDisableILCheckAuto::CDisableILCheckAuto((CDisableILCheckAuto *)v15, a2);
  LOBYTE(v3) = -1;
  v4 = HMValidateHandleWithDescriptor(a1, v3);
  v5 = v4;
  if ( v4 )
  {
    v7 = _HMPheFromObject(v4);
    if ( (*(_BYTE *)(v7 + 25) & 0x40) == 0 )
    {
      v8 = *(_QWORD *)(v5 + 24);
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v6);
      v11 = CurrentProcessWin32Process;
      if ( CurrentProcessWin32Process )
      {
        v10 = -*(_QWORD *)CurrentProcessWin32Process;
        v11 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process;
      }
      W32GetUserGdiSessionState(v10);
      for ( i = *(_QWORD **)(v11 + 696); i; i = (_QWORD *)*i )
      {
        if ( i[1] == v8 )
        {
          v14 = *(_QWORD *)v7 + i[2];
          CDisableILCheckAuto::~CDisableILCheckAuto((CDisableILCheckAuto *)v15);
          return v14;
        }
      }
    }
  }
  CDisableILCheckAuto::~CDisableILCheckAuto((CDisableILCheckAuto *)v15);
  return 0LL;
}
