/*
 * XREFs of ?CloseLocalMutex@DXGDXGIKEYEDMUTEX@@QEAAXW4_OUTPUTDUPL_MUTEX_TYPE@@H@Z @ 0x1402B5DC0
 * Callers:
 *     ?CloseConsumerResources@DXGDXGIKEYEDMUTEX@@QEAAXXZ @ 0x1401E43D4 (-CloseConsumerResources@DXGDXGIKEYEDMUTEX@@QEAAXXZ.c)
 *     ?CloseFromDevice@DXGDXGIKEYEDMUTEX@@QEAAXXZ @ 0x1401E44AC (-CloseFromDevice@DXGDXGIKEYEDMUTEX@@QEAAXXZ.c)
 *     ?ProcessPointerPosition@OUTPUTDUPL_CONTEXT@@QEAAJPEBU_DXGKARG_SETPOINTERPOSITION@@@Z @ 0x1402B5C8C (-ProcessPointerPosition@OUTPUTDUPL_CONTEXT@@QEAAJPEBU_DXGKARG_SETPOINTERPOSITION@@@Z.c)
 *     ?ProcessPointerShape@OUTPUTDUPL_CONTEXT@@QEAAJPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@@Z @ 0x140389220 (-ProcessPointerShape@OUTPUTDUPL_CONTEXT@@QEAAJPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETP.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x140012444 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140015A70 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140015D30 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?DestroyLocal@DXGKEYEDMUTEX@@SAJI@Z @ 0x140394B7C (-DestroyLocal@DXGKEYEDMUTEX@@SAJI@Z.c)
 *     ?DestroyHandle@DXGKEYEDMUTEX@@SAEI@Z @ 0x140394DD0 (-DestroyHandle@DXGKEYEDMUTEX@@SAEI@Z.c)
 */

void __fastcall DXGDXGIKEYEDMUTEX::CloseLocalMutex(__int64 a1, int a2, __int64 a3)
{
  int v3; // esi
  __int64 v4; // rdi
  __int64 v6; // rdi
  unsigned int v7; // ecx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rax
  const wchar_t *v11; // r9
  int v12; // [rsp+50h] [rbp-28h] BYREF
  __int64 v13; // [rsp+58h] [rbp-20h]
  char v14; // [rsp+60h] [rbp-18h]

  v12 = -1;
  v3 = a3;
  v4 = a2;
  v13 = 0LL;
  if ( (qword_14015E4B0 & 2) != 0 )
  {
    v14 = 1;
    v12 = 11001;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, (__int64)&EventProfilerEnter, a3, 11001);
  }
  else
  {
    v14 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v12, 11001);
  v6 = 3 * v4;
  v7 = *(_DWORD *)(a1 + 8 * v6 + 16);
  if ( v3 )
  {
    if ( (int)DXGKEYEDMUTEX::DestroyLocal(v7) >= 0 )
      goto LABEL_5;
    WdLogSingleEntry0(1LL);
    v10 = 665LL;
    v11 = L"NT_SUCCESS(Status)";
  }
  else
  {
    if ( DXGKEYEDMUTEX::DestroyHandle(v7) )
      goto LABEL_5;
    WdLogSingleEntry0(1LL);
    v10 = 660LL;
    v11 = L"bStatus";
  }
  WdLogGlobalForLineNumber = v10;
  DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, v11, v10, 0LL, 0LL, 0LL, 0LL);
LABEL_5:
  *(_DWORD *)(a1 + 8 * v6 + 16) = 0;
  *(_QWORD *)(a1 + 8 * v6 + 24) = 0LL;
  *(_QWORD *)(a1 + 8 * v6 + 32) = 0LL;
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v12);
  if ( v14 )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v8, (__int64)&EventProfilerExit, v9, v12);
  }
}
