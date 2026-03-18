/*
 * XREFs of _CombineModeList @ 0x1402FBCE0
 * Callers:
 *     ?DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@AEAVDXGAUTOPUSHLOCK@@EAEAU_D3DKMT_GETDISPLAYMODELIST@@PEAPEBU_D3DKMT_DISPLAYMODE@@PEAE@Z @ 0x1401C8810 (-DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@AEAVDXGAUTOPUSHLOCK@@EAEAU_D.c)
 *     ?GetActiveVidPnBasedDisplayModeList@@YAJQEAXEPEAU_D3DKMT_GETDISPLAYMODELIST@@1@Z @ 0x140343FDC (-GetActiveVidPnBasedDisplayModeList@@YAJQEAXEPEAU_D3DKMT_GETDISPLAYMODELIST@@1@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x140020540 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1400224A0 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     memmove @ 0x1400A1D00 (memmove.c)
 *     _UpgradeDispModeFlags @ 0x1402FC784 (_UpgradeDispModeFlags.c)
 */

__int64 __fastcall CombineModeList(unsigned int *a1, const void **a2, __int64 a3, unsigned int *a4, char a5)
{
  unsigned int v5; // r13d
  unsigned int *v6; // r11
  unsigned int v7; // r9d
  unsigned int v10; // r10d
  unsigned int v11; // r12d
  __int64 v12; // rdx
  _DWORD *v13; // r15
  char v14; // r10
  unsigned int v15; // ebx
  __int64 v16; // rdi
  int v17; // eax
  int *v18; // rcx
  int v19; // eax
  unsigned __int64 v20; // rax
  void *v21; // rdi
  unsigned int v23; // r15d
  unsigned int v24; // ebp
  unsigned int *v25; // rdx
  unsigned int v26; // eax
  unsigned int v27; // ecx
  unsigned int v28; // edi
  unsigned int v29; // ecx
  unsigned int v30; // r13d
  __int64 v31; // rbx
  unsigned int v32; // r8d
  unsigned int v33; // edx
  __int64 v34; // rdx
  unsigned int v35; // r9d
  _DWORD *v36; // r8
  __int64 v37; // r10
  __int64 v38; // rdx
  int v39; // [rsp+50h] [rbp-58h]
  unsigned int v40; // [rsp+54h] [rbp-54h]
  unsigned int v41; // [rsp+58h] [rbp-50h]
  __int64 v42; // [rsp+60h] [rbp-48h]
  unsigned int v43; // [rsp+C0h] [rbp+18h]

  v43 = a3;
  v5 = a3;
  v6 = a4;
  v40 = -1;
  v7 = -1;
  v39 = -1;
  if ( !(_DWORD)a3 )
    return 0LL;
  v10 = *a1;
  v11 = *a1;
  v41 = *a1;
  if ( a5 )
  {
    v23 = 0;
    v24 = 0;
    v25 = v6;
    a3 = (unsigned int)a3;
    do
    {
      v26 = *v25;
      v25 += 11;
      v27 = v24;
      v24 = *(v25 - 10);
      if ( v26 <= v23 )
        v26 = v23;
      v23 = v26;
      if ( v24 <= v27 )
        v24 = v27;
      --a3;
    }
    while ( a3 );
    v28 = 0;
    v11 = 0;
    if ( v10 )
    {
      v29 = v10;
      v30 = -1;
      do
      {
        v31 = (__int64)*a2 + 44 * v28;
        if ( v30 == -1 || (v32 = *(_DWORD *)v31, *(_DWORD *)v31 > v30) )
        {
          v30 = *(_DWORD *)v31;
          v32 = *(_DWORD *)v31;
        }
        if ( v7 == -1 || (v33 = *(_DWORD *)(v31 + 4), v33 > v7) )
        {
          v33 = *(_DWORD *)(v31 + 4);
          v39 = v33;
        }
        if ( (*(_DWORD *)(v31 + 40) & 0x40) != 0 || v33 <= v24 && v32 <= v23 )
        {
          if ( v28 != v11 )
          {
            if ( v28 <= v11 )
            {
              WdLogSingleEntry0(1LL);
              WdLogGlobalForLineNumber = 2803;
              DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"i > j", 2803LL, 0LL, 0LL, 0LL, 0LL);
            }
            v34 = (__int64)*a2 + 44 * v11;
            *(_OWORD *)v34 = *(_OWORD *)v31;
            *(_OWORD *)(v34 + 16) = *(_OWORD *)(v31 + 16);
            *(_QWORD *)(v34 + 32) = *(_QWORD *)(v31 + 32);
            *(_DWORD *)(v34 + 40) = *(_DWORD *)(v31 + 40);
            v29 = *a1;
          }
          ++v11;
        }
        v7 = v39;
        ++v28;
      }
      while ( v28 < v29 );
      v10 = v41;
      v6 = a4;
      v40 = v30;
      v5 = v43;
    }
    *a1 = v11;
  }
  if ( v5 )
  {
    v12 = v5;
    v13 = v6 + 8;
    v42 = v5;
    while ( 1 )
    {
      v14 = 0;
      if ( (v13[2] & 0x40) == 0 && (*(v13 - 8) > v40 || *(v13 - 7) > v7) )
        break;
      v15 = 0;
      if ( *a1 )
      {
        do
        {
          v16 = (__int64)*a2 + 44 * v15;
          if ( *(v13 - 8) == *(_DWORD *)v16
            && *(_QWORD *)(v13 - 7) == *(_QWORD *)(v16 + 4)
            && *(v13 - 5) == *(_DWORD *)(v16 + 12)
            && *(v13 - 1) == *(_DWORD *)(v16 + 28)
            && *v13 == *(_DWORD *)(v16 + 32)
            && *(v13 - 2) == *(_DWORD *)(v16 + 24)
            && ((*(_BYTE *)(v16 + 40) ^ *((_BYTE *)v13 + 8)) & 0x10) == 0 )
          {
            if ( *(v13 - 4) != *(_DWORD *)(v16 + 16) || *(v13 - 3) != *(_DWORD *)(v16 + 20) )
            {
              WdLogSingleEntry4(
                7LL,
                (unsigned int)*(v13 - 8),
                (unsigned int)*(v13 - 7),
                (int)*(v13 - 6),
                (unsigned int)*(v13 - 5));
              WdLogGlobalForLineNumber = 2855;
              WdLogSingleEntry4(
                7LL,
                (unsigned int)*(v13 - 4),
                (unsigned int)*(v13 - 3),
                *(unsigned int *)(v16 + 16),
                *(unsigned int *)(v16 + 20));
              WdLogGlobalForLineNumber = 2861;
            }
            UpgradeDispModeFlags(v16, v13 - 8);
            v14 = 1;
          }
          ++v15;
        }
        while ( v15 < *a1 );
        v12 = v42;
      }
      v17 = v13[2];
      v18 = v13 + 2;
      if ( v14 )
        goto LABEL_31;
      ++v11;
      v19 = v13[2] & 0x1FF | 0x200;
LABEL_14:
      v7 = v39;
      v13 += 11;
      --v12;
      *v18 = v19;
      v42 = v12;
      if ( !v12 )
      {
        v5 = v43;
        v10 = v41;
        v6 = a4;
        goto LABEL_16;
      }
    }
    v17 = v13[2];
    v18 = v13 + 2;
LABEL_31:
    v19 = v17 & 0x1FF;
    goto LABEL_14;
  }
