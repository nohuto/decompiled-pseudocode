/*
 * XREFs of PiDqPnPGetObjectPropertyInBestLocale @ 0x1408D1D9C
 * Callers:
 *     PiDqActionDataGetRequestedProperties @ 0x1408D1B70 (PiDqActionDataGetRequestedProperties.c)
 *     PiDqActionDataGetAllPropertiesInBestLanguage @ 0x1408E0590 (PiDqActionDataGetAllPropertiesInBestLanguage.c)
 *     PiDqActionDataGetChangedProperties @ 0x140A406E4 (PiDqActionDataGetChangedProperties.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     _PnpGetGenericStoreProperty @ 0x1408C5920 (_PnpGetGenericStoreProperty.c)
 *     _PnpGetObjectPropertyWorker @ 0x1408CB050 (_PnpGetObjectPropertyWorker.c)
 *     PiPnpRtlObjectActionCallback @ 0x1408CC090 (PiPnpRtlObjectActionCallback.c)
 *     PiDqPnPGetObjectProperty @ 0x1408D24E0 (PiDqPnPGetObjectProperty.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 PiDqPnPGetObjectPropertyInBestLocale(unsigned __int16 *a1, unsigned int a2, void *a3, __int64 a4, int a5, ...)
{
  __int64 v5; // rsi
  const WCHAR *v6; // r12
  __int64 v7; // r14
  __int128 v8; // xmm0
  void *v9; // r15
  ULONG_PTR v10; // r13
  int v11; // eax
  __int64 v12; // rdx
  const WCHAR *v13; // rax
  signed int GenericStoreProperty; // ebx
  __int64 v15; // r8
  unsigned __int64 v16; // rdi
  _WORD *Pool2; // rax
  _WORD *v18; // rcx
  unsigned __int64 v19; // rdi
  unsigned __int64 v20; // rdx
  signed __int64 v21; // r8
  __int16 v22; // ax
  _WORD *v23; // rax
  _QWORD *v24; // r14
  __int64 (__fastcall *v25)(PVOID, unsigned __int16 *, __int64, int, int, __int64); // rdi
  int v26; // eax
  void *v27; // rcx
  void *v28; // rcx
  __int64 v29; // rax
  signed int ObjectPropertyWorker; // eax
  int v31; // eax
  void *v33; // rcx
  void *v34; // rcx
  _DWORD v35[4]; // [rsp+68h] [rbp-61h] BYREF
  _QWORD v36[2]; // [rsp+78h] [rbp-51h] BYREF
  HANDLE v37; // [rsp+88h] [rbp-41h]
  const WCHAR *v38; // [rsp+90h] [rbp-39h]
  __int64 v39; // [rsp+98h] [rbp-31h]
  int *v40; // [rsp+A0h] [rbp-29h]
  void *v41; // [rsp+A8h] [rbp-21h]
  ULONG v42; // [rsp+B0h] [rbp-19h]
  int v43; // [rsp+B4h] [rbp-15h]
  ULONG *v44; // [rsp+B8h] [rbp-11h]
  __int64 v45; // [rsp+C0h] [rbp-9h]
  const WCHAR *v50; // [rsp+140h] [rbp+77h] BYREF
  va_list va; // [rsp+140h] [rbp+77h]
  _OWORD *v52; // [rsp+148h] [rbp+7Fh]
  va_list va1; // [rsp+150h] [rbp+87h] BYREF

  va_start(va1, a5);
  va_start(va, a5);
  v50 = va_arg(va1, const WCHAR *);
  v52 = va_arg(va1, _OWORD *);
  v5 = (__int64)v52;
  v6 = v50;
  v7 = a4;
  *v52 = 0LL;
  *(_OWORD *)(v5 + 16) = 0LL;
  *(_OWORD *)(v5 + 32) = 0LL;
  while ( 2 )
  {
    if ( !*v6 )
      return (unsigned int)PiDqPnPGetObjectProperty((_DWORD)a1, a2, (_DWORD)a3, v7, a5, 0LL, v5);
    v8 = *(_OWORD *)v7;
    v9 = 0LL;
    LODWORD(v50) = 512;
    LODWORD(v10) = 0;
    v35[0] = 0;
    *(_OWORD *)v5 = v8;
    v11 = *(_DWORD *)(v7 + 16);
    v12 = 0x7FFFFFFFLL;
    *(_QWORD *)(v5 + 32) = 0LL;
    *(_DWORD *)(v5 + 16) = v11;
    *(_DWORD *)(v5 + 20) = a5;
    v13 = v6;
    *(_QWORD *)(v5 + 40) = 0LL;
    *(_QWORD *)(v5 + 24) = 0LL;
    do
    {
      if ( !*v13 )
        break;
      ++v13;
      --v12;
    }
    while ( v12 );
    GenericStoreProperty = v12 == 0 ? 0xC000000D : 0;
    v15 = (0x7FFFFFFF - v12) & -(__int64)(v12 != 0);
    if ( !v12 )
      goto LABEL_63;
    if ( !v15 )
      goto LABEL_19;
    v16 = 2 * (v15 + 1);
    if ( !is_mul_ok(v15 + 1, 2uLL) )
    {
      GenericStoreProperty = -1073741675;
      goto LABEL_63;
    }
    Pool2 = (_WORD *)ExAllocatePool2(0x100uLL, 2 * (v15 + 1), 0x58706E50u);
    *(_QWORD *)(v5 + 24) = Pool2;
    v18 = Pool2;
    if ( !Pool2 )
    {
      GenericStoreProperty = -1073741670;
LABEL_63:
      v33 = *(void **)(v5 + 24);
      if ( v33 )
      {
        ExFreePoolWithTag(v33, 0x58706E50u);
        *(_QWORD *)(v5 + 24) = 0LL;
      }
      goto LABEL_19;
    }
    v19 = v16 >> 1;
    if ( v19 - 1 > 0x7FFFFFFE )
    {
      GenericStoreProperty = -1073741811;
      if ( v19 )
        *Pool2 = 0;
    }
    else
    {
      v20 = 2147483646 - v19;
      v21 = (char *)v6 - (char *)Pool2;
      do
      {
        if ( !(v20 + v19) )
          break;
        v22 = *(_WORD *)((char *)v18 + v21);
        if ( !v22 )
          break;
        *v18++ = v22;
        --v19;
      }
      while ( v19 );
      v23 = v18 - 1;
      if ( v19 )
        v23 = v18;
      GenericStoreProperty = v19 == 0 ? 0x80000005 : 0;
      *v23 = 0;
    }
    if ( GenericStoreProperty < 0 )
      goto LABEL_63;
LABEL_19:
    if ( GenericStoreProperty < 0 )
      goto LABEL_46;
    do
    {
      if ( (unsigned int)v50 > (unsigned int)v10 )
      {
        v10 = (unsigned int)v50;
        if ( v9 )
          ExFreePoolWithTag(v9, 0x58706E50u);
        v9 = (void *)ExAllocatePool2(0x100uLL, v10, 0x58706E50u);
        if ( !v9 )
        {
          GenericStoreProperty = -1073741670;
          goto LABEL_66;
        }
      }
      LODWORD(v50) = 0;
      if ( a2 )
      {
        v24 = *(_QWORD **)&PiPnpRtlCtx;
        v45 = 0LL;
        v37 = a3;
        v25 = *(__int64 (__fastcall **)(PVOID, unsigned __int16 *, __int64, int, int, __int64))(*(_QWORD *)&PiPnpRtlCtx
                                                                                              + 488LL);
        v39 = a4;
        v40 = v35;
        va_copy((va_list)v44, va);
        v36[0] = 0LL;
        v36[1] = 0LL;
        v43 = 0;
        v38 = v6;
        v41 = v9;
        v42 = v10;
        if ( v25 )
        {
          if ( v25 == PiPnpRtlObjectActionCallback )
            v26 = PiPnpRtlObjectActionCallback(*(PVOID *)&PiPnpRtlCtx, a1, a2, 8, 1, (__int64)v36);
          else
            v26 = guard_dispatch_icall_no_overrides(*(_QWORD *)&PiPnpRtlCtx, a1);
          if ( v26 == -1073741822 )
          {
            v25 = 0LL;
          }
          else
          {
            if ( v26 == -1073741536 )
            {
LABEL_30:
              GenericStoreProperty = v36[0];
LABEL_31:
              v7 = a4;
              continue;
            }
            if ( v26 )
            {
              GenericStoreProperty = -1073741595;
              goto LABEL_31;
            }
          }
        }
        ObjectPropertyWorker = PnpGetObjectPropertyWorker(v24, a1, a2, v37, v38, v39, v40, v41, v42, v44, v45);
        GenericStoreProperty = ObjectPropertyWorker;
        if ( !v25 )
          goto LABEL_31;
        LODWORD(v36[0]) = ObjectPropertyWorker;
        v31 = v25 == PiPnpRtlObjectActionCallback
            ? PiPnpRtlObjectActionCallback(v24, a1, a2, 8, 2, (__int64)v36)
            : guard_dispatch_icall_no_overrides(v24, a1);
        if ( v31 == -1073741822 )
          goto LABEL_31;
        if ( v31 != -1073741536 )
        {
          if ( v31 )
            GenericStoreProperty = -1073741595;
          goto LABEL_31;
        }
        goto LABEL_30;
      }
      GenericStoreProperty = PnpGetGenericStoreProperty(
                               *(__int64 *)&PiPnpRtlCtx,
                               (__int64)a3,
                               v6,
                               v7,
                               v35,
                               v9,
                               v10,
                               (const WCHAR **)va);
    }
    while ( GenericStoreProperty == -1073741789 );
    if ( GenericStoreProperty >= 0 )
    {
      *(_DWORD *)(v5 + 32) = v35[0];
      *(_DWORD *)(v5 + 36) = (_DWORD)v50;
      *(_QWORD *)(v5 + 40) = v9;
      goto LABEL_36;
    }
    if ( v9 )
      ExFreePoolWithTag(v9, 0x58706E50u);
LABEL_46:
    if ( GenericStoreProperty == -1073741275 )
    {
      GenericStoreProperty = 0;
LABEL_36:
      if ( *(_DWORD *)(v5 + 32) )
        return (unsigned int)GenericStoreProperty;
      v27 = *(void **)(v5 + 24);
      if ( v27 )
        ExFreePoolWithTag(v27, 0x58706E50u);
      v28 = *(void **)(v5 + 40);
      if ( v28 )
        ExFreePoolWithTag(v28, 0x58706E50u);
      v29 = -1LL;
      do
        ++v29;
      while ( v6[v29] );
      v6 += v29 + 1;
      continue;
    }
    break;
  }
LABEL_66:
  v34 = *(void **)(v5 + 24);
  if ( v34 )
    ExFreePoolWithTag(v34, 0x58706E50u);
  return (unsigned int)GenericStoreProperty;
}
