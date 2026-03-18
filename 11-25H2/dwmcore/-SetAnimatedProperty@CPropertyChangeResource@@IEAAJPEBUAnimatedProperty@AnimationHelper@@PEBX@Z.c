/*
 * XREFs of ?SetAnimatedProperty@CPropertyChangeResource@@IEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x1801A48A0
 * Callers:
 *     _lambda_d811ba136654e7aa75c1d0bf78146f4c_::_lambda_invoker_cdecl_ @ 0x18021E3C0 (_lambda_d811ba136654e7aa75c1d0bf78146f4c_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800209D0 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?NotifyOnChanged@CGeometry@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800231F0 (-NotifyOnChanged@CGeometry@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     McGenEventWrite_EventWriteTransfer @ 0x1800B1240 (McGenEventWrite_EventWriteTransfer.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x1800E54D0 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?NotifyVector3PropertyChanged@CPropertyChangeResource@@IEBAJIAEBUD2DVector3@@@Z @ 0x1801A5444 (-NotifyVector3PropertyChanged@CPropertyChangeResource@@IEBAJIAEBUD2DVector3@@@Z.c)
 *     ?NotifyMatrix3x2PropertyChanged@CPropertyChangeResource@@IEBAJIAEBUD2D_MATRIX_3X2_F@@@Z @ 0x1801A5C74 (-NotifyMatrix3x2PropertyChanged@CPropertyChangeResource@@IEBAJIAEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?NotifyVector4PropertyChanged@CPropertyChangeResource@@IEBAJIAEBUD2DVector4@@@Z @ 0x1801A5F34 (-NotifyVector4PropertyChanged@CPropertyChangeResource@@IEBAJIAEBUD2DVector4@@@Z.c)
 *     ModuleFailFastForHRESULT @ 0x18024A244 (ModuleFailFastForHRESULT.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     ?NotifyBooleanPropertyChanged@CPropertyChangeResource@@IEBAJI_N@Z @ 0x18029DAD0 (-NotifyBooleanPropertyChanged@CPropertyChangeResource@@IEBAJI_N@Z.c)
 *     ?NotifyColorPropertyChanged@CPropertyChangeResource@@IEBAJIAEBU_D3DCOLORVALUE@@@Z @ 0x18029DBC4 (-NotifyColorPropertyChanged@CPropertyChangeResource@@IEBAJIAEBU_D3DCOLORVALUE@@@Z.c)
 *     ?NotifyQuaternionPropertyChanged@CPropertyChangeResource@@IEBAJIAEBUD2DQuaternion@@@Z @ 0x18029DCCC (-NotifyQuaternionPropertyChanged@CPropertyChangeResource@@IEBAJIAEBUD2DQuaternion@@@Z.c)
 *     memcmp_0 @ 0x1802E8968 (memcmp_0.c)
 *     memcpy_0 @ 0x1802E8974 (memcpy_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CPropertyChangeResource::SetAnimatedProperty(
        CPropertyChangeResource *this,
        const struct AnimationHelper::AnimatedProperty *a2,
        const struct _D3DCOLORVALUE *a3)
{
  size_t v4; // r15
  char *v5; // r14
  int v8; // ebx
  __int64 v10; // rax
  __int64 v11; // rbx
  struct _RTL_GENERIC_TABLE *v12; // rcx
  char *v13; // r14
  char *v14; // r8
  void (__fastcall *v15)(_QWORD, _QWORD, _QWORD); // rax
  int v16; // eax
  __int64 v17; // rax
  unsigned int v18; // edi
  int v19; // eax
  __int64 v20; // r10
  __int64 v21; // rcx
  __m128 g_low; // xmm1
  __int64 v23; // rax
  __m128 r_low; // xmm0
  int v25; // eax
  __int64 v26; // rax
  unsigned int v27; // edi
  __int64 v28; // rax
  unsigned int v29; // edi
  float r; // xmm6_4
  __int64 i; // rdx
  __int64 v32; // rcx
  __int64 v33; // rbx
  __int64 v34; // r8
  void *v35; // rcx
  signed int LastError; // eax
  int v37; // eax
  __int64 v38; // rcx
  __int64 v39; // rax
  unsigned int v40; // edx
  struct _D3DCOLORVALUE v41; // xmm0
  __int128 v42; // xmm1
  __int128 v43; // xmm0
  __int128 v44; // xmm1
  int v45; // eax
  int v46; // eax
  __int64 v47; // rax
  __int64 v48; // rcx
  unsigned int v49; // edx
  int v50; // eax
  __int64 v51; // rax
  LARGE_INTEGER DueTime; // [rsp+40h] [rbp-99h] BYREF
  unsigned __int64 v53; // [rsp+48h] [rbp-91h] BYREF
  _QWORD v54[2]; // [rsp+50h] [rbp-89h] BYREF
  _QWORD v55[2]; // [rsp+60h] [rbp-79h] BYREF
  _QWORD v56[2]; // [rsp+70h] [rbp-69h] BYREF
  _OWORD v57[4]; // [rsp+80h] [rbp-59h] BYREF
  int Buffer; // [rsp+C0h] [rbp-19h] BYREF
  __int128 v59; // [rsp+C8h] [rbp-11h] BYREF
  __int64 v60; // [rsp+D8h] [rbp-1h]
  int v61; // [rsp+E0h] [rbp+7h]
  void *retaddr; // [rsp+138h] [rbp+5Fh]

  v4 = *((_QWORD *)a2 + 2);
  v5 = (char *)this + *((_QWORD *)a2 + 1);
  v8 = 0;
  if ( !memcmp_0(v5, a3, v4) )
    return (unsigned int)v8;
  memcpy_0(v5, a3, v4);
  v10 = *((_QWORD *)this + 3);
  v11 = *(_QWORD *)(v10 + 888);
  if ( v11 == *(_QWORD *)(v10 + 896) )
  {
    v51 = v11 + 1;
    v11 = 1LL;
    if ( v51 )
      v11 = v51;
  }
  v12 = (struct _RTL_GENERIC_TABLE *)*((_QWORD *)this + 6);
  v13 = 0LL;
  if ( v12 )
  {
    Buffer = *(_DWORD *)a2;
    v60 = 0LL;
    v59 = 0LL;
    v61 = 0;
    v13 = (char *)RtlLookupElementGenericTable(v12, &Buffer);
    DynArrayImpl<0>::~DynArrayImpl<0>((__int64)&v59);
  }
  v14 = v13 + 8;
  if ( !v13 )
    v14 = 0LL;
  if ( v14 )
  {
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)v14 + 6); *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v14 + 8 * v32) + 232LL) = v11 )
    {
      v32 = (unsigned int)i;
      i = (unsigned int)(i + 1);
    }
    *(_BYTE *)(*(_QWORD *)(*((_QWORD *)this + 3) + 824LL) + 440LL) |= 2u;
    v33 = *((_QWORD *)this + 3);
    (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v33 + 312) + 24LL))(*(_QWORD *)(v33 + 312), i);
    if ( *(_DWORD *)(v33 + 248) )
    {
      v35 = *(void **)(v33 + 240);
      *(_DWORD *)(v33 + 248) = 0;
      DueTime.QuadPart = 0LL;
      if ( !SetWaitableTimerEx(v35, &DueTime, 0, 0LL, 0LL, 0LL, 0) )
      {
        LastError = GetLastError();
        if ( LastError > 0 )
          LastError = (unsigned __int16)LastError | 0x80070000;
        if ( LastError >= 0 )
          LastError = -2003304445;
        ModuleFailFastForHRESULT(LastError, retaddr);
      }
    }
    _m_prefetchw((const void *)(v33 + 252));
    if ( (~(unsigned __int8)_InterlockedOr((volatile signed __int32 *)(v33 + 252), 8u) & 8) != 0
      && (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    {
      DueTime.LowPart = 8;
      *((_QWORD *)&v59 + 1) = &DueTime;
      v60 = 4LL;
      McGenEventWrite_EventWriteTransfer(
        &Microsoft_Windows_Dwm_Core_Provider_Context,
        &EVTDESC_SCHEDULED_COMPOSITION_REASON,
        v34,
        2u,
        (PEVENT_DATA_DESCRIPTOR)&Buffer);
    }
  }
  v15 = *(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)this + 80LL);
  if ( (char *)v15 == (char *)CResource::NotifyOnChanged )
  {
    CResource::NotifyOnChanged(this, 0, 0LL);
  }
  else if ( (char *)v15 == (char *)CGeometry::NotifyOnChanged )
  {
    CGeometry::NotifyOnChanged(this, 0, 0LL);
  }
  else
  {
    v15(this, 0LL, 0LL);
  }
  v16 = *((_DWORD *)a2 + 1);
  v8 = -2147024809;
  if ( v16 != 265 )
  {
    if ( v16 == 18 )
    {
      v28 = *((_QWORD *)this + 7);
      v8 = 0;
      v29 = *(_DWORD *)a2;
      r = a3->r;
      if ( v28 )
      {
        if ( *(_DWORD *)(v28 + 108) )
        {
          if ( *((_DWORD *)this + 18) )
          {
            v46 = *((_DWORD *)this + 19);
            if ( _bittest(&v46, v29) )
            {
              v47 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(*((_QWORD *)this + 3) + 6416LL) + 72LL))(
                      *(_QWORD *)(*((_QWORD *)this + 3) + 6416LL),
                      11LL);
              if ( v47 )
              {
                v48 = *((_QWORD *)this + 7);
                if ( v48 )
                  v49 = *(_DWORD *)(v48 + 108);
                else
                  v49 = 0;
                v55[0] = v49;
                v55[1] = *((unsigned int *)this + 18);
                v50 = CoreUICallSend(v47, v55, 2LL, 11LL, 0, &unk_180336EAA, v29, r, DueTime.LowPart);
                if ( v50 != -2018375675 )
                  v8 = v50;
                if ( v8 < 0 )
                  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v8, 0xC8u, 0LL);
              }
            }
          }
        }
      }
    }
    else
    {
      if ( v16 != 35 )
      {
        switch ( v16 )
        {
          case 17:
            v8 = CPropertyChangeResource::NotifyBooleanPropertyChanged(this, *(_DWORD *)a2, LOBYTE(a3->r));
            goto LABEL_26;
          case 52:
            v8 = CPropertyChangeResource::NotifyVector3PropertyChanged(
                   this,
                   *(_DWORD *)a2,
                   (const struct D2DVector3 *)a3);
            goto LABEL_26;
          case 69:
            v8 = CPropertyChangeResource::NotifyVector4PropertyChanged(
                   this,
                   *(_DWORD *)a2,
                   (const struct D2DVector4 *)a3);
            goto LABEL_26;
          case 70:
            v8 = CPropertyChangeResource::NotifyColorPropertyChanged(this, *(_DWORD *)a2, a3);
            goto LABEL_26;
          case 71:
            v8 = CPropertyChangeResource::NotifyQuaternionPropertyChanged(
                   this,
                   *(_DWORD *)a2,
                   (const struct D2DQuaternion *)a3);
            goto LABEL_26;
          case 104:
            v8 = CPropertyChangeResource::NotifyMatrix3x2PropertyChanged(
                   this,
                   *(_DWORD *)a2,
                   (const struct D2D_MATRIX_3X2_F *)a3);
            goto LABEL_26;
          default:
            goto LABEL_27;
        }
      }
      v17 = *((_QWORD *)this + 7);
      v8 = 0;
      v18 = *(_DWORD *)a2;
      if ( v17 )
      {
        if ( *(_DWORD *)(v17 + 108) )
        {
          if ( *((_DWORD *)this + 18) )
          {
            v19 = *((_DWORD *)this + 19);
            if ( _bittest(&v19, v18) )
            {
              v20 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(*((_QWORD *)this + 3) + 6416LL) + 72LL))(
                      *(_QWORD *)(*((_QWORD *)this + 3) + 6416LL),
                      11LL);
              if ( v20 )
              {
                v21 = *((_QWORD *)this + 7);
                g_low = (__m128)LODWORD(a3->g);
                if ( v21 )
                  v23 = *(unsigned int *)(v21 + 108);
                else
                  v23 = 0LL;
                r_low = (__m128)LODWORD(a3->r);
                v54[0] = v23;
                v54[1] = *((unsigned int *)this + 18);
                v53 = _mm_unpacklo_ps(r_low, g_low).m128_u64[0];
                v25 = CoreUICallSend(v20, v54, 2LL, 11LL, 2, &unk_180336EB2, v18, &v53, DueTime.LowPart);
                if ( v25 != -2018375675 )
                  v8 = v25;
                if ( v8 >= 0 )
                  return (unsigned int)v8;
                MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v8, 0x125u, 0LL);
              }
            }
          }
        }
      }
    }
    goto LABEL_26;
  }
  v26 = *((_QWORD *)this + 7);
  v8 = 0;
  v27 = *(_DWORD *)a2;
  if ( !v26
    || !*(_DWORD *)(v26 + 108)
    || !*((_DWORD *)this + 18)
    || (v37 = *((_DWORD *)this + 19), !_bittest(&v37, v27))
    || (v38 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(*((_QWORD *)this + 3) + 6416LL) + 72LL))(
                *(_QWORD *)(*((_QWORD *)this + 3) + 6416LL),
                11LL)) == 0 )
  {
LABEL_26:
    if ( v8 < 0 )
    {
LABEL_27:
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v8, 0x9Du, 0LL);
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v8, 0x66u, 0LL);
    }
    return (unsigned int)v8;
  }
  v39 = *((_QWORD *)this + 7);
  if ( v39 )
    v40 = *(_DWORD *)(v39 + 108);
  else
    v40 = 0;
  *(struct _D3DCOLORVALUE *)&v41.r = *(struct _D3DCOLORVALUE *)&a3->r;
  v42 = *(_OWORD *)&a3[1].r;
  v56[0] = v40;
  v56[1] = *((unsigned int *)this + 18);
  v57[0] = *(struct _D3DCOLORVALUE *)&v41.r;
  v43 = *(_OWORD *)&a3[2].r;
  v57[1] = v42;
  v44 = *(_OWORD *)&a3[3].r;
  v57[2] = v43;
  v57[3] = v44;
  v45 = CoreUICallSend(v38, v56, 2LL, 11LL, 8, &unk_180336ED6, v27, v57, DueTime.LowPart);
  if ( v45 != -2018375675 )
    v8 = v45;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v8, 0x242u, 0LL);
    goto LABEL_26;
  }
  return (unsigned int)v8;
}
