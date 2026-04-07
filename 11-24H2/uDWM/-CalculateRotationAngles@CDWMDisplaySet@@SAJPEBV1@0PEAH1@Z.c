/*
 * XREFs of ?CalculateRotationAngles@CDWMDisplaySet@@SAJPEBV1@0PEAH1@Z @ 0x1800C2D28
 * Callers:
 *     ?CreateMonitorRenderTargets@CDesktopManager@@AEAAJXZ @ 0x18008D05C (-CreateMonitorRenderTargets@CDesktopManager@@AEAAJXZ.c)
 * Callees:
 *     ??0CBitmapSourceArray@@QEAA@XZ @ 0x18000C2D0 (--0CBitmapSourceArray@@QEAA@XZ.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180026FE0 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetClonePrimaryDisplaysNoRef@CDWMDisplaySet@@QEBAJPEAV?$DynArray@PEAVCDWMDisplay@@$0A@@@@Z @ 0x180076E0C (-GetClonePrimaryDisplaysNoRef@CDWMDisplaySet@@QEBAJPEAV-$DynArray@PEAVCDWMDisplay@@$0A@@@@Z.c)
 *     ?DXGIRotationToInt@@YAHW4DXGI_MODE_ROTATION@@@Z @ 0x1800C2E24 (-DXGIRotationToInt@@YAHW4DXGI_MODE_ROTATION@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CDWMDisplaySet::CalculateRotationAngles(
        const struct CDWMDisplaySet *a1,
        const struct CDWMDisplaySet *a2,
        int *a3,
        int *a4)
{
  __int64 v7; // r10
  int ClonePrimaryDisplaysNoRef; // eax
  unsigned int v9; // ebx
  int v10; // edi
  int v11; // eax
  int v12; // eax
  void *v14[4]; // [rsp+30h] [rbp-48h] BYREF
  void *v15[4]; // [rsp+50h] [rbp-28h] BYREF

  CBitmapSourceArray::CBitmapSourceArray((CBitmapSourceArray *)v15);
  CBitmapSourceArray::CBitmapSourceArray((CBitmapSourceArray *)v14);
  ClonePrimaryDisplaysNoRef = CDWMDisplaySet::GetClonePrimaryDisplaysNoRef(v7, (__int64)v15);
  v9 = ClonePrimaryDisplaysNoRef;
  if ( ClonePrimaryDisplaysNoRef < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, ClonePrimaryDisplaysNoRef, 0x28Fu, 0LL);
  }
  else
  {
    v10 = DXGIRotationToInt((enum DXGI_MODE_ROTATION)*(_DWORD *)(*(_QWORD *)v15[0] + 248LL));
    v11 = CDWMDisplaySet::GetClonePrimaryDisplaysNoRef((__int64)a2, (__int64)v14);
    v9 = v11;
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v11, 0x295u, 0LL);
    }
    else
    {
      v12 = DXGIRotationToInt((enum DXGI_MODE_ROTATION)*(_DWORD *)(*(_QWORD *)v14[0] + 248LL));
      *a4 = v12;
      *a3 = v12 - v10;
    }
  }
  DynArrayImpl<0>::~DynArrayImpl<0>(v14);
  DynArrayImpl<0>::~DynArrayImpl<0>(v15);
  return v9;
}
