/*
 * XREFs of ?UnbindIncompatibleDriversForMacChange@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140163990
 * Callers:
 *     ?Apply@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1401638C0 (-Apply@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_Ld @ 0x140072CB0 (WPP_RECORDER_SF_Ld.c)
 *     WPP_RECORDER_SF_Zq @ 0x140074520 (WPP_RECORDER_SF_Zq.c)
 *     __security_check_cookie @ 0x1400EDF40 (__security_check_cookie.c)
 *     memset @ 0x1400EE380 (memset.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x14014E9CC (-ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 */

void __fastcall Ndis::BindRules::UnbindIncompatibleDriversForMacChange(
        Ndis::BindRules *this,
        struct _NDIS_MINIPORT_BLOCK *a2)
{
  __int64 v2; // r15
  unsigned __int64 i; // rbp
  __int64 v5; // r14
  struct NDIS_BIND_FILTER_LINK **v6; // rsi
  _NDIS_FILTER_DRIVER_BLOCK *RunningDriver; // rax
  unsigned int *p_Flags; // rdx
  signed __int32 v9; // eax
  signed __int32 v10; // ett
  signed __int32 v11; // eax
  signed __int32 v12; // ett
  struct NDIS_BIND_FILTER_LINK *v13; // rdi
  unsigned int v14; // edx
  int v15; // edx
  struct NDIS_BIND_FILTER_LINK *v16; // rdi
  unsigned int m_unbindReasons; // r8d
  int v18; // edx
  __int64 v19; // r15
  unsigned __int64 j; // rbp
  __int64 v21; // r14
  _QWORD **v22; // rsi
  __int64 v23; // rax
  _DWORD *v24; // rdx
  signed __int32 v25; // eax
  signed __int32 v26; // ett
  signed __int32 v27; // eax
  signed __int32 v28; // ett
  _QWORD *v29; // rdi
  int v30; // edx
  unsigned __int16 *v31; // rdx
  _QWORD *v32; // rdi
  int v33; // r8d
  char v34[8]; // [rsp+30h] [rbp-188h]
  struct _UNICODE_STRING v35[10]; // [rsp+40h] [rbp-178h] BYREF
  struct _UNICODE_STRING v36[10]; // [rsp+E0h] [rbp-D8h] BYREF

