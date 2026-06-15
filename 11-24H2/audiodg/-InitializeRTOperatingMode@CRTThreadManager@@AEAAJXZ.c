/*
 * XREFs of ?InitializeRTOperatingMode@CRTThreadManager@@AEAAJXZ @ 0x14004B4A4
 * Callers:
 *     ?RuntimeClassInitialize@CRTThreadManager@@QEAAJH@Z @ 0x140056288 (-RuntimeClassInitialize@CRTThreadManager@@QEAAJH@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14000AC24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$MakeAndInitialize@VCLocalMmcssWorkQueue@@V1@AEAPEBG@Details@WRL@Microsoft@@YAJPEAPEAVCLocalMmcssWorkQueue@@AEAPEBG@Z @ 0x140054CE8 (--$MakeAndInitialize@VCLocalMmcssWorkQueue@@V1@AEAPEBG@Details@WRL@Microsoft@@YAJPEAPEAVCLocalMm.c)
 *     McTemplateU0pqtqqqq_EtwEventWriteTransfer @ 0x14006DE64 (McTemplateU0pqtqqqq_EtwEventWriteTransfer.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CRTThreadManager::InitializeRTOperatingMode(CRTThreadManager *this)
{
  int v2; // eax
  int v3; // edi
  const WCHAR *v4; // rdx
  const wchar_t *v5; // rcx
  int v6; // eax
  int v7; // eax
  HRESULT v8; // edi
  __int64 v9; // rdx
  char *v10; // rsi
  __int64 v11; // rcx
  int v12; // r14d
  __int64 v13; // rdx
  DWORD v14; // eax
  __int64 v15; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]
  DWORD taskId; // [rsp+80h] [rbp+30h] BYREF
  int pvData; // [rsp+88h] [rbp+38h] BYREF
  DWORD pcbData; // [rsp+90h] [rbp+40h] BYREF
  const wchar_t *v21; // [rsp+98h] [rbp+48h] BYREF

  pvData = 0;
  pcbData = 4;
  if ( RegGetValueW(
         HKEY_LOCAL_MACHINE,
         L"Software\\Microsoft\\Windows\\CurrentVersion\\Audio",
         L"RTOperatingMode",
         0x18u,
         0LL,
         &pvData,
         &pcbData) )
  {
    v2 = *((_DWORD *)this + 4);
  }
  else
  {
    v2 = pvData;
    *((_DWORD *)this + 4) = pvData;
  }
  LOBYTE(v3) = 0;
  taskId = 0;
  v4 = L"Audio";
  v5 = L"Pro Audio";
  if ( !*((_DWORD *)this + 27) )
    v5 = L"Audio";
  v21 = v5;
  if ( !v2 )
  {
    v8 = RtwqLockSharedWorkQueue(v5, 0, (DWORD *)this + 5, (DWORD *)this + 6);
    if ( v8 < 0 )
    {
      v9 = 54LL;
      goto LABEL_27;
    }
    v3 = *((_DWORD *)this + 6);
    v14 = *((_DWORD *)this + 5);
    taskId = v14;
    *((_DWORD *)this + 7) = v3;
    goto LABEL_29;
  }
  v6 = v2 - 1;
  if ( !v6 )
  {
    v8 = RtwqLockSharedWorkQueue(v5, 0, &taskId, (DWORD *)this + 6);
    if ( v8 < 0 )
    {
      v9 = 66LL;
      goto LABEL_27;
    }
    v3 = *((_DWORD *)this + 6);
    v10 = (char *)this + 40;
    v15 = *((_QWORD *)this + 5);
    *((_QWORD *)this + 5) = 0LL;
    if ( v15 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
    v12 = Microsoft::WRL::Details::MakeAndInitialize<CLocalMmcssWorkQueue,CLocalMmcssWorkQueue,unsigned short const * &>(
            (char *)this + 40,
            &v21);
    if ( v12 < 0 )
    {
      v13 = 70LL;
      goto LABEL_24;
    }
    goto LABEL_17;
  }
  v7 = v6 - 1;
  if ( !v7 )
  {
    v10 = (char *)this + 40;
    v11 = *((_QWORD *)this + 5);
    *((_QWORD *)this + 5) = 0LL;
    if ( v11 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    v12 = Microsoft::WRL::Details::MakeAndInitialize<CLocalMmcssWorkQueue,CLocalMmcssWorkQueue,unsigned short const * &>(
            (char *)this + 40,
            &v21);
    if ( v12 < 0 )
    {
      v13 = 78LL;
LABEL_24:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v13,
        (int)"avcore\\audiocore\\server\\audiodg\\exe\\rtthreadmanager.cpp",
        (const char *)(unsigned int)v12);
      return (unsigned int)v12;
    }
LABEL_17:
    v5 = *(const wchar_t **)v10;
    *((_DWORD *)this + 7) = *(_DWORD *)(*(_QWORD *)v10 + 16LL);
    v14 = *((_DWORD *)v5 + 5);
LABEL_29:
    *((_DWORD *)this + 8) = v14;
    goto LABEL_30;
  }
  if ( v7 == 1 )
  {
    v8 = RtwqLockSharedWorkQueue(v5, 0, &taskId, (DWORD *)this + 6);
    if ( v8 < 0 )
    {
      v9 = 89LL;
LABEL_27:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v9,
        (int)"avcore\\audiocore\\server\\audiodg\\exe\\rtthreadmanager.cpp",
        (const char *)(unsigned int)v8);
      return (unsigned int)v8;
    }
    v3 = *((_DWORD *)this + 6);
    *((_DWORD *)this + 7) = 0;
    *((_DWORD *)this + 8) = 0;
  }
LABEL_30:
  if ( (byte_1400C4541 & 8) != 0 )
    McTemplateU0pqtqqqq_EtwEventWriteTransfer(
      (_DWORD)v5,
      (_DWORD)v4,
      (_DWORD)this,
      *((_DWORD *)this + 4),
      *((_DWORD *)this + 27),
      *((_DWORD *)this + 7),
      *((_DWORD *)this + 8),
      v3,
      taskId);
  return 0LL;
}
