/*
 * XREFs of ?OnDefaultDeviceChanged@CMonitorManager@@EEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0002@@PEBG@Z @ 0x180073EF0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetString@?$CSimpleStringT@G$0A@@ATL@@QEAAXPEBG@Z @ 0x180029220 (-SetString@-$CSimpleStringT@G$0A@@ATL@@QEAAXPEBG@Z.c)
 *     ??0?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@XZ @ 0x18002BA30 (--0-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800A7FC8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     WPP_SF_d @ 0x1800C180C (WPP_SF_d.c)
 *     WPP_SF_Sdd @ 0x1800C44A4 (WPP_SF_Sdd.c)
 *     ??_GDefaultChangedContext@@QEAAPEAXI@Z @ 0x18010FA64 (--_GDefaultChangedContext@@QEAAPEAXI@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CMonitorManager::OnDefaultDeviceChanged(
        CMonitorManager *this,
        enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001 a2,
        enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0002 a3,
        char *a4)
{
  DefaultChangedContext *v9; // rax
  unsigned int v10; // edx
  __int64 v11; // r8
  DefaultChangedContext *v12; // rsi
  DefaultChangedContext *v13; // rbx
  struct _TP_WORK *ThreadpoolWork; // rax
  _QWORD *v15; // rcx
  unsigned int v16; // edi
  signed int LastError; // eax
  ATL::CAtlException *v18; // rbx
  __int64 *v19; // rdx
  __int64 v20; // [rsp+0h] [rbp-68h] BYREF
  DefaultChangedContext *v21; // [rsp+30h] [rbp-38h]
  DefaultChangedContext *v22; // [rsp+38h] [rbp-30h]
  ATL::CAtlException *v23; // [rsp+40h] [rbp-28h] BYREF

  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_Sdd(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      27,
      (unsigned int)&WPP_2686b636a530381dd1b5bdfbdd777686_Traceguids,
      (_DWORD)a4,
      a2,
      a3);
  }
  if ( a3 )
    return 0LL;
  v9 = (DefaultChangedContext *)operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
  v12 = v9;
  v22 = v9;
  if ( v9 )
  {
    ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(v9);
    *((_QWORD *)v12 + 2) = this;
    if ( this )
      (*(void (__fastcall **)(CMonitorManager *))(*(_QWORD *)this + 8LL))(this);
    *((_QWORD *)v12 + 3) = 0LL;
  }
  else
  {
    v12 = 0LL;
  }
  v21 = v12;
  v13 = v12;
  v22 = v12;
  if ( !v12 )
  {
    v16 = -2147024882;
    v15 = WPP_GLOBAL_Control;
    goto LABEL_22;
  }
  try
  {
    *((_DWORD *)v12 + 2) = a2;
    v16 = 0;
    ATL::CSimpleStringT<unsigned short,0>::SetString((__int64 *)v12, a4, v11);
  }
  catch ( ATL::CAtlException *v23 )
  {
    v19 = &v20;
    v18 = v23;
    if ( *(_DWORD *)v23 == -1073741571 )
      _o__resetstkoflw();
    v16 = *(_DWORD *)v18;
    if ( *(int *)v18 < 0 )
    {
      DefaultChangedContext::`scalar deleting destructor'(v21, (unsigned int)v19);
      v13 = v22;
      goto LABEL_15;
    }
    v13 = v22;
    v12 = v21;
  }
  ThreadpoolWork = CreateThreadpoolWork(CMonitorManager::HandleDefaultDeviceChanged, v12, 0LL);
  *((_QWORD *)v12 + 3) = ThreadpoolWork;
  if ( ThreadpoolWork )
  {
    SubmitThreadpoolWork(ThreadpoolWork);
    v13 = 0LL;
LABEL_15:
    v15 = WPP_GLOBAL_Control;
    goto LABEL_16;
  }
  LastError = GetLastError();
  v16 = LastError;
  if ( LastError > 0 )
    v16 = (unsigned __int16)LastError | 0x80070000;
  v15 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 28LL, &WPP_2686b636a530381dd1b5bdfbdd777686_Traceguids, v16);
    goto LABEL_15;
  }
LABEL_16:
  if ( (v16 & 0x80000000) != 0 )
  {
LABEL_22:
    if ( v15 != &WPP_GLOBAL_Control && (*((_DWORD *)v15 + 7) & 0x800000) != 0 && *((_BYTE *)v15 + 25) >= 2u )
      WPP_SF_d(v15[2], 29LL, &WPP_2686b636a530381dd1b5bdfbdd777686_Traceguids, v16);
  }
  if ( v13 )
    DefaultChangedContext::`scalar deleting destructor'(v13, v10);
  return v16;
}
