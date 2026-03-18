/*
 * XREFs of ?SetHighContrastWorker@@YAHREAUtagINTERNALSETHIGHCONTRAST@@HPEAH@Z @ 0x14028FC5C
 * Callers:
 *     xxxSystemParametersInfoWorker @ 0x14018F9C8 (xxxSystemParametersInfoWorker.c)
 * Callees:
 *     ??0_unnamed_type_list_@tagTLBLOCK@@QEAA@XZ @ 0x14003D210 (--0_unnamed_type_list_@tagTLBLOCK@@QEAA@XZ.c)
 *     SetLastNtError @ 0x1401067E0 (SetLastNtError.c)
 *     ??1?$Win32RawOptionalLockedItemAlways@UtagPROFILEUSERNAME@@$1?Win32FreePool@@YAXPEAX@Z@@QEAA@XZ @ 0x140113474 (--1-$Win32RawOptionalLockedItemAlways@UtagPROFILEUSERNAME@@$1-Win32FreePool@@YAXPEAX@Z@@QEAA@XZ.c)
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x14012C7E0 (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?DwmNotifyWindowsMarginsChangeByTheme@@YAXXZ @ 0x14018A33C (-DwmNotifyWindowsMarginsChangeByTheme@@YAXXZ.c)
 *     ?RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1401CA8E8 (-RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     __report_rangecheckfailure @ 0x14026DDC0 (__report_rangecheckfailure.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 *     memmove @ 0x140340480 (memmove.c)
 */

__int64 __fastcall SetHighContrastWorker(struct tagINTERNALSETHIGHCONTRAST *volatile a1, __int64 a2, unsigned int *a3)
{
  int v4; // ebx
  unsigned __int64 v6; // rcx
  __int64 ProfileUserName; // r14
  unsigned int v8; // edi
  __int64 UserSessionState; // rax
  __int64 v10; // r10
  int v11; // esi
  __int64 v12; // rdx
  __int64 v13; // rcx
  unsigned __int64 v14; // rdx
  _BYTE v16[32]; // [rsp+40h] [rbp-198h] BYREF
  unsigned __int16 v17[40]; // [rsp+60h] [rbp-178h] BYREF
  char v18[256]; // [rsp+B0h] [rbp-128h] BYREF

  v4 = a2;
  if ( *((_WORD *)a1 + 4) >= 0x100u )
    return 0LL;
  if ( *((_QWORD *)a1 + 2) )
    memmove(v18, *((const void **)a1 + 2), *((unsigned __int16 *)a1 + 4));
  v6 = *((_WORD *)a1 + 4) & 0xFFFE;
  if ( v6 >= 0x100 )
    _report_rangecheckfailure();
  *(_WORD *)&v18[v6] = 0;
  if ( v4 )
  {
    tagTLBLOCK::_unnamed_type_list_::_unnamed_type_list_((tagTLBLOCK::_unnamed_type_list_ *)v16);
    ProfileUserName = CreateProfileUserName(v16);
    RtlStringCchPrintfW(v17, 40LL, L"%d", *((unsigned int *)a1 + 1));
    v8 = FastWriteProfileStringW(ProfileUserName, 29LL, L"Flags", v17);
    *a3 = v8;
    if ( *((_QWORD *)a1 + 2) )
      v8 &= FastWriteProfileStringW(ProfileUserName, 29LL, L"High Contrast Scheme", v18);
    Win32RawOptionalLockedItemAlways<tagPROFILEUSERNAME,&void Win32FreePool(void *)>::~Win32RawOptionalLockedItemAlways<tagPROFILEUSERNAME,&void Win32FreePool(void *)>((__int64)v16);
  }
  else
  {
    *a3 = 1;
    v8 = 0;
  }
  if ( *a3 )
  {
    UserSessionState = W32GetUserSessionState(v6, a2);
    v10 = UserSessionState;
    v11 = *(_DWORD *)(UserSessionState + 21100);
    if ( *((_QWORD *)a1 + 2) )
      RtlStringCchCopyW((char *)(UserSessionState + 21112), 128LL, v18);
    *(_DWORD *)(v10 + 21100) = *((_DWORD *)a1 + 1) & 0xFFFFEFFF;
    SetAccessEnabledFlag();
    if ( (*((_DWORD *)a1 + 1) & 0x1000) == 0 )
    {
      if ( (*((_DWORD *)a1 + 1) & 1) != 0 )
      {
        if ( (v11 & 1) != 0 )
          v14 = (-(__int64)(v4 != 0) & 0xFFFFFFFFFFFFFFFCuLL) + 14;
        else
          v14 = (-(__int64)(v4 != 0) & 0xFFFFFFFFFFFFFFFCuLL) + 12;
      }
      else
      {
        v14 = (-(__int64)(v4 != 0) & 0xFFFFFFFFFFFFFFFCuLL) + 13;
      }
      PostWinlogonMessage(1026LL, v14);
    }
    DwmNotifyWindowsMarginsChangeByTheme(v13, v12);
  }
  return v8;
}
