/*
 * XREFs of PiDqPnPGetObjectProperty @ 0x1408D24E0
 * Callers:
 *     PiDqActionDataGetRequestedProperties @ 0x1408D1B70 (PiDqActionDataGetRequestedProperties.c)
 *     PiDqPnPGetObjectPropertyInBestLocale @ 0x1408D1D9C (PiDqPnPGetObjectPropertyInBestLocale.c)
 *     PiDqPropertyCallback @ 0x1408D2280 (PiDqPropertyCallback.c)
 *     PiDqActionDataGetAllPropertiesInAllLanguages @ 0x14097FDF8 (PiDqActionDataGetAllPropertiesInAllLanguages.c)
 *     PiDqActionDataGetChangedProperties @ 0x140A406E4 (PiDqActionDataGetChangedProperties.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     _PnpGetGenericStoreProperty @ 0x1408C5920 (_PnpGetGenericStoreProperty.c)
 *     _PnpGetObjectPropertyWorker @ 0x1408CB050 (_PnpGetObjectPropertyWorker.c)
 *     PiPnpRtlObjectActionCallback @ 0x1408CC090 (PiPnpRtlObjectActionCallback.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiDqPnPGetObjectProperty(
        unsigned __int16 *a1,
        unsigned int a2,
        void *a3,
        __int64 a4,
        int a5,
        const WCHAR *a6,
        __int64 a7)
{
  __int128 v7; // xmm0
  const WCHAR *v8; // rdi
  void *v10; // r15
  ULONG_PTR v11; // r12
  int GenericStoreProperty; // esi
  const WCHAR *v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rdx
  unsigned __int64 v16; // rbx
  char *Pool2; // rax
  unsigned __int64 v18; // rbx
  unsigned __int64 v19; // rdx
  signed __int64 v20; // r8
  __int16 v21; // cx
  _QWORD *v22; // rdi
  __int64 (__fastcall *v23)(PVOID, unsigned __int16 *, __int64, int, int, __int64); // rbx
  int v24; // eax
  int ObjectPropertyWorker; // eax
  int v27; // eax
  void *v28; // rcx
  void *v29; // rcx
  unsigned int v30; // [rsp+60h] [rbp-51h] BYREF
  _DWORD v31[3]; // [rsp+64h] [rbp-4Dh] BYREF
  _QWORD v32[2]; // [rsp+70h] [rbp-41h] BYREF
  HANDLE v33; // [rsp+80h] [rbp-31h]
  const WCHAR *v34; // [rsp+88h] [rbp-29h]
  __int64 v35; // [rsp+90h] [rbp-21h]
  int *v36; // [rsp+98h] [rbp-19h]
  void *v37; // [rsp+A0h] [rbp-11h]
  ULONG v38; // [rsp+A8h] [rbp-9h]
  int v39; // [rsp+ACh] [rbp-5h]
  ULONG *v40; // [rsp+B0h] [rbp-1h]
  __int64 v41; // [rsp+B8h] [rbp+7h]

  v7 = *(_OWORD *)a4;
  v8 = a6;
  v30 = 512;
  v10 = 0LL;
  v31[0] = 0;
  LODWORD(v11) = 0;
  GenericStoreProperty = 0;
  *(_OWORD *)a7 = v7;
  *(_DWORD *)(a7 + 16) = *(_DWORD *)(a4 + 16);
  *(_DWORD *)(a7 + 20) = a5;
  *(_QWORD *)(a7 + 32) = 0LL;
  *(_QWORD *)(a7 + 40) = 0LL;
  *(_QWORD *)(a7 + 24) = 0LL;
  if ( a6 )
  {
    v13 = a6;
    v14 = 0x7FFFFFFFLL;
    do
    {
      if ( !*v13 )
        break;
      ++v13;
      --v14;
    }
    while ( v14 );
    GenericStoreProperty = -1073741811;
    if ( v14 )
    {
      GenericStoreProperty = 0;
      v15 = 0x7FFFFFFF - v14;
      if ( 0x7FFFFFFF == v14 )
        goto LABEL_18;
      v16 = 2 * (v15 + 1);
      if ( is_mul_ok(v15 + 1, 2uLL) )
      {
        Pool2 = (char *)ExAllocatePool2(0x100uLL, 2 * (v15 + 1), 0x58706E50u);
        *(_QWORD *)(a7 + 24) = Pool2;
        if ( Pool2 )
        {
          v18 = v16 >> 1;
          if ( v18 - 1 > 0x7FFFFFFE )
          {
            GenericStoreProperty = -1073741811;
            if ( v18 )
              *(_WORD *)Pool2 = 0;
          }
          else
          {
            GenericStoreProperty = 0;
            v19 = 2147483646 - v18;
            v20 = (char *)a6 - Pool2;
            while ( v19 + v18 )
            {
              v21 = *(_WORD *)&Pool2[v20];
              if ( !v21 )
              {
                if ( !v18 )
                {
LABEL_14:
                  Pool2 -= 2;
                  GenericStoreProperty = -2147483643;
                  break;
                }
                break;
              }
              *(_WORD *)Pool2 = v21;
              Pool2 += 2;
              if ( !--v18 )
                goto LABEL_14;
            }
            *(_WORD *)Pool2 = 0;
          }
          if ( GenericStoreProperty >= 0 )
            goto LABEL_18;
        }
        else
        {
          GenericStoreProperty = -1073741670;
        }
      }
      else
      {
        GenericStoreProperty = -1073741675;
      }
    }
    v28 = *(void **)(a7 + 24);
    if ( v28 )
    {
      ExFreePoolWithTag(v28, 0x58706E50u);
      *(_QWORD *)(a7 + 24) = 0LL;
    }
  }
LABEL_18:
  if ( GenericStoreProperty < 0 )
    goto LABEL_37;
  do
  {
    if ( v30 > (unsigned int)v11 )
    {
      v11 = v30;
      if ( v10 )
        ExFreePoolWithTag(v10, 0x58706E50u);
      v10 = (void *)ExAllocatePool2(0x100uLL, v11, 0x58706E50u);
      if ( !v10 )
      {
        GenericStoreProperty = -1073741670;
        goto LABEL_54;
      }
    }
    v30 = 0;
    if ( a2 )
    {
      v22 = *(_QWORD **)&PiPnpRtlCtx;
      v33 = a3;
      v34 = a6;
      v35 = a4;
      v32[0] = 0LL;
      v32[1] = 0LL;
      v39 = 0;
      v23 = *(__int64 (__fastcall **)(PVOID, unsigned __int16 *, __int64, int, int, __int64))(*(_QWORD *)&PiPnpRtlCtx
                                                                                            + 488LL);
      v36 = v31;
      v40 = &v30;
      v41 = 0LL;
      v37 = v10;
      v38 = v11;
      if ( v23 )
      {
        if ( v23 == PiPnpRtlObjectActionCallback )
          v24 = PiPnpRtlObjectActionCallback(*(PVOID *)&PiPnpRtlCtx, a1, a2, 8, 1, (__int64)v32);
        else
          v24 = guard_dispatch_icall_no_overrides(*(_QWORD *)&PiPnpRtlCtx, a1);
        if ( v24 == -1073741822 )
        {
          v23 = 0LL;
        }
        else
        {
          if ( v24 == -1073741536 )
          {
            GenericStoreProperty = v32[0];
            goto LABEL_30;
          }
          if ( v24 )
          {
LABEL_46:
            GenericStoreProperty = -1073741595;
            goto LABEL_30;
          }
        }
      }
      ObjectPropertyWorker = PnpGetObjectPropertyWorker(v22, a1, a2, v33, v34, v35, v36, v37, v38, v40, v41);
      GenericStoreProperty = ObjectPropertyWorker;
      if ( !v23 )
        goto LABEL_30;
      LODWORD(v32[0]) = ObjectPropertyWorker;
      v27 = v23 == PiPnpRtlObjectActionCallback
          ? PiPnpRtlObjectActionCallback(v22, a1, a2, 8, 2, (__int64)v32)
          : guard_dispatch_icall_no_overrides(v22, a1);
      switch ( v27 )
      {
        case -1073741822:
          goto LABEL_30;
        case -1073741536:
          GenericStoreProperty = v32[0];
          goto LABEL_30;
        case 0:
LABEL_30:
          v8 = a6;
          continue;
      }
      goto LABEL_46;
    }
    GenericStoreProperty = PnpGetGenericStoreProperty(
                             *(__int64 *)&PiPnpRtlCtx,
                             (__int64)a3,
                             v8,
                             a4,
                             v31,
                             v10,
                             v11,
                             &v30);
  }
  while ( GenericStoreProperty == -1073741789 );
  if ( GenericStoreProperty >= 0 )
  {
    *(_DWORD *)(a7 + 32) = v31[0];
    *(_DWORD *)(a7 + 36) = v30;
    *(_QWORD *)(a7 + 40) = v10;
    return (unsigned int)GenericStoreProperty;
  }
  if ( v10 )
    ExFreePoolWithTag(v10, 0x58706E50u);
LABEL_37:
  if ( GenericStoreProperty == -1073741275 )
    return 0LL;
LABEL_54:
  v29 = *(void **)(a7 + 24);
  if ( v29 )
    ExFreePoolWithTag(v29, 0x58706E50u);
  return (unsigned int)GenericStoreProperty;
}