  v2 = *((unsigned int *)this + 1259);
  for ( i = 0LL; i != v2; ++i )
  {
    if ( i >= *((unsigned int *)this + 1259) )
LABEL_59:
      __fastfail(5u);
    v5 = qword_140127130;
    v6 = (struct NDIS_BIND_FILTER_LINK **)(*((_QWORD *)this + 630) + 8 * i);
    KeEnterCriticalRegion();
    ExAcquirePushLockSharedEx(v5 + 16, 0LL);
    RunningDriver = (*v6)->BindDriver._p->_t.RunningDriver;
    if ( RunningDriver )
    {
      p_Flags = &RunningDriver->Flags;
      _m_prefetchw((char *)this + 4424);
      v9 = *((_DWORD *)this + 1106);
      do
      {
        v10 = v9;
        v9 = _InterlockedCompareExchange((volatile signed __int32 *)this + 1106, v9, v9);
      }
      while ( v10 != v9 );
      if ( (v9 & 0x20) != 0 && (*p_Flags & 2) == 0 )
        goto LABEL_13;
      _m_prefetchw((char *)this + 4424);
      v11 = *((_DWORD *)this + 1106);
      do
      {
        v12 = v11;
        v11 = _InterlockedCompareExchange((volatile signed __int32 *)this + 1106, v11, v11);
      }
      while ( v12 != v11 );
      if ( (v11 & 0x40) == 0 || (*p_Flags & 4) != 0 )
      {
        v16 = *v6;
        m_unbindReasons = (*v6)->BindState.m_unbindReasons;
        (*v6)->BindState.m_unbindReasons = m_unbindReasons & 0xFFBFFFFF;
        if ( (m_unbindReasons != 0) != ((m_unbindReasons & 0xFFBFFFFF) != 0) || !v16->BindState.Miniport )
        {
          if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED && *((_WORD *)WPP_GLOBAL_Control + 36) )
          {
            *(_DWORD *)v34 = m_unbindReasons & 0xFFBFFFFF;
            WPP_RECORDER_SF_Ld(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              5u,
              0x1Cu,
              0xEu,
              (struct _GUID *)&WPP_190ea6b10f113182d35a903b93524bb3_Traceguids,
              m_unbindReasons,
              *(_QWORD *)v34);
          }
          v16->BindState.Miniport->BindEngine.m_isDirty = 1;
          memset(v36, 0, sizeof(v36));
          if ( (unsigned __int8)byte_140126C63 >= 4u )
          {
            ndisGetBindLinkNameForTracing(*v6, v36);
            if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
              WPP_RECORDER_SF_Zq(
                *((_QWORD *)WPP_GLOBAL_Control + 8),
                v18,
                0x1Cu,
                0x16u,
                (struct _GUID *)&WPP_065a33821845343ef30f5566aa9547e7_Traceguids,
                v36[0].Buffer,
                *(_QWORD *)&v36[0].Length);
          }
        }
      }
      else
      {
LABEL_13:
        v13 = *v6;
        v14 = (*v6)->BindState.m_unbindReasons;
        (*v6)->BindState.m_unbindReasons = v14 | 0x400000;
        if ( !v14 || !v13->BindState.Miniport )
        {
          if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED && *((_WORD *)WPP_GLOBAL_Control + 36) )
          {
            *(_DWORD *)v34 = v14 | 0x400000;
            WPP_RECORDER_SF_Ld(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              5u,
              0x1Cu,
              0xEu,
              (struct _GUID *)&WPP_190ea6b10f113182d35a903b93524bb3_Traceguids,
              v14,
              *(_QWORD *)v34);
          }
          v13->BindState.Miniport->BindEngine.m_isDirty = 1;
          memset(v35, 0, sizeof(v35));
          if ( (unsigned __int8)byte_140126C63 >= 4u )
          {
            ndisGetBindLinkNameForTracing(*v6, v35);
            if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
              WPP_RECORDER_SF_Zq(
                *((_QWORD *)WPP_GLOBAL_Control + 8),
                v15,
                0x1Cu,
                0x15u,
                (struct _GUID *)&WPP_065a33821845343ef30f5566aa9547e7_Traceguids,
                v35[0].Buffer,
                *(_QWORD *)&v35[0].Length);
          }
        }
      }
    }
    ExReleasePushLockEx(v5 + 16, 0LL);
    KeLeaveCriticalRegion();
  }
  v19 = *((unsigned int *)this + 1255);
  for ( j = 0LL; j != v19; ++j )
  {
    if ( j >= *((unsigned int *)this + 1255) )
      goto LABEL_59;
    v21 = qword_140127130;
    v22 = (_QWORD **)(*((_QWORD *)this + 628) + 8 * j);
    KeEnterCriticalRegion();
    ExAcquirePushLockSharedEx(v21 + 16, 0LL);
    v23 = *(_QWORD *)((*v22)[10] + 40LL);
    if ( v23 )
    {
      v24 = (_DWORD *)(v23 + 64);
      _m_prefetchw((char *)this + 4424);
      v25 = *((_DWORD *)this + 1106);
      do
      {
        v26 = v25;
        v25 = _InterlockedCompareExchange((volatile signed __int32 *)this + 1106, v25, v25);
      }
      while ( v26 != v25 );
      if ( (v25 & 0x20) != 0 && (*v24 & 2) == 0 )
        goto LABEL_42;
      _m_prefetchw((char *)this + 4424);
      v27 = *((_DWORD *)this + 1106);
      do
      {
        v28 = v27;
        v27 = _InterlockedCompareExchange((volatile signed __int32 *)this + 1106, v27, v27);
      }
      while ( v28 != v27 );
      if ( (v27 & 0x40) == 0 || (*v24 & 4) != 0 )
      {
        v32 = *v22;
        v33 = *((_DWORD *)*v22 + 8);
        *((_DWORD *)*v22 + 8) = v33 & 0xFFBFFFFF;
        if ( (v33 != 0) != ((v33 & 0xFFBFFFFF) != 0) || !*v32 )
        {
          if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED && *((_WORD *)WPP_GLOBAL_Control + 36) )
          {
            *(_DWORD *)v34 = v33 & 0xFFBFFFFF;
            WPP_RECORDER_SF_Ld(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              5u,
              0x1Cu,
              0xEu,
              (struct _GUID *)&WPP_190ea6b10f113182d35a903b93524bb3_Traceguids,
              v33,
              *(_QWORD *)v34);
          }
          *(_BYTE *)(*v32 + 5224LL) = 1;
          if ( (unsigned __int8)byte_140126C63 >= 4u && *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_Zq(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              **v22,
              0x1Cu,
              0x18u,
              (struct _GUID *)&WPP_065a33821845343ef30f5566aa9547e7_Traceguids,
              *(unsigned __int16 **)((*v22)[10] + 24LL),
              **v22);
        }
      }
      else
      {
LABEL_42:
        v29 = *v22;
        v30 = *((_DWORD *)*v22 + 8);
        *((_DWORD *)*v22 + 8) = v30 | 0x400000;
        if ( !v30 || !*v29 )
        {
          if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED && *((_WORD *)WPP_GLOBAL_Control + 36) )
          {
            *(_DWORD *)v34 = v30 | 0x400000;
            WPP_RECORDER_SF_Ld(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              5u,
              0x1Cu,
              0xEu,
              (struct _GUID *)&WPP_190ea6b10f113182d35a903b93524bb3_Traceguids,
              v30,
              *(_QWORD *)v34);
          }
          *(_BYTE *)(*v29 + 5224LL) = 1;
          if ( (unsigned __int8)byte_140126C63 >= 4u && *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          {
            v31 = *(unsigned __int16 **)((*v22)[10] + 24LL);
            WPP_RECORDER_SF_Zq(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              (int)v31,
              0x1Cu,
              0x17u,
              (struct _GUID *)&WPP_065a33821845343ef30f5566aa9547e7_Traceguids,
              v31,
              **v22);
          }
        }
      }
    }
    ExReleasePushLockEx(v21 + 16, 0LL);
    KeLeaveCriticalRegion();
  }
}
