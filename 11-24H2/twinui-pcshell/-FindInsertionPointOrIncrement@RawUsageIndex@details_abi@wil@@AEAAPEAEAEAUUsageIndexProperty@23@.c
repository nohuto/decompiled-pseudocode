/*
 * XREFs of ?FindInsertionPointOrIncrement@RawUsageIndex@details_abi@wil@@AEAAPEAEAEAUUsageIndexProperty@23@PEAEPEAX_KI@Z @ 0x1800D4C98
 * Callers:
 *     ?RecordUsageInternal@RawUsageIndex@details_abi@wil@@AEAA_NPEAX_K01I@Z @ 0x1800D45E8 (-RecordUsageInternal@RawUsageIndex@details_abi@wil@@AEAA_NPEAX_K01I@Z.c)
 * Callees:
 *     memcpy_s @ 0x18005DF04 (memcpy_s.c)
 *     ?Read@UsageIndexProperty@details_abi@wil@@QEAA_NAEAPEAEPEAE@Z @ 0x1801754F0 (-Read@UsageIndexProperty@details_abi@wil@@QEAA_NAEAPEAEPEAE@Z.c)
 *     ?Compare@UsageIndexProperty@details_abi@wil@@QEBAHPEAX_K@Z @ 0x180191C8C (-Compare@UsageIndexProperty@details_abi@wil@@QEBAHPEAX_K@Z.c)
 *     ?UpdateCount@UsageIndexProperty@details_abi@wil@@QEAAXI@Z @ 0x1801C808C (-UpdateCount@UsageIndexProperty@details_abi@wil@@QEAAXI@Z.c)
 *     _invalid_parameter_noinfo @ 0x1802D24B6 (_invalid_parameter_noinfo.c)
 *     memcmp_0 @ 0x1806CA2D0 (memcmp_0.c)
 */

