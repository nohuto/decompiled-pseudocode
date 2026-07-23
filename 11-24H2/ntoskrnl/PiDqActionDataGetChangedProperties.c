/*
 * XREFs of PiDqActionDataGetChangedProperties @ 0x140A406E4
 * Callers:
 *     PiDqActionDataCreate @ 0x1408D1364 (PiDqActionDataCreate.c)
 * Callees:
 *     _wcsicmp @ 0x1404FBC70 (_wcsicmp.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     PiPnpRtlBeginOperation @ 0x1408C99A8 (PiPnpRtlBeginOperation.c)
 *     PiPnpRtlEndOperation @ 0x1408C9B88 (PiPnpRtlEndOperation.c)
 *     PiDqPnPGetObjectPropertyInBestLocale @ 0x1408D1D9C (PiDqPnPGetObjectPropertyInBestLocale.c)
 *     PiDqPnPGetObjectProperty @ 0x1408D24E0 (PiDqPnPGetObjectProperty.c)
 *     PiDqOpenObjectRegKey @ 0x1408E14CC (PiDqOpenObjectRegKey.c)
 *     PiDqGrowPropertyArray @ 0x140A40B5C (PiDqGrowPropertyArray.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiDqActionDataGetChangedProperties(
        __int64 a1,
        unsigned int a2,
        unsigned __int16 *a3,
        char a4,
        __int64 a5,
        __int64 a6,
        unsigned int a7,
        __int64 a8,
        __int64 *a9,
        unsigned int *a10)
{
  __int64 v10; // rdi
  unsigned int v11; // esi
  int v12; // r14d
  unsigned int v13; // r12d
  unsigned int i; // eax
  HANDLE v15; // rbx
  __int64 v16; // r15
  int *v17; // rdi
  int v18; // eax
  unsigned int v19; // r10d
  unsigned int v20; // r8d
  __int64 *v21; // rsi
  int v23; // eax
  __int64 v24; // rcx
  wchar_t *v25; // rdi
  const wchar_t *v26; // rbx
  const wchar_t *v27; // rcx
  __int64 v28; // rax
  unsigned int j; // r8d
  __int64 v30; // rcx
  __int64 v31; // rdx
  __int128 v32; // xmm1
  __int64 v33; // rax
  __int64 v34; // rcx
  __int128 v35; // xmm0
  __int64 v36; // r9
  __int64 v37; // rdx
  __int64 v38; // rcx
  int v39; // ecx
  int v40; // ecx
  unsigned int v43; // [rsp+58h] [rbp-71h]
  HANDLE Handle; // [rsp+60h] [rbp-69h] BYREF
  __int64 *v45; // [rsp+68h] [rbp-61h]
  unsigned __int16 *v46; // [rsp+70h] [rbp-59h]
  __int64 v47; // [rsp+78h] [rbp-51h]
  __int64 v48; // [rsp+80h] [rbp-49h]
  PVOID v49; // [rsp+88h] [rbp-41h] BYREF
  __int64 v50; // [rsp+90h] [rbp-39h]
  __int128 v51; // [rsp+98h] [rbp-31h] BYREF
  PVOID P[2]; // [rsp+A8h] [rbp-21h]
  PVOID v53[2]; // [rsp+B8h] [rbp-11h]

  v10 = a8;
  v50 = a1;
  v45 = a9;
  v11 = 0;
  v12 = 0;
  Handle = 0LL;
  v13 = 0;
  v49 = 0LL;
  *a10 = 0;
  v46 = a3;
  v48 = a5;
  v47 = a8;
  v51 = 0LL;
  *(_OWORD *)P = 0LL;
  *(_OWORD *)v53 = 0LL;
  PiPnpRtlBeginOperation(&v49);
  for ( i = 0; ; i = v43 + 1 )
  {
    v43 = i;
    if ( i >= *(_DWORD *)(v10 + 76) )
      break;
    v15 = 0LL;
    v16 = v10 + 32LL * i;
    v17 = (int *)(v16 + 100);
    if ( a6 )
    {
      for ( j = 0; j < a7; ++j )
      {
        v30 = a6 + 32LL * j;
        if ( *(_DWORD *)(v16 + 96) == *(_DWORD *)(v30 + 16) )
        {
          v31 = *(_QWORD *)(v16 + 80) - *(_QWORD *)v30;
          if ( !v31 )
            v31 = *(_QWORD *)(v16 + 88) - *(_QWORD *)(v30 + 8);
          if ( !v31 && *v17 == *(_DWORD *)(v30 + 20) && (!*(_QWORD *)(v16 + 104) || a4) )
            goto LABEL_4;
        }
      }
    }
    else
    {
LABEL_4:
      if ( *v17 )
      {
        if ( *v17 != 1 )
        {
          v12 = -1073741811;
          break;
        }
        if ( !Handle )
        {
          v12 = PiDqOpenObjectRegKey(1, v46, a2, 1u, 0, v50, &Handle);
          if ( v12 == -1073741772 )
          {
            Handle = (HANDLE)-1LL;
            v12 = 0;
          }
        }
        v15 = Handle;
        if ( Handle == (HANDLE)-1LL )
        {
LABEL_56:
          v11 = 0;
          goto LABEL_14;
        }
      }
      else
      {
        v11 = a2;
      }
      if ( v12 < 0 )
        break;
      if ( a4 )
      {
        v23 = PiDqPnPGetObjectPropertyInBestLocale(v46, v11, v15, v16 + 80, *v17, v48, &v51);
        v11 = 0;
        v12 = v23;
        if ( v23 >= 0 )
        {
          v24 = v48;
          v25 = (wchar_t *)P[1];
          while ( 1 )
          {
            v26 = (const wchar_t *)(v24 & -(__int64)(*(_WORD *)v24 != 0));
            v27 = *(const wchar_t **)(v16 + 104);
            if ( v27 == v26 || v27 && v26 && !wcsicmp(v27, v26) )
              break;
            if ( v25 == v26 || v25 && (!v26 || !wcsicmp(v25, v26)) || !v26 )
            {
LABEL_51:
              if ( v25 )
                ExFreePoolWithTag(v25, 0x58706E50u);
              if ( v53[1] )
                ExFreePoolWithTag(v53[1], 0x58706E50u);
              goto LABEL_14;
            }
            v28 = -1LL;
            do
              ++v28;
            while ( v26[v28] );
            v24 = (__int64)&v26[v28 + 1];
          }
          v19 = *a10;
          v20 = 0;
          v21 = v45;
          while ( v20 < v19 )
          {
            v36 = *v45;
            v37 = 48LL * v20;
            if ( LODWORD(P[0]) == *(_DWORD *)(v37 + *v45 + 16) )
            {
              v38 = v51 - *(_QWORD *)(v37 + v36);
              if ( (_QWORD)v51 == *(_QWORD *)(v37 + v36) )
                v38 = *((_QWORD *)&v51 + 1) - *(_QWORD *)(v37 + v36 + 8);
              if ( !v38 && HIDWORD(P[0]) == *(_DWORD *)(v37 + v36 + 20) )
              {
                v11 = 0;
                goto LABEL_51;
              }
            }
            ++v20;
          }
          if ( v13 > v19 )
            goto LABEL_55;
          if ( a7 )
          {
            v13 = a7;
          }
          else
          {
            v39 = 5;
            if ( *(_DWORD *)(v47 + 76) > 5u )
              v39 = *(_DWORD *)(v47 + 76);
            v13 += v39;
          }
          v12 = PiDqGrowPropertyArray(v45);
          if ( v12 >= 0 )
          {
LABEL_55:
            v32 = *(_OWORD *)P;
            v33 = *v21;
            v34 = 6LL * *a10;
            *(_OWORD *)(v33 + 8 * v34) = v51;
            v35 = *(_OWORD *)v53;
            *(_OWORD *)(v33 + 8 * v34 + 16) = v32;
            *(_OWORD *)(v33 + 8 * v34 + 32) = v35;
            ++*a10;
            goto LABEL_56;
          }
          if ( v25 )
            ExFreePoolWithTag(v25, 0x58706E50u);
          if ( v53[1] )
            ExFreePoolWithTag(v53[1], 0x58706E50u);
        }
        break;
      }
      if ( v13 <= *a10 )
      {
        if ( a7 )
        {
          v13 = a7;
        }
        else
        {
          v40 = 5;
          if ( *(_DWORD *)(v47 + 76) > 5u )
            v40 = *(_DWORD *)(v47 + 76);
          v13 += v40;
        }
        v12 = PiDqGrowPropertyArray(v45);
        if ( v12 < 0 )
          break;
      }
      v18 = PiDqPnPGetObjectProperty(
              v46,
              v11,
              v15,
              v16 + 80,
              *(_DWORD *)(v16 + 100),
              *(const WCHAR **)(v16 + 104),
              *v45 + 48LL * *a10);
      v11 = 0;
      v12 = v18;
      if ( v18 < 0 )
        break;
      ++*a10;
    }
LABEL_14:
    v10 = v47;
  }
  if ( (char *)Handle - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
    ZwClose(Handle);
  if ( v49 )
    PiPnpRtlEndOperation((PVOID **)v49);
  return (unsigned int)v12;
}
