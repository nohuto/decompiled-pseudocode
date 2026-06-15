/*
 * XREFs of ?GetSoundLevel@CApplicationManager@@QEAA?AW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@PEAVCProcess@@PEAW4AUDIO_DIRECTION@@PEAW4_AUDIO_STREAM_CATEGORY@@PEBG@Z @ 0x180037B18
 * Callers:
 *     PbmGetSoundLevel @ 0x180019300 (PbmGetSoundLevel.c)
 *     ?UseOfResourceAllowed@CProcess@@UEAAHKW4ResourceType@@@Z @ 0x180034BF0 (-UseOfResourceAllowed@CProcess@@UEAAHKW4ResourceType@@@Z.c)
 * Callees:
 *     ?TsSessionIdIsMuted@@YA_NK@Z @ 0x1800023C8 (-TsSessionIdIsMuted@@YA_NK@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180003470 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?GetApplication@CApplicationManager@@QEAAJPEBG_KKPEAPEAVCApplication@@HPEAH@Z @ 0x180003C10 (-GetApplication@CApplicationManager@@QEAAJPEBG_KKPEAPEAVCApplication@@HPEAH@Z.c)
 *     ?GetSoundLevel@CProcess@@UEAAJPEAW4AUDIO_DIRECTION@@PEAW4_AUDIO_STREAM_CATEGORY@@PEBGPEAW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@@Z @ 0x18001EA70 (-GetSoundLevel@CProcess@@UEAAJPEAW4AUDIO_DIRECTION@@PEAW4_AUDIO_STREAM_CATEGORY@@PEBGPEAW4__MIDL.c)
 *     ?GetSoundLevel@CApplicationManager@@QEAA?AW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@PEAVCApplication@@_N@Z @ 0x180037A04 (-GetSoundLevel@CApplicationManager@@QEAA-AW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@PEAVCAppl.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationManager::GetSoundLevel(
        __int64 a1,
        __int64 a2,
        enum AUDIO_DIRECTION *a3,
        enum _AUDIO_STREAM_CATEGORY *a4,
        unsigned __int16 *a5)
{
  CApplicationManager *v8; // rsi
  struct _RTL_CRITICAL_SECTION *v9; // rbx
  struct CApplication *v10; // rdx
  unsigned int SoundLevel; // ebx
  struct CApplication *v13; // [rsp+60h] [rbp+8h] BYREF
  struct _RTL_CRITICAL_SECTION *v14; // [rsp+70h] [rbp+18h] BYREF

  HIDWORD(v13) = HIDWORD(a1);
  v8 = g_ApplicationManager;
  LODWORD(v13) = 2;
  v9 = (struct _RTL_CRITICAL_SECTION *)((char *)g_ApplicationManager + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
  v14 = v9;
  if ( a3 )
  {
    CProcess::GetSoundLevel((CProcess *)a2, a3, a4, a5, (enum __MIDL___MIDL_itf_audiosrv_0000_0000_0004 *)&v13);
    SoundLevel = (unsigned int)v13;
    goto LABEL_8;
  }
  v10 = *(struct CApplication **)(a2 + 224);
  v13 = v10;
  if ( v10 )
    goto LABEL_6;
  if ( (int)CApplicationManager::GetApplication(
              v8,
              *(const unsigned __int16 **)(a2 + 176),
              *(_QWORD *)(a2 + 208),
              *(_DWORD *)(a2 + 164),
              &v13,
              0,
              0LL) >= 0 )
  {
    v10 = v13;
LABEL_6:
    SoundLevel = CApplicationManager::GetSoundLevel((__int64)v8, (__int64)v10, 1);
    goto LABEL_8;
  }
  SoundLevel = 2 * ((unsigned __int8)TsSessionIdIsMuted(*(_DWORD *)(a2 + 164)) ^ 1);
LABEL_8:
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v14);
  return SoundLevel;
}
