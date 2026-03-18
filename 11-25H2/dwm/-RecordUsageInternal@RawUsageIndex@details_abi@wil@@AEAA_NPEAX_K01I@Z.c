/*
 * XREFs of ?RecordUsageInternal@RawUsageIndex@details_abi@wil@@AEAA_NPEAX_K01I@Z @ 0x14000A310
 * Callers:
 *     ?RecordUsage@RawUsageIndex@details_abi@wil@@QEAA_NPEAX_K01I@Z @ 0x14000A20C (-RecordUsage@RawUsageIndex@details_abi@wil@@QEAA_NPEAX_K01I@Z.c)
 * Callees:
 *     _invalid_parameter_noinfo @ 0x140005CD8 (_invalid_parameter_noinfo.c)
 *     ?Compare@UsageIndexProperty@details_abi@wil@@QEBAHPEAX_K@Z @ 0x140007814 (-Compare@UsageIndexProperty@details_abi@wil@@QEBAHPEAX_K@Z.c)
 *     ?FindInsertionPointOrIncrement@RawUsageIndex@details_abi@wil@@AEAAPEAEAEAUUsageIndexProperty@23@PEAEPEAX_KI@Z @ 0x140008040 (-FindInsertionPointOrIncrement@RawUsageIndex@details_abi@wil@@AEAAPEAEAEAUUsageIndexProperty@23@.c)
 *     ?GetSize@UsageIndexProperty@details_abi@wil@@QEBA_KXZ @ 0x140008910 (-GetSize@UsageIndexProperty@details_abi@wil@@QEBA_KXZ.c)
 *     ?Read@UsageIndexProperty@details_abi@wil@@QEAA_NAEAPEAEPEAE@Z @ 0x140009D58 (-Read@UsageIndexProperty@details_abi@wil@@QEAA_NAEAPEAEPEAE@Z.c)
 *     ?SkipValues@RawUsageIndex@details_abi@wil@@AEAAPEAEAEAUUsageIndexProperty@23@PEAE@Z @ 0x14000B0BC (-SkipValues@RawUsageIndex@details_abi@wil@@AEAAPEAEAEAUUsageIndexProperty@23@PEAE@Z.c)
 *     ?UpdateCount@UsageIndexProperty@details_abi@wil@@QEAAXI@Z @ 0x14000B850 (-UpdateCount@UsageIndexProperty@details_abi@wil@@QEAAXI@Z.c)
 *     ?Write@UsageIndexProperty@details_abi@wil@@QEBA_NAEAPEAEPEAE@Z @ 0x14000BCEC (-Write@UsageIndexProperty@details_abi@wil@@QEBA_NAEAPEAEPEAE@Z.c)
 *     memmove_0 @ 0x140010BC8 (memmove_0.c)
 */

