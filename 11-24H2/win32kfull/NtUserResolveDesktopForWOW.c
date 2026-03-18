/*
 * XREFs of NtUserResolveDesktopForWOW @ 0x14029BF60
 * Callers:
 *     <none>
 * Callees:
 *     ??0_unnamed_type_list_@tagTLBLOCK@@QEAA@XZ @ 0x14003D210 (--0_unnamed_type_list_@tagTLBLOCK@@QEAA@XZ.c)
 *     ??1?$Win32RawLockedNtObject@UtagDESKTOP@@@@QEAA@XZ @ 0x14003E628 (--1-$Win32RawLockedNtObject@UtagDESKTOP@@@@QEAA@XZ.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??$ManualLock@X@?$Win32RawLockedItemBase@G$1?Win32FreePool@@YAXPEAX@Z$00$00$00@@QEAAXPEAGP6AXPEAX@Z@Z @ 0x140116D40 (--$ManualLock@X@-$Win32RawLockedItemBase@G$1-Win32FreePool@@YAXPEAX@Z$00$00$00@@QEAAXPEAGP6AXPEA.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14026C310 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     xxxResolveDesktopForWOW @ 0x140286E50 (xxxResolveDesktopForWOW.c)
 *     memmove @ 0x140340480 (memmove.c)
 */

__int64 __fastcall NtUserResolveDesktopForWOW(struct _UNICODE_STRING *a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  ULONG64 v4; // rax
  int v5; // ecx
  WCHAR *v6; // rbx
  ULONG64 v7; // r8
  WCHAR *v8; // rax
  int v9; // ebx
  __int64 v10; // rcx
  UNICODE_STRING SourceString; // [rsp+30h] [rbp-48h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-38h] BYREF
  ULONG_PTR BugCheckParameter2[4]; // [rsp+50h] [rbp-28h] BYREF
  int v15; // [rsp+88h] [rbp+10h]

  SourceString = 0LL;
  DestinationString = 0LL;
  EnterCrit(0LL, 0LL);
  MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000, 1186);
  PtiCurrent(v3, v2);
  tagTLBLOCK::_unnamed_type_list_::_unnamed_type_list_((tagTLBLOCK::_unnamed_type_list_ *)BugCheckParameter2);
  v4 = (ULONG64)a1;
  if ( (unsigned __int64)a1 >= MmUserProbeAddress )
    v4 = MmUserProbeAddress;
  v5 = *(_DWORD *)v4;
  v15 = *(_DWORD *)v4;
  *(_DWORD *)&SourceString.Length = *(_DWORD *)v4;
  v6 = *(WCHAR **)(v4 + 8);
  SourceString.Buffer = v6;
  if ( ((unsigned __int8)v6 & 1) != 0 )
    ExRaiseDatatypeMisalignment();
  v7 = (ULONG64)v6 + HIWORD(v15);
  if ( v7 <= (unsigned __int64)v6 || v7 >= MmUserProbeAddress )
    ExRaiseAccessViolation();
  if ( (unsigned __int16)v5 > HIWORD(v15) )
  {
    if ( (v5 & 1) == 0 )
      goto LABEL_19;
    goto LABEL_18;
  }
  if ( (v5 & 1) != 0 )
  {
LABEL_18:
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1197);
LABEL_19:
    ExRaiseAccessViolation();
  }
  DestinationString = SourceString;
  if ( HIWORD(v15) )
  {
    v8 = (WCHAR *)Win32AllocPoolWithQuotaZInit(HIWORD(v15), 2037674837LL);
    SourceString.Buffer = v8;
    if ( !v8 )
      ExRaiseStatus(-1073741801);
    Win32RawLockedItemBase<unsigned short,&void Win32FreePool(void *),1,1,1>::ManualLock<void>(
      BugCheckParameter2,
      (ULONG_PTR)v8,
      (__int64)Win32FreePool);
    memmove(SourceString.Buffer, v6, SourceString.Length);
  }
  else
  {
    SourceString.Buffer = 0LL;
  }
  v9 = xxxResolveDesktopForWOW(&SourceString);
  if ( v9 >= 0 )
  {
    RtlCopyUnicodeString(&DestinationString, &SourceString);
    *a1 = DestinationString;
  }
  Win32RawLockedNtObject<tagDESKTOP>::~Win32RawLockedNtObject<tagDESKTOP>((__int64)BugCheckParameter2);
  UserSessionSwitchLeaveCrit(v10);
  return (unsigned int)v9;
}
