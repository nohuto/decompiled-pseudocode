/*
 * XREFs of ?_ConfigureInputSpace@CInputConfig@@AEAAJPEAUCInputSpace@@@Z @ 0x1401F427C
 * Callers:
 *     ?_CreateLegacyInputSpace@CInputConfig@@AEAAJXZ @ 0x1401F4428 (-_CreateLegacyInputSpace@CInputConfig@@AEAAJXZ.c)
 *     ?zzzConfigureInputSpace@CInputConfig@@QEAAJPEAUCInputSpace@@@Z @ 0x1401F5048 (-zzzConfigureInputSpace@CInputConfig@@QEAAJPEAUCInputSpace@@@Z.c)
 * Callees:
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x1400185D0 (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     ?TraceCurrentConfig@InputConfig@@SAXXZ @ 0x14012C280 (-TraceCurrentConfig@InputConfig@@SAXXZ.c)
 *     ?FindInputSpace@CMouseConfig@CInputConfig@@QEAAXXZ @ 0x14012CAC4 (-FindInputSpace@CMouseConfig@CInputConfig@@QEAAXXZ.c)
 *     ?Reset@CInputSpace@@QEAAXPEAU1@@Z @ 0x14013E630 (-Reset@CInputSpace@@QEAAXPEAU1@@Z.c)
 *     ?LockExclusivelyHeld@CInputConfig@@SA_NXZ @ 0x1401433C0 (-LockExclusivelyHeld@CInputConfig@@SA_NXZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?Entry@Iter@CInputConfig@@QEAAPEAU_LIST_ENTRY@@XZ @ 0x1401F3D14 (-Entry@Iter@CInputConfig@@QEAAPEAU_LIST_ENTRY@@XZ.c)
 *     ?_EnsureInputSpace@CInputConfig@@AEAAXXZ @ 0x1401F471C (-_EnsureInputSpace@CInputConfig@@AEAAXXZ.c)
 *     ?_FindDefaultInputSpace@CInputConfig@@AEAAXXZ @ 0x1401F4770 (-_FindDefaultInputSpace@CInputConfig@@AEAAXXZ.c)
 *     ?_FreeInputSpace@CInputConfig@@AEAAXPEAU_LIST_ENTRY@@@Z @ 0x1401F4A54 (-_FreeInputSpace@CInputConfig@@AEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?_ProcessInputSpace@CInputConfig@@AEAAXPEAUCInputSpace@@@Z @ 0x1401F4AC8 (-_ProcessInputSpace@CInputConfig@@AEAAXPEAUCInputSpace@@@Z.c)
 */

__int64 __fastcall CInputConfig::_ConfigureInputSpace(CInputConfig *this, struct CInputSpace *a2)
{
  __int64 v4; // rcx
  unsigned int v5; // edi
  PERESOURCE *v6; // rbx
  struct _ERESOURCE *v7; // rcx
  CInputConfig *v8; // rdx
  CInputConfig *i; // rcx
  _DWORD *v10; // r8
  struct _LIST_ENTRY *v11; // rax
  CInputConfig *v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rsi
  CInputConfig *v15; // rcx
  __int64 v16; // rcx
  CInputConfig **v17; // rax
  __int64 CurrentProcessWin32Process; // rax
  CInputConfig *v19; // rcx
  __int64 v20; // rcx
  _QWORD v22[2]; // [rsp+20h] [rbp-38h] BYREF
  CInputConfig *v23; // [rsp+30h] [rbp-28h]
  CInputConfig *v24; // [rsp+38h] [rbp-20h]

  v5 = 0;
  if ( !CInputConfig::LockExclusivelyHeld((__int64)this) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 408);
  v6 = (PERESOURCE *)(W32GetUserSessionState(v4) + 18696);
  v7 = *v6;
  v22[0] = v6;
  ExEnterCriticalRegionAndAcquireResourceShared(v7);
  v8 = *(CInputConfig **)this;
  v22[1] = this;
  v23 = v8;
  for ( i = *(CInputConfig **)v8; ; i = *(CInputConfig **)i )
  {
    v24 = i;
    v10 = 0LL;
    if ( v8 != this )
      v10 = (_DWORD *)((char *)v8 + 16);
    if ( !v10 )
      break;
    if ( *v10 == *(_DWORD *)a2 && v10[1] == *((_DWORD *)a2 + 1) )
    {
      v11 = CInputConfig::Iter::Entry((CInputConfig::Iter *)v22);
      CInputConfig::_FreeInputSpace(v12, v11);
      break;
    }
    v8 = i;
    v23 = i;
  }
  ExReleaseResourceAndLeaveCriticalRegion(*v6);
  if ( !*((_DWORD *)a2 + 363) && !*((_BYTE *)a2 + 1448) )
    goto LABEL_21;
  v13 = Win32AllocPoolZInitImpl(256LL, 0x5D0uLL, 0x496E436Fu);
  v14 = v13;
  if ( v13 )
  {
    CInputSpace::Reset((CInputSpace *)(v13 + 16), (struct CInputSpace ***)a2);
    CInputConfig::_ProcessInputSpace(v15, (struct CInputSpace *)(v14 + 16));
    v17 = (CInputConfig **)*((_QWORD *)this + 1);
    if ( *v17 != this )
      __fastfail(3u);
    *(_QWORD *)v14 = this;
    *(_QWORD *)(v14 + 8) = v17;
    *v17 = (CInputConfig *)v14;
    *((_QWORD *)this + 1) = v14;
    if ( !*(_BYTE *)(v14 + 1464) )
    {
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v16);
      if ( CurrentProcessWin32Process )
        CurrentProcessWin32Process &= -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
      *(_QWORD *)(v14 + 32) = CurrentProcessWin32Process;
      *(_QWORD *)(CurrentProcessWin32Process + 816) |= 0x2000000uLL;
    }
LABEL_21:
    CInputConfig::_EnsureInputSpace(this);
    CInputConfig::_FindDefaultInputSpace(v19);
    InputConfig::TraceCurrentConfig(v20);
    CInputConfig::CMouseConfig::FindInputSpace((CInputConfig *)((char *)this + 16));
    return v5;
  }
  return (unsigned int)-1073741801;
}
