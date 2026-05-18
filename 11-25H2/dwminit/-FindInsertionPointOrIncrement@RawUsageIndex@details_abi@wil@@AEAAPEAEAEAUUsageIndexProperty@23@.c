/*
 * XREFs of ?FindInsertionPointOrIncrement@RawUsageIndex@details_abi@wil@@AEAAPEAEAEAUUsageIndexProperty@23@PEAEPEAX_KI@Z @ 0x180005E90
 * Callers:
 *     ?RecordUsageInternal@RawUsageIndex@details_abi@wil@@AEAA_NPEAX_K01I@Z @ 0x180007CCC (-RecordUsageInternal@RawUsageIndex@details_abi@wil@@AEAA_NPEAX_K01I@Z.c)
 * Callees:
 *     _invalid_parameter_noinfo @ 0x1800030BA (_invalid_parameter_noinfo.c)
 *     ?Read@UsageIndexProperty@details_abi@wil@@QEAA_NAEAPEAEPEAE@Z @ 0x180007458 (-Read@UsageIndexProperty@details_abi@wil@@QEAA_NAEAPEAEPEAE@Z.c)
 *     memcmp_0 @ 0x180010DD4 (memcmp_0.c)
 */

unsigned __int8 *__fastcall wil::details_abi::RawUsageIndex::FindInsertionPointOrIncrement(
        wil::details_abi::RawUsageIndex *this,
        struct wil::details_abi::UsageIndexProperty *a2,
        unsigned __int8 *a3,
        void *a4,
        size_t Size,
        unsigned int a6)
{
  _DWORD *v6; // rdi
  char v7; // bl
  int v8; // r12d
  unsigned __int8 *v9; // r14
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // rax
  char v14; // al
  _WORD *v15; // rax
  _DWORD *v16; // rax
  unsigned __int64 v17; // rsi
  size_t v18; // rdi
  __int64 v19; // rax
  unsigned __int8 *v20; // r8
  int v21; // ecx
  unsigned __int8 *v22; // r8
  __int64 v23; // rcx
  int v24; // esi
  unsigned __int8 *v25; // r8
  bool v26; // zf
  _WORD *v28; // rax
  _DWORD *v29; // rax
  int v30; // r8d
  unsigned __int8 *v31; // [rsp+20h] [rbp-50h]
  __int16 v32; // [rsp+28h] [rbp-48h] BYREF
  char v33; // [rsp+2Ah] [rbp-46h]
  int v34; // [rsp+2Ch] [rbp-44h]
  unsigned __int16 v35; // [rsp+30h] [rbp-40h]
  void *v36[2]; // [rsp+38h] [rbp-38h]
  __int16 v37; // [rsp+48h] [rbp-28h] BYREF
  char v38; // [rsp+4Ah] [rbp-26h]
  int v39; // [rsp+4Ch] [rbp-24h]
  unsigned __int16 v40; // [rsp+50h] [rbp-20h]
  void *Buf2[2]; // [rsp+58h] [rbp-18h]
  unsigned __int8 *v42; // [rsp+B0h] [rbp+40h] BYREF
  void *Buf1; // [rsp+C8h] [rbp+58h]

  Buf1 = a4;
  v6 = (_DWORD *)((char *)a2 + 4);
  v7 = 0;
  v32 = *((_WORD *)this + 3);
  v8 = -1;
  v33 = *((_BYTE *)this + 8);
  v9 = a3;
  v34 = 0;
  v35 = 0;
  *(_OWORD *)v36 = 0LL;
  if ( *((_QWORD *)this + 2) )
  {
    v12 = (*((_QWORD *)this + 4) - (_QWORD)a3) / *((_QWORD *)this + 2);
    v13 = (unsigned int)*v6;
    if ( v13 <= v12 || (_DWORD)v13 == (_DWORD)v12 )
      goto LABEL_13;
    v14 = *((_BYTE *)a2 + 2);
    *v6 = v12;
    if ( v14 == 1 )
    {
      v15 = (_WORD *)*((_QWORD *)a2 + 2);
      if ( v15 )
      {
        *v15 = v12;
LABEL_13:
        v17 = (unsigned int)*v6;
        v18 = Size;
        v19 = *((_QWORD *)this + 2) * (unsigned int)v17;
        *(_OWORD *)Buf2 = 0LL;
        v39 = 0;
        v40 = 0;
        v31 = &v9[v19];
        v37 = *((_WORD *)this + 3);
        v38 = *((_BYTE *)this + 8);
        while ( v17 )
        {
          v20 = (unsigned __int8 *)*((_QWORD *)this + 4);
          v42 = &v9[*((_QWORD *)this + 2) * (v17 >> 1)];
          wil::details_abi::UsageIndexProperty::Read((wil::details_abi::UsageIndexProperty *)&v37, &v42, v20);
          if ( v18 == v40 )
            v21 = memcmp_0(Buf1, Buf2[1], v18);
          else
            v21 = v18 - v40;
          if ( v21 <= 0 )
          {
            v17 >>= 1;
          }
          else
          {
            v9 = v42;
            v17 += -1LL - (v17 >> 1);
          }
        }
        if ( v9 < v31 )
        {
          v22 = (unsigned __int8 *)*((_QWORD *)this + 4);
          v42 = v9;
          wil::details_abi::UsageIndexProperty::Read((wil::details_abi::UsageIndexProperty *)&v32, &v42, v22);
          if ( v18 == v35 )
            v8 = memcmp_0(Buf1, v36[1], v18);
          else
            v8 = v18 - v35;
          goto LABEL_43;
        }
        return v9;
      }
    }
    else
    {
      if ( v14 != 2 )
        goto LABEL_13;
      v16 = (_DWORD *)*((_QWORD *)a2 + 2);
      if ( v16 )
      {
        if ( a2 != (struct wil::details_abi::UsageIndexProperty *)-4LL )
        {
          *v16 = v12;
          goto LABEL_13;
        }
        v12 = 0LL;
        *v16 = 0;
      }
    }
    *(_DWORD *)_o__errno(v12) = 22;
    invalid_parameter_noinfo();
    goto LABEL_13;
  }
  v24 = 0;
  if ( !*v6 )
    return v9;
  while ( 1 )
  {
    v25 = (unsigned __int8 *)*((_QWORD *)this + 4);
    v42 = v9;
    if ( !wil::details_abi::UsageIndexProperty::Read((wil::details_abi::UsageIndexProperty *)&v32, &v42, v25) )
      break;
    if ( Size == v35 )
    {
      v8 = memcmp_0(Buf1, v36[1], Size);
    }
    else
    {
      v23 = (unsigned int)Size - v35;
      v8 = Size - v35;
    }
    v26 = v8 == 0;
    if ( v8 <= 0 )
      goto LABEL_44;
    v9 = v42;
    if ( (unsigned int)++v24 >= *v6 )
      return v9;
  }
  if ( *v6 != v24 )
  {
    v26 = *((_BYTE *)a2 + 2) == 1;
    *v6 = v24;
    if ( v26 )
    {
      v28 = (_WORD *)*((_QWORD *)a2 + 2);
      v23 = (unsigned __int16)v24;
      if ( v28 )
      {
        *v28 = v24;
        goto LABEL_43;
      }
    }
    else
    {
      if ( *((_BYTE *)a2 + 2) != 2 )
        goto LABEL_43;
      v29 = (_DWORD *)*((_QWORD *)a2 + 2);
      if ( v29 )
      {
        if ( v6 )
        {
          *v29 = v24;
          goto LABEL_43;
        }
        v23 = 0LL;
        *v29 = 0;
      }
    }
    *(_DWORD *)_o__errno(v23) = 22;
    invalid_parameter_noinfo();
  }
LABEL_43:
  v26 = v8 == 0;
LABEL_44:
  if ( !v26 )
    return v9;
  if ( v33 )
  {
    v30 = v34 + a6;
    if ( v34 != v34 + a6 )
    {
      if ( v33 == 1 )
      {
        if ( v36[0] )
        {
          *(_WORD *)v36[0] = v30;
          goto LABEL_55;
        }
      }
      else
      {
        if ( v33 != 2 )
          goto LABEL_55;
        if ( v36[0] )
        {
          *(_DWORD *)v36[0] = v30;
          goto LABEL_55;
        }
      }
      *(_DWORD *)_o__errno(v23) = 22;
      invalid_parameter_noinfo();
    }
LABEL_55:
    v7 = 1;
    goto LABEL_56;
  }
  if ( *((_BYTE *)this + 56) )
    goto LABEL_55;
LABEL_56:
  *((_BYTE *)this + 56) = v7;
  return 0LL;
}
