/*
 * XREFs of NtUserCheckProcessForClipboardAccess @ 0x140240DA0
 * Callers:
 *     <none>
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBX1IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteAgg@@YAJ011I2@ZPEBX@@SAJPEBU_tlgProvider_t@@PEBX1AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@@Z @ 0x140001A34 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate.c)
 *     UserSetLastError @ 0x14005FE74 (UserSetLastError.c)
 *     ?InForegroundQueue@@YAHPEBUtagTHREADINFO@@H@Z @ 0x1400945E8 (-InForegroundQueue@@YAHPEBUtagTHREADINFO@@H@Z.c)
 *     LockProcessByClientId @ 0x1400A4000 (LockProcessByClientId.c)
 *     _tlgKeywordOn @ 0x14017A844 (_tlgKeywordOn.c)
 *     ??1CLockProcessByPid@@QEAA@XZ @ 0x14018902C (--1CLockProcessByPid@@QEAA@XZ.c)
 *     ?GetProcessInfo@CLockProcessByPid@@QEBAPEAUtagPROCESSINFO@@XZ @ 0x140232374 (-GetProcessInfo@CLockProcessByPid@@QEBAPEAUtagPROCESSINFO@@XZ.c)
 *     ??0CLockProcessByPid@@QEAA@PEAXKKW4LockProcessOptions@@_K@Z @ 0x14027512C (--0CLockProcessByPid@@QEAA@PEAXKKW4LockProcessOptions@@_K@Z.c)
 *     Feature_ResponsiblePid__private_IsEnabledDeviceUsageNoInline @ 0x140277A94 (Feature_ResponsiblePid__private_IsEnabledDeviceUsageNoInline.c)
 *     ??0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z @ 0x14028A53C (--0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z.c)
 */

__int64 __fastcall NtUserCheckProcessForClipboardAccess(int a1, _DWORD *a2)
{
  void *v3; // rdi
  int v4; // r14d
  int v5; // ebx
  __int64 v6; // rcx
  __int64 v7; // rdx
  PVOID v8; // rcx
  __int64 v9; // rdx
  unsigned __int64 ProcessInfo; // rdi
  __int64 v11; // rcx
  __int64 ProcessWin32Process; // rax
  const struct tagTHREADINFO *i; // rsi
  __int64 CurrentProcessWin32Process; // rax
  unsigned __int64 v15; // rcx
  unsigned int v16; // eax
  __int64 v17; // rcx
  __int64 v18; // r8
  const wchar_t *v20; // [rsp+30h] [rbp-88h] BYREF
  __int64 v21; // [rsp+38h] [rbp-80h] BYREF
  __int64 v22; // [rsp+40h] [rbp-78h] BYREF
  _BYTE v23[24]; // [rsp+50h] [rbp-68h] BYREF
  __int64 v24; // [rsp+68h] [rbp-50h]
  int v25; // [rsp+D0h] [rbp+18h] BYREF
  PVOID Object; // [rsp+D8h] [rbp+20h] BYREF

  v3 = (void *)a1;
  v4 = 0;
  Object = 0LL;
  v5 = 1;
  EnterLeaveCritShared::EnterLeaveCritShared(&v22, 1LL);
  if ( (unsigned int)Feature_ResponsiblePid__private_IsEnabledDeviceUsageNoInline(v6) )
  {
    CLockProcessByPid::CLockProcessByPid(v23, (unsigned int)v3, 1024LL);
    if ( !v24 || (ProcessInfo = CLockProcessByPid::GetProcessInfo((CLockProcessByPid *)v23)) == 0 )
    {
      v5 = 0;
      UserSetLastError(87);
      CLockProcessByPid::~CLockProcessByPid((CLockProcessByPid *)v23, v7);
      goto LABEL_28;
    }
    CLockProcessByPid::~CLockProcessByPid((CLockProcessByPid *)v23, v9);
  }
  else
  {
    if ( (int)LockProcessByClientId(v3, (PEPROCESS *)&Object) < 0 )
      goto LABEL_7;
    ProcessWin32Process = PsGetProcessWin32Process(Object);
    ProcessInfo = ProcessWin32Process;
    if ( ProcessWin32Process )
    {
      v11 = -(__int64)(*(_QWORD *)ProcessWin32Process != 0LL);
      ProcessInfo = v11 & ProcessWin32Process;
    }
    if ( !ProcessInfo )
    {
LABEL_7:
      v5 = 0;
      UserSetLastError(87);
      goto LABEL_28;
    }
  }
  for ( i = *(const struct tagTHREADINFO **)(ProcessInfo + 328); i; i = (const struct tagTHREADINFO *)*((_QWORD *)i + 88) )
  {
    v4 = InForegroundQueue(i, 1);
    if ( v4 )
      break;
  }
  if ( !v4 )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v11);
    if ( CurrentProcessWin32Process )
      CurrentProcessWin32Process &= -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
    if ( !*(_DWORD *)(CurrentProcessWin32Process + 876) )
    {
      v15 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
      v16 = *(_DWORD *)(ProcessInfo + 1076);
      if ( v16 <= (unsigned int)v15 )
        v4 = (unsigned int)v15 - v16 <= 0x1F4;
      if ( (unsigned int)dword_140398BF0 > 5 && tlgKeywordOn((__int64)&dword_140398BF0, 0x400000000000LL) )
      {
        v20 = (const wchar_t *)(ProcessInfo + 984);
        v25 = v4;
        v21 = 1LL;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteAgg(_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),void const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
          v17,
          (int)&unk_140366B5A,
          v18,
          (__int64)&v21,
          (__int64)&v25,
          &v20);
      }
    }
  }
  if ( (unsigned __int64)a2 >= MmUserProbeAddress )
    a2 = (_DWORD *)MmUserProbeAddress;
  *a2 = v4;
  v8 = Object;
  if ( Object )
    ObfDereferenceObject(Object);
LABEL_28:
  UserSessionSwitchLeaveCrit(v8);
  return v5;
}
