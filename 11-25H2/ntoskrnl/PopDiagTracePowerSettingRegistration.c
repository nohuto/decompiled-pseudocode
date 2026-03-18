/*
 * XREFs of PopDiagTracePowerSettingRegistration @ 0x140A8AB2C
 * Callers:
 *     PopGetSettingNotificationName @ 0x1409663C4 (PopGetSettingNotificationName.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1404265C0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgCreate1Sz_wchar_t @ 0x140426678 (_tlgCreate1Sz_wchar_t.c)
 *     _tlgKeywordOn @ 0x14042F500 (_tlgKeywordOn.c)
 *     PsGetCurrentThreadProcess @ 0x1404725F0 (PsGetCurrentThreadProcess.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 */

char __fastcall PopDiagTracePowerSettingRegistration(__int64 a1, int a2, char a3)
{
  _KPROCESS *CurrentThreadProcess; // rax
  unsigned __int16 *LastRebalanceQpc; // r9
  _WORD *v8; // r10
  unsigned __int64 v9; // rax
  bool v10; // zf
  _WORD *v11; // r8
  const WCHAR *v12; // r8
  const WCHAR *v13; // r10
  const WCHAR *v14; // rdx
  char v16; // [rsp+38h] [rbp-39h] BYREF
  int v17; // [rsp+3Ch] [rbp-35h] BYREF
  __int64 v18; // [rsp+40h] [rbp-31h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v19; // [rsp+48h] [rbp-29h] BYREF
  __int64 *v20; // [rsp+68h] [rbp-9h]
  __int64 v21; // [rsp+70h] [rbp-1h]
  char v22[16]; // [rsp+78h] [rbp+7h] BYREF
  int *v23; // [rsp+88h] [rbp+17h]
  __int64 v24; // [rsp+90h] [rbp+1Fh]
  __int64 v25; // [rsp+98h] [rbp+27h]
  __int64 v26; // [rsp+A0h] [rbp+2Fh]
  char *v27; // [rsp+A8h] [rbp+37h]
  __int64 v28; // [rsp+B0h] [rbp+3Fh]

  CurrentThreadProcess = PsGetCurrentThreadProcess();
  LastRebalanceQpc = (unsigned __int16 *)CurrentThreadProcess[1].LastRebalanceQpc;
  if ( LastRebalanceQpc )
  {
    v8 = (_WORD *)*((_QWORD *)LastRebalanceQpc + 1);
    v9 = (unsigned __int64)*LastRebalanceQpc >> 1;
    v10 = 2 * v9 == 0;
    CurrentThreadProcess = (_KPROCESS *)(2 * v9);
    v11 = (_WORD *)((char *)v8 + (_QWORD)CurrentThreadProcess);
    if ( !v10 )
    {
      do
      {
        if ( *v11 == 92 )
          break;
        --v11;
      }
      while ( v11 != v8 );
    }
    if ( (unsigned int)dword_140E07680 > 5 )
    {
      LOBYTE(CurrentThreadProcess) = tlgKeywordOn((__int64)&dword_140E07680, 0x400000000000LL);
      if ( (_BYTE)CurrentThreadProcess )
      {
        v18 = 0x2000000LL;
        v14 = v12 + 1;
        v21 = 8LL;
        if ( v12 == v13 )
          v14 = v12;
        v20 = &v18;
        tlgCreate1Sz_wchar_t((__int64)v22, v14);
        v17 = a2;
        v23 = &v17;
        v24 = 4LL;
        v27 = &v16;
        v25 = a1;
        v26 = 16LL;
        v16 = a3;
        v28 = 1LL;
        LOBYTE(CurrentThreadProcess) = tlgWriteTransfer_EtwWriteTransfer(
                                         (__int64)&dword_140E07680,
                                         (unsigned __int8 *)byte_14004A241,
                                         0LL,
                                         0LL,
                                         7u,
                                         &v19);
      }
    }
  }
  return (char)CurrentThreadProcess;
}
