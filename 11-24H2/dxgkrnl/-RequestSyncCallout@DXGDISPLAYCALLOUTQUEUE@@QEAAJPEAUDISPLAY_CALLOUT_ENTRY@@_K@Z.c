/*
 * XREFs of ?RequestSyncCallout@DXGDISPLAYCALLOUTQUEUE@@QEAAJPEAUDISPLAY_CALLOUT_ENTRY@@_K@Z @ 0x1401D68A8
 * Callers:
 *     DxgkRequestSyncDisplaySwitchCallout @ 0x1401D7660 (DxgkRequestSyncDisplaySwitchCallout.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000A0F0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000A3C0 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14000B9E0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x140028A90 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ??_GDISPLAY_CALLOUT_ENTRY@@QEAAPEAXI@Z @ 0x14006D440 (--_GDISPLAY_CALLOUT_ENTRY@@QEAAPEAXI@Z.c)
 *     DpiGdiSyncDisplayCallout @ 0x1403F798C (DpiGdiSyncDisplayCallout.c)
 */

__int64 __fastcall DXGDISPLAYCALLOUTQUEUE::RequestSyncCallout(
        DXGDISPLAYCALLOUTQUEUE *this,
        struct DISPLAY_CALLOUT_ENTRY *a2,
        __int64 a3)
{
  char *v4; // rsi
  char **v6; // rax
  __int64 v7; // rdx
  int v8; // eax
  __int64 v9; // rbp
  struct DISPLAY_CALLOUT_ENTRY *i; // rax
  struct DISPLAY_CALLOUT_ENTRY *v11; // rcx
  struct DISPLAY_CALLOUT_ENTRY **v12; // rdx
  _BYTE v14[16]; // [rsp+50h] [rbp-18h] BYREF

  *((_BYTE *)a2 + 20) = 1;
  v4 = (char *)this + 48;
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v14, this, 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v14);
  v6 = (char **)*((_QWORD *)v4 + 1);
  if ( *v6 != v4 )
    goto LABEL_13;
  *(_QWORD *)a2 = v4;
  *((_QWORD *)a2 + 1) = v6;
  *v6 = (char *)a2;
  *((_QWORD *)v4 + 1) = a2;
  DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v14);
  LOBYTE(v7) = 1;
  v8 = DpiGdiSyncDisplayCallout(a3, v7);
  v9 = v8;
  if ( v8 < 0 )
  {
    WdLogSingleEntry1(2LL, v8);
    WdLogGlobalForLineNumber = 767;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Failed request a synchronous Display Callout (Status == 0x%I64x)",
      v9,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  else
  {
    LODWORD(v9) = *((_DWORD *)a2 + 14);
  }
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v14);
  for ( i = *(struct DISPLAY_CALLOUT_ENTRY **)v4; ; i = *(struct DISPLAY_CALLOUT_ENTRY **)i )
  {
    if ( i == (struct DISPLAY_CALLOUT_ENTRY *)v4 )
      goto LABEL_12;
    v11 = *(struct DISPLAY_CALLOUT_ENTRY **)i;
    if ( i == a2 )
      break;
  }
  if ( *((struct DISPLAY_CALLOUT_ENTRY **)v11 + 1) != i
    || (v12 = (struct DISPLAY_CALLOUT_ENTRY **)*((_QWORD *)i + 1), *v12 != i) )
  {
LABEL_13:
    __fastfail(3u);
  }
  *v12 = v11;
  *((_QWORD *)v11 + 1) = v12;
LABEL_12:
  DISPLAY_CALLOUT_ENTRY::`scalar deleting destructor'(a2);
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v14);
  return (unsigned int)v9;
}
