/*
 * XREFs of ?InitializeMmcssTask@CKst@@AEAAJXZ @ 0x180224A10
 * Callers:
 *     ?Initialize@CKst@@EEAAJXZ @ 0x1802B76E0 (-Initialize@CKst@@EEAAJXZ.c)
 * Callees:
 *     MIDL_user_allocate @ 0x18001C2F0 (MIDL_user_allocate.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001DF0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0CMmcssTask@@QEAA@XZ @ 0x1800EE954 (--0CMmcssTask@@QEAA@XZ.c)
 *     ?Set@CMmcssTask@@QEAAJPEBUDWM_MMTASK@@_N@Z @ 0x180158024 (-Set@CMmcssTask@@QEAAJPEBUDWM_MMTASK@@_N@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18022AA04 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$unique_ptr@VCMmcssTask@@U?$default_delete@VCMmcssTask@@@std@@@std@@QEAA@XZ @ 0x18022C4F8 (--1-$unique_ptr@VCMmcssTask@@U-$default_delete@VCMmcssTask@@@std@@@std@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     memset_0 @ 0x180251AD8 (memset_0.c)
 *     ??_GCMmcssTask@@QEAAPEAXI@Z @ 0x1802B76B4 (--_GCMmcssTask@@QEAAPEAXI@Z.c)
 */

__int64 __fastcall CKst::InitializeMmcssTask(CKst *this)
{
  CMmcssTask *v2; // rax
  struct _RTL_CRITICAL_SECTION *v3; // rbx
  __int64 v4; // rdx
  _WORD *v5; // rcx
  __int16 v6; // ax
  _WORD *v7; // rax
  int v8; // eax
  unsigned int v9; // edi
  unsigned int v10; // edx
  __int64 v12; // [rsp+20h] [rbp-B8h] BYREF
  _BYTE v13[132]; // [rsp+30h] [rbp-A8h] BYREF
  int v14; // [rsp+B4h] [rbp-24h]
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+0h]

  v2 = (CMmcssTask *)MIDL_user_allocate(0x58uLL);
  if ( v2 )
    v3 = (struct _RTL_CRITICAL_SECTION *)CMmcssTask::CMmcssTask(v2);
  else
    v3 = 0LL;
  memset_0(v13, 0, 0x90uLL);
  v4 = 64LL;
  v5 = v13;
  do
  {
    if ( v4 == -2147483582 )
      break;
    v6 = *(_WORD *)((char *)v5 + (char *)L"Capture" - v13);
    if ( !v6 )
      break;
    *v5++ = v6;
    --v4;
  }
  while ( v4 );
  v7 = v5 - 1;
  if ( v4 )
    v7 = v5;
  *v7 = 0;
  if ( !v4 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x5E,
      (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\input\\kst.cpp",
      (const char *)0x8007007ALL,
      v12);
  v14 = 1;
  v8 = CMmcssTask::Set(v3, (const struct DWM_MMTASK *)v13, 0);
  v9 = v8;
  if ( v8 >= 0 )
  {
    v12 = 0LL;
    *((_QWORD *)this + 7) = v3;
    std::unique_ptr<CMmcssTask>::~unique_ptr<CMmcssTask>(&v12);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x63,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\input\\kst.cpp",
      (const char *)(unsigned int)v8);
    if ( v3 )
      CMmcssTask::`scalar deleting destructor'((CMmcssTask *)v3, v10);
    return v9;
  }
}
