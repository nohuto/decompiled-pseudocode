/*
 * XREFs of ?ProcessSetOffset@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETOFFSET@@@Z @ 0x1800E4780
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18014D130 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?GetProcessAttributionNoRef@CResource@@UEBAPEAVCProcessAttribution@@XZ @ 0x1800E4CA0 (-GetProcessAttributionNoRef@CResource@@UEBAPEAVCProcessAttribution@@XZ.c)
 *     ?OnOuterTransformChanged@CVisual@@AEAAXXZ @ 0x1800E53C4 (-OnOuterTransformChanged@CVisual@@AEAAXXZ.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x1800E54D0 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?NotifyOnChanged@CCachedVisualImage@@MEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800E5530 (-NotifyOnChanged@CCachedVisualImage@@MEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?NotifyOnChanged@CVisualSurface@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800E5550 (-NotifyOnChanged@CVisualSurface@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?GetProcessAttributionNoRef@CWindowNode@@UEBAPEAVCProcessAttribution@@XZ @ 0x1800E5570 (-GetProcessAttributionNoRef@CWindowNode@@UEBAPEAVCProcessAttribution@@XZ.c)
 *     ?ScheduleCompositionPass@CComposition@@QEAAXKW4CompositionReason@@@Z @ 0x1800E5580 (-ScheduleCompositionPass@CComposition@@QEAAXKW4CompositionReason@@@Z.c)
 *     ?GetCount@?$CPtrArray@VCVisual@@@@QEBA_KXZ @ 0x1800E56E0 (-GetCount@-$CPtrArray@VCVisual@@@@QEBA_KXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CVisual::ProcessSetOffset(
        CVisual *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_VISUAL_SETOFFSET *a3)
{
  float v3; // xmm0_4
  CVisual *v4; // rbx
  __m128 v5; // xmm6
  float v6; // xmm7_4
  __m128 v7; // xmm8
  _QWORD *v8; // rsi
  __int64 v9; // rax
  unsigned int v10; // edi
  void (__fastcall *v11)(unsigned __int64, _QWORD, CVisual *); // r8
  void (__fastcall *v12)(unsigned __int64, _QWORD, CVisual *); // rdx
  struct CProcessAttribution *(__fastcall *v13)(CResource *__hidden); // rax
  struct CProcessAttribution *ProcessAttributionNoRef; // rax
  struct CProcessAttribution *v15; // r14
  _QWORD *v16; // rsi
  __int64 v17; // rax
  struct CProcessAttribution *(__fastcall *v18)(CResource *__hidden); // rax
  struct CProcessAttribution *v19; // rax
  _QWORD *v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rsi
  struct _RTL_GENERIC_TABLE *v24; // rcx
  __int64 v25; // r14
  unsigned __int64 v26; // rcx
  __int64 v27; // r14
  unsigned __int64 v29; // r12
  __int64 v30; // r13
  __int64 v31; // r15
  __int64 v32; // rcx
  unsigned __int64 v33; // rdx
  unsigned __int64 v34; // rcx
  void (__fastcall *v35)(unsigned __int64, _QWORD, _QWORD *); // rax
  __int64 v36; // rdx
  unsigned __int64 v37; // r15
  __int64 v38; // r12
  __int64 v39; // r14
  unsigned __int64 Count; // rax
  unsigned __int64 v41; // rcx
  __int64 v42; // rax
  __int64 v43; // rcx
  unsigned int v44; // edx
  int v45; // eax
  int v46; // r9d
  void (__fastcall *v47)(unsigned __int64, _QWORD, CVisual *); // rax
  __int64 v48; // rax
  struct CProcessAttribution *v49; // [rsp+48h] [rbp-59h]
  CVisual *v50; // [rsp+58h] [rbp-49h] BYREF
  float v51; // [rsp+60h] [rbp-41h]
  _QWORD v52[2]; // [rsp+68h] [rbp-39h] BYREF
  int Buffer; // [rsp+78h] [rbp-29h] BYREF
  __int128 v54; // [rsp+80h] [rbp-21h] BYREF
  __int64 v55; // [rsp+90h] [rbp-11h]
  int v56; // [rsp+98h] [rbp-9h]

  v3 = *((float *)this + 29);
  v4 = this;
  v5 = (__m128)*((unsigned int *)a3 + 3);
  v6 = *((float *)a3 + 4);
  v7 = (__m128)*((unsigned int *)a3 + 2);
  v50 = this;
  if ( v3 != v7.m128_f32[0] || *((float *)this + 30) != v5.m128_f32[0] || *((float *)this + 31) != v6 )
  {
    v8 = (_QWORD *)((char *)this + 32);
    *((_DWORD *)this + 29) = v7.m128_i32[0];
    *((_DWORD *)this + 30) = v5.m128_i32[0];
    *((float *)this + 31) = v6;
    v9 = *((_QWORD *)this + 4);
    if ( (v9 & 2) != 0 )
      v9 = *(_QWORD *)(v9 & 0xFFFFFFFFFFFFFFFCuLL);
    else
      LODWORD(v9) = v9 & 1;
    v10 = 0;
    v11 = (void (__fastcall *)(unsigned __int64, _QWORD, CVisual *))CCachedVisualImage::NotifyOnChanged;
    v12 = (void (__fastcall *)(unsigned __int64, _QWORD, CVisual *))CVisualSurface::NotifyOnChanged;
    if ( (_DWORD)v9 )
    {
      v37 = 0LL;
      v38 = (unsigned int)v9;
      v39 = 16LL;
      do
      {
        Count = CPtrArray<CVisual>::GetCount(v8);
        if ( v37 >= Count )
        {
          v41 = 0LL;
        }
        else if ( Count == 1 )
        {
          v41 = *v8 & 0xFFFFFFFFFFFFFFFCuLL;
        }
        else
        {
          _mm_lfence();
          v41 = *(_QWORD *)((*v8 & 0xFFFFFFFFFFFFFFFCuLL) + v39);
        }
        if ( v41 != *((_QWORD *)v4 + 11) )
        {
          v47 = *(void (__fastcall **)(unsigned __int64, _QWORD, CVisual *))(*(_QWORD *)v41 + 80LL);
          if ( v47 == v11 )
          {
            CCachedVisualImage::NotifyOnChanged(v41, 0LL, v4);
          }
          else if ( v47 == v12 )
          {
            CVisualSurface::NotifyOnChanged(v41, 0LL, v4);
          }
          else
          {
            v47(v41, 0LL, v4);
          }
          v12 = (void (__fastcall *)(unsigned __int64, _QWORD, CVisual *))CVisualSurface::NotifyOnChanged;
          v11 = (void (__fastcall *)(unsigned __int64, _QWORD, CVisual *))CCachedVisualImage::NotifyOnChanged;
        }
        ++v37;
        v39 += 8LL;
        --v38;
      }
      while ( v38 );
    }
    v13 = *(struct CProcessAttribution *(__fastcall **)(CResource *__hidden))(*(_QWORD *)v4 + 160LL);
    if ( v13 == CResource::GetProcessAttributionNoRef )
      ProcessAttributionNoRef = CResource::GetProcessAttributionNoRef(v4);
    else
      ProcessAttributionNoRef = (struct CProcessAttribution *)((__int64 (__fastcall *)(CVisual *, _QWORD, _QWORD))v13)(
                                                                v4,
                                                                v12,
                                                                v11);
    *((_BYTE *)v4 + 96) |= 0x15u;
    v15 = ProcessAttributionNoRef;
    v49 = ProcessAttributionNoRef;
    if ( ProcessAttributionNoRef )
      ++*((_DWORD *)ProcessAttributionNoRef + 7);
    v16 = (_QWORD *)*((_QWORD *)v4 + 11);
    if ( (*((_BYTE *)v4 + 106) & 0x40) != 0 )
    {
      do
      {
        if ( !v16 || (v16[12] & 0x91) == 0x91 )
          break;
        *((_BYTE *)v16 + 96) |= 0x91u;
        v17 = v16[4];
        if ( (v17 & 2) != 0 )
          v17 = *(_QWORD *)(v17 & 0xFFFFFFFFFFFFFFFCuLL);
        else
          LODWORD(v17) = v17 & 1;
        if ( (_DWORD)v17 )
        {
          v29 = 0LL;
          v30 = (unsigned int)v17;
          v31 = 16LL;
          do
          {
            v32 = v16[4];
            if ( (v32 & 2) != 0 )
              v33 = *(_QWORD *)(v32 & 0xFFFFFFFFFFFFFFFCuLL);
            else
              v33 = v16[4] & 1LL;
            if ( v29 >= v33 )
            {
              v34 = 0LL;
            }
            else if ( v33 == 1 )
            {
              v34 = v32 & 0xFFFFFFFFFFFFFFFCuLL;
            }
            else
            {
              _mm_lfence();
              v34 = *(_QWORD *)((v16[4] & 0xFFFFFFFFFFFFFFFCuLL) + v31);
            }
            if ( v34 != v16[11] )
            {
              v35 = *(void (__fastcall **)(unsigned __int64, _QWORD, _QWORD *))(*(_QWORD *)v34 + 80LL);
              if ( (char *)v35 == (char *)CCachedVisualImage::NotifyOnChanged )
              {
                CCachedVisualImage::NotifyOnChanged(v34, 0LL, v16);
              }
              else if ( (char *)v35 == (char *)CVisualSurface::NotifyOnChanged )
              {
                CVisualSurface::NotifyOnChanged(v34, 0LL, v16);
              }
              else
              {
                v35(v34, 0LL, v16);
              }
            }
            ++v29;
            v31 += 8LL;
            --v30;
          }
          while ( v30 );
          v15 = v49;
        }
        v18 = *(struct CProcessAttribution *(__fastcall **)(CResource *__hidden))(*v16 + 160LL);
        if ( v18 == CResource::GetProcessAttributionNoRef )
        {
          v19 = CResource::GetProcessAttributionNoRef((CResource *)v16);
        }
        else if ( v18 == CWindowNode::GetProcessAttributionNoRef )
        {
          v19 = CWindowNode::GetProcessAttributionNoRef((CWindowNode *)v16);
        }
        else
        {
          v19 = v18((CResource *)v16);
        }
        if ( v19 && v15 != v19 )
        {
          ++*((_DWORD *)v19 + 6);
          v15 = v19;
          v49 = v19;
        }
        v20 = v16;
        v16 = (_QWORD *)v16[11];
      }
      while ( (*((_BYTE *)v20 + 106) & 0x40) != 0 );
      v4 = v50;
    }
    CVisual::OnOuterTransformChanged(v4);
    v21 = *((_QWORD *)v4 + 7);
    if ( v21 )
    {
      if ( *(_DWORD *)(v21 + 108) )
      {
        if ( *((_DWORD *)v4 + 18) )
        {
          if ( (*((_DWORD *)v4 + 19) & 0x10000000) != 0 )
          {
            v42 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(*((_QWORD *)v4 + 3) + 6416LL) + 72LL))(
                    *(_QWORD *)(*((_QWORD *)v4 + 3) + 6416LL),
                    11LL);
            if ( v42 )
            {
              v43 = *((_QWORD *)v4 + 7);
              if ( v43 )
                v44 = *(_DWORD *)(v43 + 108);
              else
                v44 = 0;
              v52[0] = v44;
              v52[1] = *((unsigned int *)v4 + 18);
              v51 = v6;
              v50 = (CVisual *)_mm_unpacklo_ps(v7, v5).m128_u64[0];
              v45 = CoreUICallSend(v42, v52, 2LL, 11LL, 3, &unk_180336EB8, 28, &v50, (_DWORD)v49);
              v46 = 0;
              if ( v45 != -2018375675 )
                v46 = v45;
              if ( v46 < 0 )
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v46, 0x155u, 0LL);
            }
          }
        }
      }
    }
    v22 = *((_QWORD *)v4 + 3);
    v23 = *(_QWORD *)(v22 + 888);
    if ( v23 == *(_QWORD *)(v22 + 896) )
    {
      v48 = v23 + 1;
      v23 = 1LL;
      if ( v48 )
        v23 = v48;
    }
    v24 = (struct _RTL_GENERIC_TABLE *)*((_QWORD *)v4 + 6);
    v25 = 0LL;
    if ( v24 )
    {
      v55 = 0LL;
      v56 = 0;
      v54 = 0LL;
      Buffer = 28;
      v25 = (__int64)RtlLookupElementGenericTable(v24, &Buffer);
      DynArrayImpl<0>::~DynArrayImpl<0>(&v54);
    }
    v26 = v25 + 8;
    v27 = -v25;
    if ( (v26 & -(__int64)(v27 != 0)) != 0 )
    {
      if ( *(_DWORD *)((v26 & -(__int64)(v27 != 0)) + 0x18) )
      {
        do
        {
          v36 = v10++;
          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v26 & -(__int64)(v27 != 0)) + 8 * v36) + 232LL) = v23;
        }
        while ( v10 < *(_DWORD *)((v26 & -(__int64)(v27 != 0)) + 0x18) );
      }
      *(_BYTE *)(*(_QWORD *)(*((_QWORD *)v4 + 3) + 824LL) + 440LL) |= 2u;
      CComposition::ScheduleCompositionPass(*((_QWORD *)v4 + 3), 0LL, 8LL);
    }
  }
  return 0LL;
}
