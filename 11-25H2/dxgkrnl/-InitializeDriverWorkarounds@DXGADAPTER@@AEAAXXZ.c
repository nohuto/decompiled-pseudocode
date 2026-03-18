/*
 * XREFs of ?InitializeDriverWorkarounds@DXGADAPTER@@AEAAXXZ @ 0x14018FD48
 * Callers:
 *     ?Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z @ 0x14018D7A8 (-Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z.c)
 * Callees:
 *     DxgkInitializeBlockList @ 0x140232690 (DxgkInitializeBlockList.c)
 *     ?xwtol@@YAKPEBG@Z @ 0x14040A114 (-xwtol@@YAKPEBG@Z.c)
 */

void __fastcall DXGADAPTER::InitializeDriverWorkarounds(DXGADAPTER *this)
{
  char *v1; // rdi
  int v3; // eax
  int v4; // esi
  int v5; // eax
  __int64 v6; // r14
  int v7; // eax
  const wchar_t *v8; // rcx
  wchar_t *v9; // rax
  __int64 v10; // rcx
  const wchar_t *v11; // rcx
  wchar_t *v12; // rax
  int v13; // r9d
  int v14; // ecx
  int v15; // ecx
  int v16; // ecx
  int v17; // ecx
  int v18; // ecx
  struct _UNICODE_STRING UnicodeString; // [rsp+30h] [rbp-49h] BYREF
  __int64 v20; // [rsp+40h] [rbp-39h] BYREF
  int v21; // [rsp+48h] [rbp-31h]
  const wchar_t *v22; // [rsp+50h] [rbp-29h]
  struct _UNICODE_STRING *p_UnicodeString; // [rsp+58h] [rbp-21h]
  int v24; // [rsp+60h] [rbp-19h]
  __int64 v25; // [rsp+68h] [rbp-11h]
  int v26; // [rsp+70h] [rbp-9h]
  __int64 v27; // [rsp+78h] [rbp-1h]
  int v28; // [rsp+80h] [rbp+7h]
  __int64 v29; // [rsp+88h] [rbp+Fh]
  __int128 v30; // [rsp+90h] [rbp+17h]
  __int128 v31; // [rsp+A0h] [rbp+27h]
  int Key; // [rsp+E0h] [rbp+67h] BYREF

  v1 = (char *)this + 3008;
  DxgkInitializeBlockList(*((_QWORD *)this + 27), *((unsigned int *)this + 684), (char *)this + 3008);
  if ( (**(_DWORD **)v1 & 0x80u) != 0 )
    WdDiagNotifyUser(32LL, 9LL, 0LL, 0LL);
  v3 = *((_DWORD *)this + 684);
  v4 = 1;
  if ( v3 == 8704 )
  {
    if ( (*((_DWORD *)this + 111) & 0x200) != 0 )
      *((_BYTE *)this + 3052) = 1;
    goto LABEL_7;
  }
  if ( (unsigned int)(v3 - 0x2000) <= 0x3FF )
  {
LABEL_7:
    v5 = *((_DWORD *)this + 105);
    if ( v5 == 32902 || v5 == 4098 )
      **(_DWORD **)v1 |= 0x40u;
  }
  v6 = -1LL;
  if ( *((int *)this + 684) >= 0x2000 )
  {
    v7 = *((_DWORD *)this + 105);
    if ( v7 == 4098 || v7 == 4318 )
    {
      *((_DWORD *)this + 615) |= 0x40u;
    }
    else if ( v7 == 32902 && (*((_DWORD *)this + 615) & 0x40) != 0 )
    {
      Key = *((_DWORD *)this + 106);
      if ( bsearch(&Key, &unk_1400C5D30, 0x18uLL, 4uLL, UintCompareFunc) )
      {
        v8 = (const wchar_t *)*((_QWORD *)this + 250);
        if ( v8 )
        {
          v9 = wcsrchr(v8, 0x2Eu);
          if ( v9 )
          {
            v10 = -1LL;
            do
              ++v10;
            while ( v9[v10] );
            if ( v10 == 5 && xwtol(v9 + 1) - 1 <= 0x116D )
              *((_DWORD *)this + 615) &= ~0x40u;
          }
        }
      }
    }
  }
  if ( *((int *)this + 684) >= 9216 && (*((_DWORD *)this + 111) & 0x100) == 0 )
    *((_DWORD *)this + 615) |= 8u;
  if ( *((_DWORD *)this + 105) != 4318 || *((_DWORD *)this + 570) > 0x10004u )
    **(_DWORD **)v1 |= 0x10000000u;
  if ( *((_DWORD *)this + 105) == 1297040209 )
  {
    if ( *((int *)this + 751) <= 2000 )
    {
      **(_DWORD **)v1 |= 0x10u;
      v22 = L"PhoneSOCVersion";
      p_UnicodeString = &UnicodeString;
      *(_QWORD *)&UnicodeString.Length = 0LL;
      UnicodeString.Buffer = 0LL;
      v20 = 0LL;
      v21 = 292;
      v24 = 16777217;
      v25 = 0LL;
      v26 = 0;
      v27 = 0LL;
      v28 = 0;
      v29 = 0LL;
      v30 = 0LL;
      v31 = 0LL;
      if ( (int)RtlQueryRegistryValuesEx(
                  0LL,
                  L"\\Registry\\Machine\\System\\Platform\\DeviceTargetingInfo",
                  &v20,
                  0LL,
                  0LL) >= 0
        && UnicodeString.Length >= 4u
        && (!RtlCompareUnicodeStrings(UnicodeString.Buffer, 4uLL, L"8992", 4uLL, 0)
         || !RtlCompareUnicodeStrings(UnicodeString.Buffer, 4uLL, L"8994", 4uLL, 0)) )
      {
        **(_DWORD **)v1 |= 0x20u;
      }
      RtlFreeUnicodeString(&UnicodeString);
    }
    if ( *((int *)this + 751) <= 1300 )
    {
      **(_DWORD **)v1 |= 1u;
      **(_DWORD **)v1 |= 2u;
      **(_DWORD **)v1 |= 8u;
    }
    if ( *((_DWORD *)this + 684) == 4608 )
      **(_DWORD **)v1 |= 4u;
    if ( *((_DWORD *)this + 106) == 1161245232 )
    {
      if ( *((_DWORD *)this + 107) == 810570829
        && *((_DWORD *)this + 108) == 808794160
        && *((_DWORD *)this + 109) == 124 )
      {
        **(_DWORD **)v1 |= 0x1000u;
        **(_DWORD **)v1 |= 0x2000u;
      }
      if ( *((_DWORD *)this + 106) == 1161245232
        && *((_DWORD *)this + 107) == 810434888
        && *((_DWORD *)this + 108) == 808794160
        && *((_DWORD *)this + 109) == 124 )
      {
        **(_DWORD **)v1 |= 0x4000u;
      }
    }
  }
  if ( (**(_DWORD **)v1 & 0x400) != 0 )
  {
    *((_BYTE *)this + 2940) = 0;
    *((_DWORD *)this + 736) = 1;
    *((_BYTE *)this + 3044) = 0;
    *((_BYTE *)this + 3048) = 0;
    *((_BYTE *)this + 3046) = 0;
  }
  if ( *((int *)this + 684) <= 9216 && *((_DWORD *)this + 105) == 32902 )
  {
    v11 = (const wchar_t *)*((_QWORD *)this + 250);
    if ( v11 )
    {
      v12 = wcsrchr(v11, 0x2Eu);
      if ( v12 )
      {
        do
          ++v6;
        while ( v12[v6] );
        if ( v6 == 5 && xwtol(v12 + 1) - 1 <= 0x17F6 )
          **(_DWORD **)v1 |= 0x200000u;
      }
    }
  }
  if ( *((_DWORD *)this + 684) == 8960 && *((_DWORD *)this + 105) == 4098 )
    **(_DWORD **)v1 |= 0x400000u;
  if ( *((int *)this + 684) <= 9728 && *((_DWORD *)this + 105) == 4098 )
    **(_DWORD **)v1 |= 0x800000u;
  if ( (*((_DWORD *)this + 744) & 8) != 0 && *((_DWORD *)this + 105) == 1297040209 )
  {
    v13 = 0x20000000;
  }
  else
  {
    v4 = 0;
    v13 = 0;
  }
  v14 = *((_DWORD *)this + 769);
  if ( v14 )
  {
    if ( v14 == 2 )
      **(_DWORD **)v1 |= 0x40000000u;
    else
      **(_DWORD **)v1 ^= (**(_DWORD **)v1 ^ ((unsigned __int8)(*((_DWORD *)this + 744) >> 3) << 30)) & 0x40000000;
  }
  else
  {
    **(_DWORD **)v1 &= ~0x40000000u;
  }
  v15 = *((_DWORD *)this + 770);
  if ( v15 )
  {
    if ( v15 == 2 )
      *(_DWORD *)(*(_QWORD *)v1 + 4LL) |= 2u;
    else
      *(_DWORD *)(*(_QWORD *)v1 + 4LL) ^= ((unsigned __int8)*(_DWORD *)(*(_QWORD *)v1 + 4LL) ^ (unsigned __int8)(2 * (*((_DWORD *)this + 744) >> 3))) & 2;
  }
  else
  {
    *(_DWORD *)(*(_QWORD *)v1 + 4LL) &= ~2u;
  }
  v16 = *((_DWORD *)this + 771);
  if ( v16 )
  {
    if ( v16 == 2 )
      **(_DWORD **)v1 |= 0x20000000u;
    else
      **(_DWORD **)v1 = v13 | **(_DWORD **)v1 & 0xDFFFFFFF;
  }
  else
  {
    **(_DWORD **)v1 &= ~0x20000000u;
  }
  v17 = *((_DWORD *)this + 772);
  if ( !v17 )
    goto LABEL_92;
  v18 = v17 - 1;
  if ( !v18 )
  {
    **(_DWORD **)v1 = **(_DWORD **)v1 & 0x7FFFFFFF | ((unsigned __int8)(*((_DWORD *)this + 744) >> 3) << 31);
    goto LABEL_93;
  }
  if ( v18 != 1 )
  {
LABEL_92:
    **((_DWORD **)this + 376) &= ~0x80000000;
    goto LABEL_93;
  }
  **(_DWORD **)v1 |= 0x80000000;
LABEL_93:
  *(_DWORD *)(*((_QWORD *)this + 376) + 4LL) = v4 | *(_DWORD *)(*((_QWORD *)this + 376) + 4LL) & 0xFFFFFFFE;
}
