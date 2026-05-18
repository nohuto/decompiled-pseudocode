/*
 * XREFs of ?RecordUsageInternal@RawUsageIndex@details_abi@wil@@AEAA_NPEAX_K01I@Z @ 0x180007CCC
 * Callers:
 *     ?RecordUsage@RawUsageIndex@details_abi@wil@@QEAA_NPEAX_K01I@Z @ 0x180007B54 (-RecordUsage@RawUsageIndex@details_abi@wil@@QEAA_NPEAX_K01I@Z.c)
 * Callees:
 *     _invalid_parameter_noinfo @ 0x1800030BA (_invalid_parameter_noinfo.c)
 *     ?FindInsertionPointOrIncrement@RawUsageIndex@details_abi@wil@@AEAAPEAEAEAUUsageIndexProperty@23@PEAEPEAX_KI@Z @ 0x180005E90 (-FindInsertionPointOrIncrement@RawUsageIndex@details_abi@wil@@AEAAPEAEAEAUUsageIndexProperty@23@.c)
 *     ?Read@UsageIndexProperty@details_abi@wil@@QEAA_NAEAPEAEPEAE@Z @ 0x180007458 (-Read@UsageIndexProperty@details_abi@wil@@QEAA_NAEAPEAEPEAE@Z.c)
 *     ?Write@UsageIndexProperty@details_abi@wil@@QEBA_NAEAPEAEPEAE@Z @ 0x180009BC8 (-Write@UsageIndexProperty@details_abi@wil@@QEBA_NAEAPEAEPEAE@Z.c)
 *     memcmp_0 @ 0x180010DD4 (memcmp_0.c)
 *     memmove_0 @ 0x180010DEC (memmove_0.c)
 */

