/*
 * XREFs of ?DxgkCddIsSourceOwnedByDWM@@YAJQEAXIPEAE@Z @ 0x1403E65A0
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x14000CB60 (--1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x14000EEA0 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x14002B8F0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA?AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z @ 0x140040288 (-GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA-AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z.c)
 */

__int64 __fastcall DxgkCddIsSourceOwnedByDWM(DXGADAPTER *a1, unsigned int a2, bool *a3)
{
  __int64 v4; // rbx
  unsigned int v6; // ebx
  ADAPTER_DISPLAY *v7; // rcx
  int VidPnSourceOwnerType; // eax
  _BYTE v10[8]; // [rsp+50h] [rbp-28h] BYREF
  DXGADAPTER *v11; // [rsp+58h] [rbp-20h]
  char v12; // [rsp+60h] [rbp-18h]

  v4 = a2;
  v11 = a1;
  v12 = 0;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(a1) )
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v10);
  if ( *((_DWORD *)a1 + 50) == 1 )
  {
    v7 = (ADAPTER_DISPLAY *)*((_QWORD *)a1 + 390);
    if ( v7 )
    {
      if ( *((_DWORD *)v7 + 24) > (unsigned int)v4 )
      {
        VidPnSourceOwnerType = ADAPTER_DISPLAY::GetVidPnSourceOwnerType(v7, v4);
        v6 = 0;
        *a3 = VidPnSourceOwnerType == 1;
        goto LABEL_11;
      }
      WdLogSingleEntry3(2LL, a1, v4, -1073741811LL);
      WdLogGlobalForLineNumber = 4422;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"Adapter 0x%I64x does not have VidPn source 0x%I64x, returning 0x%I64x.",
        (__int64)a1,
        v4,
        -1073741811LL,
        0LL,
        0LL);
    }
    else
    {
      WdLogSingleEntry2(2LL, a1, -1073741811LL);
      WdLogGlobalForLineNumber = 4410;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"Adapter 0x%I64x is not a display adapter, returning 0x%I64x.",
        (__int64)a1,
        -1073741811LL,
        0LL,
        0LL,
        0LL);
    }
    v6 = -1073741811;
  }
  else
  {
    v6 = -1073741130;
    WdLogSingleEntry2(2LL, a1, -1073741130LL);
    WdLogGlobalForLineNumber = 4401;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Adapter 0x%I64x has been stopped, returning 0x%I64x.",
      (__int64)a1,
      -1073741130LL,
      0LL,
      0LL,
      0LL);
  }
LABEL_11:
  DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v10);
  return v6;
}
