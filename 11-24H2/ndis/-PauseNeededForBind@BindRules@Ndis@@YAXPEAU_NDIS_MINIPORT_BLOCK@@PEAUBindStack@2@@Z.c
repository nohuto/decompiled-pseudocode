/*
 * XREFs of ?PauseNeededForBind@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUBindStack@2@@Z @ 0x140158050
 * Callers:
 *     ?Apply@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140157050 (-Apply@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisMExitInitMode@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4CallRunMode@@@Z @ 0x140166CD0 (-ndisMExitInitMode@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4CallRunMode@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_Ld @ 0x140058010 (WPP_RECORDER_SF_Ld.c)
 *     WPP_RECORDER_SF_Zq @ 0x1400598A0 (WPP_RECORDER_SF_Zq.c)
 *     __security_check_cookie @ 0x1400E70B0 (__security_check_cookie.c)
 *     memset @ 0x1400E7500 (memset.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x140143D04 (-ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x140143E34 (-ndisGetBindLinkNameForTracing@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 *     ?SetPause@BindState@Ndis@@QEAA_NW4PAUSE_OR_RESTART@@W4NDIS_PAUSE_REASON@@@Z @ 0x14015EC60 (-SetPause@BindState@Ndis@@QEAA_NW4PAUSE_OR_RESTART@@W4NDIS_PAUSE_REASON@@@Z.c)
 */

void __fastcall Ndis::BindRules::PauseNeededForBind(
        struct _NDIS_MINIPORT_BLOCK *this,
        struct _NDIS_MINIPORT_BLOCK *a2,
        struct Ndis::BindStack *a3)
{
  unsigned __int64 BaseMiniport_high; // r9
  int v4; // r11d
  unsigned __int64 i; // rax
  struct NDIS_BIND_FILTER_LINK **v8; // rbx
  struct NDIS_BIND_FILTER_LINK *v9; // rcx
  unsigned int m_numElements; // r8d
  bool v11; // zf
  int v12; // ecx
  unsigned __int64 v13; // r10
  unsigned __int64 j; // rcx
  _NDIS_MINIPORT_BLOCK *NextMiniport; // rax
  __int64 v16; // rdx
  _QWORD **v17; // rbx
  int v18; // r9d
  int v19; // r8d
  __int64 v20; // r8
  int v21; // eax
  int v22; // edx
  bool v23; // cf
  unsigned __int16 *v24; // rdx
  int SpinLock_high; // edx
  int v26; // eax
  int v27; // edx
  unsigned __int16 v28; // r9
  struct _UNICODE_STRING v29[10]; // [rsp+40h] [rbp-B8h] BYREF

