/*
 * XREFs of ?NotifyPLM@CProcess@@QEAAXW4_PLM_EXEMPTION@@@Z @ 0x18000A420
 * Callers:
 *     ?ProcessPendingPLMExemptionChange@CApplication@@IEAAXXZ @ 0x18000A2C0 (-ProcessPendingPLMExemptionChange@CApplication@@IEAAXXZ.c)
 *     ?ProcessTerminated@CApplicationManager@@QEAAJPEAVCProcess@@@Z @ 0x18000E870 (-ProcessTerminated@CApplicationManager@@QEAAJPEAVCProcess@@@Z.c)
 *     ?Cleanup@CProcess@@QEAAJH@Z @ 0x1800342C8 (-Cleanup@CProcess@@QEAAJH@Z.c)
 *     ?RefreshPBMState@CProcess@@QEAAXW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@0W4_PLM_EXEMPTION@@@Z @ 0x180035F00 (-RefreshPBMState@CProcess@@QEAAXW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@0W4_PLM_EXEMPTION@@.c)
 * Callees:
 *     ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x18000A860 (-AudPolicyLogError@@YAXPEBDHJ@Z.c)
 *     WPP_SF_d @ 0x18002DA54 (WPP_SF_d.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18004F010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CProcess::NotifyPLM(__int64 a1, int a2)
{
  HRESULT Instance; // ebp
  int v4; // edx
  _QWORD *v5; // rdi
  __int64 v6; // rdi
  int v7; // esi
  HRESULT v8; // eax
  _QWORD *v9; // rax
  __int64 v10; // rdx
  int v11; // ecx
  int v12; // r8d
  _QWORD *v13; // rdi
  HRESULT v14; // eax

  Instance = 0;
  v4 = a2 - 1;
  if ( v4 )
  {
    if ( v4 == 1 )
    {
      if ( *(_DWORD *)(a1 + 416) )
        return;
      if ( !*(_DWORD *)(a1 + 232) )
      {
        if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          WPP_SF_d(
            *((_QWORD *)WPP_GLOBAL_Control + 2),
            41LL,
            &WPP_b18b59d12697333a0d06d17b7897f64c_Traceguids,
            *(unsigned int *)(a1 + 160));
        }
        v5 = (_QWORD *)(a1 + 240);
        if ( !*(_QWORD *)(a1 + 240) )
        {
          *v5 = 0LL;
          Instance = CoCreateInstance(
                       &CLSID_OSTaskCompletion,
                       0LL,
                       1u,
                       &GUID_c7e40572_c36a_43ea_9a40_f3b168da5558,
                       (LPVOID *)(a1 + 240));
          if ( Instance < 0 )
            goto LABEL_19;
        }
        Instance = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(*(_QWORD *)*v5 + 32LL))(
                     *v5,
                     *(_QWORD *)(a1 + 152),
                     1LL);
        if ( Instance < 0 )
          goto LABEL_19;
        *(_DWORD *)(a1 + 232) = 1;
      }
    }
  }
  else if ( *(_DWORD *)(a1 + 232) )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        42LL,
        &WPP_b18b59d12697333a0d06d17b7897f64c_Traceguids,
        *(unsigned int *)(a1 + 160));
    }
    v8 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 240) + 40LL))(*(_QWORD *)(a1 + 240));
    if ( v8 != -2147023728 )
      Instance = v8;
    if ( Instance < 0 )
      goto LABEL_19;
    *(_DWORD *)(a1 + 232) = 0;
  }
  v6 = *(_QWORD *)(a1 + 224);
  if ( v6 )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)(v6 + 32));
    v7 = 4;
    if ( *(_DWORD *)(v6 + 612) )
    {
      v7 = *(_DWORD *)(v6 + 616);
    }
    else
    {
      v9 = *(_QWORD **)(v6 + 72);
      while ( v9 )
      {
        v10 = v9[2];
        v9 = (_QWORD *)*v9;
        if ( !*(_DWORD *)(v10 + 416) || *(_QWORD *)(v10 + 360) )
        {
          v11 = *(_DWORD *)(v10 + 480);
          v12 = v11 ? *(_DWORD *)(v10 + 484) : *(_DWORD *)(v10 + 312);
          if ( v12 < v7 )
          {
            if ( v11 )
              v7 = *(_DWORD *)(v10 + 484);
            else
              v7 = *(_DWORD *)(v10 + 312);
          }
        }
      }
    }
    if ( v6 != -32 )
      LeaveCriticalSection((LPCRITICAL_SECTION)(v6 + 32));
  }
  else if ( *(_DWORD *)(a1 + 480) )
  {
    v7 = *(_DWORD *)(a1 + 484);
  }
  else
  {
    v7 = *(_DWORD *)(a1 + 312);
  }
  if ( v7 || !*(_DWORD *)(a1 + 436) )
  {
    if ( !*(_DWORD *)(a1 + 236) )
      return;
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        44LL,
        &WPP_b18b59d12697333a0d06d17b7897f64c_Traceguids,
        *(unsigned int *)(a1 + 160));
    }
    v14 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 248) + 40LL))(*(_QWORD *)(a1 + 248));
    Instance = 0;
    if ( v14 != -2147023728 )
      Instance = v14;
    if ( Instance >= 0 )
    {
      *(_DWORD *)(a1 + 236) = 0;
      return;
    }
  }
  else
  {
    if ( *(_DWORD *)(a1 + 236) )
      return;
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        43LL,
        &WPP_b18b59d12697333a0d06d17b7897f64c_Traceguids,
        *(unsigned int *)(a1 + 160));
    }
    v13 = (_QWORD *)(a1 + 248);
    if ( *(_QWORD *)(a1 + 248)
      || (*v13 = 0LL,
          Instance = CoCreateInstance(
                       &CLSID_OSTaskCompletion,
                       0LL,
                       1u,
                       &GUID_c7e40572_c36a_43ea_9a40_f3b168da5558,
                       (LPVOID *)(a1 + 248)),
          Instance >= 0) )
    {
      Instance = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(*(_QWORD *)*v13 + 32LL))(
                   *v13,
                   *(_QWORD *)(a1 + 152),
                   0x80000LL);
      if ( Instance >= 0 )
      {
        *(_DWORD *)(a1 + 236) = 1;
        return;
      }
    }
  }
LABEL_19:
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      45LL,
      &WPP_b18b59d12697333a0d06d17b7897f64c_Traceguids,
      (unsigned int)Instance);
  }
  AudPolicyLogError("CProcess::NotifyPLM", 3472, Instance);
}
