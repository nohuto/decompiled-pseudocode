/*
 * XREFs of ?OnNotify@CPerEndpointVolumeAudioSession@@EEAAJPEAUAUDIO_VOLUME_NOTIFICATION_DATA@@@Z @ 0x180009FC0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18000A850 (--3@YAXPEAX@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18001EBF0 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?RecalculateSessionVolume@CAudioSession@@UEAAXW4AudioVolumeChangeType@@PEBU_GUID@@K_NPEA_J@Z @ 0x180064430 (-RecalculateSessionVolume@CAudioSession@@UEAAXW4AudioVolumeChangeType@@PEBU_GUID@@K_NPEA_J@Z.c)
 *     ?SetMute@CAudioSession@@UEAAJHPEBU_GUID@@HPEAH@Z @ 0x180085DD0 (-SetMute@CAudioSession@@UEAAJHPEBU_GUID@@HPEAH@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800A7FBC (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     WPP_SF_ @ 0x1800C1670 (WPP_SF_.c)
 *     _lambda_c1484885cbbce228ad1e61609886ff14_::_lambda_c1484885cbbce228ad1e61609886ff14_ @ 0x1800C2340 (_lambda_c1484885cbbce228ad1e61609886ff14_--_lambda_c1484885cbbce228ad1e61609886ff14_.c)
 *     _lambda_c1484885cbbce228ad1e61609886ff14_::operator() @ 0x1800C25D4 (_lambda_c1484885cbbce228ad1e61609886ff14_--operator().c)
 *     WPP_SF_q @ 0x1800C480C (WPP_SF_q.c)
 *     WPP_SF_q_guid_ @ 0x1800C48D8 (WPP_SF_q_guid_.c)
 *     WPP_SF_q_guid__guid_ @ 0x1800C4930 (WPP_SF_q_guid__guid_.c)
 *     WPP_SF_qdd @ 0x1800C49F4 (WPP_SF_qdd.c)
 *     WPP_SF_qdgg @ 0x1800C4A54 (WPP_SF_qdgg.c)
 *     WPP_SF_qgg_HEX__HEX_ @ 0x1800C4AC0 (WPP_SF_qgg_HEX__HEX_.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CPerEndpointVolumeAudioSession::OnNotify(
        CPerEndpointVolumeAudioSession *this,
        struct AUDIO_VOLUME_NOTIFICATION_DATA *a2)
{
  char v4; // r15
  char v5; // r13
  _QWORD *v6; // rcx
  char *v7; // rdx
  __int64 v8; // rax
  struct _RTL_CRITICAL_SECTION *v9; // r14
  int v10; // r8d
  _QWORD *v11; // rcx
  float *p_fMasterVolume; // r12
  __m128 fMasterVolume_low; // xmm0
  unsigned int v14; // eax
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // kr00_8
  void *v17; // rax
  __int64 v18; // rsi
  float *v19; // r14
  float v20; // xmm0_4
  __int64 v21; // rax
  int v22; // esi
  unsigned int v23; // r15d
  int v24; // ecx
  __int64 v25; // rax
  float *v26; // r8
  __int64 v27; // rdx
  float v28; // xmm1_4
  __int64 v29; // rax
  int v31; // [rsp+28h] [rbp-79h]
  float *p_Data1; // [rsp+48h] [rbp-59h] BYREF
  __int16 v33; // [rsp+50h] [rbp-51h]
  char *v34; // [rsp+58h] [rbp-49h] BYREF
  __int16 v35; // [rsp+60h] [rbp-41h]
  char v36; // [rsp+68h] [rbp-39h] BYREF
  char v37; // [rsp+108h] [rbp+67h] BYREF
  struct _RTL_CRITICAL_SECTION *v38; // [rsp+110h] [rbp+6Fh] BYREF
  int v39; // [rsp+118h] [rbp+77h] BYREF
  void *v40; // [rsp+120h] [rbp+7Fh]

  v4 = 0;
  v5 = 0;
  LOBYTE(v38) = 0;
  v37 = 0;
  v40 = 0LL;
  v6 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q_guid_(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      71,
      (unsigned int)&WPP_6681b08aa41435022487e8d1ae4eb6cc_Traceguids,
      (_DWORD)this - 920,
      (__int64)a2);
    v6 = WPP_GLOBAL_Control;
  }
  v7 = (char *)this - 656;
  v8 = *(_QWORD *)&a2->guidEventContext.Data1 - *((_QWORD *)this - 82);
  if ( *(_QWORD *)&a2->guidEventContext.Data1 == *((_QWORD *)this - 82) )
    v8 = *(_QWORD *)a2->guidEventContext.Data4 - *((_QWORD *)v7 + 1);
  if ( v8 )
  {
    if ( v6 != &WPP_GLOBAL_Control && (*((_BYTE *)v6 + 28) & 0x40) != 0 && *((_BYTE *)v6 + 25) >= 4u )
      WPP_SF_q_guid__guid_(
        v6[2],
        (_DWORD)v7,
        (unsigned int)&WPP_GLOBAL_Control,
        (_DWORD)this - 920,
        (__int64)a2,
        (__int64)this - 656);
    v9 = (struct _RTL_CRITICAL_SECTION *)((char *)this - 184);
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)this - 184));
    v10 = *((_DWORD *)this - 35);
    if ( a2->bMuted == v10 )
    {
      v11 = WPP_GLOBAL_Control;
    }
    else
    {
      v11 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_qdd(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          74LL,
          &WPP_6681b08aa41435022487e8d1ae4eb6cc_Traceguids,
          (char *)this - 920,
          v10,
          a2->bMuted);
        v11 = WPP_GLOBAL_Control;
      }
      v5 = 1;
      LOBYTE(v38) = 1;
    }
    p_fMasterVolume = &a2->fMasterVolume;
    fMasterVolume_low = (__m128)LODWORD(a2->fMasterVolume);
    if ( fMasterVolume_low.m128_f32[0] != *((float *)this - 36) )
    {
      if ( v11 != &WPP_GLOBAL_Control && (*((_BYTE *)v11 + 28) & 0x40) != 0 && *((_BYTE *)v11 + 25) >= 4u )
      {
        p_Data1 = &a2->fMasterVolume;
        v33 = 4;
        v34 = (char *)this - 144;
        v35 = 4;
        WPP_SF_qgg_HEX__HEX_(
          v11[2],
          (unsigned int)&WPP_GLOBAL_Control,
          v10,
          (_DWORD)this - 920,
          *(_OWORD *)&_mm_cvtps_pd((__m128)*((unsigned int *)this - 36)),
          *(_OWORD *)&_mm_cvtps_pd(fMasterVolume_low),
          (__int64)&v34,
          (__int64)&p_Data1);
        v11 = WPP_GLOBAL_Control;
      }
      v37 = 1;
    }
    v14 = *((_DWORD *)this - 8);
    if ( a2->nChannels == v14 )
    {
      v16 = v14;
      v15 = 4LL * v14;
      if ( !is_mul_ok(v16, 4uLL) )
        v15 = -1LL;
      v17 = operator new[](v15, (const struct std::nothrow_t *)&std::nothrow);
      v40 = v17;
      if ( v17 && (v18 = 0LL, *((_DWORD *)this - 8)) )
      {
        v19 = (float *)v17;
        do
        {
          if ( *p_fMasterVolume == 0.0 )
            v20 = FLOAT_1_0;
          else
            v20 = a2->afChannelVolumes[v18] / *p_fMasterVolume;
          v19[v18] = v20;
          v21 = *((_QWORD *)this - 3);
          if ( v20 == *(float *)(v21 + 4 * v18) )
          {
            v11 = WPP_GLOBAL_Control;
          }
          else
          {
            v11 = WPP_GLOBAL_Control;
            if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
              && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
              && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
            {
              WPP_SF_qdgg(
                *((_QWORD *)WPP_GLOBAL_Control + 2),
                76LL,
                &WPP_6681b08aa41435022487e8d1ae4eb6cc_Traceguids,
                (char *)this - 920,
                v18,
                *(float *)(v21 + 4 * v18),
                v20);
              v11 = WPP_GLOBAL_Control;
            }
            v4 = 1;
          }
          v18 = (unsigned int)(v18 + 1);
        }
        while ( (unsigned int)v18 < *((_DWORD *)this - 8) );
        v9 = (struct _RTL_CRITICAL_SECTION *)((char *)this - 184);
        v5 = (char)v38;
      }
      else
      {
        v11 = WPP_GLOBAL_Control;
      }
    }
    if ( v9 )
    {
      LeaveCriticalSection(v9);
      v11 = WPP_GLOBAL_Control;
    }
    if ( v5 || v37 || v4 )
    {
      if ( v11 != &WPP_GLOBAL_Control && (*((_BYTE *)v11 + 28) & 0x40) != 0 && *((_BYTE *)v11 + 25) >= 4u )
      {
        WPP_SF_(v11[2], 77LL, &WPP_6681b08aa41435022487e8d1ae4eb6cc_Traceguids);
        v11 = WPP_GLOBAL_Control;
      }
      if ( v4 )
      {
        v22 = 0;
        v23 = 0;
        if ( v11 != &WPP_GLOBAL_Control && (*((_BYTE *)v11 + 28) & 0x40) != 0 && *((_BYTE *)v11 + 25) >= 4u )
          WPP_SF_(v11[2], 78LL, &WPP_6681b08aa41435022487e8d1ae4eb6cc_Traceguids);
        EnterCriticalSection(v9);
        v38 = v9;
        v24 = *((_DWORD *)this - 8);
        if ( a2->nChannels == v24 )
        {
          v25 = 0LL;
          if ( v24 )
          {
            v26 = (float *)v40;
            do
            {
              v27 = *((_QWORD *)this - 3);
              v28 = v26[v25];
              if ( *(float *)(v27 + 4 * v25) != v28 )
              {
                *(float *)(v27 + 4 * v25) = v28;
                v23 = v25;
              }
              v25 = (unsigned int)(v25 + 1);
            }
            while ( (unsigned int)v25 < *((_DWORD *)this - 8) );
          }
          v22 = 1;
        }
        wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v38);
        if ( v22 )
        {
          LOBYTE(v31) = 1;
          CAudioSession::RecalculateSessionVolume((char *)this - 912, 1LL, a2, v23, v31, 0LL);
        }
        v11 = WPP_GLOBAL_Control;
      }
      if ( v5 )
      {
        CAudioSession::SetMute(
          (CPerEndpointVolumeAudioSession *)((char *)this - 920),
          a2->bMuted,
          &EVENTCONTEXT_AUDIOSUBSYSTEM,
          1,
          0LL);
        v11 = WPP_GLOBAL_Control;
      }
      if ( v37 )
      {
        if ( v11 != &WPP_GLOBAL_Control && (*((_BYTE *)v11 + 28) & 0x40) != 0 && *((_BYTE *)v11 + 25) >= 4u )
          WPP_SF_(v11[2], 79LL, &WPP_6681b08aa41435022487e8d1ae4eb6cc_Traceguids);
        EnterCriticalSection(v9);
        *((float *)this - 36) = *p_fMasterVolume;
        if ( v9 )
          LeaveCriticalSection(v9);
        v37 = 1;
        LODWORD(v38) = 0;
        p_Data1 = (float *)&a2->guidEventContext.Data1;
        v39 = 0;
        v29 = lambda_c1484885cbbce228ad1e61609886ff14_::_lambda_c1484885cbbce228ad1e61609886ff14_(
                (unsigned int)&v36,
                (int)this - 920,
                (unsigned int)&p_Data1,
                (unsigned int)&v37,
                (__int64)&v39,
                (__int64)&v38);
        lambda_c1484885cbbce228ad1e61609886ff14_::operator()(v29);
      }
    }
    operator delete(v40);
  }
  else if ( v6 != &WPP_GLOBAL_Control && (*((_BYTE *)v6 + 28) & 0x40) != 0 && *((_BYTE *)v6 + 25) >= 4u )
  {
    WPP_SF_q(v6[2], 72LL, &WPP_6681b08aa41435022487e8d1ae4eb6cc_Traceguids, (char *)this - 920);
  }
  return 0LL;
}
