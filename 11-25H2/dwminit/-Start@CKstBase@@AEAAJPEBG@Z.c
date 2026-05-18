/*
 * XREFs of ?Start@CKstBase@@AEAAJPEBG@Z @ 0x1800102FC
 * Callers:
 *     DwmpStartWinlogonMouseThread @ 0x18000DDC0 (DwmpStartWinlogonMouseThread.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180005E74 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?GetLastErrorFailHr@details@wil@@YAJXZ @ 0x180006708 (-GetLastErrorFailHr@details@wil@@YAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180008888 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x180009F68 (-reset@-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@_E$1-CloseHandle@details@wil@@YAX0@ZU-$i.c)
 */

__int64 __fastcall CKstBase::Start(HANDLE *this, const unsigned __int16 *a2)
{
  char *v3; // rbx
  HANDLE *v4; // r14
  HANDLE v5; // rbp
  DWORD LastError; // edi
  wil::details *v8; // rcx
  HANDLE Event; // rdi
  HANDLE *v10; // rbx
  DWORD v11; // eax
  const char *v12; // r9
  signed int LastErrorFailHr; // eax
  unsigned int v14; // edi
  char v15; // [rsp+30h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  DWORD lpThreadId; // [rsp+68h] [rbp+10h] BYREF
  int v18; // [rsp+6Ch] [rbp+14h]

  v18 = HIDWORD(a2);
  lpThreadId = 0;
  v3 = (char *)CreateThread(0LL, 0LL, (LPTHREAD_START_ROUTINE)CKstBase::RunKernelThreadStatic, this, 4u, &lpThreadId);
  v4 = this + 2;
  if ( this + 2 == (HANDLE *)&v15 )
  {
    if ( (unsigned __int64)(v3 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
      CloseHandle(v3);
  }
  else
  {
    v5 = *v4;
    if ( (char *)*v4 - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
    {
      LastError = GetLastError();
      CloseHandle(v5);
      SetLastError(LastError);
    }
    *v4 = v3;
  }
  if ( !*v4 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x44,
      (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\input\\kstbase.cpp",
      (const char *)0x8007000ELL);
    return 2147942414LL;
  }
  SetThreadDescription(*v4, L"WinLogon Kernel Sensor Thread");
  SetThreadPriority(this[2], 16);
  Event = CreateEventExW(0LL, 0LL, 0, 0x1F0003u);
  if ( Event )
  {
    GetLastError();
    v10 = this + 5;
    _reset___unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__QEAAXPEAX_Z(
      this + 5,
      Event);
  }
  else
  {
    LastErrorFailHr = wil::details::GetLastErrorFailHr(v8);
    v10 = this + 5;
    v14 = LastErrorFailHr;
    if ( LastErrorFailHr < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x52,
        (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\input\\kstbase.cpp",
        (const char *)(unsigned int)LastErrorFailHr);
      return v14;
    }
  }
  ResumeThread(this[2]);
  v11 = WaitForSingleObjectEx(*v10, 0xFFFFFFFF, 0);
  if ( v11 != 258 )
  {
    if ( v11 )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        2772LL,
        (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource/wil/resource.h",
        v12);
  }
  _reset___unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__QEAAXPEAX_Z(
    v10,
    0LL);
  return 0LL;
}
