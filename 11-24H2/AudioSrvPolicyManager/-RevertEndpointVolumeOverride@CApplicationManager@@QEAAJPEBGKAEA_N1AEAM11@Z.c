/*
 * XREFs of ?RevertEndpointVolumeOverride@CApplicationManager@@QEAAJPEBGKAEA_N1AEAM11@Z @ 0x1800393B8
 * Callers:
 *     ??1CAastPreStartContext@@UEAA@XZ @ 0x18003C4CC (--1CAastPreStartContext@@UEAA@XZ.c)
 * Callees:
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180003470 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x180008660 (-AudPolicyLogError@@YAXPEBDHJ@Z.c)
 *     WPP_SF_d @ 0x18002B464 (WPP_SF_d.c)
 *     WPP_SF_dS @ 0x18003A1A0 (WPP_SF_dS.c)
 *     ?TsSessionIdReleaseEndpointVolumeReference@@YAJKPEBGAEA_N1AEAM11@Z @ 0x18003FD84 (-TsSessionIdReleaseEndpointVolumeReference@@YAJKPEBGAEA_N1AEAM11@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationManager::RevertEndpointVolumeOverride(
        struct _RTL_CRITICAL_SECTION *this,
        const unsigned __int16 *a2,
        unsigned int a3,
        bool *a4,
        bool *a5,
        float *a6,
        bool *a7,
        bool *a8)
{
  struct _RTL_CRITICAL_SECTION *v11; // rbx
  bool *v12; // r9
  bool *v13; // rcx
  int v14; // eax
  unsigned int v15; // ebx
  struct _RTL_CRITICAL_SECTION *v17; // [rsp+60h] [rbp+8h] BYREF

  v17 = this;
  v11 = (struct _RTL_CRITICAL_SECTION *)((char *)g_ApplicationManager + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
  v17 = v11;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_dS(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      49,
      (unsigned int)&WPP_8d4f0c2ae8213c98c7518ad68b13e68c_Traceguids,
      a3,
      (__int64)a2);
  }
  *a4 = 0;
  v12 = a5;
  *a5 = 0;
  v13 = a7;
  *a7 = 0;
  v14 = TsSessionIdReleaseEndpointVolumeReference(a3, a2, a4, v12, a6, v13, a8);
  v15 = v14;
  if ( v14 < 0 )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x32u, &WPP_8d4f0c2ae8213c98c7518ad68b13e68c_Traceguids, v14);
    }
    AudPolicyLogError("CApplicationManager::RevertEndpointVolumeOverride", 2931, v15);
  }
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v17);
  return v15;
}
