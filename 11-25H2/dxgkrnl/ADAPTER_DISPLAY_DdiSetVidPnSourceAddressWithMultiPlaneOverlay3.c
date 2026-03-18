/*
 * XREFs of ADAPTER_DISPLAY_DdiSetVidPnSourceAddressWithMultiPlaneOverlay3 @ 0x1400227A0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0q_EtwWriteTransfer @ 0x140015644 (McTemplateK0q_EtwWriteTransfer.c)
 *     McTemplateK0pqtq_EtwWriteTransfer @ 0x140016724 (McTemplateK0pqtq_EtwWriteTransfer.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x140019D30 (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x1400216A0 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x140022430 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x140289000 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x140296C50 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1402A5D70 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 */

__int64 __fastcall ADAPTER_DISPLAY_DdiSetVidPnSourceAddressWithMultiPlaneOverlay3(__int64 a1, _DWORD *a2, __int64 a3)
{
  struct DXGTHREAD *v5; // rbx
  __int64 v6; // rcx
  __int64 v7; // r8
  struct DXGTHREAD *Current; // rax
  int v9; // eax
  KIRQL v10; // al
  __int64 v11; // r13
  struct DXGTHREAD *v12; // rsi
  int v13; // r12d
  __int64 v14; // r14
  __int64 v15; // rdi
  __int64 v16; // rcx
  __int64 v17; // r8
  struct DXGGLOBAL *Global; // rdi
  int v21; // ecx
  struct DXGPROCESS *v22; // rax
  int v23; // ecx
  DXGGLOBAL *v24; // rax
  struct DXGSESSIONDATA *SessionData; // rax
  struct _KPROCESS *v26; // rcx
  int v27; // edx
  struct DXGTHREAD *v28; // rax
  KIRQL v29; // al
  __int64 v30; // [rsp+20h] [rbp-C8h]
  __int64 v31; // [rsp+28h] [rbp-C0h]
  __int64 v32; // [rsp+30h] [rbp-B8h]
  KIRQL CurrentIrql; // [rsp+60h] [rbp-88h]
  int v34; // [rsp+64h] [rbp-84h]
  __int64 v35; // [rsp+68h] [rbp-80h]
  char v36; // [rsp+70h] [rbp-78h]
  struct _KAPC_STATE ApcState; // [rsp+78h] [rbp-70h] BYREF

  v34 = -1;
  v5 = 0LL;
  v35 = qword_14015B4C0 & 2;
  if ( (qword_14015B4C0 & 2) != 0 )
  {
    v34 = 5122;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, (__int64)&EventProfilerEnter, a3, 5122);
  }
  if ( KeGetCurrentIrql() < 2u )
  {
    Current = DXGTHREAD::GetCurrent();
    v5 = Current;
    if ( Current )
    {
      if ( *((int *)Current + 13) < 0 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 203;
        DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"m_ProfilerEntryCount >= 0", 203LL, 0LL, 0LL, 0LL, 0LL);
      }
      v9 = *((_DWORD *)v5 + 13);
      if ( !v9 )
        *((_DWORD *)v5 + 14) = 5122;
      *((_DWORD *)v5 + 13) = v9 + 1;
    }
  }
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
  {
    LODWORD(v32) = a2[2];
    LODWORD(v31) = a2[1];
    LODWORD(v30) = *a2;
    McTemplateK0pqtq_EtwWriteTransfer(v6, &DdiSetVidPnMultiPlaneOverlay3Enter, v7, *(_QWORD *)(a1 + 16), v30, v31, v32);
  }
  CurrentIrql = KeGetCurrentIrql();
  if ( !CurrentIrql )
    DXGADAPTER::AcquireDdiSync(*(_QWORD *)(a1 + 16), 1);
  _InterlockedAdd((volatile signed __int32 *)(*(_QWORD *)(a1 + 16) + 4804LL), 1u);
  v10 = KeGetCurrentIrql();
  v11 = v10;
  v12 = 0LL;
  if ( v10 < 2u && (v28 = DXGTHREAD::GetCurrent(), (v12 = v28) != 0LL) )
    v13 = *((_DWORD *)v28 + 12);
  else
    v13 = 0;
  v14 = *(_QWORD *)(a1 + 16);
  v36 = 0;
  if ( KeGetCurrentIrql() < 2u )
  {
    Global = DXGGLOBAL::GetGlobal();
    if ( *((_DWORD *)Global + 405) )
    {
      v21 = *(_DWORD *)(v14 + 444);
      if ( (v21 & 0x20) == 0 && (v21 & 4) == 0 )
      {
        v22 = DXGPROCESS::GetCurrent();
        if ( v22 )
        {
          if ( (*((_BYTE *)v22 + 408) & 1) == 0 && (*((_DWORD *)v22 + 102) & 2) == 0 )
          {
            v23 = *((_DWORD *)Global + 405);
            if ( v23 == 2 || v23 == 1 && *((_BYTE *)v22 + 573) )
            {
              v24 = DXGGLOBAL::GetGlobal();
              SessionData = DXGGLOBAL::GetSessionData(v24);
              if ( SessionData )
              {
                v26 = (struct _KPROCESS *)*((_QWORD *)SessionData + 2341);
                if ( v26 )
                {
                  KeStackAttachProcess(v26, &ApcState);
                  v36 = 1;
                }
              }
            }
          }
        }
      }
    }
  }
  v15 = (*(int (__fastcall **)(_QWORD, _DWORD *))(*(_QWORD *)(a1 + 16) + 1032LL))(
          *(_QWORD *)(*(_QWORD *)(a1 + 16) + 288LL),
          a2);
  if ( v36 )
    KeUnstackDetachProcess(&ApcState);
  if ( (_BYTE)v11 != KeGetCurrentIrql() )
  {
    v29 = KeGetCurrentIrql();
    WdLogSingleEntry5(0LL, 275LL, 16LL, a1, v11, v29);
    WdLogGlobalForLineNumber = 1132;
  }
  if ( v12 )
  {
    v16 = *((int *)v12 + 12);
    if ( (_DWORD)v16 != v13 )
    {
      WdLogSingleEntry5(0LL, 275LL, 38LL, *((int *)v12 + 12), v13, 0LL);
      WdLogGlobalForLineNumber = 73;
    }
  }
  _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(a1 + 16) + 4804LL));
  if ( (_DWORD)v15 != -2147483631 && (_DWORD)v15 != -1073741267 )
  {
    if ( (_DWORD)v15 )
    {
      WdLogSingleEntry1(2LL, v15);
      WdLogGlobalForLineNumber = 1135;
      if ( bTracingEnabled )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200000000LL) != 0 )
          McTemplateK0zqqzxxxxx_EtwWriteTransfer(
            v16,
            v27,
            v17,
            0LL,
            0,
            -1,
            L"Driver returned an invalid NTSTATUS code: 0x%I64x",
            v15,
            0LL,
            0LL,
            0LL,
            0LL);
      }
    }
  }
  if ( !CurrentIrql )
    DXGADAPTER::ReleaseDdiSync(*(DXGADAPTER **)(a1 + 16));
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
  {
    LODWORD(v32) = a2[2];
    LODWORD(v31) = a2[1];
    LODWORD(v30) = *a2;
    McTemplateK0pqtq_EtwWriteTransfer(v16, &DdiSetVidPnMultiPlaneOverlay3Exit, v17, *(_QWORD *)(a1 + 16), v30, v31, v32);
  }
  if ( v5 )
  {
    if ( *((int *)v5 + 13) <= 0 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 213;
      DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"m_ProfilerEntryCount > 0", 213LL, 0LL, 0LL, 0LL, 0LL);
    }
    if ( (*((_DWORD *)v5 + 13))-- == 1 )
      *((_DWORD *)v5 + 14) = -1;
  }
  if ( v35 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v16, (__int64)&EventProfilerExit, v17, v34);
  return (unsigned int)v15;
}
