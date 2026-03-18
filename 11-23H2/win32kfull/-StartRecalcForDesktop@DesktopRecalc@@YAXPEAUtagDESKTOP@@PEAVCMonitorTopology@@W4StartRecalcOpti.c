/*
 * XREFs of ?StartRecalcForDesktop@DesktopRecalc@@YAXPEAUtagDESKTOP@@PEAVCMonitorTopology@@W4StartRecalcOption@@@Z @ 0x1C005D0BC
 * Callers:
 *     ?StartRecalc@DesktopRecalc@@YAXPEAUtagWINDOWSTATION@@PEAVCMonitorTopology@@PEBU_GUID@@@Z @ 0x1C005B6E8 (-StartRecalc@DesktopRecalc@@YAXPEAUtagWINDOWSTATION@@PEAVCMonitorTopology@@PEBU_GUID@@@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0044724 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1C0044D3C (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     ?s_PostRecalcForThread@CRecalcProp@@SAXPEAUtagTHREADINFO@@@Z @ 0x1C005BBC8 (-s_PostRecalcForThread@CRecalcProp@@SAXPEAUtagTHREADINFO@@@Z.c)
 *     ?BehaviorEnabled@ShellWindowManagement@@YA_NPEBUtagDESKTOP@@K@Z @ 0x1C005BCE4 (-BehaviorEnabled@ShellWindowManagement@@YA_NPEBUtagDESKTOP@@K@Z.c)
 *     DesktopWindowFromDesktop @ 0x1C005BD60 (DesktopWindowFromDesktop.c)
 *     ?CreateForTopologyChange@CRecalcProp@@SA_NPEAUHWND__@@PEAVCMonitorTopology@@W4StartRecalcOption@@@Z @ 0x1C005D284 (-CreateForTopologyChange@CRecalcProp@@SA_NPEAUHWND__@@PEAVCMonitorTopology@@W4StartRecalcOption@.c)
 *     HMValidateHandleNoSecure @ 0x1C00B02D0 (HMValidateHandleNoSecure.c)
 *     BuildHwndList @ 0x1C00B1DD0 (BuildHwndList.c)
 *     FreeHwndList @ 0x1C00B26E0 (FreeHwndList.c)
 */

__int64 __fastcall DesktopRecalc::StartRecalcForDesktop(ShellWindowManagement *a1, __int64 a2, unsigned int a3)
{
  char v6; // bl
  char v7; // dl
  __int64 v8; // r10
  __int64 result; // rax
  int v10; // r8d
  __int64 v11; // r9
  __int64 v12; // rbp
  _QWORD *v13; // r15
  __int64 v14; // rdi
  __int64 v15; // rsi
  _QWORD *v16; // r14
  __int64 v17; // rdx
  unsigned int v18; // esi
  __int64 v19; // r12
  __int64 v20; // r13
  _QWORD *v21; // r14
  void *v22; // rdx
  __int64 v23; // [rsp+50h] [rbp-38h]
  PETHREAD *v24; // [rsp+A8h] [rbp+20h]

  v6 = 1;
  v7 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( v7 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_q(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v7,
      WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
      (__int64)&WPP_be08460427f83b68b58b8518e40b91a4_Traceguids,
      4u,
      7u,
      0x59u,
      (__int64)&WPP_be08460427f83b68b58b8518e40b91a4_Traceguids,
      a1);
  DesktopWindowFromDesktop((__int64)a1);
  ShellWindowManagement::BehaviorEnabled(a1, (const struct tagDESKTOP *)0x20);
  result = BuildHwndList(*(ShellWindowManagement **)(v8 + 112));
  v23 = result;
  v12 = result;
  if ( result )
  {
    v13 = (_QWORD *)(result + 32);
    v14 = 0LL;
    v15 = *(_QWORD *)(result + 32);
    v16 = (_QWORD *)(result + 32);
    if ( v15 != 1 )
    {
      do
      {
        if ( (unsigned __int8)CRecalcProp::CreateForTopologyChange(v15, a2, a3, v11) )
        {
          *(_QWORD *)(v12 + 8 * v14 + 32) = v15;
          v14 = (unsigned int)(v14 + 1);
        }
        v15 = *++v16;
      }
      while ( *v16 != 1LL );
      if ( (_DWORD)v14 )
      {
        v18 = 1;
        v19 = (unsigned int)v14;
        do
        {
          if ( *v13 )
          {
            LOBYTE(v17) = 1;
            v24 = *(PETHREAD **)(HMValidateHandleNoSecure(*v13, v17) + 16);
            CRecalcProp::s_PostRecalcForThread(v24);
            if ( v18 < (unsigned int)v14 )
            {
              v20 = (unsigned int)v14 - v18;
              v21 = (_QWORD *)(v12 + 32 + 8LL * v18);
              do
              {
                if ( *v21 )
                {
                  LOBYTE(v17) = 1;
                  if ( *(PETHREAD **)(HMValidateHandleNoSecure(*v21, v17) + 16) == v24 )
                    *v21 = 0LL;
                }
                ++v21;
                --v20;
              }
              while ( v20 );
              v12 = v23;
            }
          }
          ++v18;
          ++v13;
          --v19;
        }
        while ( v19 );
      }
    }
    return FreeHwndList(v12);
  }
  else
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (result = HIDWORD(WPP_GLOBAL_Control->Timer), (result & 0x40) == 0)
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      v6 = 0;
    }
    if ( v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v22 = &WPP_be08460427f83b68b58b8518e40b91a4_Traceguids;
      LOBYTE(v22) = v6;
      LOBYTE(v10) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      return WPP_RECORDER_AND_TRACE_SF_(
               WPP_GLOBAL_Control->AttachedDevice,
               (_DWORD)v22,
               v10,
               v11,
               2,
               7,
               90,
               (__int64)&WPP_be08460427f83b68b58b8518e40b91a4_Traceguids);
    }
  }
  return result;
}
