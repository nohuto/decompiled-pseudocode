/*
 * XREFs of ?SetOffset@CVisual@@QEAAXMMM@Z @ 0x1801D983C
 * Callers:
 *     ?SetProperty@CVisual@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x18000D0B0 (-SetProperty@CVisual@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
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

// local variable allocation has failed, the output may be wrong!
void __fastcall CVisual::SetOffset(CVisual *this, double a2, double a3, float a4)
{
  float v4; // xmm0_4
  CVisual *v5; // rbx
  _QWORD *v6; // rsi
  __int64 v7; // rax
  unsigned int v8; // edi
  __int64 (__fastcall *v9)(__int64, unsigned int, __int64); // r8
  __int64 (__fastcall *v10)(__int64, unsigned int, __int64); // rdx
  struct CProcessAttribution *(__fastcall *v11)(CResource *); // rax
  struct CProcessAttribution *ProcessAttributionNoRef; // rax
  struct CProcessAttribution *v13; // r14
  _QWORD *v14; // rsi
  __int64 v15; // rax
  struct CProcessAttribution *(__fastcall *v16)(CResource *); // rax
  struct CProcessAttribution *v17; // rax
  _QWORD *v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rsi
  struct _RTL_GENERIC_TABLE *v22; // rcx
  __int64 v23; // r14
  unsigned __int64 v24; // rcx
  __int64 v25; // r14
  unsigned __int64 v26; // r12
  __int64 v27; // r13
  __int64 v28; // r15
  __int64 v29; // rcx
  unsigned __int64 v30; // rdx
  _DWORD *v31; // rcx
  void (__fastcall *v32)(_QWORD, _QWORD, _QWORD); // rax
  __int64 v33; // rdx
  unsigned __int64 v34; // r15
  __int64 v35; // r12
  __int64 v36; // r14
  unsigned __int64 Count; // rax
  _DWORD *v38; // rcx
  __int64 v39; // rax
  __int64 v40; // rcx
  unsigned int v41; // edx
  int v42; // eax
  int v43; // r9d
  __int64 (__fastcall *v44)(__int64, unsigned int, __int64); // rax
  __int64 v45; // rax
  struct CProcessAttribution *v46; // [rsp+48h] [rbp-59h]
  CVisual *v47; // [rsp+58h] [rbp-49h] BYREF
  float v48; // [rsp+60h] [rbp-41h]
  _QWORD v49[2]; // [rsp+68h] [rbp-39h] BYREF
  int Buffer; // [rsp+78h] [rbp-29h] BYREF
  __int128 v51; // [rsp+80h] [rbp-21h] BYREF
  __int64 v52; // [rsp+90h] [rbp-11h]
  int v53; // [rsp+98h] [rbp-9h]

  v4 = *((float *)this + 29);
  v5 = this;
  v47 = this;
  if ( v4 != *(float *)&a2 || *((float *)this + 30) != *(float *)&a3 || *((float *)this + 31) != a4 )
  {
    v6 = (_QWORD *)((char *)this + 32);
    *((_DWORD *)this + 29) = LODWORD(a2);
    *((_DWORD *)this + 30) = LODWORD(a3);
    *((float *)this + 31) = a4;
    v7 = *((_QWORD *)this + 4);
    if ( (v7 & 2) != 0 )
      v7 = *(_QWORD *)(v7 & 0xFFFFFFFFFFFFFFFCuLL);
    else
      LODWORD(v7) = v7 & 1;
    v8 = 0;
    v9 = (__int64 (__fastcall *)(__int64, unsigned int, __int64))CCachedVisualImage::NotifyOnChanged;
    v10 = CVisualSurface::NotifyOnChanged;
    if ( (_DWORD)v7 )
    {
      v34 = 0LL;
      v35 = (unsigned int)v7;
      v36 = 16LL;
      do
      {
        Count = CPtrArray<CVisual>::GetCount(v6);
        if ( v34 >= Count )
        {
          v38 = 0LL;
        }
        else if ( Count == 1 )
        {
          v38 = (_DWORD *)(*v6 & 0xFFFFFFFFFFFFFFFCuLL);
        }
        else
        {
          _mm_lfence();
          v38 = *(_DWORD **)((*v6 & 0xFFFFFFFFFFFFFFFCuLL) + v36);
        }
        if ( v38 != *((_DWORD **)v5 + 11) )
        {
          v44 = *(__int64 (__fastcall **)(__int64, unsigned int, __int64))(*(_QWORD *)v38 + 80LL);
          if ( v44 == v9 )
          {
            CCachedVisualImage::NotifyOnChanged(v38, 0, (__int64)v5);
          }
          else if ( v44 == v10 )
          {
            CVisualSurface::NotifyOnChanged((__int64)v38, 0, (__int64)v5);
          }
          else
          {
            v44((__int64)v38, 0, (__int64)v5);
          }
          v10 = CVisualSurface::NotifyOnChanged;
          v9 = (__int64 (__fastcall *)(__int64, unsigned int, __int64))CCachedVisualImage::NotifyOnChanged;
        }
        ++v34;
        v36 += 8LL;
        --v35;
      }
      while ( v35 );
    }
    v11 = *(struct CProcessAttribution *(__fastcall **)(CResource *))(*(_QWORD *)v5 + 160LL);
    if ( v11 == CResource::GetProcessAttributionNoRef )
      ProcessAttributionNoRef = CResource::GetProcessAttributionNoRef(v5);
    else
      ProcessAttributionNoRef = (struct CProcessAttribution *)((__int64 (__fastcall *)(CVisual *, _QWORD, _QWORD))v11)(
                                                                v5,
                                                                v10,
                                                                v9);
    *((_BYTE *)v5 + 96) |= 0x15u;
    v13 = ProcessAttributionNoRef;
    v46 = ProcessAttributionNoRef;
    if ( ProcessAttributionNoRef )
      ++*((_DWORD *)ProcessAttributionNoRef + 7);
    v14 = (_QWORD *)*((_QWORD *)v5 + 11);
    if ( (*((_BYTE *)v5 + 106) & 0x40) != 0 )
    {
      do
      {
        if ( !v14 || (v14[12] & 0x91) == 0x91 )
          break;
        *((_BYTE *)v14 + 96) |= 0x91u;
        v15 = v14[4];
        if ( (v15 & 2) != 0 )
          v15 = *(_QWORD *)(v15 & 0xFFFFFFFFFFFFFFFCuLL);
        else
          LODWORD(v15) = v15 & 1;
        if ( (_DWORD)v15 )
        {
          v26 = 0LL;
          v27 = (unsigned int)v15;
          v28 = 16LL;
          do
          {
            v29 = v14[4];
            if ( (v29 & 2) != 0 )
              v30 = *(_QWORD *)(v29 & 0xFFFFFFFFFFFFFFFCuLL);
            else
              v30 = v14[4] & 1LL;
            if ( v26 >= v30 )
            {
              v31 = 0LL;
            }
            else if ( v30 == 1 )
            {
              v31 = (_DWORD *)(v29 & 0xFFFFFFFFFFFFFFFCuLL);
            }
            else
            {
              _mm_lfence();
              v31 = *(_DWORD **)((v14[4] & 0xFFFFFFFFFFFFFFFCuLL) + v28);
            }
            if ( v31 != (_DWORD *)v14[11] )
            {
              v32 = *(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)v31 + 80LL);
              if ( (char *)v32 == (char *)CCachedVisualImage::NotifyOnChanged )
              {
                CCachedVisualImage::NotifyOnChanged(v31, 0, (__int64)v14);
              }
              else if ( (char *)v32 == (char *)CVisualSurface::NotifyOnChanged )
              {
                CVisualSurface::NotifyOnChanged((__int64)v31, 0, (__int64)v14);
              }
              else
              {
                v32(v31, 0LL, v14);
              }
            }
            ++v26;
            v28 += 8LL;
            --v27;
          }
          while ( v27 );
          v13 = v46;
        }
        v16 = *(struct CProcessAttribution *(__fastcall **)(CResource *))(*v14 + 160LL);
        if ( v16 == CResource::GetProcessAttributionNoRef )
        {
          v17 = CResource::GetProcessAttributionNoRef((CResource *)v14);
        }
        else if ( v16 == CWindowNode::GetProcessAttributionNoRef )
        {
          v17 = CWindowNode::GetProcessAttributionNoRef((CWindowNode *)v14);
        }
        else
        {
          v17 = v16((CResource *)v14);
        }
        if ( v17 && v13 != v17 )
        {
          ++*((_DWORD *)v17 + 6);
          v13 = v17;
          v46 = v17;
        }
        v18 = v14;
        v14 = (_QWORD *)v14[11];
      }
      while ( (*((_BYTE *)v18 + 106) & 0x40) != 0 );
      v5 = v47;
    }
    CVisual::OnOuterTransformChanged(v5);
    v19 = *((_QWORD *)v5 + 7);
    if ( v19 )
    {
      if ( *(_DWORD *)(v19 + 108) )
      {
        if ( *((_DWORD *)v5 + 18) )
        {
          if ( (*((_DWORD *)v5 + 19) & 0x10000000) != 0 )
          {
            v39 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(*((_QWORD *)v5 + 3) + 6416LL) + 72LL))(
                    *(_QWORD *)(*((_QWORD *)v5 + 3) + 6416LL),
                    11LL);
            if ( v39 )
            {
              v40 = *((_QWORD *)v5 + 7);
              if ( v40 )
                v41 = *(_DWORD *)(v40 + 108);
              else
                v41 = 0;
              v49[0] = v41;
              v49[1] = *((unsigned int *)v5 + 18);
              v48 = a4;
              v47 = (CVisual *)_mm_unpacklo_ps(*(__m128 *)&a2, *(__m128 *)&a3).m128_u64[0];
              v42 = CoreUICallSend(v39, v49, 2LL, 11LL, 3, &unk_180336EB8, 28, &v47, (_DWORD)v46);
              v43 = 0;
              if ( v42 != -2018375675 )
                v43 = v42;
              if ( v43 < 0 )
                MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v43, 0x155u, 0LL);
            }
          }
        }
      }
    }
    v20 = *((_QWORD *)v5 + 3);
    v21 = *(_QWORD *)(v20 + 888);
    if ( v21 == *(_QWORD *)(v20 + 896) )
    {
      v45 = v21 + 1;
      v21 = 1LL;
      if ( v45 )
        v21 = v45;
    }
    v22 = (struct _RTL_GENERIC_TABLE *)*((_QWORD *)v5 + 6);
    v23 = 0LL;
    if ( v22 )
    {
      v52 = 0LL;
      v53 = 0;
      v51 = 0LL;
      Buffer = 28;
      v23 = (__int64)RtlLookupElementGenericTable(v22, &Buffer);
      DynArrayImpl<0>::~DynArrayImpl<0>((__int64)&v51);
    }
    v24 = v23 + 8;
    v25 = -v23;
    if ( (v24 & -(__int64)(v25 != 0)) != 0 )
    {
      if ( *(_DWORD *)((v24 & -(__int64)(v25 != 0)) + 0x18) )
      {
        do
        {
          v33 = v8++;
          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v24 & -(__int64)(v25 != 0)) + 8 * v33) + 232LL) = v21;
        }
        while ( v8 < *(_DWORD *)((v24 & -(__int64)(v25 != 0)) + 0x18) );
      }
      *(_BYTE *)(*(_QWORD *)(*((_QWORD *)v5 + 3) + 824LL) + 440LL) |= 2u;
      CComposition::ScheduleCompositionPass(*((_QWORD *)v5 + 3), 0, 8u);
    }
  }
}