char __fastcall wil::details_abi::RawUsageIndex::RecordUsageInternal(
        wil::details_abi::RawUsageIndex *this,
        void *Buf1,
        size_t Size,
        void *a4,
        size_t a5,
        unsigned int a6)
{
  __int64 v6; // rdi
  char v7; // r13
  unsigned __int8 *v11; // r8
  char *v12; // rdi
  __int64 v13; // rcx
  unsigned __int64 v14; // rax
  unsigned int v15; // esi
  unsigned int v16; // r14d
  unsigned int v17; // esi
  char v19; // r14
  __int64 v20; // rcx
  int v21; // r13d
  _WORD *v22; // rsi
  __int64 v24; // rax
  char v25; // dl
  unsigned __int64 v26; // rdx
  __int64 v27; // r15
  unsigned __int64 v28; // r8
  char *v29; // rcx
  size_t v30; // rdx
  size_t v31; // r8
  unsigned __int8 *v32; // r8
  int v33; // eax
  void *Src; // [rsp+30h] [rbp-50h] BYREF
  unsigned __int16 v35; // [rsp+38h] [rbp-48h] BYREF
  char v36; // [rsp+3Ah] [rbp-46h]
  unsigned int v37; // [rsp+3Ch] [rbp-44h]
  unsigned __int16 v38; // [rsp+40h] [rbp-40h]
  void *Buf2[2]; // [rsp+48h] [rbp-38h]
  __int16 v40; // [rsp+58h] [rbp-28h] BYREF
  char v41; // [rsp+5Ah] [rbp-26h]
  unsigned int v42; // [rsp+5Ch] [rbp-24h]
  __int16 v43; // [rsp+60h] [rbp-20h]
  __int128 v44; // [rsp+68h] [rbp-18h]
  char v45; // [rsp+C0h] [rbp+40h]

  v6 = *((_QWORD *)this + 3);
  v7 = 0;
  if ( !v6 )
    return 0;
  v11 = (unsigned __int8 *)*((_QWORD *)this + 4);
  v12 = (char *)(v6 + 10);
  v35 = *((_WORD *)this + 1);
  v36 = *((_BYTE *)this + 4);
  v37 = 0;
  v38 = 0;
  *(_OWORD *)Buf2 = 0LL;
  v45 = 0;
  while ( 1 )
  {
    Src = v12;
    if ( !wil::details_abi::UsageIndexProperty::Read(
            (wil::details_abi::UsageIndexProperty *)&v35,
            (unsigned __int8 **)&Src,
            v11) )
    {
      v12 = (char *)Src;
      *((_QWORD *)this + 4) = Src;
      goto LABEL_35;
    }
    if ( Size == v38 )
      v13 = (unsigned int)memcmp_0(Buf1, Buf2[1], Size);
    else
      v13 = (unsigned int)Size - v38;
    if ( (int)v13 < 0 )
    {
      Src = v12;
      goto LABEL_35;
    }
    if ( !(_DWORD)v13 )
      break;
    v12 = (char *)Src;
    if ( *((_QWORD *)this + 2) )
    {
      v14 = (*((_QWORD *)this + 4) - *((_QWORD *)this + 3)) / *((_QWORD *)this + 2);
      v15 = v37;
      if ( v37 <= v14 || v37 == (_DWORD)v14 )
        goto LABEL_18;
      v15 = (*((_QWORD *)this + 4) - *((_QWORD *)this + 3)) / *((_QWORD *)this + 2);
      v37 = v15;
      if ( v36 == 1 )
      {
        if ( Buf2[0] )
        {
          *(_WORD *)Buf2[0] = v14;
LABEL_18:
          v12 += *((_QWORD *)this + 2) * v15;
          goto LABEL_32;
        }
      }
      else
      {
        if ( v36 != 2 )
          goto LABEL_18;
        if ( Buf2[0] )
        {
          *(_DWORD *)Buf2[0] = v14;
          goto LABEL_18;
        }
      }
      *(_DWORD *)_o__errno(v13) = 22;
      invalid_parameter_noinfo();
      goto LABEL_18;
    }
    v16 = v37;
    v17 = 0;
    v40 = *((_WORD *)this + 3);
    v41 = *((_BYTE *)this + 8);
    v42 = 0;
    v43 = 0;
    v44 = 0LL;
    if ( v37 )
    {
      v7 = 0;
      do
      {
        if ( !wil::details_abi::UsageIndexProperty::Read(
                (wil::details_abi::UsageIndexProperty *)&v40,
                (unsigned __int8 **)&Src,
                *((unsigned __int8 **)this + 4)) )
          break;
        ++v17;
      }
      while ( v17 < v16 );
      v12 = (char *)Src;
    }
    if ( v16 != v17 )
    {
      v37 = v17;
      if ( v36 == 1 )
      {
        if ( Buf2[0] )
        {
          *(_WORD *)Buf2[0] = v17;
          goto LABEL_32;
        }
      }
      else
      {
        if ( v36 != 2 )
          goto LABEL_32;
        if ( Buf2[0] )
        {
          *(_DWORD *)Buf2[0] = v17;
          goto LABEL_32;
        }
      }
      *(_DWORD *)_o__errno(v13) = 22;
      invalid_parameter_noinfo();
    }
LABEL_32:
    v11 = (unsigned __int8 *)*((_QWORD *)this + 4);
  }
  Src = wil::details_abi::RawUsageIndex::FindInsertionPointOrIncrement(
          this,
          (struct wil::details_abi::UsageIndexProperty *)&v35,
          (unsigned __int8 *)Src,
          a4,
          a5,
          a6);
  v12 = (char *)Src;
  if ( !Src )
    return 1;
  v7 = 1;
  v45 = 1;
LABEL_35:
  v19 = v36;
  v20 = 0LL;
  if ( v7 )
  {
    v22 = Buf2[0];
    v21 = v37;
  }
  else
  {
    v21 = 1;
    v37 = 1;
    v22 = 0LL;
    v38 = Size;
    Buf2[0] = 0LL;
    Buf2[1] = Buf1;
    if ( v35 )
      v20 = v35;
    else
      v20 = (unsigned __int16)Size + 2LL;
    if ( v36 == 1 )
    {
      v20 += 2LL;
    }
    else if ( v36 == 2 )
    {
      v20 += 4LL;
    }
  }
  v24 = *((unsigned __int16 *)this + 3);
  v25 = *((_BYTE *)this + 8);
  v42 = a6;
  v43 = a5;
  v40 = v24;
  v41 = v25;
  *(_QWORD *)&v44 = 0LL;
  *((_QWORD *)&v44 + 1) = a4;
  if ( !(_WORD)v24 )
    v24 = (unsigned __int16)a5 + 2LL;
  if ( v25 == 1 )
  {
    v24 += 2LL;
  }
  else if ( v25 == 2 )
  {
    v24 += 4LL;
  }
  v26 = *((_QWORD *)this + 5);
  v27 = v24 + v20;
  v28 = *((_QWORD *)this + 4);
  if ( ((v26 - v28) & -(__int64)(v28 < v26)) >= v24 + v20 )
  {
    v29 = &v12[v27];
    v30 = v26 - v27 - (_QWORD)v12;
    v31 = v28 - (_QWORD)v12;
    if ( !v31 )
      goto LABEL_63;
    if ( v29 && v12 )
    {
      if ( v30 >= v31 )
      {
        memmove_0(v29, v12, v31);
        goto LABEL_63;
      }
      *(_DWORD *)_o__errno(v29) = 34;
    }
    else
    {
      *(_DWORD *)_o__errno(v29) = 22;
    }
    invalid_parameter_noinfo();
LABEL_63:
    v32 = (unsigned __int8 *)(v27 + *((_QWORD *)this + 4));
    *((_QWORD *)this + 4) = v32;
    if ( v45 )
    {
      if ( v19 )
      {
        v33 = v21 + 1;
        if ( v19 == 1 )
        {
          if ( v22 )
          {
            *v22 = v33;
            goto LABEL_73;
          }
        }
        else
        {
          if ( v19 != 2 )
            goto LABEL_73;
          if ( v22 )
          {
            *(_DWORD *)v22 = v33;
            goto LABEL_73;
          }
        }
        *(_DWORD *)_o__errno(v29) = 22;
        invalid_parameter_noinfo();
      }
    }
    else
    {
      wil::details_abi::UsageIndexProperty::Write(
        (wil::details_abi::UsageIndexProperty *)&v35,
        (unsigned __int8 **)&Src,
        v32);
    }
LABEL_73:
    wil::details_abi::UsageIndexProperty::Write(
      (wil::details_abi::UsageIndexProperty *)&v40,
      (unsigned __int8 **)&Src,
      *((unsigned __int8 **)this + 4));
    *((_BYTE *)this + 56) = 1;
    return 1;
  }
  return 0;
}
