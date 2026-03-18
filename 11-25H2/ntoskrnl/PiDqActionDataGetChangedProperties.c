/*
 * XREFs of PiDqActionDataGetChangedProperties @ 0x14083A250
 * Callers:
 *     PiDqActionDataCreate @ 0x140838C90 (PiDqActionDataCreate.c)
 * Callees:
 *     _wcsicmp @ 0x1404FBC30 (_wcsicmp.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     ZwClose @ 0x14069B320 (ZwClose.c)
 *     PiDqGrowPropertyArray @ 0x14083B4C4 (PiDqGrowPropertyArray.c)
 *     PiDqOpenObjectRegKey @ 0x14083E018 (PiDqOpenObjectRegKey.c)
 *     PiPnpRtlBeginOperation @ 0x1408D0818 (PiPnpRtlBeginOperation.c)
 *     PiPnpRtlEndOperation @ 0x1408D09F8 (PiPnpRtlEndOperation.c)
 *     PiDqPnPGetObjectPropertyInBestLocale @ 0x1408D2170 (PiDqPnPGetObjectPropertyInBestLocale.c)
 *     PiDqPnPGetObjectProperty @ 0x1408D28C0 (PiDqPnPGetObjectProperty.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiDqActionDataGetChangedProperties(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        char a4,
        __int64 a5,
        __int64 a6,
        unsigned int a7,
        __int64 a8,
        __int64 *a9,
        unsigned int *a10)
{
  __int64 v10; // rdi
  int v11; // esi
  int v12; // r14d
  unsigned int v13; // r12d
  unsigned int i; // eax
  int v15; // ebx
  __int64 v16; // r15
  _DWORD *v17; // rdi
  __int64 v18; // rdx
  int v19; // eax
  unsigned int v20; // r10d
  unsigned int v21; // r8d
  __int64 *v22; // rsi
  int v24; // eax
  __int64 v25; // rcx
  wchar_t *v26; // rdi
  const wchar_t *v27; // rbx
  const wchar_t *v28; // rcx
  __int64 v29; // rax
  unsigned int j; // r8d
  __int64 v31; // rcx
  __int64 v32; // rdx
  __int128 v33; // xmm1
  __int64 v34; // rax
  __int64 v35; // rcx
  __int128 v36; // xmm0
  __int64 v37; // r9
  __int64 v38; // rdx
  __int64 v39; // rcx
  int v40; // ecx
  int v41; // ecx
  int v43; // [rsp+54h] [rbp-75h]
  unsigned int v44; // [rsp+58h] [rbp-71h]
  HANDLE Handle; // [rsp+60h] [rbp-69h] BYREF
  __int64 *v46; // [rsp+68h] [rbp-61h]
  __int64 v47; // [rsp+70h] [rbp-59h]
  __int64 v48; // [rsp+78h] [rbp-51h]
  __int64 v49; // [rsp+80h] [rbp-49h]
  PVOID v50; // [rsp+88h] [rbp-41h] BYREF
  __int64 v51; // [rsp+90h] [rbp-39h]
  __int128 v52; // [rsp+98h] [rbp-31h] BYREF
  PVOID P[2]; // [rsp+A8h] [rbp-21h]
  PVOID v54[2]; // [rsp+B8h] [rbp-11h]

  v10 = a8;
  v51 = a1;
  v46 = a9;
  v11 = 0;
  v12 = 0;
  Handle = 0LL;
  v13 = 0;
  v50 = 0LL;
  *a10 = 0;
  v47 = a3;
  v43 = a2;
  v49 = a5;
  v48 = a8;
  v52 = 0LL;
  *(_OWORD *)P = 0LL;
  *(_OWORD *)v54 = 0LL;
  PiPnpRtlBeginOperation(&v50, a2, a3);
  for ( i = 0; ; i = v44 + 1 )
  {
    v44 = i;
    if ( i >= *(_DWORD *)(v10 + 76) )
      break;
    v15 = 0;
    v16 = v10 + 32LL * i;
    v17 = (_DWORD *)(v16 + 100);
    if ( a6 )
    {
      for ( j = 0; j < a7; ++j )
      {
        v31 = a6 + 32LL * j;
        if ( *(_DWORD *)(v16 + 96) == *(_DWORD *)(v31 + 16) )
        {
          v32 = *(_QWORD *)(v16 + 80) - *(_QWORD *)v31;
          if ( !v32 )
            v32 = *(_QWORD *)(v16 + 88) - *(_QWORD *)(v31 + 8);
          if ( !v32 && *v17 == *(_DWORD *)(v31 + 20) && (!*(_QWORD *)(v16 + 104) || a4) )
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
          v12 = PiDqOpenObjectRegKey(1, v47, v43, 1, 0, v51, (__int64)&Handle);
          if ( v12 == -1073741772 )
          {
            Handle = (HANDLE)-1LL;
            v12 = 0;
          }
        }
        v15 = (int)Handle;
        if ( Handle == (HANDLE)-1LL )
        {
LABEL_56:
          v11 = 0;
          goto LABEL_14;
        }
      }
      else
      {
        v11 = v43;
      }
      if ( v12 < 0 )
        break;
      if ( a4 )
      {
        v24 = PiDqPnPGetObjectPropertyInBestLocale(v47, v11, v15, (int)v16 + 80, *v17, v49, (__int64)&v52);
        v11 = 0;
        v12 = v24;
        if ( v24 >= 0 )
        {
          v25 = v49;
          v26 = (wchar_t *)P[1];
          while ( 1 )
          {
            v27 = (const wchar_t *)(v25 & -(__int64)(*(_WORD *)v25 != 0));
            v28 = *(const wchar_t **)(v16 + 104);
            if ( v28 == v27 || v28 && v27 && !wcsicmp(v28, v27) )
              break;
            if ( v26 == v27 || v26 && (!v27 || !wcsicmp(v26, v27)) || !v27 )
            {
LABEL_51:
              if ( v26 )
                ExFreePoolWithTag(v26, 0x58706E50u);
              if ( v54[1] )
                ExFreePoolWithTag(v54[1], 0x58706E50u);
              goto LABEL_14;
            }
            v29 = -1LL;
            do
              ++v29;
            while ( v27[v29] );
            v25 = (__int64)&v27[v29 + 1];
          }
          v20 = *a10;
          v21 = 0;
          v22 = v46;
          while ( v21 < v20 )
          {
            v37 = *v46;
            v38 = 48LL * v21;
            if ( LODWORD(P[0]) == *(_DWORD *)(v38 + *v46 + 16) )
            {
              v39 = v52 - *(_QWORD *)(v38 + v37);
              if ( (_QWORD)v52 == *(_QWORD *)(v38 + v37) )
                v39 = *((_QWORD *)&v52 + 1) - *(_QWORD *)(v38 + v37 + 8);
              if ( !v39 && HIDWORD(P[0]) == *(_DWORD *)(v38 + v37 + 20) )
              {
                v11 = 0;
                goto LABEL_51;
              }
            }
            ++v21;
          }
          if ( v13 > v20 )
            goto LABEL_55;
          if ( a7 )
          {
            v13 = a7;
          }
          else
          {
            v40 = 5;
            if ( *(_DWORD *)(v48 + 76) > 5u )
              v40 = *(_DWORD *)(v48 + 76);
            v13 += v40;
          }
          v12 = PiDqGrowPropertyArray(v46, v20, v13);
          if ( v12 >= 0 )
          {
LABEL_55:
            v33 = *(_OWORD *)P;
            v34 = *v22;
            v35 = 6LL * *a10;
            *(_OWORD *)(v34 + 8 * v35) = v52;
            v36 = *(_OWORD *)v54;
            *(_OWORD *)(v34 + 8 * v35 + 16) = v33;
            *(_OWORD *)(v34 + 8 * v35 + 32) = v36;
            ++*a10;
            goto LABEL_56;
          }
          if ( v26 )
            ExFreePoolWithTag(v26, 0x58706E50u);
          if ( v54[1] )
            ExFreePoolWithTag(v54[1], 0x58706E50u);
        }
        break;
      }
      v18 = *a10;
      if ( v13 <= (unsigned int)v18 )
      {
        if ( a7 )
        {
          v13 = a7;
        }
        else
        {
          v41 = 5;
          if ( *(_DWORD *)(v48 + 76) > 5u )
            v41 = *(_DWORD *)(v48 + 76);
          v13 += v41;
        }
        v12 = PiDqGrowPropertyArray(v46, v18, v13);
        if ( v12 < 0 )
          break;
      }
      v19 = PiDqPnPGetObjectProperty(
              v47,
              v11,
              v15,
              (int)v16 + 80,
              *(_DWORD *)(v16 + 100),
              *(_QWORD *)(v16 + 104),
              *v46 + 48LL * *a10);
      v11 = 0;
      v12 = v19;
      if ( v19 < 0 )
        break;
      ++*a10;
    }
LABEL_14:
    v10 = v48;
  }
  if ( (char *)Handle - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
    ZwClose(Handle);
  if ( v50 )
    PiPnpRtlEndOperation(v50);
  return (unsigned int)v12;
}
