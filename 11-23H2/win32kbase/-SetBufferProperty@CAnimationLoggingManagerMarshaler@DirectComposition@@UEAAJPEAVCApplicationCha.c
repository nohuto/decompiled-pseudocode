/*
 * XREFs of ?SetBufferProperty@CAnimationLoggingManagerMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C0023860
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseCompositorComment@CAnimationLoggingManagerMarshaler@DirectComposition@@AEAAXXZ @ 0x1C0021814 (-ReleaseCompositorComment@CAnimationLoggingManagerMarshaler@DirectComposition@@AEAAXXZ.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C0023A80 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?StringCchLengthW@@YAJPEBG_KPEA_K@Z @ 0x1C0024F6C (-StringCchLengthW@@YAJPEBG_KPEA_K@Z.c)
 *     ?ReleaseWeakReference@CApplicationChannel@DirectComposition@@QEAAXPEAVCWeakReferenceBase@2@@Z @ 0x1C0026E54 (-ReleaseWeakReference@CApplicationChannel@DirectComposition@@QEAAXPEAVCWeakReferenceBase@2@@Z.c)
 *     ?AllocateQuota@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z @ 0x1C002C184 (-AllocateQuota@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z.c)
 *     ?GetWeakReferenceBase@CApplicationChannel@DirectComposition@@IEAAJPEAVCResourceMarshaler@2@PEAPEAVCWeakReferenceBase@2@@Z @ 0x1C002D288 (-GetWeakReferenceBase@CApplicationChannel@DirectComposition@@IEAAJPEAVCResourceMarshaler@2@PEAPE.c)
 *     ?LookupResourceMarshaler@CApplicationChannel@DirectComposition@@QEAAPEAVCResourceMarshaler@2@I@Z @ 0x1C002EB40 (-LookupResourceMarshaler@CApplicationChannel@DirectComposition@@QEAAPEAVCResourceMarshaler@2@I@Z.c)
 *     ?Grow@CDCompDynamicArrayBase@DirectComposition@@QEAAJ_KK@Z @ 0x1C003175C (-Grow@CDCompDynamicArrayBase@DirectComposition@@QEAAJ_KK@Z.c)
 *     memmove @ 0x1C00D6F00 (memmove.c)
 */