  BaseMiniport_high = HIDWORD(a2->BaseMiniport);
  v4 = 0;
  for ( i = 0LL; i != BaseMiniport_high; ++i )
  {
    if ( i >= BaseMiniport_high )
LABEL_52:
      __fastfail(5u);
    v8 = (struct NDIS_BIND_FILTER_LINK **)((char *)a2->MiniportAdapterContext + 8 * i);
    v9 = *v8;
    m_numElements = (*v8)->BindState.m_bindContext.m_numElements;
    if ( m_numElements || v9->BindState.m_bindSources )
    {
      v11 = !v9->BindState.PretendBindingActive;
      v12 = 0;
      if ( v11 )
        LOBYTE(v12) = m_numElements == 0;
      if ( ((*v8)->BindState.m_unbindReasons != 0) != v12 )
      {
        SpinLock_high = HIDWORD(a2->ShortRef.SpinLock);
        v26 = HIDWORD(a2->ShortRef.SpinLock) | 4;
        HIDWORD(a2->ShortRef.SpinLock) = v26;
        if ( !SpinLock_high || !*(_QWORD *)&a2->Reserved4.Length )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && *((_WORD *)WPP_GLOBAL_Control + 36) )
            WPP_RECORDER_SF_Ld(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              5u,
              0x1Cu,
              0xFu,
              (struct _GUID *)&WPP_190ea6b10f113182d35a903b93524bb3_Traceguids,
              SpinLock_high,
              v26);
          *(_BYTE *)(*(_QWORD *)&a2->Reserved4.Length + 5224LL) = 1;
          memset(v29, 0, sizeof(v29));
          if ( (unsigned __int8)byte_14011CBA3 >= 4u )
          {
            ndisGetBindLinkNameForTracing(*v8, v29);
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              v28 = 62;
LABEL_57:
              WPP_RECORDER_SF_Zq(
                *((_QWORD *)WPP_GLOBAL_Control + 8),
                v27,
                0x1Cu,
                v28,
                (struct _GUID *)&WPP_065a33821845343ef30f5566aa9547e7_Traceguids,
                v29[0].Buffer,
                *(_QWORD *)&v29[0].Length);
            }
          }
        }
        return;
      }
    }
  }
  v13 = *((unsigned int *)&a2->Header + 1);
  for ( j = 0LL; j != v13; ++j )
  {
    if ( j >= v13 )
      goto LABEL_52;
    NextMiniport = a2->NextMiniport;
    v16 = *((_QWORD *)&NextMiniport->Header.Type + j);
    v17 = (_QWORD **)((char *)NextMiniport + 8 * j);
    v18 = *(_DWORD *)(v16 + 52);
    if ( v18 || *(_DWORD *)(v16 + 28) )
    {
      v20 = *(_QWORD *)(*(_QWORD *)(v16 + 80) + 40LL);
      if ( v20
        && *(_BYTE *)(v20 + 56) >= 6u
        && ((v21 = *(_DWORD *)(v16 + 32)) != 0 && (*(_BYTE *)(v16 + 9) || v18)
         || !this->InitMode && !v21 && !v18 && !*(_BYTE *)(v16 + 9)) )
      {
        v22 = HIDWORD(a2->ShortRef.SpinLock);
        HIDWORD(a2->ShortRef.SpinLock) = v22 | 4;
        if ( !v22 || !*(_QWORD *)&a2->Reserved4.Length )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && *((_WORD *)WPP_GLOBAL_Control + 36) )
            WPP_RECORDER_SF_Ld(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              5u,
              0x1Cu,
              0xFu,
              (struct _GUID *)&WPP_190ea6b10f113182d35a903b93524bb3_Traceguids,
              v22,
              v22 | 4);
          v23 = (unsigned __int8)byte_14011CBA3 < 4u;
          *(_BYTE *)(*(_QWORD *)&a2->Reserved4.Length + 5224LL) = 1;
          if ( !v23 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v24 = *(unsigned __int16 **)((*v17)[10] + 24LL);
            WPP_RECORDER_SF_Zq(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              (int)v24,
              0x1Cu,
              0x3Fu,
              (struct _GUID *)&WPP_065a33821845343ef30f5566aa9547e7_Traceguids,
              v24,
              **v17);
          }
        }
        return;
      }
    }
  }
  if ( LODWORD(a2->ShortRef.SpinLock) )
  {
    if ( Ndis::BindState::SetPause((Ndis::BindState *)&a2->32, DatapathPaused, PauseReason_Pnp) )
    {
      memset(v29, 0, sizeof(v29));
      if ( (unsigned __int8)byte_14011CBA3 >= 4u )
      {
        ndisGetBindLinkNameForTracing(this, (struct NDIS_PNPTRACE_LOCALS *)v29);
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v28 = 64;
          goto LABEL_57;
        }
      }
    }
  }
  else
  {
    v19 = HIDWORD(a2->ShortRef.SpinLock);
    HIDWORD(a2->ShortRef.SpinLock) = v19 & 0xFFFFFFFB;
    LOBYTE(v4) = v19 != 0;
    if ( v4 != ((v19 & 0xFFFFFFFB) != 0) || !*(_QWORD *)&a2->Reserved4.Length )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && *((_WORD *)WPP_GLOBAL_Control + 36) )
        WPP_RECORDER_SF_Ld(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          5u,
          0x1Cu,
          0xFu,
          (struct _GUID *)&WPP_190ea6b10f113182d35a903b93524bb3_Traceguids,
          v19,
          v19 & 0xFFFFFFFB);
      *(_BYTE *)(*(_QWORD *)&a2->Reserved4.Length + 5224LL) = 1;
      memset(v29, 0, sizeof(v29));
      if ( (unsigned __int8)byte_14011CBA3 >= 4u )
      {
        ndisGetBindLinkNameForTracing(this, (struct NDIS_PNPTRACE_LOCALS *)v29);
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v28 = 65;
          goto LABEL_57;
        }
      }
    }
  }
}