char __fastcall wil::details_abi::RawUsageIndex::RecordUsageInternal(
        wil::details_abi::RawUsageIndex *this,
        void *a2,
        size_t a3,
        void *a4,
        size_t a5,
        unsigned int a6)
{
  __int64 v6; // rdi
  unsigned __int8 *v11; // rdi
  char v12; // bl
  int v13; // eax
  int v15; // r14d
  __int16 v16; // cx
  __int64 Size; // rax
  unsigned __int64 v18; // r9
  __int64 v19; // r8
  unsigned __int64 v20; // r15
  unsigned __int64 v21; // r8
  unsigned __int64 v22; // rdx
  unsigned __int8 *v23; // rcx
  size_t v24; // r9
  size_t v25; // r8
  unsigned __int8 *v26; // r8
  unsigned __int8 *InsertionPointOrIncrement; // [rsp+30h] [rbp-50h] BYREF
  const void *v28; // [rsp+38h] [rbp-48h] BYREF
  __int16 v29; // [rsp+40h] [rbp-40h]
  __int128 v30; // [rsp+48h] [rbp-38h]
  __int16 v31; // [rsp+58h] [rbp-28h] BYREF
  char v32; // [rsp+5Ah] [rbp-26h]
  unsigned int v33; // [rsp+5Ch] [rbp-24h]
  __int16 v34; // [rsp+60h] [rbp-20h]
  __int64 v35; // [rsp+68h] [rbp-18h]
  void *v36; // [rsp+70h] [rbp-10h]

  v6 = *((_QWORD *)this + 3);
  if ( v6 )
  {
    v11 = (unsigned __int8 *)(v6 + 10);
    LOWORD(v28) = *((_WORD *)this + 1);
    v12 = 0;
    BYTE2(v28) = *((_BYTE *)this + 4);
    InsertionPointOrIncrement = v11;
    HIDWORD(v28) = 0;
    v29 = 0;
    v30 = 0LL;
    while ( 1 )
    {
      if ( !wil::details_abi::UsageIndexProperty::Read(
              (wil::details_abi::UsageIndexProperty *)&v28,
              &InsertionPointOrIncrement,
              *((unsigned __int8 **)this + 4)) )
      {
        v11 = InsertionPointOrIncrement;
        *((_QWORD *)this + 4) = InsertionPointOrIncrement;
        goto LABEL_14;
      }
      v13 = wil::details_abi::UsageIndexProperty::Compare(&v28, a2, a3);
      if ( v13 < 0 )
      {
        InsertionPointOrIncrement = v11;
        goto LABEL_11;
      }
      if ( !v13 )
        break;
      v11 = wil::details_abi::RawUsageIndex::SkipValues(
              this,
              (struct wil::details_abi::UsageIndexProperty *)&v28,
              InsertionPointOrIncrement);
      InsertionPointOrIncrement = v11;
    }
    InsertionPointOrIncrement = wil::details_abi::RawUsageIndex::FindInsertionPointOrIncrement(
                                  this,
                                  (struct wil::details_abi::UsageIndexProperty *)&v28,
                                  InsertionPointOrIncrement,
                                  a4,
                                  a5,
                                  a6);
    v11 = InsertionPointOrIncrement;
    if ( !InsertionPointOrIncrement )
      return 1;
    v12 = 1;
LABEL_11:
    if ( v12 )
    {
      v15 = HIDWORD(v28);
      goto LABEL_15;
    }
LABEL_14:
    *(_QWORD *)&v30 = 0LL;
    v15 = 1;
    v29 = a3;
    HIDWORD(v28) = 1;
    *((_QWORD *)&v30 + 1) = a2;
    wil::details_abi::UsageIndexProperty::GetSize((wil::details_abi::UsageIndexProperty *)&v28);
LABEL_15:
    v16 = *((_WORD *)this + 3);
    v35 = 0LL;
    v31 = v16;
    LOBYTE(v16) = *((_BYTE *)this + 8);
    v33 = a6;
    v32 = v16;
    v34 = a5;
    v36 = a4;
    Size = wil::details_abi::UsageIndexProperty::GetSize((wil::details_abi::UsageIndexProperty *)&v31);
    v18 = *((_QWORD *)this + 5);
    v20 = v19 + Size;
    v21 = *((_QWORD *)this + 4);
    v22 = v18 - v21;
    if ( ((v18 - v21) & -(__int64)(v21 < v18)) >= v20 )
    {
      v23 = &v11[v20];
      v24 = v18 - v20 - (_QWORD)v11;
      v25 = v21 - (_QWORD)v11;
      if ( v25 )
      {
        if ( v23 && v11 )
        {
          if ( v24 >= v25 )
          {
            memmove_0(v23, v11, v25);
            goto LABEL_24;
          }
          *(_DWORD *)_o__errno(v23, v22, v25, v24) = 34;
        }
        else
        {
          *(_DWORD *)_o__errno(v23, v22, v25, v24) = 22;
        }
        invalid_parameter_noinfo();
      }
LABEL_24:
      v26 = (unsigned __int8 *)(v20 + *((_QWORD *)this + 4));
      *((_QWORD *)this + 4) = v26;
      if ( v12 )
      {
        if ( BYTE2(v28) )
          wil::details_abi::UsageIndexProperty::UpdateCount((wil::details_abi::UsageIndexProperty *)&v28, v15 + 1);
      }
      else
      {
        wil::details_abi::UsageIndexProperty::Write(
          (wil::details_abi::UsageIndexProperty *)&v28,
          &InsertionPointOrIncrement,
          v26);
      }
      wil::details_abi::UsageIndexProperty::Write(
        (wil::details_abi::UsageIndexProperty *)&v31,
        &InsertionPointOrIncrement,
        *((unsigned __int8 **)this + 4));
      *((_BYTE *)this + 56) = 1;
      return 1;
    }
  }
  return 0;
}
