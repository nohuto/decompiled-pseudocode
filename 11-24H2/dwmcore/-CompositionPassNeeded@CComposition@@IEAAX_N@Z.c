/*
 * XREFs of ?CompositionPassNeeded@CComposition@@IEAAX_N@Z @ 0x1800F26C0
 * Callers:
 *     ?PostRender@CComposition@@IEAAJ_N@Z @ 0x1800F1F40 (-PostRender@CComposition@@IEAAJ_N@Z.c)
 * Callees:
 *     ?ScheduleCompositionPass@CComposition@@QEAAXKW4CompositionReason@@@Z @ 0x1800BF040 (-ScheduleCompositionPass@CComposition@@QEAAXKW4CompositionReason@@@Z.c)
 *     ?HasPrimitives@CAnimation@@QEAA_NXZ @ 0x1800F2B0C (-HasPrimitives@CAnimation@@QEAA_NXZ.c)
 *     ?IsCaptureBitsResponsePending@CLegacySurfaceManager@@QEBA_NXZ @ 0x1800F2B20 (-IsCaptureBitsResponsePending@CLegacySurfaceManager@@QEBA_NXZ.c)
 *     ?HasRetryDeviceBitmaps@CLegacySurfaceManager@@QEBA_NXZ @ 0x1800F2B34 (-HasRetryDeviceBitmaps@CLegacySurfaceManager@@QEBA_NXZ.c)
 *     ?GetChannelNoRef@CAnimation@@UEAAPEAVCChannelContext@@XZ @ 0x1800F2B50 (-GetChannelNoRef@CAnimation@@UEAAPEAVCChannelContext@@XZ.c)
 *     ?NotifyHelper@CComposition@@QEAAJPEAUMIL_MESSAGE@@@Z @ 0x1800F424C (-NotifyHelper@CComposition@@QEAAJPEAUMIL_MESSAGE@@@Z.c)
 *     ?RemoveAt@?$DynArray@URoudTripRequestTracker@CComposition@@$0A@@@QEAAJI@Z @ 0x1800F42EC (-RemoveAt@-$DynArray@URoudTripRequestTracker@CComposition@@$0A@@@QEAAJI@Z.c)
 *     McTemplateU0qqx_EventWriteTransfer @ 0x1801D815C (McTemplateU0qqx_EventWriteTransfer.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CComposition::CompositionPassNeeded(struct _RTL_CRITICAL_SECTION *this, unsigned __int8 a2)
{
  char v2; // bl
  unsigned int v3; // r12d
  unsigned int i; // edi
  char v6; // si
  unsigned int LockSemaphore; // ebp
  char v8; // r13
  unsigned int j; // edi
  __int64 v10; // r15
  __int64 v11; // rbx
  bool (__fastcall *v12)(CAnimation *); // rax
  CAnimation *v13; // rcx
  bool (__fastcall *v14)(CAnimation *__hidden); // rax
  char v15; // al
  _DWORD *v16; // rax
  char *v17; // rcx
  __int64 (*v18)(void); // rax
  char IsCaptureBitsResponsePending; // al
  char *v20; // rcx
  __int64 (*v21)(void); // rax
  char HasRetryDeviceBitmaps; // al
  __int64 v23; // rdi
  _QWORD *OwningThread; // rax
  __int64 k; // rcx
  CAnimation *v26; // rcx
  __int64 (*v27)(void); // rax
  struct CChannelContext *ChannelNoRef; // rax
  ULONG v29; // edx
  __int64 v30; // rsi
  int v31; // ecx
  __m128i v32; // xmm1
  int v33; // ecx
  int v34; // eax
  unsigned __int32 v35; // xmm0_4
  _BYTE v36[20]; // [rsp+30h] [rbp-48h] BYREF
  __int64 v37; // [rsp+44h] [rbp-34h]

  v2 = 0;
  v3 = 4 * (a2 ^ 1);
  for ( i = 0; i < LODWORD(this[24].SpinCount); ++i )
  {
    v30 = *(_QWORD *)&this[24].LockCount + 16LL * i;
    v31 = *(_DWORD *)(v30 + 4);
    if ( v31 )
    {
      v33 = v31 - 1;
      if ( v33 )
      {
        if ( v33 == 1 && *(_QWORD *)&this[22].LockCount >= *(_QWORD *)(v30 + 8) )
        {
          *(_DWORD *)v36 = 8;
          v37 = 0LL;
          v34 = *(_DWORD *)v30;
          *(_OWORD *)&v36[4] = 0LL;
          *(_DWORD *)&v36[8] = v34;
          CComposition::NotifyHelper((CComposition *)this, (struct MIL_MESSAGE *)v36);
          *(_DWORD *)(v30 + 4) = 0;
          *(_QWORD *)(v30 + 8) = 0LL;
          *(_OWORD *)v36 = *(_OWORD *)v30;
          DynArray<CComposition::RoudTripRequestTracker,0>::RemoveAt(&this[24].LockCount, i);
          v32 = *(__m128i *)v36;
          if ( i )
            --i;
        }
        else
        {
          v32 = *(__m128i *)v30;
        }
        goto LABEL_55;
      }
      *(_DWORD *)(v30 + 4) = 2;
      *(_QWORD *)(v30 + 8) = *(_QWORD *)&this[22].LockCount + 1LL;
    }
    *(_OWORD *)v36 = *(_OWORD *)v30;
    v32 = *(__m128i *)v36;
LABEL_55:
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    {
      v35 = _mm_srli_si128(v32, 8).m128i_u32[0];
      McTemplateU0qqx_EventWriteTransfer(v35, a2, v32.m128i_i32[1], v32.m128i_i32[0], v35);
    }
    v2 |= *(_DWORD *)(v30 + 4) == 2;
  }
  if ( v2 )
    v3 |= 0x100u;
  v6 = 0;
  LockSemaphore = (unsigned int)this[147].LockSemaphore;
  v8 = BYTE2(Microsoft_Windows_Dwm_CoreEnableBits) & 1;
  for ( j = 0; ; ++j )
  {
    if ( v6 && !v8 )
      goto LABEL_19;
    if ( j >= LockSemaphore )
      break;
    v10 = 8LL * j;
    v11 = *(_QWORD *)((char *)&this[147].DebugInfo->Type + v10);
    v12 = *(bool (__fastcall **)(CAnimation *))(*(_QWORD *)v11 + 8LL);
    if ( v12 != CAnimation::IsAnimate )
    {
      v15 = ((__int64 (__fastcall *)(_QWORD, bool (__fastcall *)(CAnimation *__hidden)))v12)(
              *(_QWORD *)((char *)&this[147].DebugInfo->Type + v10),
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
        v26 = *(CAnimation **)((char *)&this[147].DebugInfo->Type + v10);
        v27 = *(__int64 (**)(void))(*(_QWORD *)v26 + 16LL);
        if ( (char *)v27 == (char *)CAnimation::GetChannelNoRef )
          ChannelNoRef = CAnimation::GetChannelNoRef(v26);
        else
          ChannelNoRef = (struct CChannelContext *)v27();
        if ( ChannelNoRef )
        {
          ++*((_DWORD *)ChannelNoRef + 31);
          BYTE1(this[161].LockSemaphore) = 1;
        }
      }
    }
  }
  if ( v6 )
LABEL_19:
    v3 |= 0x10u;
  v16 = this[20].LockSemaphore;
  if ( v16[62] || (v16[110] & 2) != 0 || v16[38] )
    v3 |= 0x20u;
  v17 = (char *)this[15].LockSemaphore;
  v18 = *(__int64 (**)(void))(*(_QWORD *)v17 + 56LL);
  if ( (char *)v18 == (char *)CGlobalSurfaceManager::IsCaptureBitsResponsePending )
    IsCaptureBitsResponsePending = CLegacySurfaceManager::IsCaptureBitsResponsePending((CLegacySurfaceManager *)(v17 + 152));
  else
    IsCaptureBitsResponsePending = v18();
  if ( IsCaptureBitsResponsePending )
    v3 |= 0x40u;
  v20 = (char *)this[15].LockSemaphore;
  v21 = *(__int64 (**)(void))(*(_QWORD *)v20 + 64LL);
  if ( (char *)v21 == (char *)CGlobalSurfaceManager::HasRetryDeviceBitmaps )
    HasRetryDeviceBitmaps = CLegacySurfaceManager::HasRetryDeviceBitmaps((CLegacySurfaceManager *)(v20 + 152));
  else
    HasRetryDeviceBitmaps = v21();
  if ( HasRetryDeviceBitmaps )
    v3 |= 0x800u;
  EnterCriticalSection(this + 143);
  v23 = *(_QWORD *)&this[144].LockCount;
  if ( this != (struct _RTL_CRITICAL_SECTION *)-5720LL )
    LeaveCriticalSection(this + 143);
  if ( v23 )
    v3 |= 0x200u;
  OwningThread = this[16].OwningThread;
  if ( *OwningThread )
  {
LABEL_52:
    v3 |= 0x400000u;
  }
  else
  {
    for ( k = OwningThread[4]; k != OwningThread[5]; k += 104LL )
    {
      if ( *((_QWORD *)g_pComposition + 111) - *(_QWORD *)(k + 88) < 0xAuLL )
        goto LABEL_52;
    }
  }
  if ( v3 )
  {
    v29 = 2000;
    if ( v3 != 4 )
      v29 = 0;
    CComposition::ScheduleCompositionPass((__int64)this, v29, v3);
  }
}
