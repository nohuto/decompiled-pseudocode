/*
 * XREFs of ?MemoryLimitNotification@ModernResourceEnforcer@@QEAAXPEAT_RM_SID@@KPEBGK_K@Z @ 0x18001C91C
 * Callers:
 *     PsmMemoryLimitNotification2 @ 0x18001DD00 (PsmMemoryLimitNotification2.c)
 * Callees:
 *     ??0ModernResourceEnforcerWorkItem@ModernResourceEnforcer@@QEAA@XZ @ 0x18001D280 (--0ModernResourceEnforcerWorkItem@ModernResourceEnforcer@@QEAA@XZ.c)
 *     ?capacity@?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@QEBA_KXZ @ 0x18001D2BC (-capacity@-$basic_string@GU-$char_traits@G@utl@@V-$allocator@G@2@@utl@@QEBA_KXZ.c)
 *     ??_GModernResourceEnforcerWorkItem@ModernResourceEnforcer@@QEAAPEAXI@Z @ 0x18005BE3C (--_GModernResourceEnforcerWorkItem@ModernResourceEnforcer@@QEAAPEAXI@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18007236C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x180073848 (--2@YAPEAX_K@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180073888 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     memcpy_0 @ 0x1800A7AF2 (memcpy_0.c)
 *     memmove_0 @ 0x1800A7AFE (memmove_0.c)
 *     __security_check_cookie @ 0x1800A7B40 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800A9010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall ModernResourceEnforcer::MemoryLimitNotification(
        ModernResourceEnforcer *this,
        union _RM_SID *a2,
        int a3,
        unsigned __int16 *a4,
        unsigned int a5,
        unsigned __int64 a6)
{
  unsigned __int64 v7; // rbx
  int v8; // r15d
  union _RM_SID *v10; // r13
  ModernResourceEnforcer::ModernResourceEnforcerWorkItem *v11; // rax
  unsigned __int64 v12; // r14
  __int64 v13; // rax
  __int64 v14; // rdi
  __int64 v15; // r14
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // r12
  unsigned __int64 v18; // rax
  unsigned int v19; // edx
  unsigned __int64 v20; // r12
  __int64 v21; // rcx
  char *v22; // rax
  char *v23; // r13
  size_t v24; // rbx
  char *v25; // rax
  __int64 v26; // rax
  __int128 v27; // xmm1
  int v28; // eax
  __int128 v29; // xmm0
  __int128 v30; // xmm1
  ModernResourceEnforcer *v31; // rdi
  ModernResourceEnforcer **v32; // rcx
  size_t v33; // rbx
  _WORD *v34; // rcx
  int v35; // [rsp+30h] [rbp-69h] BYREF
  void *Src; // [rsp+38h] [rbp-61h]
  union _RM_SID *v37; // [rsp+40h] [rbp-59h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+48h] [rbp-51h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+60h] [rbp-39h] BYREF
  void *v40; // [rsp+70h] [rbp-29h]
  int v41; // [rsp+78h] [rbp-21h]
  int v42; // [rsp+7Ch] [rbp-1Dh]
  int *v43; // [rsp+80h] [rbp-19h]
  __int64 v44; // [rsp+88h] [rbp-11h]
  union _RM_SID **v45; // [rsp+90h] [rbp-9h]
  __int64 v46; // [rsp+98h] [rbp-1h]

  Src = a4;
  v7 = 0LL;
  v35 = a3;
  v37 = a2;
  v8 = 0;
  v10 = a2;
  v11 = (ModernResourceEnforcer::ModernResourceEnforcerWorkItem *)operator new(0x98uLL);
  if ( !v11
    || (v13 = ModernResourceEnforcer::ModernResourceEnforcerWorkItem::ModernResourceEnforcerWorkItem(v11),
        (v14 = v13) == 0) )
  {
    v8 = -1073741801;
LABEL_3:
    v12 = a6;
    goto LABEL_23;
  }
  *(_DWORD *)v13 = 1;
  v15 = v13 + 8;
  if ( a4 )
  {
    v7 = -1LL;
    do
      ++v7;
    while ( a4[v7] );
  }
  if ( *(_QWORD *)(v13 + 8) == v13 + 24 )
    v16 = 7LL;
  else
    v16 = (__int64)(*(_QWORD *)(v13 + 24) - *(_QWORD *)(v13 + 8)) >> 1;
  if ( v7 > v16 )
  {
    v17 = v7;
    v18 = 2
        * utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>::capacity(v15)
        + 1;
    if ( v18 >= v7 )
      v17 = v18;
    if ( v17 > 0x3FFFFFFFFFFFFFF7LL )
    {
      if ( v7 <= 0x3FFFFFFFFFFFFFF7LL )
      {
        v20 = 0x3FFFFFFFFFFFFFF8LL;
        v21 = 0x3FFFFFFFFFFFFFF8LL;
LABEL_15:
        v22 = (char *)operator new(2 * v21, (const struct std::nothrow_t *)&std::nothrow);
        v23 = v22;
        if ( v22 )
        {
          v24 = 2 * v7;
          memcpy_0(v22, Src, v24);
          v25 = &v23[v24];
          *(_WORD *)&v23[v24] = 0;
          Src = &v23[v24];
          if ( *(_QWORD *)v15 != v15 + 16 )
          {
            operator delete(*(void **)v15);
            v25 = (char *)Src;
          }
          *(_QWORD *)(v15 + 8) = v25;
          v26 = (__int64)&v23[2 * v20 - 2];
          *(_QWORD *)v15 = v23;
          v10 = v37;
          *(_QWORD *)(v15 + 16) = v26;
          goto LABEL_19;
        }
      }
    }
    else
    {
      v20 = v17 + 1;
      v21 = v20;
      if ( v20 <= 0x7FFFFFFFFFFFFFFFLL )
        goto LABEL_15;
    }
    v8 = -1073741801;
    ModernResourceEnforcer::ModernResourceEnforcerWorkItem::`scalar deleting destructor'(
      (ModernResourceEnforcer::ModernResourceEnforcerWorkItem *)v14,
      v19);
    goto LABEL_3;
  }
  v33 = 2 * v7;
  memmove_0(*(void **)v15, a4, v33);
  v34 = (_WORD *)(v33 + *(_QWORD *)v15);
  *(_QWORD *)(v15 + 8) = v34;
  *v34 = 0;
LABEL_19:
  v27 = *((_OWORD *)v10 + 1);
  v12 = a6;
  *(_OWORD *)(v14 + 40) = *(_OWORD *)v10;
  *(_DWORD *)(v14 + 112) = a5;
  v28 = *((_DWORD *)v10 + 16);
  v29 = *((_OWORD *)v10 + 2);
  *(_QWORD *)(v14 + 120) = a6;
  *(_OWORD *)(v14 + 56) = v27;
  *(_DWORD *)(v14 + 128) = 1;
  v30 = *((_OWORD *)v10 + 3);
  *(_OWORD *)(v14 + 72) = v29;
  *(_OWORD *)(v14 + 88) = v30;
  *(_DWORD *)(v14 + 104) = v28;
  *(_DWORD *)(v14 + 108) = v35;
  RtlEnterCriticalSection((PRTL_CRITICAL_SECTION)((char *)this + 224));
  v31 = (ModernResourceEnforcer *)(v14 + 136);
  v32 = (ModernResourceEnforcer **)*((_QWORD *)this + 35);
  if ( *v32 != (ModernResourceEnforcer *)((char *)this + 272) )
    __fastfail(3u);
  *(_QWORD *)v31 = (char *)this + 272;
  *((_QWORD *)v31 + 1) = v32;
  *v32 = v31;
  *((_QWORD *)this + 35) = v31;
  if ( (*((_BYTE *)this + 296) & 1) == 0 )
  {
    (*(void (__fastcall **)(ModernResourceEnforcer *))(*(_QWORD *)this + 8LL))(this);
    TpPostWork(*((_QWORD *)this + 33));
    *((_DWORD *)this + 74) |= 1u;
  }
  RtlLeaveCriticalSection((PRTL_CRITICAL_SECTION)((char *)this + 224));
LABEL_23:
  if ( (unsigned int)dword_1800E8278 > 5 && (byte_1800E8288 & 1) != 0 && (qword_1800E8290 & 1) == qword_1800E8290 )
  {
    v37 = (union _RM_SID *)v12;
    v44 = 4LL;
    v45 = &v37;
    v35 = v8;
    v43 = &v35;
    *(_DWORD *)&EventDescriptor.Level = 5;
    UserData.Ptr = (ULONGLONG)off_1800E8280;
    v46 = 8LL;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    EventDescriptor.Keyword = 1LL;
    UserData.Size = *(unsigned __int16 *)off_1800E8280;
    v40 = &unk_1800D75E7;
    UserData.Reserved = 2;
    v41 = 42;
    v42 = 1;
    LODWORD(Src) = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EventWriteTransfer(qword_1800E8298, &EventDescriptor, 0LL, 0LL, 4u, &UserData);
  }
}
