/*
 * XREFs of ?iCombine@DC@@QEAAJPEAU_RECTL@@J@Z @ 0x14002BA00
 * Callers:
 *     GreIntersectClipRect @ 0x14001DA50 (GreIntersectClipRect.c)
 * Callees:
 *     ??0?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_DEVICE_OBJECT@@$$A6A_JPEAX@Z$1?ObfDereferenceObject@@YA_J0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x14001971C (--0-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_DEVICE_OBJECT@@$$A6A_JPEAX@Z$1-ObfDe.c)
 *     ??$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x14001F398 (--$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??0?$SEMOBJSHARED@$00@@QEAA@XZ @ 0x140022264 (--0-$SEMOBJSHARED@$00@@QEAA@XZ.c)
 *     ?bCopy@RGNOBJ@@QEAAHAEAV1@@Z @ 0x140025B10 (-bCopy@RGNOBJ@@QEAAHAEAV1@@Z.c)
 *     ?RegionCore_bContain_region@Win32kRS@@YAHPEBVREGION_CORE@@0@Z @ 0x1400260F4 (-RegionCore_bContain_region@Win32kRS@@YAHPEBVREGION_CORE@@0@Z.c)
 *     ?RegionCore_is_rect@Win32kRS@@YAHPEBVREGION_CORE@@@Z @ 0x140026210 (-RegionCore_is_rect@Win32kRS@@YAHPEBVREGION_CORE@@@Z.c)
 *     ?iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z @ 0x1400262A0 (-iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z.c)
 *     ?bMerge@RGNOBJ@@QEAAHAEAV1@0E@Z @ 0x140026690 (-bMerge@RGNOBJ@@QEAAHAEAV1@0E@Z.c)
 *     ?vPushThreadGuardedObject@RGNMEMOBJ@@QEAAXXZ @ 0x140026760 (-vPushThreadGuardedObject@RGNMEMOBJ@@QEAAXXZ.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x14002689C (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?vSet@RGNOBJ@@QEAAXXZ @ 0x1400268F0 (-vSet@RGNOBJ@@QEAAXXZ.c)
 *     ?vInitialize@RGNMEMOBJ@@QEAAXK@Z @ 0x140026B80 (-vInitialize@RGNMEMOBJ@@QEAAXK@Z.c)
 *     ?vDeleteRGNOBJ@RGNOBJ@@QEAAXXZ @ 0x1400281B0 (-vDeleteRGNOBJ@RGNOBJ@@QEAAXXZ.c)
 *     ?vSet@RGNCOREOBJ@@QEAAXQEBU_RECTL@@@Z @ 0x1400291D0 (-vSet@RGNCOREOBJ@@QEAAXQEBU_RECTL@@@Z.c)
 *     ?vSet@RGNOBJ@@QEAAXQEBU_RECTL@@@Z @ 0x140029D30 (-vSet@RGNOBJ@@QEAAXQEBU_RECTL@@@Z.c)
 *     ?iComplexity@RGNOBJ@@QEBAJXZ @ 0x14002A080 (-iComplexity@RGNOBJ@@QEBAJXZ.c)
 *     ?get_sizeScan@REGION_CORE@@IEBAKXZ @ 0x14002B150 (-get_sizeScan@REGION_CORE@@IEBAKXZ.c)
 *     ??0RGNMEMOBJ@@QEAA@XZ @ 0x14002B9D0 (--0RGNMEMOBJ@@QEAA@XZ.c)
 *     EngSetLastError @ 0x14002DB90 (EngSetLastError.c)
 *     ?vReleaseRao@DC@@QEAAXXZ @ 0x140035740 (-vReleaseRao@DC@@QEAAXXZ.c)
 *     ?bDpiScaledSurface@DC@@QEBAHXZ @ 0x14003ABBC (-bDpiScaledSurface@DC@@QEBAHXZ.c)
 *     ?RegionCore_iCombine@Win32kRS@@YAJPEAVREGION_CORE@@00J@Z @ 0x1400F330C (-RegionCore_iCombine@Win32kRS@@YAJPEAVREGION_CORE@@00J@Z.c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DC::iCombine(DC *this, struct _RECTL *a2, int a3)
{
  LONG left; // eax
  __int64 v5; // r15
  __int64 v7; // r12
  ULONG_PTR v9; // rbx
  __int64 *SystemArgument1; // rsi
  unsigned int v11; // r14d
  char *v12; // rdi
  __int64 v13; // rsi
  unsigned int v14; // eax
  ULONG_PTR *v16; // rcx
  __int64 v17; // rcx
  __int64 SessionState; // rax
  const struct REGION_CORE *v19; // rdx
  const struct REGION_CORE *v20; // r9
  Win32kRS *v21; // rcx
  const struct REGION_CORE *v22; // r8
  const struct REGION_CORE *v23; // rdx
  Win32kRS *v24; // rcx
  const struct REGION_CORE *v25; // r8
  struct RGNOBJ *v26; // rdx
  Win32kRS **v27; // rax
  unsigned __int64 v28; // rax
  unsigned __int64 v29; // xmm1_8
  unsigned __int64 v30; // r9
  unsigned __int64 v31; // xmm0_8
  LONG v32; // r8d
  LONG v33; // edx
  unsigned __int64 v34; // rax
  unsigned __int64 v35; // r9
  unsigned __int64 v36; // r10
  unsigned __int64 v37; // rax
  _DWORD *v38; // rbx
  LONG v39; // r9d
  unsigned __int64 v40; // rdx
  LONG top; // r8d
  char *v42; // r10
  LONG v43; // r9d
  LONG v44; // eax
  int v45; // ecx
  LONG v46; // r8d
  LONG v47; // edx
  int v48; // [rsp+20h] [rbp-49h]
  struct _RECTL *v49; // [rsp+50h] [rbp-19h] BYREF
  Win32kRS *v50; // [rsp+58h] [rbp-11h] BYREF
  ULONG_PTR v51; // [rsp+60h] [rbp-9h] BYREF
  __int64 v52; // [rsp+68h] [rbp-1h] BYREF
  struct _RECTL v53; // [rsp+70h] [rbp+7h] BYREF

  left = a2->left;
  v5 = *((_QWORD *)this + 20);
  v49 = a2;
  v7 = a3;
  if ( (left & 0xF8000000) != -134217728 && (left & 0xF8000000) != 0
    || (a2->bottom & 0xF8000000) != -134217728 && (a2->bottom & 0xF8000000) != 0
    || (a2->right & 0xF8000000) != 0 && (a2->right & 0xF8000000) != -134217728
    || (a2->top & 0xF8000000) != 0 && (a2->top & 0xF8000000) != -134217728 )
  {
    EngSetLastError(0x57u);
    return 0LL;
  }
  RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v51);
  v9 = v51;
  if ( !v51 )
    return 0LL;
  SystemArgument1 = (__int64 *)WPP_MAIN_CB.Dpc.SystemArgument1;
  v11 = 2;
  if ( WPP_MAIN_CB.Dpc.SystemArgument1 )
  {
    v12 = (char *)WPP_MAIN_CB.Dpc.SystemArgument1 + 8;
    v50 = (Win32kRS *)((v51 + 24) & -(__int64)(v51 != 0));
    KeEnterCriticalRegion();
    ExAcquirePushLockSharedEx(SystemArgument1 + 1, 2LL);
    v13 = *SystemArgument1;
    (*(void (__fastcall **)(Win32kRS *, struct _RECTL *))(v13 + 176))(v50, v49);
    if ( !(*(unsigned int (__fastcall **)(Win32kRS *))(v13 + 216))(v50) )
      DbgkWerCaptureLiveKernelDump(L"GreLKD", 400LL, 64LL, v50, 0LL, 0LL, 0LL, 0LL, 0);
    ExReleasePushLockSharedEx(v12, 2LL);
    KeLeaveCriticalRegion();
  }
  else
  {
    v50 = (Win32kRS *)((v51 + 24) & -(__int64)(v51 != 0));
    RGNCOREOBJ::vSet(&v50, a2);
  }
  DC::vReleaseRao(this);
  if ( v5 )
  {
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v49);
    if ( !v49 )
    {
      v11 = 0;
      goto LABEL_21;
    }
    v50 = (Win32kRS *)v5;
    SessionState = W32GetSessionState(v17);
    if ( v49 == *(struct _RECTL **)(*(_QWORD *)(SessionState + 88) + 4160LL) )
    {
LABEL_43:
      v14 = RGNOBJ::iComplexity((RGNOBJ *)&v49, v19);
      goto LABEL_16;
    }
    if ( WPP_MAIN_CB.Dpc.SystemArgument1 )
    {
      v14 = Win32kRS::RegionCore_iCombine(
              (Win32kRS *)((unsigned __int64)&v49[1].right & -(__int64)(v49 != 0LL)),
              (struct REGION_CORE *)(v5 + 24),
              (struct REGION_CORE *)((v9 + 24) & -(__int64)(v9 != 0)),
              (struct REGION_CORE *)(unsigned int)v7,
              v48);
LABEL_16:
      v11 = v14;
      goto LABEL_17;
    }
    if ( (unsigned int)(v7 - 1) > 1 )
    {
LABEL_42:
      LOBYTE(v20) = byte_140259E24[v7];
      if ( !(unsigned int)RGNOBJ::bMerge((RGNOBJ *)&v49, (struct RGNOBJ *)&v50, (struct RGNOBJ *)&v51, v20) )
      {
LABEL_51:
        RGNOBJ::vSet((RGNOBJ *)&v49);
        v11 = 0;
        goto LABEL_17;
      }
      goto LABEL_43;
    }
    v21 = (Win32kRS *)(v5 + 24);
    if ( WPP_MAIN_CB.Dpc.SystemArgument1 )
    {
      if ( !(unsigned int)Win32kRS::RegionCore_is_rect(v21, v19) )
        goto LABEL_30;
    }
    else if ( (unsigned int)REGION_CORE::get_sizeScan(v21) != 56 )
    {
LABEL_30:
      v23 = (const struct REGION_CORE *)WPP_MAIN_CB.Dpc.SystemArgument1;
      goto LABEL_31;
    }
    v23 = (const struct REGION_CORE *)WPP_MAIN_CB.Dpc.SystemArgument1;
    if ( WPP_MAIN_CB.Dpc.SystemArgument1 )
    {
      if ( !(unsigned int)Win32kRS::RegionCore_bContain_region(
                            (Win32kRS *)(v5 + 24),
                            (const struct REGION_CORE *)((v9 + 24) & -(__int64)(v9 != 0)),
                            v22) )
        goto LABEL_30;
    }
    else if ( *(_DWORD *)(v5 + 52) > *(_DWORD *)(((v9 + 24) & -(__int64)(v9 != 0)) + 0x1C)
           || *(_DWORD *)(v5 + 60) < *(_DWORD *)(((v9 + 24) & -(__int64)(v9 != 0)) + 0x24)
           || *(_DWORD *)(v5 + 56) > *(_DWORD *)(((v9 + 24) & -(__int64)(v9 != 0)) + 0x20)
           || *(_DWORD *)(v5 + 64) < *(_DWORD *)(((v9 + 24) & -(__int64)(v9 != 0)) + 0x28) )
    {
LABEL_31:
      v24 = (Win32kRS *)((v9 + 24) & -(__int64)(v9 != 0));
      if ( v23 )
      {
        if ( (unsigned int)Win32kRS::RegionCore_is_rect(v24, v23) )
          goto LABEL_33;
      }
      else if ( (unsigned int)REGION_CORE::get_sizeScan(v24) == 56 )
      {
LABEL_33:
        if ( WPP_MAIN_CB.Dpc.SystemArgument1 )
        {
          if ( (unsigned int)Win32kRS::RegionCore_bContain_region(
                               (Win32kRS *)((v9 + 24) & -(__int64)(v9 != 0)),
                               (const struct REGION_CORE *)(v5 + 24),
                               v25) )
          {
LABEL_38:
            v26 = (struct RGNOBJ *)&v51;
            v27 = &v50;
            goto LABEL_48;
          }
        }
        else if ( *(_DWORD *)(((v9 + 24) & -(__int64)(v9 != 0)) + 0x1C) <= *(_DWORD *)(v5 + 52)
               && *(_DWORD *)(((v9 + 24) & -(__int64)(v9 != 0)) + 0x24) >= *(_DWORD *)(v5 + 60)
               && *(_DWORD *)(((v9 + 24) & -(__int64)(v9 != 0)) + 0x20) <= *(_DWORD *)(v5 + 56)
               && *(_DWORD *)(((v9 + 24) & -(__int64)(v9 != 0)) + 0x28) >= *(_DWORD *)(v5 + 64) )
        {
          goto LABEL_38;
        }
      }
      if ( (_DWORD)v7 == 1
        && (unsigned int)REGION_CORE::get_sizeScan((REGION_CORE *)(v5 + 24)) == 56
        && (unsigned int)REGION_CORE::get_sizeScan((REGION_CORE *)(v9 + 24)) == 56 )
      {
        v53 = 0LL;
        v28 = *(_QWORD *)(v5 + 52);
        v29 = _mm_srli_si128(*(__m128i *)(v5 + 52), 8).m128i_u64[0];
        v30 = *(_QWORD *)(v9 + 52);
        v31 = _mm_srli_si128(*(__m128i *)(v9 + 52), 8).m128i_u64[0];
        v32 = *(_OWORD *)(v9 + 52);
        if ( (int)v28 > (int)v30 )
          v32 = *(_QWORD *)(v5 + 52);
        v33 = v31;
        v53.left = v32;
        if ( (int)v29 < (int)v31 )
          v33 = v29;
        v34 = HIDWORD(v28);
        v35 = HIDWORD(v30);
        v53.right = v33;
        if ( (int)v34 > (int)v35 )
          LODWORD(v35) = v34;
        v36 = HIDWORD(v31);
        v53.top = v35;
        if ( SHIDWORD(v29) < SHIDWORD(v31) )
          LODWORD(v36) = HIDWORD(v29);
        v53.bottom = v36;
        if ( v32 >= v33 || (int)v35 >= (int)v36 )
          RGNOBJ::vSet((RGNOBJ *)&v49);
        else
          RGNOBJ::vSet((RGNOBJ *)&v49, &v53);
LABEL_17:
        if ( v11 )
        {
          ++v49[4].bottom;
          *((_QWORD *)this + 20) = v49;
          if ( (*(_DWORD *)(v5 + 76))-- != 1 )
          {
LABEL_21:
            RGNOBJ::vDeleteRGNOBJ(&v51);
            return v11;
          }
          v16 = (ULONG_PTR *)&v50;
        }
        else
        {
          v16 = (ULONG_PTR *)&v49;
        }
        RGNOBJ::vDeleteRGNOBJ(v16);
        goto LABEL_21;
      }
      goto LABEL_42;
    }
    v26 = (struct RGNOBJ *)&v50;
    v27 = (Win32kRS **)&v51;
LABEL_48:
    if ( (_DWORD)v7 == 1 )
      v26 = (struct RGNOBJ *)v27;
    if ( !RGNOBJ::bCopy((RGNOBJ *)&v49, v26) )
      goto LABEL_51;
    goto LABEL_43;
  }
  if ( (_DWORD)v7 != 1 )
  {
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v49);
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_DEVICE_OBJECT *,__int64 (void *),&__int64 ObfDereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_DEVICE_OBJECT *,_DEVICE_OBJECT *,0,std::nullptr_t>>>::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_DEVICE_OBJECT *,__int64 (void *),&__int64 ObfDereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_DEVICE_OBJECT *,_DEVICE_OBJECT *,0,std::nullptr_t>>>(&v50);
    RGNMEMOBJ::vInitialize((RGNMEMOBJ *)&v50, 0x70u);
    RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v50);
    if ( v49 )
    {
      if ( v50 )
      {
        if ( (unsigned int)DC::bDpiScaledSurface(this) )
          v37 = *(_QWORD *)((char *)this + 532);
        else
          v37 = *((_QWORD *)this + 64);
        v38 = (_DWORD *)*((_QWORD *)this + 6);
        v39 = 0;
        *(_QWORD *)&v53.left = 0LL;
        v40 = HIDWORD(v37);
        top = 0;
        *(_QWORD *)&v53.right = v37;
        if ( *((_QWORD *)this + 62) )
        {
          SEMOBJSHARED<1>::SEMOBJSHARED<1>((HSEMAPHORE *)&v52);
          if ( (v38[10] & 0x20000) != 0 && *(int *)(*((_QWORD *)this + 62) + 112LL) < 0 )
          {
            v53.left += v38[644];
            v53.right += v38[644];
            v53.top += v38[645];
            v53.bottom += v38[645];
          }
          GreReleaseSemaphoreCommon<1,void (*)(HSEMAPHORE__ *)>(
            (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
            v52);
          LODWORD(v40) = v53.bottom;
          LODWORD(v37) = v53.right;
          top = v53.top;
          v39 = v53.left;
        }
        v42 = (char *)this + 1024;
        if ( (*((_DWORD *)this + 10) & 1) == 0 )
          v42 = (char *)this + 1016;
        v43 = v39 - *(_DWORD *)v42;
        v44 = v37 - *(_DWORD *)v42;
        v53.left = v43;
        v45 = *((_DWORD *)v42 + 1);
        v46 = top - v45;
        v47 = v40 - v45;
        v53.right = v44;
        v53.top = v46;
        v53.bottom = v47;
        if ( v46 == v47 || v43 == v44 || v43 < v44 && v46 < v47 )
        {
          RGNOBJ::vSet((RGNOBJ *)&v50, &v53);
          v11 = RGNOBJ::iCombine((RGNOBJ *)&v49, (struct RGNOBJ *)&v50, (struct RGNOBJ *)&v51, v7);
          if ( v11 )
          {
            ++v49[4].bottom;
            *((_QWORD *)this + 20) = v49;
            goto LABEL_76;
          }
        }
        else
        {
          v11 = 0;
        }
        RGNOBJ::vDeleteRGNOBJ((ULONG_PTR *)&v49);
        goto LABEL_76;
      }
      RGNOBJ::vDeleteRGNOBJ((ULONG_PTR *)&v49);
    }
    v11 = 0;
LABEL_76:
    RGNOBJ::vDeleteRGNOBJ(&v51);
    RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v50);
    return v11;
  }
  ++*(_DWORD *)(v9 + 76);
  *((_QWORD *)this + 20) = v9;
  return v11;
}
