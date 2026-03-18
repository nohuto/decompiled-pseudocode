/*
 * XREFs of ?CompositionPassNeeded@CComposition@@IEAAX_N@Z @ 0x1800309F0
 * Callers:
 *     ?PostRender@CComposition@@IEAAJ_N@Z @ 0x180030238 (-PostRender@CComposition@@IEAAJ_N@Z.c)
 * Callees:
 *     ?RemoveAt@?$DynArray@URoudTripRequestTracker@CComposition@@$0A@@@QEAAJI@Z @ 0x18002FCEC (-RemoveAt@-$DynArray@URoudTripRequestTracker@CComposition@@$0A@@@QEAAJI@Z.c)
 *     ?NotifyHelper@CComposition@@QEAAJPEAUMIL_MESSAGE@@@Z @ 0x18002FD74 (-NotifyHelper@CComposition@@QEAAJPEAUMIL_MESSAGE@@@Z.c)
 *     ?HasPrimitives@CAnimation@@QEAA_NXZ @ 0x180030F98 (-HasPrimitives@CAnimation@@QEAA_NXZ.c)
 *     ?IsCaptureBitsResponsePending@CLegacySurfaceManager@@QEBA_NXZ @ 0x180030FAC (-IsCaptureBitsResponsePending@CLegacySurfaceManager@@QEBA_NXZ.c)
 *     ?HasRetryDeviceBitmaps@CLegacySurfaceManager@@QEBA_NXZ @ 0x180030FC0 (-HasRetryDeviceBitmaps@CLegacySurfaceManager@@QEBA_NXZ.c)
 *     ?GetChannelNoRef@CAnimation@@UEAAPEAVCChannelContext@@XZ @ 0x180030FE0 (-GetChannelNoRef@CAnimation@@UEAAPEAVCChannelContext@@XZ.c)
 *     McGenEventWrite_EventWriteTransfer @ 0x1800B1240 (McGenEventWrite_EventWriteTransfer.c)
 *     McTemplateU0qqx_EventWriteTransfer @ 0x1801E411C (McTemplateU0qqx_EventWriteTransfer.c)
 *     ModuleFailFastForHRESULT @ 0x18024A244 (ModuleFailFastForHRESULT.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CComposition::CompositionPassNeeded(CComposition *this, unsigned __int8 a2)
{
  char v2; // bl
  DWORD v3; // r12d
  unsigned int i; // edi
  char v6; // bp
  unsigned int v7; // r15d
  char v8; // r13
  unsigned int j; // edi
  __int64 v10; // rsi
  __int64 v11; // rbx
  bool (__fastcall *v12)(CAnimation *); // rax
  CAnimation *v13; // rcx
  bool (__fastcall *v14)(CAnimation *__hidden); // rax
  char v15; // al
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 (*v18)(void); // rax
  char IsCaptureBitsResponsePending; // al
  __int64 v20; // rcx
  __int64 (*v21)(void); // rax
  char HasRetryDeviceBitmaps; // al
  __int64 v23; // rdx
  CGlobalComposition *v24; // r8
  __int64 v25; // rdi
  _QWORD *v26; // rax
  __int64 v27; // rcx
  CAnimation *v28; // rcx
  __int64 (*v29)(void); // rax
  struct CChannelContext *ChannelNoRef; // rax
  unsigned int v31; // ebx
  __int64 v32; // rax
  __int64 v33; // r8
  ULONG TolerableDelay; // edx
  signed int LastError; // eax
  __int64 v36; // rsi
  int v37; // ecx
  __m128i v38; // xmm1
  int v39; // ecx
  int v40; // eax
  unsigned __int32 v41; // xmm0_4
  LARGE_INTEGER DueTime[2]; // [rsp+40h] [rbp-78h] BYREF
  __m128i v43; // [rsp+50h] [rbp-68h]
  _QWORD v44[4]; // [rsp+60h] [rbp-58h] BYREF
  void *retaddr; // [rsp+B8h] [rbp+0h]

  v2 = 0;
  v3 = 4 * (a2 ^ 1);
  for ( i = 0; i < *((_DWORD *)this + 248); ++i )
  {
    v36 = *((_QWORD *)this + 121) + 16LL * i;
    v37 = *(_DWORD *)(v36 + 4);
    if ( v37 )
    {
      v39 = v37 - 1;
      if ( v39 )
      {
        if ( v39 == 1 && *((_QWORD *)this + 111) >= *(_QWORD *)(v36 + 8) )
        {
          LODWORD(v44[0]) = 8;
          v40 = *(_DWORD *)v36;
          memset((char *)v44 + 4, 0, 24);
          LODWORD(v44[1]) = v40;
          CComposition::NotifyHelper(this, (struct MIL_MESSAGE *)v44);
          *(_DWORD *)(v36 + 4) = 0;
          *(_QWORD *)(v36 + 8) = 0LL;
          *(_OWORD *)&DueTime[0].LowPart = *(_OWORD *)v36;
          v43 = *(__m128i *)&DueTime[0].LowPart;
          DynArray<CComposition::RoudTripRequestTracker,0>::RemoveAt((__int64 *)this + 121, i);
          v38 = *(__m128i *)&DueTime[0].LowPart;
          if ( i )
            --i;
        }
        else
        {
          v38 = *(__m128i *)v36;
          v43 = *(__m128i *)v36;
        }
        goto LABEL_66;
      }
      *(_DWORD *)(v36 + 4) = 2;
      *(_QWORD *)(v36 + 8) = *((_QWORD *)this + 111) + 1LL;
    }
    *(_OWORD *)&DueTime[0].LowPart = *(_OWORD *)v36;
    v38 = *(__m128i *)&DueTime[0].LowPart;
    v43 = *(__m128i *)&DueTime[0].LowPart;
LABEL_66:
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    {
      v41 = _mm_srli_si128(v38, 8).m128i_u32[0];
      McTemplateU0qqx_EventWriteTransfer(v41, a2, v38.m128i_i32[1], v38.m128i_i32[0], v41);
    }
    v2 |= *(_DWORD *)(v36 + 4) == 2;
  }
  if ( v2 )
    v3 |= 0x100u;
  v6 = 0;
  v7 = *((_DWORD *)this + 1476);
  v8 = BYTE2(Microsoft_Windows_Dwm_CoreEnableBits) & 1;
  for ( j = 0; ; ++j )
  {
    if ( v6 && !v8 )
      goto LABEL_19;
    if ( j >= v7 )
      break;
    v10 = 8LL * j;
    v11 = *(_QWORD *)(v10 + *((_QWORD *)this + 735));
    v12 = *(bool (__fastcall **)(CAnimation *))(*(_QWORD *)v11 + 8LL);
    if ( v12 != CAnimation::IsAnimate )
    {
      v15 = ((__int64 (__fastcall *)(_QWORD, bool (__fastcall *)(CAnimation *__hidden)))v12)(
              *(_QWORD *)(v10 + *((_QWORD *)this + 735)),
              CAnimation::HasEnded);
      goto LABEL_16;
    }
    v13 = (CAnimation *)(v11 - 72);
    v14 = *(bool (__fastcall **)(CAnimation *__hidden))(*(_QWORD *)(v11 - 72) + 192LL);
    if ( v14 == CAnimation::HasEnded )
    {
      if ( *((_BYTE *)v13 + 293) || !CAnimation::HasPrimitives(v13) )
      {
LABEL_41:
        v15 = 0;
        goto LABEL_16;
      }
    }
    else if ( ((unsigned __int8 (__fastcall *)(CAnimation *, bool (__fastcall *)(CAnimation *__hidden)))v14)(
                v13,
                CAnimation::HasEnded) )
    {
      goto LABEL_41;
    }
    if ( !*(_DWORD *)(v11 + 32) || *(_BYTE *)(v11 + 222) || *(_BYTE *)(v11 + 224) && *(_BYTE *)(v11 + 220) )
      goto LABEL_41;
    v15 = 1;
LABEL_16:
    if ( v15 )
    {
      v6 = 1;
      if ( v8 )
      {
        v28 = *(CAnimation **)(v10 + *((_QWORD *)this + 735));
        v29 = *(__int64 (**)(void))(*(_QWORD *)v28 + 16LL);
        if ( (char *)v29 == (char *)CAnimation::GetChannelNoRef )
          ChannelNoRef = CAnimation::GetChannelNoRef(v28);
        else
          ChannelNoRef = (struct CChannelContext *)v29();
        if ( ChannelNoRef )
        {
          ++*((_DWORD *)ChannelNoRef + 31);
          *((_BYTE *)this + 6489) = 1;
        }
      }
    }
  }
  if ( v6 )
LABEL_19:
    v3 |= 0x10u;
  v16 = *((_QWORD *)this + 103);
  if ( *(_DWORD *)(v16 + 248) || (*(_BYTE *)(v16 + 440) & 2) != 0 || *(_DWORD *)(v16 + 152) )
    v3 |= 0x20u;
  v17 = *((_QWORD *)this + 78);
  v18 = *(__int64 (**)(void))(*(_QWORD *)v17 + 56LL);
  if ( (char *)v18 == (char *)CGlobalSurfaceManager::IsCaptureBitsResponsePending )
    IsCaptureBitsResponsePending = CLegacySurfaceManager::IsCaptureBitsResponsePending((CLegacySurfaceManager *)(v17 + 152));
  else
    IsCaptureBitsResponsePending = v18();
  if ( IsCaptureBitsResponsePending )
    v3 |= 0x40u;
  v20 = *((_QWORD *)this + 78);
  v21 = *(__int64 (**)(void))(*(_QWORD *)v20 + 64LL);
  if ( (char *)v21 == (char *)CGlobalSurfaceManager::HasRetryDeviceBitmaps )
    HasRetryDeviceBitmaps = CLegacySurfaceManager::HasRetryDeviceBitmaps((CLegacySurfaceManager *)(v20 + 152));
  else
    HasRetryDeviceBitmaps = v21();
  if ( HasRetryDeviceBitmaps )
    v3 |= 0x800u;
  EnterCriticalSection((LPCRITICAL_SECTION)this + 143);
  v25 = *((_QWORD *)this + 721);
  if ( this != (CComposition *)-5720LL )
    LeaveCriticalSection((LPCRITICAL_SECTION)this + 143);
  if ( v25 )
    v3 |= 0x200u;
  v26 = (_QWORD *)*((_QWORD *)this + 82);
  if ( *v26 )
  {
LABEL_57:
    v3 |= 0x400000u;
  }
  else
  {
    v27 = v26[4];
    v23 = v26[5];
    v24 = g_pComposition;
    while ( v27 != v23 )
    {
      if ( *((_QWORD *)g_pComposition + 111) - *(_QWORD *)(v27 + 88) < 0xAuLL )
        goto LABEL_57;
      v27 += 104LL;
    }
  }
  if ( v3 )
  {
    v31 = 2000;
    if ( v3 != 4 )
      v31 = 0;
    v32 = (*(__int64 (__fastcall **)(_QWORD, __int64, CGlobalComposition *))(**((_QWORD **)this + 39) + 24LL))(
            *((_QWORD *)this + 39),
            v23,
            v24);
    TolerableDelay = 0;
    if ( v31 > (unsigned int)((unsigned __int64)(1000LL * *(_QWORD *)(v32 + 8)) / g_qpcFrequency.QuadPart) )
      TolerableDelay = v31;
    if ( TolerableDelay < *((_DWORD *)this + 62) )
    {
      *((_DWORD *)this + 62) = TolerableDelay;
      DueTime[0].QuadPart = -10000LL * TolerableDelay;
      if ( !SetWaitableTimerEx(*((HANDLE *)this + 30), DueTime, 0, 0LL, 0LL, 0LL, TolerableDelay) )
      {
        LastError = GetLastError();
        if ( LastError > 0 )
          LastError = (unsigned __int16)LastError | 0x80070000;
        if ( LastError >= 0 )
          LastError = -2003304445;
        ModuleFailFastForHRESULT(LastError, retaddr);
      }
    }
    _m_prefetchw((char *)this + 252);
    if ( (~_InterlockedOr((volatile signed __int32 *)this + 63, v3) & v3) != 0
      && (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    {
      DueTime[0].LowPart = v3;
      v44[2] = DueTime;
      v44[3] = 4LL;
      McGenEventWrite_EventWriteTransfer(
        &Microsoft_Windows_Dwm_Core_Provider_Context,
        &EVTDESC_SCHEDULED_COMPOSITION_REASON,
        v33,
        2LL,
        v44);
    }
  }
}
