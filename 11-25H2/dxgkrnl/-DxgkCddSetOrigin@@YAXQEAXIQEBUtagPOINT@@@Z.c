/*
 * XREFs of ?DxgkCddSetOrigin@@YAXQEAXIQEBUtagPOINT@@@Z @ 0x1403D8B40
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0q_EtwWriteTransfer @ 0x140015644 (McTemplateK0q_EtwWriteTransfer.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x14001BF80 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x14001C200 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEBD@Z @ 0x14001EE2C (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEBD@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140021A60 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x140021D20 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x14002D968 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?SetContentRect@ADAPTER_DISPLAY@@QEAAXIQEBUtagRECT@@@Z @ 0x1400576F4 (-SetContentRect@ADAPTER_DISPLAY@@QEAAXIQEBUtagRECT@@@Z.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z @ 0x140288C10 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z.c)
 *     ?GetSessionViewOwner@ADAPTER_DISPLAY@@QEBAPEAVSESSION_VIEW@@I@Z @ 0x1402D60DC (-GetSessionViewOwner@ADAPTER_DISPLAY@@QEBAPEAVSESSION_VIEW@@I@Z.c)
 */

void __fastcall DxgkCddSetOrigin(struct DXGADAPTER *this, unsigned int a2, const struct tagPOINT *const a3)
{
  __int64 v4; // rsi
  int PairingAdapters; // eax
  ADAPTER_DISPLAY **v7; // rbx
  int v8; // eax
  struct SESSION_VIEW *SessionViewOwner; // rax
  __int64 x; // r9
  __int64 y; // r10
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // rdi
  int v15; // ecx
  ADAPTER_DISPLAY *v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // rbx
  int v20; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v21; // [rsp+58h] [rbp-A8h]
  char v22; // [rsp+60h] [rbp-A0h]
  struct tagRECT v23; // [rsp+68h] [rbp-98h] BYREF
  struct DXGADAPTER *v24; // [rsp+78h] [rbp-88h] BYREF
  unsigned __int64 v25; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v26[144]; // [rsp+90h] [rbp-70h] BYREF

  v20 = -1;
  v4 = a2;
  v21 = 0LL;
  if ( (qword_14015B4C0 & 2) != 0 )
  {
    v22 = 1;
    v20 = 3014;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, (__int64)&EventProfilerEnter, (__int64)a3, 3014);
  }
  else
  {
    v22 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v20, 3014);
  v24 = 0LL;
  v25 = 0LL;
  PairingAdapters = DxgkpGetPairingAdapters(this, v4, 0LL, 0LL, &v24, &v25, 0);
  if ( PairingAdapters < 0 )
  {
    v19 = PairingAdapters;
    WdLogSingleEntry3(2LL, this, v4, PairingAdapters);
    WdLogGlobalForLineNumber = 2461;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Failed to get bound render adapter from Adapter 0x%I64x VidPn source ID 0x%I64x in DxgkCddSetOrigin (ntStatus = 0x%I64x).",
      (__int64)this,
      v4,
      v19,
      0LL,
      0LL);
  }
  else
  {
    v7 = (ADAPTER_DISPLAY **)v24;
    if ( !v24 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 2466;
      DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"pDisplayAdapter != NULL", 2466LL, 0LL, 0LL, 0LL, 0LL);
    }
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v26, (struct DXGADAPTER *const)v7, 0LL);
    DXGADAPTER::ReleaseReference((DXGADAPTER *)v7);
    v8 = COREADAPTERACCESS::AcquireExclusive((__int64)v26, 1u, 0);
    if ( v8 < 0 )
    {
      WdLogSingleEntry5(4LL, v8, v4, v7, a3->x, a3->y);
      WdLogGlobalForLineNumber = 2514;
    }
    else
    {
      if ( !v7[390] )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 2477;
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          0xFFFFFFFFLL,
          L"pDisplayAdapter->IsDisplayAdapter()",
          2477LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      SessionViewOwner = ADAPTER_DISPLAY::GetSessionViewOwner(v7[390], v4);
      if ( SessionViewOwner )
      {
        *((_DWORD *)SessionViewOwner + 8) += a3->x - *((_DWORD *)SessionViewOwner + 6);
        *((_DWORD *)SessionViewOwner + 6) = a3->x;
        *((_DWORD *)SessionViewOwner + 9) += a3->y - *((_DWORD *)SessionViewOwner + 7);
        *((_DWORD *)SessionViewOwner + 7) = a3->y;
      }
      x = a3->x;
      y = a3->y;
      v12 = 3984 * v4;
      v13 = *((_QWORD *)v7[390] + 16);
      v23.left = a3->x;
      v23.top = y;
      v14 = *(int *)(3984 * v4 + v13 + 672);
      if ( (((_DWORD)v14 - 2) & 0xFFFFFFFD) != 0 )
      {
        v23.right = x + *(_DWORD *)(v12 + v13 + 644);
        v15 = *(_DWORD *)(v12 + v13 + 648);
      }
      else
      {
        v23.right = x + *(_DWORD *)(v12 + v13 + 648);
        v15 = *(_DWORD *)(v12 + v13 + 644);
      }
      v23.bottom = y + v15;
      WdLogSingleEntry5(4LL, v4, v7, x, y, v14);
      v16 = v7[390];
      WdLogGlobalForLineNumber = 2506;
      ADAPTER_DISPLAY::SetContentRect(v16, v4, &v23);
    }
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v26);
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v20);
  if ( v22 )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v17, (__int64)&EventProfilerExit, v18, v20);
  }
}
