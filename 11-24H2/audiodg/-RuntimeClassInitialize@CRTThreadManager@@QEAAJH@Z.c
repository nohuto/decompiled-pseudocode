/*
 * XREFs of ?RuntimeClassInitialize@CRTThreadManager@@QEAAJH@Z @ 0x140056288
 * Callers:
 *     ??$MakeAndInitialize@VCRTThreadManager@@V1@AEAH@Details@WRL@Microsoft@@YAJPEAPEAVCRTThreadManager@@AEAH@Z @ 0x1400552C8 (--$MakeAndInitialize@VCRTThreadManager@@V1@AEAH@Details@WRL@Microsoft@@YAJPEAPEAVCRTThreadManage.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1400089F8 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14000AC24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InitializeRTOperatingMode@CRTThreadManager@@AEAAJXZ @ 0x14004B4A4 (-InitializeRTOperatingMode@CRTThreadManager@@AEAAJXZ.c)
 */

__int64 __fastcall CRTThreadManager::RuntimeClassInitialize(CRTThreadManager *this, int a2)
{
  HRESULT v4; // eax
  unsigned int v5; // edi
  int v7; // eax
  HRESULT v8; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = RtwqStartup();
  v5 = v4;
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x6E,
      (int)"avcore\\audiocore\\server\\audiodg\\exe\\rtthreadmanager.cpp",
      (const char *)(unsigned int)v4);
    return v5;
  }
  *((_DWORD *)this + 27) = a2;
  v7 = CRTThreadManager::InitializeRTOperatingMode(this);
  v5 = v7;
  if ( v7 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x78,
      (int)"avcore\\audiocore\\server\\audiodg\\exe\\rtthreadmanager.cpp",
      (const char *)(unsigned int)v7);
    v8 = RtwqShutdown();
    if ( v8 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x71,
        (int)"avcore\\audiocore\\server\\audiodg\\exe\\rtthreadmanager.cpp",
        (const char *)(unsigned int)v8);
    return v5;
  }
  *((_BYTE *)this + 104) = 1;
  return 0LL;
}
