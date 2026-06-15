/*
 * XREFs of ?Category@CApplication@@QEAA?AW4_APPLICATION_CATEGORY@@XZ @ 0x180003180
 * Callers:
 *     ?OnApplicationInteractivityChanged@CApplicationManager@@QEAAXPEAVCApplication@@@Z @ 0x1800032E0 (-OnApplicationInteractivityChanged@CApplicationManager@@QEAAXPEAVCApplication@@@Z.c)
 *     ?GoodFaithPLMExemptionExpired@CApplication@@QEAAJXZ @ 0x180034E60 (-GoodFaithPLMExemptionExpired@CApplication@@QEAAJXZ.c)
 *     ?GetSoundLevel@CApplicationManager@@QEAA?AW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@PEAVCApplication@@_N@Z @ 0x180039E74 (-GetSoundLevel@CApplicationManager@@QEAA-AW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@PEAVCAppl.c)
 *     ?GetSoundLevel_old@CApplicationManager@@QEAA?AW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@PEAVCApplication@@@Z @ 0x18003A0AC (-GetSoundLevel_old@CApplicationManager@@QEAA-AW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@PEAVC.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CApplication::Category(__int64 a1)
{
  struct _RTL_CRITICAL_SECTION *v2; // rsi
  int v3; // ebx
  _QWORD *v5; // rax
  __int64 v6; // rdx
  int v7; // ecx
  int v8; // r8d

  v2 = (struct _RTL_CRITICAL_SECTION *)(a1 + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 32));
  v3 = 4;
  if ( *(_DWORD *)(a1 + 612) )
  {
    v3 = *(_DWORD *)(a1 + 616);
  }
  else
  {
    v5 = *(_QWORD **)(a1 + 72);
    while ( v5 )
    {
      v6 = v5[2];
      v5 = (_QWORD *)*v5;
      if ( !*(_DWORD *)(v6 + 416) || *(_QWORD *)(v6 + 360) )
      {
        v7 = *(_DWORD *)(v6 + 480);
        v8 = v7 ? *(_DWORD *)(v6 + 484) : *(_DWORD *)(v6 + 312);
        if ( v8 < v3 )
        {
          if ( v7 )
            v3 = *(_DWORD *)(v6 + 484);
          else
            v3 = *(_DWORD *)(v6 + 312);
        }
      }
    }
  }
  if ( v2 )
    LeaveCriticalSection(v2);
  return (unsigned int)v3;
}
