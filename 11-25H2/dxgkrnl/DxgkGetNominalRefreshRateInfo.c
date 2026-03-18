/*
 * XREFs of DxgkGetNominalRefreshRateInfo @ 0x1401C1C6C
 * Callers:
 *     ?CompleteIndependentFlipToken@CTokenManager@@IEAAJ_KAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@I@Z @ 0x14000DDC4 (-CompleteIndependentFlipToken@CTokenManager@@IEAAJ_KAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@I.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x14001C0B0 (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ??1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x14001C140 (--1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     ??0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z @ 0x14001F610 (--0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z.c)
 *     ?IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x14002F740 (-IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z @ 0x1400369D4 (-GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z.c)
 *     ?AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z @ 0x140039A2C (-AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z.c)
 *     ??1DXGSESSIONMODECHANGELOCK@@QEAA@XZ @ 0x14003EC00 (--1DXGSESSIONMODECHANGELOCK@@QEAA@XZ.c)
 *     ?AssignByHandle@DXGADAPTER_REFERENCE@@QEAA_NI@Z @ 0x1403B1828 (-AssignByHandle@DXGADAPTER_REFERENCE@@QEAA_NI@Z.c)
 */

__int64 __fastcall DxgkGetNominalRefreshRateInfo(unsigned int a1, unsigned int a2, _QWORD *a3)
{
  __int64 v3; // rdi
  __int64 v4; // rbx
  struct DXGADAPTER *v6; // rsi
  unsigned int v7; // edi
  __int64 v8; // rax
  __int64 v9; // rbx
  int v10; // eax
  __int64 v11; // r14
  struct DXGADAPTER *v12; // rbx
  struct DXGADAPTER *v14[2]; // [rsp+50h] [rbp-30h] BYREF
  _BYTE v15[32]; // [rsp+60h] [rbp-20h] BYREF
  char v16; // [rsp+C8h] [rbp+48h] BYREF

  v3 = a2;
  v4 = a1;
  v14[0] = 0LL;
  DXGADAPTER_REFERENCE::AssignByHandle(v14, a1);
  v6 = v14[0];
  if ( v14[0] )
  {
    v8 = *((_QWORD *)v14[0] + 390);
    if ( v8 )
    {
      if ( (unsigned int)v3 < *(_DWORD *)(v8 + 96) )
      {
        v16 = 0;
        v10 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)&v16, 0);
        v11 = v10;
        if ( v10 >= 0 )
        {
          DXGADAPTERSTOPRESETLOCKSHARED::DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v15, v6, 1);
          v12 = v14[0];
          if ( *((_DWORD *)v6 + 50) != 1 || *((_BYTE *)v14[0] + 3017) )
          {
            v7 = -1073741130;
            WdLogSingleEntry2(3LL, v14[0], -1073741130LL);
            WdLogGlobalForLineNumber = 7804;
            DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v15);
            DXGSESSIONMODECHANGELOCK::~DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)&v16);
          }
          else
          {
            if ( (unsigned __int8)ADAPTER_DISPLAY::IsVidPnSourceActive(*((ADAPTER_DISPLAY **)v14[0] + 390), v3) )
            {
              *a3 = *((_QWORD *)ADAPTER_DISPLAY::GetDisplayModeInfo(*((ADAPTER_DISPLAY **)v12 + 390), v3) + 2);
              DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v15);
              DXGSESSIONMODECHANGELOCK::~DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)&v16);
              DXGADAPTER_REFERENCE::Assign((DXGADAPTER_REFERENCE *)v14, 0LL);
              return 0LL;
            }
            WdLogSingleEntry2(3LL, v3, v12);
            WdLogGlobalForLineNumber = 7812;
            DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v15);
            DXGSESSIONMODECHANGELOCK::~DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)&v16);
            v7 = -1071774919;
          }
        }
        else
        {
          WdLogSingleEntry1(2LL, v10);
          WdLogGlobalForLineNumber = 7792;
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            0xFFFFFFFFLL,
            L"Failed to acquire session mode change lock shared (Status = 0x%I64x)",
            v11,
            0LL,
            0LL,
            0LL,
            0LL);
          DXGSESSIONMODECHANGELOCK::~DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)&v16);
          v7 = v11;
        }
      }
      else
      {
        v9 = v3;
        v7 = -1073741811;
        WdLogSingleEntry3(2LL, v14[0], v9, -1073741811LL);
        WdLogGlobalForLineNumber = 7779;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          0xFFFFFFFFLL,
          L"Adapter 0x%I64x does not have caller specified VidPn source Id 0x%I64x in DxgkGetVirtualRefreshRateInfo functi"
           "on, returning 0x%I64x.",
          (__int64)v6,
          v9,
          -1073741811LL,
          0LL,
          0LL);
      }
    }
    else
    {
      v7 = -1073741811;
      WdLogSingleEntry2(2LL, v14[0], -1073741811LL);
      WdLogGlobalForLineNumber = 7767;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        0xFFFFFFFFLL,
        L"Caller specified adapter 0x%I64x is not a display adapter in DxgkGetVirtualRefreshRateInfo function, returning 0x%I64x.",
        (__int64)v6,
        -1073741811LL,
        0LL,
        0LL,
        0LL);
    }
  }
  else
  {
    v7 = -1073741811;
    WdLogSingleEntry2(2LL, (unsigned int)v4, -1073741811LL);
    WdLogGlobalForLineNumber = 7758;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Invalid hAdapter (0x%I64x) specified, returning 0x%I64x",
      v4,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
  }
  DXGADAPTER_REFERENCE::Assign((DXGADAPTER_REFERENCE *)v14, 0LL);
  return v7;
}
