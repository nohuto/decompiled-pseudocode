/*
 * XREFs of NtUserCheckProcessForClipboardAccess @ 0x1C002FAF0
 * Callers:
 *     <none>
 * Callees:
 *     ?InForegroundQueue@@YAHPEBUtagTHREADINFO@@H@Z @ 0x1C002FCB4 (-InForegroundQueue@@YAHPEBUtagTHREADINFO@@H@Z.c)
 *     LockProcessByClientId @ 0x1C0035CE0 (LockProcessByClientId.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBX1IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteAgg@@YAJ011I2@ZPEBX@@SAJPEBU_tlgProvider_t@@PEBX1AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@@Z @ 0x1C0087408 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate.c)
 *     _tlgKeywordOn @ 0x1C00D9324 (_tlgKeywordOn.c)
 *     UserSetLastError @ 0x1C00EDA4C (UserSetLastError.c)
 */

__int64 __fastcall NtUserCheckProcessForClipboardAccess(__int64 a1, _DWORD *a2, __int64 a3)
{
  _DWORD *v3; // r15
  __int64 v4; // rbx
  int v5; // edi
  int v6; // r14d
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 ProcessWin32Process; // rax
  __int64 v10; // rcx
  __int64 v11; // rbx
  const struct tagTHREADINFO *i; // rsi
  __int64 CurrentProcessWin32Process; // rax
  unsigned __int64 v14; // rcx
  unsigned int v15; // eax
  int v16; // ecx
  int v17; // r8d
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v23; // [rsp+30h] [rbp-38h] BYREF
  int v24; // [rsp+70h] [rbp+8h] BYREF
  PVOID Object; // [rsp+80h] [rbp+18h] BYREF
  __int64 v26; // [rsp+88h] [rbp+20h] BYREF

  v3 = a2;
  v4 = (int)a1;
  v5 = 0;
  v6 = 0;
  Object = 0LL;
  EnterSharedCrit(a1, a2, a3);
  if ( (int)LockProcessByClientId(v4, &Object, v7, v8) < 0 )
    goto LABEL_22;
  ProcessWin32Process = PsGetProcessWin32Process(Object);
  v11 = ProcessWin32Process;
  if ( ProcessWin32Process )
  {
    v10 = -*(_QWORD *)ProcessWin32Process;
    v11 = -(__int64)(*(_QWORD *)ProcessWin32Process != 0LL) & ProcessWin32Process;
  }
  if ( v11 )
  {
    for ( i = *(const struct tagTHREADINFO **)(v11 + 328); i; i = (const struct tagTHREADINFO *)*((_QWORD *)i + 83) )
    {
      v6 = InForegroundQueue(i, 1);
      if ( v6 )
        break;
    }
    if ( !v6 )
    {
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v10);
      if ( CurrentProcessWin32Process )
        CurrentProcessWin32Process &= -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
      if ( !*(_DWORD *)(CurrentProcessWin32Process + 900) )
      {
        v14 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
        v15 = *(_DWORD *)(v11 + 1100);
        if ( v15 <= (unsigned int)v14 )
          v6 = (unsigned int)v14 - v15 <= 0x1F4;
        if ( (unsigned int)dword_1C0354060 > 5 && (unsigned __int8)tlgKeywordOn(&dword_1C0354060, 0x400000000000LL) )
        {
          v26 = v11 + 1008;
          v24 = v6;
          v23 = 1LL;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteAgg(_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),void const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
            v16,
            (unsigned int)&unk_1C031BC1B,
            v17,
            (unsigned int)&v23,
            (__int64)&v24,
            (__int64)&v26);
        }
      }
    }
    v5 = 1;
    if ( (unsigned __int64)v3 >= MmUserProbeAddress )
      v3 = (_DWORD *)MmUserProbeAddress;
    *v3 = v6;
    ObfDereferenceObject(Object);
  }
  else
  {
LABEL_22:
    UserSetLastError(87LL);
  }
  UserSessionSwitchLeaveCrit(v19, v18, v20, v21);
  return v5;
}
