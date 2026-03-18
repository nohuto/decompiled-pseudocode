/*
 * XREFs of ?SetBufferProperty@CInteractionTrackerMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x140125FB0
 * Callers:
 *     <none>
 * Callees:
 *     ?Win32AllocPoolWithQuotaZInitImpl@@YAPEAX_K0K@Z @ 0x1400183CC (-Win32AllocPoolWithQuotaZInitImpl@@YAPEAX_K0K@Z.c)
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 *     ?IsDerivedResourceType@CResourceMarshaler@DirectComposition@@SA_NW4MIL_RESOURCE_TYPE@@0@Z @ 0x140072D60 (-IsDerivedResourceType@CResourceMarshaler@DirectComposition@@SA_NW4MIL_RESOURCE_TYPE@@0@Z.c)
 *     ?Grow@CDCompDynamicArrayBase@DirectComposition@@QEAAJ_KK@Z @ 0x140075FFC (-Grow@CDCompDynamicArrayBase@DirectComposition@@QEAAJ_KK@Z.c)
 *     ?LookupResourceMarshaler@CApplicationChannel@DirectComposition@@QEAAPEAVCResourceMarshaler@2@I@Z @ 0x14008039C (-LookupResourceMarshaler@CApplicationChannel@DirectComposition@@QEAAPEAVCResourceMarshaler@2@I@Z.c)
 *     ?AddRef@CResourceMarshaler@DirectComposition@@QEAA_KXZ @ 0x1400807E8 (-AddRef@CResourceMarshaler@DirectComposition@@QEAA_KXZ.c)
 *     ?Win32AllocPoolWithQuotaImpl@@YAPEAX_K0K@Z @ 0x140080F58 (-Win32AllocPoolWithQuotaImpl@@YAPEAX_K0K@Z.c)
 *     ?GetInertiaModifierMarshalerFlag@CInteractionTrackerMarshaler@DirectComposition@@AEAA?AW4InteractionTrackerMarshalerFlag@12@W4InertiaModifierAxis@@@Z @ 0x140102F84 (-GetInertiaModifierMarshalerFlag@CInteractionTrackerMarshaler@DirectComposition@@AEAA-AW4Interac.c)
 *     ?ReleaseManipulationReferences@CInteractionTrackerMarshaler@DirectComposition@@AEAAXPEAVCApplicationChannel@2@@Z @ 0x1401263B4 (-ReleaseManipulationReferences@CInteractionTrackerMarshaler@DirectComposition@@AEAAXPEAVCApplica.c)
 *     memmove @ 0x14023FA40 (memmove.c)
 */