__int64 __fastcall DirectComposition::CAnimationLoggingManagerMarshaler::SetBufferProperty(
        DirectComposition::CAnimationLoggingManagerMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        __m128i *a4,
        unsigned __int64 a5,
        bool *a6)
{
  int WeakReferenceBase; // ebx
  int v10; // r8d
  int v11; // r8d
  const unsigned __int16 *v12; // r13
  int v13; // eax
  __int64 v14; // r11
  unsigned __int64 v15; // r15
  struct DirectComposition::CResourceMarshaler *v16; // r12
  NSInstrumentation::CLeakTrackingAllocator *v17; // rcx
  void *v18; // rax
  int v20; // r8d
  int v21; // eax
  unsigned __int64 v22; // r15
  NSInstrumentation::CLeakTrackingAllocator *v23; // rcx
  unsigned __int16 *Quota; // rax
  unsigned int v26; // edx
  struct DirectComposition::CResourceMarshaler *v27; // rax
  struct DirectComposition::CWeakReferenceBase **v28; // rdx
  struct DirectComposition::CWeakReferenceBase *v29; // r14
  size_t v30; // r8
  __int64 v31; // rcx
  void *v32; // rcx
  struct DirectComposition::CWeakReferenceBase *v33; // rdx
  struct DirectComposition::CResourceMarshaler *v34; // rax
  __int64 v35; // xmm0_8
  __int32 v36; // r12d
  struct DirectComposition::CResourceMarshaler *v37; // rax
  struct DirectComposition::CResourceMarshaler *v38; // r13
  struct DirectComposition::CWeakReferenceBase *v39; // r15
  size_t v40; // r8
  __int64 v41; // rcx
  void *v42; // rcx
  struct DirectComposition::CWeakReferenceBase *v43; // [rsp+20h] [rbp-40h] BYREF
  __int32 v44; // [rsp+28h] [rbp-38h]
  __int32 v45; // [rsp+2Ch] [rbp-34h]
  __m128i Src; // [rsp+30h] [rbp-30h] BYREF
  _QWORD v47[2]; // [rsp+40h] [rbp-20h] BYREF
  __int32 v48; // [rsp+50h] [rbp-10h]
  int v49; // [rsp+54h] [rbp-Ch]

  WeakReferenceBase = 0;
  if ( !a3 )
  {
    if ( a5 != 8 )
      return (unsigned int)-1073741811;
    v37 = DirectComposition::CApplicationChannel::LookupResourceMarshaler(a2, a4->m128i_i32[0]);
    v38 = v37;
    if ( v37 )
    {
      v43 = 0LL;
      WeakReferenceBase = DirectComposition::CApplicationChannel::GetWeakReferenceBase(a2, v37, &v43);
      if ( WeakReferenceBase < 0
        || (WeakReferenceBase = DirectComposition::CDCompDynamicArrayBase::Grow(
                                  (DirectComposition::CAnimationLoggingManagerMarshaler *)((char *)this + 56),
                                  1uLL,
                                  0x6D6C4344u),
            WeakReferenceBase < 0) )
      {
        v39 = v43;
      }
      else
      {
        v39 = 0LL;
        v40 = *((_QWORD *)this + 11);
        v41 = *((_QWORD *)this + 10) - 1LL;
        Src.m128i_i64[0] = (__int64)v43;
        Src.m128i_i32[3] = *((_DWORD *)v38 + 9);
        v42 = (void *)(*((_QWORD *)this + 7) + v40 * v41);
        Src.m128i_i32[2] = a4->m128i_i32[1];
        memmove(v42, &Src, v40);
        *a6 = 1;
      }
      if ( v39 )
      {
        v33 = v39;
        goto LABEL_52;
      }
    }
    return (unsigned int)WeakReferenceBase;
  }
  v10 = a3 - 1;
  if ( !v10 )
  {
    if ( a5 != 12 )
      return (unsigned int)-1073741811;
    v34 = DirectComposition::CApplicationChannel::LookupResourceMarshaler(a2, a4->m128i_i32[0]);
    if ( !v34 )
      return (unsigned int)WeakReferenceBase;
    v35 = a4->m128i_i64[0];
    v36 = a4->m128i_i32[2];
    v43 = 0LL;
    Src.m128i_i64[0] = v35;
    WeakReferenceBase = DirectComposition::CApplicationChannel::GetWeakReferenceBase(a2, v34, &v43);
    if ( WeakReferenceBase >= 0 )
    {
      WeakReferenceBase = DirectComposition::CDCompDynamicArrayBase::Grow(
                            (DirectComposition::CAnimationLoggingManagerMarshaler *)((char *)this + 104),
                            1uLL,
                            0x6D6C4344u);
      if ( WeakReferenceBase >= 0 )
      {
        v28 = &v43;
        v29 = 0LL;
        v30 = *((_QWORD *)this + 17);
        v32 = (void *)(*((_QWORD *)this + 13) + v30 * (*((_QWORD *)this + 16) - 1LL));
        v45 = v36;
        v44 = Src.m128i_i32[1];
        goto LABEL_29;
      }
    }
LABEL_30:
    v29 = v43;
    goto LABEL_31;
  }
  v11 = v10 - 1;
  if ( v11 )
  {
    v20 = v11 - 1;
    if ( !v20 )
    {
      if ( a5 )
      {
        if ( !a4 )
          return (unsigned int)-1073741811;
        v43 = 0LL;
        v21 = StringCchLengthW((const unsigned __int16 *)a4, a5 >> 1, (unsigned __int64 *)&v43);
        v22 = (unsigned __int64)v43 + 1;
        if ( v21 < 0 || a5 != 2 * v22 )
          return (unsigned int)-1073741811;
        DirectComposition::CAnimationLoggingManagerMarshaler::ReleaseCompositorComment(this);
        Quota = (unsigned __int16 *)NSInstrumentation::CLeakTrackingAllocator::AllocateQuota(
                                      v23,
                                      0x104uLL,
                                      a5,
                                      0x6D6C4344u);
        *((_QWORD *)this + 31) = Quota;
        if ( !Quota )
          return (unsigned int)-1073741801;
        if ( StringCchCopyW(Quota, v22, (const unsigned __int16 *)a4) < 0 )
          return (unsigned int)-1073741811;
      }
      else
      {
        if ( a4 )
          return (unsigned int)-1073741811;
        DirectComposition::CAnimationLoggingManagerMarshaler::ReleaseCompositorComment(this);
      }
      *a6 = 1;
      *((_BYTE *)this + 256) |= 1u;
      return (unsigned int)WeakReferenceBase;
    }
    if ( v20 != 2 )
      return (unsigned int)-1073741811;
    if ( a5 != 16 )
      return (unsigned int)-1073741811;
    v26 = _mm_cvtsi128_si32(*a4);
    Src = *a4;
    v27 = DirectComposition::CApplicationChannel::LookupResourceMarshaler(a2, v26);
    if ( !v27 )
      return (unsigned int)-1073741811;
    v43 = 0LL;
    WeakReferenceBase = DirectComposition::CApplicationChannel::GetWeakReferenceBase(a2, v27, &v43);
    if ( WeakReferenceBase >= 0 )
    {
      WeakReferenceBase = DirectComposition::CDCompDynamicArrayBase::Grow(
                            (DirectComposition::CAnimationLoggingManagerMarshaler *)((char *)this + 152),
                            1uLL,
                            0x6D6C4344u);
      if ( WeakReferenceBase >= 0 )
      {
        v28 = (struct DirectComposition::CWeakReferenceBase **)v47;
        v29 = 0LL;
        v30 = *((_QWORD *)this + 23);
        v31 = *((_QWORD *)this + 22) - 1LL;
        v47[0] = v43;
        v47[1] = *(__int64 *)((char *)Src.m128i_i64 + 4);
        v32 = (void *)(*((_QWORD *)this + 19) + v30 * v31);
        v49 = 0;
        v48 = Src.m128i_i32[3];
LABEL_29:
        memmove(v32, v28, v30);
        *a6 = 1;
LABEL_31:
        if ( !v29 )
          return (unsigned int)WeakReferenceBase;
        v33 = v29;
        goto LABEL_52;
      }
    }
    goto LABEL_30;
  }
  if ( a5 <= 4 )
    return (unsigned int)-1073741811;
  v12 = &a4->m128i_u16[2];
  v43 = 0LL;
  v13 = StringCchLengthW(&a4->m128i_u16[2], (a5 - 4) >> 1, (unsigned __int64 *)&v43);
  v15 = (unsigned __int64)v43 + 1;
  if ( v13 < 0 || v14 != 2 * v15 + 4 )
    return (unsigned int)-1073741811;
  v16 = DirectComposition::CApplicationChannel::LookupResourceMarshaler(a2, a4->m128i_i32[0]);
  if ( v16 )
  {
    WeakReferenceBase = DirectComposition::CDCompDynamicArrayBase::Grow(
                          (DirectComposition::CAnimationLoggingManagerMarshaler *)((char *)this + 200),
                          1uLL,
                          0x6D6C4344u);
    if ( WeakReferenceBase >= 0 )
    {
      v43 = 0LL;
      WeakReferenceBase = DirectComposition::CApplicationChannel::GetWeakReferenceBase(a2, v16, &v43);
      if ( WeakReferenceBase >= 0 )
      {
        v18 = NSInstrumentation::CLeakTrackingAllocator::AllocateQuota(v17, 0x104uLL, 2 * v15 + 16, 0x6D6C4344u);
        Src.m128i_i64[0] = (__int64)v18;
        if ( v18 )
        {
          *(_QWORD *)v18 = v43;
          *((_QWORD *)v18 + 1) = v15;
          if ( StringCchCopyW((unsigned __int16 *)v18 + 8, v15, v12) >= 0 )
          {
            memmove(
              (void *)(*((_QWORD *)this + 25) + *((_QWORD *)this + 29) * (*((_QWORD *)this + 28) - 1LL)),
              &Src,
              *((_QWORD *)this + 29));
            *a6 = 1;
            return (unsigned int)WeakReferenceBase;
          }
          return (unsigned int)-1073741811;
        }
        WeakReferenceBase = -1073741801;
      }
      v33 = v43;
      if ( !v43 )
        return (unsigned int)WeakReferenceBase;
LABEL_52:
      DirectComposition::CApplicationChannel::ReleaseWeakReference(a2, v33);
    }
  }
  return (unsigned int)WeakReferenceBase;
}
