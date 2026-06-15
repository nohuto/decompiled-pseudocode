/*
 * XREFs of ?SetChannelVolume@CVADServer@@UEAAJIMPEAH@Z @ 0x18010E090
 * Callers:
 *     AudioServerSetChannelVolume @ 0x180111B10 (AudioServerSetChannelVolume.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180014EAC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180020710 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?SetStreamChannelVolume@CAudioStream@@QEAAJIMPEAH@Z @ 0x180072A18 (-SetStreamChannelVolume@CAudioStream@@QEAAJIMPEAH@Z.c)
 *     WPP_SF_qdg @ 0x1800736B8 (WPP_SF_qdg.c)
 *     ?ValidateAudioLevel@@YA_NM@Z @ 0x1800A264C (-ValidateAudioLevel@@YA_NM@Z.c)
 */

__int64 __fastcall CVADServer::SetChannelVolume(struct _RTL_CRITICAL_SECTION *this, unsigned int a2, float a3, int *a4)
{
  unsigned int v7; // ebx
  CAudioStream *OwningThread; // rcx
  int v9; // eax
  __int64 v10; // r9
  __int64 v11; // rdx
  struct _RTL_CRITICAL_SECTION *v14; // [rsp+30h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_qdg(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x10u,
      (__int64)&WPP_74ab4d28651a3ef962dcd31efa958cf9_Traceguids,
      this,
      a2,
      a3);
  }
  if ( ValidateAudioLevel(a3) )
  {
    EnterCriticalSection(this + 5);
    OwningThread = (CAudioStream *)this[4].OwningThread;
    v14 = this + 5;
    if ( OwningThread && LODWORD(this[4].DebugInfo) )
    {
      v9 = CAudioStream::SetStreamChannelVolume(OwningThread, a2, a3, a4);
      v7 = v9;
      if ( v9 >= 0 )
      {
        v7 = 0;
LABEL_14:
        wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v14);
        return v7;
      }
      v10 = (unsigned int)v9;
      v11 = 2156LL;
    }
    else
    {
      v7 = -2004287487;
      v11 = 2155LL;
      v10 = 2290679809LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)v10);
    goto LABEL_14;
  }
  v7 = -2147024809;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x867,
    (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
    (const char *)0x80070057LL);
  return v7;
}