LABEL_16:
  if ( v11 > v10 )
  {
    v20 = 44LL * v11;
    if ( !is_mul_ok(v11, 0x2CuLL) )
      v20 = -1LL;
    v21 = (void *)operator new[](v20, 0x4B677844u, 256LL);
    if ( !v21 )
    {
      WdLogSingleEntry1(6LL, v11);
      WdLogGlobalForLineNumber = 2903;
      DxgkLogInternalTriageEvent(
        0LL,
        262145LL,
        0xFFFFFFFFLL,
        L"Failed to allocate memory for the combined mode list for %I64d of D3DKMT_DISPLAYMODE.",
        v11,
        0LL,
        0LL,
        0LL,
        0LL);
      return 3221225495LL;
    }
    if ( *a2 )
    {
      memmove(v21, *a2, 44LL * *a1);
      DXGQUOTAALLOCATOR<256,1835156294>::operator delete((void *)*a2);
    }
    v6 = a4;
    *a2 = v21;
  }
  v35 = *a1;
  if ( *a1 < v11 )
  {
    if ( v5 )
    {
      v36 = v6 + 10;
      v37 = v5;
      do
      {
        if ( *v36 >= 0x200u )
        {
          *v36 &= 0x1FFu;
          v38 = (__int64)*a2 + 44 * v35++;
          *(_OWORD *)v38 = *(_OWORD *)(v36 - 10);
          *(_OWORD *)(v38 + 16) = *(_OWORD *)(v36 - 6);
          *(_QWORD *)(v38 + 32) = *((_QWORD *)v36 - 1);
          *(_DWORD *)(v38 + 40) = *v36;
        }
        v36 += 11;
        --v37;
      }
      while ( v37 );
    }
    if ( v11 != v35 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 2942;
      DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"TotalModes == j", 2942LL, 0LL, 0LL, 0LL, 0LL);
    }
  }
  *a1 = v11;
  return 0LL;
}