unsigned __int8 *__fastcall wil::details_abi::RawUsageIndex::FindInsertionPointOrIncrement(
        wil::details_abi::RawUsageIndex *this,
        struct wil::details_abi::UsageIndexProperty *a2,
        unsigned __int8 *a3,
        void *a4,
        size_t Size,
        unsigned int a6)
{
  char v6; // bl
  unsigned __int8 *v7; // r13
  unsigned __int64 v8; // rcx
  __int64 v9; // rax
  unsigned __int8 *v10; // rdi
  unsigned __int8 v12; // r14
  unsigned __int16 v13; // r12
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // rdx
  unsigned __int16 v16; // r9
  unsigned __int64 v17; // rax
  unsigned __int8 v18; // r8
  size_t v19; // r13
  unsigned __int8 *v20; // rax
  unsigned __int8 *v21; // r14
  unsigned __int8 *v22; // rsi
  unsigned __int64 v23; // rax
  unsigned __int8 *v24; // r15
  unsigned __int8 *v25; // rcx
  int v26; // ecx
  bool v27; // cc
  unsigned __int8 *v28; // rsi
  unsigned __int64 v29; // r15
  unsigned __int16 v30; // ax
  unsigned __int16 v32; // ax
  unsigned __int16 v33; // ax
  __int64 v34; // rdx
  unsigned int i; // esi
  unsigned __int8 *v36; // r8
  unsigned __int8 v37; // [rsp+28h] [rbp-59h]
  __int16 v38; // [rsp+2Ah] [rbp-57h]
  unsigned __int8 v39; // [rsp+2Ch] [rbp-55h]
  unsigned __int16 v40; // [rsp+2Eh] [rbp-53h]
  unsigned __int16 v41; // [rsp+38h] [rbp-49h] BYREF
  unsigned __int8 v42; // [rsp+3Ah] [rbp-47h]
  int Source; // [rsp+3Ch] [rbp-45h] BYREF
  unsigned __int16 v44; // [rsp+40h] [rbp-41h] BYREF
  void *v45[2]; // [rsp+48h] [rbp-39h]
  __int64 v46; // [rsp+58h] [rbp-29h]
  __int16 v47; // [rsp+60h] [rbp-21h]
  unsigned __int8 v48; // [rsp+62h] [rbp-1Fh]
  int v49; // [rsp+64h] [rbp-1Dh] BYREF
  unsigned __int16 Destination; // [rsp+68h] [rbp-19h] BYREF
  void *Buf2[2]; // [rsp+70h] [rbp-11h]
  unsigned __int64 v52; // [rsp+80h] [rbp-1h]
  unsigned __int64 v53; // [rsp+88h] [rbp+7h]
  unsigned __int8 *v54; // [rsp+90h] [rbp+Fh]
  unsigned __int8 *v55; // [rsp+D8h] [rbp+57h] BYREF
  void *Buf1; // [rsp+F0h] [rbp+6Fh]

  Buf1 = a4;
  v55 = (unsigned __int8 *)this;
  v6 = 0;
  v7 = (unsigned __int8 *)this;
  v8 = *((unsigned __int16 *)this + 3);
  LODWORD(v9) = -1;
  v46 = -1LL;
  v10 = a3;
  v40 = v8;
  v12 = v7[8];
  v13 = 0;
  v39 = v12;
  v42 = v12;
  v41 = v8;
  Source = 0;
  v44 = 0;
  *(_OWORD *)v45 = 0LL;
  if ( *((_QWORD *)v7 + 2) )
  {
    v14 = (*((_QWORD *)v7 + 4) - (_QWORD)a3) / *((_QWORD *)v7 + 2);
    if ( *((unsigned int *)a2 + 1) > v14 )
      wil::details_abi::UsageIndexProperty::UpdateCount(a2, v14);
    v15 = *((unsigned int *)a2 + 1);
    v16 = *((_WORD *)v7 + 3);
    v17 = *((_QWORD *)v7 + 2) * v15;
    *(_OWORD *)Buf2 = 0LL;
    v18 = v7[8];
    v8 = 0LL;
    v19 = Size;
    v20 = &v10[v17];
    v53 = v15;
    v54 = v20;
    v38 = v16;
    v47 = v16;
    v37 = v18;
    v48 = v18;
    v49 = 0;
    Destination = 0;
    if ( v15 )
    {
      v21 = v55;
      while ( 1 )
      {
        v46 = v15 >> 1;
        v22 = &v10[*((_QWORD *)v21 + 2) * (v15 >> 1)];
        v23 = *((_QWORD *)v21 + 4);
        v52 = v23;
        v24 = v22;
        if ( v18 == 1 )
        {
          v24 = v22 + 2;
          if ( (unsigned __int64)(v22 + 2) > v23 )
            goto LABEL_12;
          Buf2[0] = v22;
          if ( v22 )
          {
            v32 = *(_WORD *)v22;
          }
          else
          {
            *(_DWORD *)_o__errno(v8, v15) = 22;
            invalid_parameter_noinfo();
            v16 = v38;
            v32 = 0;
          }
          v49 = v32;
        }
        else
        {
          if ( v18 != 2 )
            goto LABEL_8;
          v24 = v22 + 4;
          if ( (unsigned __int64)(v22 + 4) > v23 )
            goto LABEL_12;
          Buf2[0] = v22;
          memcpy_s(&v49, 4uLL, v22, 4uLL);
          v16 = v47;
          v37 = v48;
          v38 = v47;
        }
        v23 = v52;
LABEL_8:
        LOWORD(v8) = v16;
        Destination = v16;
        if ( v16 )
          goto LABEL_9;
        if ( (unsigned __int64)(v24 + 2) <= v23 )
        {
          memcpy_s(&Destination, 2uLL, v24, 2uLL);
          v24 += 2;
          v38 = v47;
          LOWORD(v8) = Destination;
          v37 = v48;
LABEL_9:
          v25 = &v24[(unsigned __int16)v8];
          if ( (unsigned __int64)v25 <= v52 )
          {
            Buf2[1] = v24;
            v22 = v25;
          }
          LOWORD(v8) = Destination;
        }
LABEL_12:
        if ( v19 == (unsigned __int16)v8 )
          v26 = memcmp_0(Buf1, Buf2[1], v19);
        else
          v26 = v19 - (unsigned __int16)v8;
        if ( v26 > 0 )
          v15 = -1 - v46 + v53;
        else
          v15 = v46;
        v18 = v37;
        v27 = v26 <= 0;
        v8 = Destination;
        v16 = v38;
        if ( v27 )
          v22 = v10;
        v53 = v15;
        v10 = v22;
        if ( !v15 )
        {
          v12 = v39;
          v13 = v44;
          v20 = v54;
          break;
        }
      }
    }
    if ( v10 >= v20 )
      return v10;
    v28 = v10;
    v29 = *((_QWORD *)v55 + 4);
    if ( v12 == 1 )
    {
      v28 = v10 + 2;
      if ( (unsigned __int64)(v10 + 2) > v29 )
        goto LABEL_28;
      v45[0] = v10;
      if ( v10 )
      {
        v33 = *(_WORD *)v10;
      }
      else
      {
        *(_DWORD *)_o__errno(v8, v15) = 22;
        invalid_parameter_noinfo();
        v33 = 0;
      }
      Source = v33;
    }
    else if ( v12 == 2 )
    {
      v28 = v10 + 4;
      if ( (unsigned __int64)(v10 + 4) > v29 )
        goto LABEL_28;
      v45[0] = v10;
      memcpy_s(&Source, 4uLL, v10, 4uLL);
      v30 = v41;
      v12 = v42;
      goto LABEL_24;
    }
    v30 = v40;
LABEL_24:
    v44 = v30;
    v13 = v30;
    if ( v30 )
    {
LABEL_25:
      v8 = (unsigned __int64)v45[1];
      if ( (unsigned __int64)&v28[v13] <= v29 )
        v8 = (unsigned __int64)v28;
      v45[1] = (void *)v8;
      goto LABEL_28;
    }
    if ( (unsigned __int64)(v28 + 2) <= v29 )
    {
      memcpy_s(&v44, 2uLL, v28, 2uLL);
      v12 = v42;
      v28 += 2;
      v13 = v44;
      goto LABEL_25;
    }
    v13 = v44;
LABEL_28:
    if ( v19 == v13 )
      LODWORD(v9) = memcmp_0(Buf1, v45[1], v19);
    else
      LODWORD(v9) = v19 - v13;
    v7 = v55;
    goto LABEL_31;
  }
  for ( i = 0; i < *((_DWORD *)a2 + 1); ++i )
  {
    v36 = (unsigned __int8 *)*((_QWORD *)v7 + 4);
    v55 = v10;
    if ( !wil::details_abi::UsageIndexProperty::Read((wil::details_abi::UsageIndexProperty *)&v41, &v55, v36) )
    {
      wil::details_abi::UsageIndexProperty::UpdateCount(a2, i);
      LODWORD(v9) = v46;
      break;
    }
    LODWORD(v9) = wil::details_abi::UsageIndexProperty::Compare(
                    (wil::details_abi::UsageIndexProperty *)&v41,
                    Buf1,
                    Size);
    v46 = v9;
    if ( (int)v9 <= 0 )
      break;
    v10 = v55;
  }
  v12 = v42;
LABEL_31:
  if ( (_DWORD)v9 )
    return v10;
  if ( v12 )
  {
    v34 = Source + a6;
    if ( Source != (_DWORD)v34 )
    {
      Source += a6;
      if ( v12 == 1 )
      {
        if ( v45[0] )
        {
          *(_WORD *)v45[0] = v34;
        }
        else
        {
          *(_DWORD *)_o__errno(v8, v34) = 22;
          invalid_parameter_noinfo();
        }
      }
      else if ( v12 == 2 )
      {
        memcpy_s(v45[0], 4uLL, &Source, 4uLL);
      }
    }
  }
  else if ( !v7[56] )
  {
    goto LABEL_48;
  }
  v6 = 1;
LABEL_48:
  v7[56] = v6;
  return 0LL;
}