__int64 __fastcall DirectComposition::CInteractionTrackerMarshaler::SetBufferProperty(
        DirectComposition::CInteractionTrackerMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        _DWORD *a4,
        size_t Size,
        bool *a6)
{
  int v6; // ebx
  struct DirectComposition::CApplicationChannel *v8; // rax
  int v10; // r8d
  __int64 v11; // rcx
  unsigned __int64 v12; // rsi
  __int64 v13; // rax
  int v14; // r8d
  int v15; // r8d
  int v16; // r8d
  int v17; // r8d
  int v18; // r8d
  struct DirectComposition::CResourceMarshaler *v19; // rax
  __int64 v20; // r8
  int v22; // edx
  struct DirectComposition::CResourceMarshaler *v23; // rax
  __int64 v24; // r8
  __int64 i; // rbp
  _QWORD *v26; // rsi
  unsigned int v27; // ebp
  int v28; // eax
  unsigned __int64 v29; // rsi
  unsigned int v30; // ebp
  char *v31; // rcx
  void *v32; // rax
  __int64 v33; // rcx
  __int64 Src; // [rsp+20h] [rbp-38h] BYREF
  int v35; // [rsp+28h] [rbp-30h]

  v6 = 0;
  v8 = a2;
  *a6 = 0;
  v10 = a3 - 21;
  if ( !v10 )
  {
    if ( !a4 && *((_DWORD *)this + 90) )
    {
      DirectComposition::CInteractionTrackerMarshaler::ReleaseManipulationReferences(this, a2);
      goto LABEL_23;
    }
    if ( Size <= 0x1000 && (Size & 7) == 0 )
    {
      DirectComposition::CInteractionTrackerMarshaler::ReleaseManipulationReferences(this, a2);
      v12 = Size >> 3;
      if ( !(unsigned int)(Size >> 3) )
      {
LABEL_23:
        *a6 = 1;
        *((_DWORD *)this + 4) &= ~0x800u;
        return (unsigned int)v6;
      }
      v13 = Win32AllocPoolWithQuotaImpl(v11, 16LL * (unsigned int)v12, 0x72694344u);
      *((_QWORD *)this + 44) = v13;
      if ( v13 )
      {
        for ( i = 0LL; (unsigned int)i < (unsigned int)v12; i = (unsigned int)(i + 1) )
        {
          v19 = DirectComposition::CApplicationChannel::LookupResourceMarshaler(a2, a4[2 * i]);
          if ( !v19 || !DirectComposition::CResourceMarshaler::IsDerivedResourceType(*((_DWORD *)v19 + 9), 105) )
          {
            v6 = -1073741811;
            goto LABEL_8;
          }
          *(_QWORD *)(*((_QWORD *)this + 44) + 16LL * (unsigned int)i) = v20;
          DirectComposition::CResourceMarshaler::AddRef(*(DirectComposition::CResourceMarshaler **)(*((_QWORD *)this + 44)
                                                                                                  + 16LL * (unsigned int)i));
          ++*((_DWORD *)this + 90);
          v22 = a4[2 * i + 1];
          if ( v22 )
          {
            v23 = DirectComposition::CApplicationChannel::LookupResourceMarshaler(a2, v22);
            if ( !v23 || !DirectComposition::CResourceMarshaler::IsDerivedResourceType(*((_DWORD *)v23 + 9), 89) )
            {
              v6 = -1073741811;
              *(_QWORD *)(*((_QWORD *)this + 44) + 16LL * (unsigned int)i + 8) = 0LL;
              break;
            }
            *(_QWORD *)(*((_QWORD *)this + 44) + 16LL * (unsigned int)i + 8) = v24;
            DirectComposition::CResourceMarshaler::AddRef(*(DirectComposition::CResourceMarshaler **)(*((_QWORD *)this + 44) + 16LL * (unsigned int)i + 8));
          }
          else
          {
            *(_QWORD *)(*((_QWORD *)this + 44) + 16LL * (unsigned int)i + 8) = 0LL;
          }
        }
        if ( v6 < 0 )
          goto LABEL_8;
        goto LABEL_23;
      }
      goto LABEL_7;
    }
    goto LABEL_17;
  }
  v14 = v10 - 20;
  if ( !v14 )
  {
    v29 = Size;
    if ( Size > 0x1000 || (Size & 3) != 0 )
      goto LABEL_17;
    v30 = 0;
LABEL_49:
    v31 = (char *)*((_QWORD *)this + v30 + 33);
    if ( v31 )
    {
      GreDeleteFastMutex(v31);
      *((_QWORD *)this + v30 + 33) = 0LL;
    }
    v32 = (void *)Win32AllocPoolWithQuotaZInitImpl((__int64)v31, v29, 0x72694344u);
    *((_QWORD *)this + v30 + 33) = v32;
    if ( !v32 )
    {
LABEL_7:
      v6 = -1073741801;
LABEL_8:
      v8 = a2;
      goto LABEL_9;
    }
    memmove(v32, a4, v29);
    *((_QWORD *)this + v30 + 37) = v29;
    *((_DWORD *)this + 4) &= ~(unsigned int)DirectComposition::CInteractionTrackerMarshaler::GetInertiaModifierMarshalerFlag(
                                              v33,
                                              v30);
LABEL_53:
    *a6 = 1;
    return (unsigned int)v6;
  }
  v15 = v14 - 1;
  if ( !v15 )
  {
    v29 = Size;
    if ( Size > 0x1000 || (Size & 3) != 0 )
      goto LABEL_17;
    v30 = 1;
    goto LABEL_49;
  }
  v16 = v15 - 1;
  if ( !v16 )
  {
    v29 = Size;
    if ( Size > 0x1000 )
      goto LABEL_17;
    v30 = 3;
    if ( (Size & 3) != 0 )
      goto LABEL_17;
    goto LABEL_49;
  }
  v17 = v16 - 1;
  if ( !v17 )
  {
    v29 = Size;
    if ( Size > 0x1000 || (Size & 3) != 0 )
      goto LABEL_17;
    v30 = 2;
    goto LABEL_49;
  }
  v18 = v17 - 21;
  if ( v18 )
  {
    if ( v18 == 1 && Size == 36 )
    {
      *(_OWORD *)((char *)this + 412) = *(_OWORD *)a4;
      *(_OWORD *)((char *)this + 428) = *((_OWORD *)a4 + 1);
      *((_DWORD *)this + 111) = a4[8];
      *a6 = 1;
      *((_DWORD *)this + 4) &= ~0x1000000u;
      return (unsigned int)v6;
    }
    goto LABEL_17;
  }
  if ( Size == 12 )
  {
    v26 = (_QWORD *)((char *)this + 368);
    v27 = *((_DWORD *)this + 98);
    v28 = a4[2];
    Src = *(_QWORD *)a4;
    v35 = v28;
    v6 = DirectComposition::CDCompDynamicArrayBase::Grow(
           (DirectComposition::CInteractionTrackerMarshaler *)((char *)this + 368),
           1LL,
           0x72694344u);
    if ( v6 < 0 )
      goto LABEL_8;
    memmove((void *)(*v26 + v26[4] * v27), &Src, v26[4]);
    goto LABEL_53;
  }
LABEL_17:
  v6 = -1073741811;
LABEL_9:
  if ( *((_QWORD *)this + 44) )
    DirectComposition::CInteractionTrackerMarshaler::ReleaseManipulationReferences(this, v8);
  return (unsigned int)v6;
}
