/*
 * XREFs of PsmHostStateNotification2 @ 0x18001CD40
 * Callers:
 *     <none>
 * Callees:
 *     ?HampAllocateHeap@@YAPEAX_K@Z @ 0x18000EF80 (-HampAllocateHeap@@YAPEAX_K@Z.c)
 *     ?HampFreeHeap@@YAXPEAX@Z @ 0x18000F7E0 (-HampFreeHeap@@YAXPEAX@Z.c)
 *     CempLockTrackerClearForThread @ 0x18001B7B0 (CempLockTrackerClearForThread.c)
 *     ??0ModernResourceEnforcerWorkItem@ModernResourceEnforcer@@QEAA@XZ @ 0x18001D300 (--0ModernResourceEnforcerWorkItem@ModernResourceEnforcer@@QEAA@XZ.c)
 *     ?capacity@?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@QEBA_KXZ @ 0x18001D33C (-capacity@-$basic_string@GU-$char_traits@G@utl@@V-$allocator@G@2@@utl@@QEBA_KXZ.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x18001D360 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     ??$_delete@UModernResourceEnforcerWorkItem@ModernResourceEnforcer@@@tlx@@YAXPEAUModernResourceEnforcerWorkItem@ModernResourceEnforcer@@@Z @ 0x18001D3E0 (--$_delete@UModernResourceEnforcerWorkItem@ModernResourceEnforcer@@@tlx@@YAXPEAUModernResourceEn.c)
 *     ?_Uninit@?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@AEAAXXZ @ 0x18001D8FC (-_Uninit@-$basic_string@GU-$char_traits@G@utl@@V-$allocator@G@2@@utl@@AEAAXXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18007249C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x180073978 (--2@YAPEAX_K@Z.c)
 *     memcpy_0 @ 0x1800A7802 (memcpy_0.c)
 *     memmove_0 @ 0x1800A780E (memmove_0.c)
 *     memset_0 @ 0x1800A781A (memset_0.c)
 *     __security_check_cookie @ 0x1800A7850 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800A8010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall PsmHostStateNotification2(
        unsigned __int8 *Src,
        int a2,
        void *a3,
        int *a4,
        __int64 *a5,
        int a6,
        int a7,
        int a8)
{
  unsigned __int64 v11; // rdi
  unsigned int v12; // r13d
  unsigned int v13; // r12d
  ULONG v14; // eax
  __int64 v15; // rsi
  ModernResourceEnforcer::ModernResourceEnforcerWorkItem *v16; // rax
  __int64 v17; // rax
  __int64 v18; // rbx
  int v19; // eax
  const wchar_t *v20; // rcx
  __int64 v21; // rax
  int v22; // eax
  __int64 v23; // r14
  _QWORD *v24; // r12
  unsigned __int64 v25; // rax
  unsigned __int64 v26; // rax
  unsigned __int64 v27; // rax
  __int64 v28; // r13
  char *v29; // rax
  char *v30; // r15
  size_t v31; // rdi
  char *v32; // rdi
  __int64 v33; // rax
  __int128 v34; // xmm1
  int v35; // eax
  __int128 v36; // xmm0
  __int128 v37; // xmm1
  _QWORD *v38; // rbx
  _QWORD *v39; // rcx
  size_t v40; // rdi
  _WORD *v41; // rcx
  PVOID Heap; // rdi
  PVOID v43; // r14
  void *v44; // rdx
  int v45; // [rsp+30h] [rbp-D0h] BYREF
  int v46; // [rsp+34h] [rbp-CCh]
  int v47; // [rsp+38h] [rbp-C8h] BYREF
  int v48; // [rsp+3Ch] [rbp-C4h] BYREF
  _DWORD v49[2]; // [rsp+40h] [rbp-C0h] BYREF
  void *v50; // [rsp+48h] [rbp-B8h]
  void *v51; // [rsp+50h] [rbp-B0h]
  __int64 v52; // [rsp+58h] [rbp-A8h] BYREF
  void *Srca; // [rsp+60h] [rbp-A0h]
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+68h] [rbp-98h] BYREF
  _OWORD v55[4]; // [rsp+80h] [rbp-80h] BYREF
  int v56; // [rsp+C0h] [rbp-40h]
  _BYTE v57[144]; // [rsp+D0h] [rbp-30h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+160h] [rbp+60h] BYREF
  void *v59; // [rsp+170h] [rbp+70h]
  int v60; // [rsp+178h] [rbp+78h]
  int v61; // [rsp+17Ch] [rbp+7Ch]
  const wchar_t *v62; // [rsp+180h] [rbp+80h]
  int v63; // [rsp+188h] [rbp+88h]
  int v64; // [rsp+18Ch] [rbp+8Ch]
  unsigned __int8 *v65; // [rsp+190h] [rbp+90h]
  int v66; // [rsp+198h] [rbp+98h]
  int v67; // [rsp+19Ch] [rbp+9Ch]
  _DWORD *v68; // [rsp+1A0h] [rbp+A0h]
  __int64 v69; // [rsp+1A8h] [rbp+A8h]
  int *v70; // [rsp+1B0h] [rbp+B0h]
  __int64 v71; // [rsp+1B8h] [rbp+B8h]
  int *v72; // [rsp+1C0h] [rbp+C0h]
  __int64 v73; // [rsp+1C8h] [rbp+C8h]
  __int64 *v74; // [rsp+1D0h] [rbp+D0h]
  __int64 v75; // [rsp+1D8h] [rbp+D8h]
  int *v76; // [rsp+1E0h] [rbp+E0h]
  __int64 v77; // [rsp+1E8h] [rbp+E8h]

  Srca = a3;
  v46 = a2;
  v51 = a5;
  v50 = a4;
  memset_0(v57, 0, 0x88uLL);
  v11 = -1LL;
  if ( (unsigned int)dword_1800E7278 > 4 && (byte_1800E7288 & 1) != 0 && (qword_1800E7290 & 1) == qword_1800E7290 )
  {
    v13 = a8;
    v12 = a6;
    v52 = *a5;
    v47 = *a4;
    v49[0] = v46;
    v76 = &v45;
    v74 = &v52;
    v72 = &v47;
    v70 = &v48;
    v68 = v49;
    v45 = a8;
    v48 = a6;
    v77 = 4LL;
    v75 = 8LL;
    v73 = 4LL;
    v71 = 4LL;
    v69 = 4LL;
    v19 = Src[1];
    v65 = Src;
    v67 = 0;
    v66 = 4 * v19 + 8;
    if ( a3 )
    {
      v20 = (const wchar_t *)a3;
      v21 = -1LL;
      do
        ++v21;
      while ( *((_WORD *)a3 + v21) );
      v22 = 2 * v21 + 2;
    }
    else
    {
      v20 = &word_1800C10AC;
      v22 = 2;
    }
    v63 = v22;
    *(_DWORD *)&EventDescriptor.Level = 4;
    UserData.Ptr = (ULONGLONG)off_1800E7280;
    v62 = v20;
    v64 = 0;
    EventDescriptor.Keyword = 1LL;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    UserData.Size = *(unsigned __int16 *)off_1800E7280;
    v59 = &unk_1800D0954;
    v61 = 1;
    UserData.Reserved = 2;
    v60 = 109;
    v49[1] = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EventWriteTransfer(qword_1800E7298, &EventDescriptor, 0LL, 0LL, 9u, &UserData);
  }
  else
  {
    v12 = a6;
    v13 = a8;
  }
  if ( HampLockTrackerId != -1 && TlsGetValue(HampLockTrackerId) )
  {
    v45 = 0;
  }
  else
  {
    HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v57);
    v45 = 1;
  }
  memset_0(v55, 0, 0x44uLL);
  v14 = RtlLengthSid(Src);
  memcpy_0(v55, Src, v14);
  v15 = *((_QWORD *)RmSvcGlobals + 5);
  if ( v13 > 1 || v12 == 1 && *a4 == 6 )
    goto LABEL_11;
  v16 = (ModernResourceEnforcer::ModernResourceEnforcerWorkItem *)operator new(0x98uLL);
  if ( !v16 )
    goto LABEL_11;
  v17 = ModernResourceEnforcer::ModernResourceEnforcerWorkItem::ModernResourceEnforcerWorkItem(v16);
  v18 = v17;
  if ( !v17 )
    goto LABEL_11;
  v23 = v17 + 8;
  if ( a3 )
  {
    do
      ++v11;
    while ( *((_WORD *)a3 + v11) );
  }
  else
  {
    v11 = 0LL;
  }
  v24 = (_QWORD *)(v17 + 24);
  if ( *(_QWORD *)(v17 + 8) == v17 + 24 )
    v25 = 7LL;
  else
    v25 = (__int64)(*v24 - *(_QWORD *)v23) >> 1;
  if ( v11 <= v25 )
  {
    v40 = 2 * v11;
    memmove_0(*(void **)v23, a3, v40);
    v41 = (_WORD *)(v40 + *(_QWORD *)v23);
    *(_QWORD *)(v23 + 8) = v41;
    *v41 = 0;
  }
  else
  {
    v26 = 2
        * utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>::capacity(v23)
        + 1;
    if ( v26 < v11 )
      v26 = v11;
    if ( v26 > 0x3FFFFFFFFFFFFFF7LL )
    {
      if ( v11 > 0x3FFFFFFFFFFFFFF7LL )
        goto LABEL_34;
      v27 = 0x3FFFFFFFFFFFFFF8LL;
    }
    else
    {
      v27 = v26 + 1;
      if ( v27 > 0x7FFFFFFFFFFFFFFFLL )
      {
LABEL_34:
        tlx::_delete<ModernResourceEnforcer::ModernResourceEnforcerWorkItem>(v18);
        goto LABEL_11;
      }
    }
    v28 = 2 * v27;
    v29 = (char *)operator new(2 * v27, (const struct std::nothrow_t *)&std::nothrow);
    v30 = v29;
    if ( !v29 )
      goto LABEL_34;
    v31 = 2 * v11;
    memcpy_0(v29, Srca, v31);
    v32 = &v30[v31];
    *(_WORD *)v32 = 0;
    utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>::_Uninit(v23);
    v33 = v28 - 2;
    *(_QWORD *)v23 = v30;
    v12 = a6;
    *v24 = &v30[v33];
    *(_QWORD *)(v23 + 8) = v32;
  }
  if ( v12 > 1 )
  {
    Heap = HampAllocateHeap(8LL * v12);
    if ( !Heap )
      goto LABEL_34;
    v43 = HampAllocateHeap(4LL * v12);
    if ( !v43 )
    {
      HampFreeHeap(Heap);
      goto LABEL_34;
    }
    memcpy_0(Heap, v51, 8LL * v12);
    v44 = v50;
    *(_QWORD *)(v18 + 120) = Heap;
    memcpy_0(v43, v44, 4LL * v12);
    *(_QWORD *)(v18 + 112) = v43;
  }
  else
  {
    *(_DWORD *)(v18 + 112) = *(_DWORD *)v50;
    *(_QWORD *)(v18 + 120) = *(_QWORD *)v51;
  }
  v34 = v55[1];
  *(_OWORD *)(v18 + 40) = v55[0];
  *(_DWORD *)(v18 + 132) = a8;
  v35 = v56;
  v36 = v55[2];
  *(_OWORD *)(v18 + 56) = v34;
  *(_DWORD *)v18 = 2;
  v37 = v55[3];
  *(_OWORD *)(v18 + 72) = v36;
  *(_DWORD *)(v18 + 128) = v12;
  *(_OWORD *)(v18 + 88) = v37;
  *(_DWORD *)(v18 + 104) = v35;
  *(_DWORD *)(v18 + 108) = v46;
  RtlEnterCriticalSection((PRTL_CRITICAL_SECTION)(v15 + 224));
  v38 = (_QWORD *)(v18 + 136);
  v39 = *(_QWORD **)(v15 + 280);
  if ( *v39 != v15 + 272 )
    __fastfail(3u);
  *v38 = v15 + 272;
  v38[1] = v39;
  *v39 = v38;
  *(_QWORD *)(v15 + 280) = v38;
  if ( (*(_BYTE *)(v15 + 296) & 1) == 0 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 8LL))(v15);
    TpPostWork(*(_QWORD *)(v15 + 264));
    *(_DWORD *)(v15 + 296) |= 1u;
  }
  RtlLeaveCriticalSection((PRTL_CRITICAL_SECTION)(v15 + 224));
LABEL_11:
  if ( v45 )
    CempLockTrackerClearForThread(HampLockTrackerId);
}
