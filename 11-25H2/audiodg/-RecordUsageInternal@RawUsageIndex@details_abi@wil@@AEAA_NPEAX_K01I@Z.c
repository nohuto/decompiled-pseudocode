/*
 * XREFs of ?RecordUsageInternal@RawUsageIndex@details_abi@wil@@AEAA_NPEAX_K01I@Z @ 0x14007DFFC
 * Callers:
 *     ?RecordUsage@RawUsageIndex@details_abi@wil@@QEAA_NPEAX_K01I@Z @ 0x14007DEF8 (-RecordUsage@RawUsageIndex@details_abi@wil@@QEAA_NPEAX_K01I@Z.c)
 * Callees:
 *     memmove_s @ 0x14000C4A0 (memmove_s.c)
 *     ?Compare@UsageIndexProperty@details_abi@wil@@QEBAHPEAX_K@Z @ 0x14007A468 (-Compare@UsageIndexProperty@details_abi@wil@@QEBAHPEAX_K@Z.c)
 *     ?FindInsertionPointOrIncrement@RawUsageIndex@details_abi@wil@@AEAAPEAEAEAUUsageIndexProperty@23@PEAEPEAX_KI@Z @ 0x14007AC94 (-FindInsertionPointOrIncrement@RawUsageIndex@details_abi@wil@@AEAAPEAEAEAUUsageIndexProperty@23@.c)
 *     ?GetSize@UsageIndexProperty@details_abi@wil@@QEBA_KXZ @ 0x14007BFB0 (-GetSize@UsageIndexProperty@details_abi@wil@@QEBA_KXZ.c)
 *     ?Read@UsageIndexProperty@details_abi@wil@@QEAA_NAEAPEAEPEAE@Z @ 0x14007DA64 (-Read@UsageIndexProperty@details_abi@wil@@QEAA_NAEAPEAEPEAE@Z.c)
 *     ?SkipValues@RawUsageIndex@details_abi@wil@@AEAAPEAEAEAUUsageIndexProperty@23@PEAE@Z @ 0x14007F82C (-SkipValues@RawUsageIndex@details_abi@wil@@AEAAPEAEAEAUUsageIndexProperty@23@PEAE@Z.c)
 *     ?UpdateCount@UsageIndexProperty@details_abi@wil@@QEAAXI@Z @ 0x1400801E0 (-UpdateCount@UsageIndexProperty@details_abi@wil@@QEAAXI@Z.c)
 *     ?Write@UsageIndexProperty@details_abi@wil@@QEBA_NAEAPEAEPEAE@Z @ 0x1400803F8 (-Write@UsageIndexProperty@details_abi@wil@@QEBA_NAEAPEAEPEAE@Z.c)
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
  char v12; // si
  int v13; // eax
  int v15; // r14d
  __int16 v16; // cx
  __int64 Size; // rax
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // r9
  __int64 v20; // r8
  __int64 v21; // r15
  unsigned __int8 *v22; // r8
  unsigned __int8 *InsertionPointOrIncrement; // [rsp+30h] [rbp-50h] BYREF
  const void *v24; // [rsp+38h] [rbp-48h] BYREF
  __int16 v25; // [rsp+40h] [rbp-40h]
  __int128 v26; // [rsp+48h] [rbp-38h]
  __int16 v27; // [rsp+58h] [rbp-28h] BYREF
  char v28; // [rsp+5Ah] [rbp-26h]
  unsigned int v29; // [rsp+5Ch] [rbp-24h]
  __int16 v30; // [rsp+60h] [rbp-20h]
  __int64 v31; // [rsp+68h] [rbp-18h]
  void *v32; // [rsp+70h] [rbp-10h]

  v6 = *((_QWORD *)this + 3);
  if ( v6 )
  {
    v11 = (unsigned __int8 *)(v6 + 10);
    LOWORD(v24) = *((_WORD *)this + 1);
    v12 = 0;
    BYTE2(v24) = *((_BYTE *)this + 4);
    InsertionPointOrIncrement = v11;
    HIDWORD(v24) = 0;
    v25 = 0;
    v26 = 0LL;
    while ( 1 )
    {
      if ( !wil::details_abi::UsageIndexProperty::Read(
              (wil::details_abi::UsageIndexProperty *)&v24,
              &InsertionPointOrIncrement,
              *((unsigned __int8 **)this + 4)) )
      {
        v11 = InsertionPointOrIncrement;
        *((_QWORD *)this + 4) = InsertionPointOrIncrement;
        goto LABEL_14;
      }
      v13 = wil::details_abi::UsageIndexProperty::Compare(&v24, a2, a3);
      if ( v13 < 0 )
      {
        InsertionPointOrIncrement = v11;
        goto LABEL_11;
      }
      if ( !v13 )
        break;
      v11 = wil::details_abi::RawUsageIndex::SkipValues(
              this,
              (struct wil::details_abi::UsageIndexProperty *)&v24,
              InsertionPointOrIncrement);
      InsertionPointOrIncrement = v11;
    }
    InsertionPointOrIncrement = wil::details_abi::RawUsageIndex::FindInsertionPointOrIncrement(
                                  this,
                                  (struct wil::details_abi::UsageIndexProperty *)&v24,
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
      v15 = HIDWORD(v24);
      goto LABEL_15;
    }
LABEL_14:
    *(_QWORD *)&v26 = 0LL;
    v15 = 1;
    v25 = a3;
    HIDWORD(v24) = 1;
    *((_QWORD *)&v26 + 1) = a2;
    wil::details_abi::UsageIndexProperty::GetSize((wil::details_abi::UsageIndexProperty *)&v24);
LABEL_15:
    v16 = *((_WORD *)this + 3);
    v31 = 0LL;
    v27 = v16;
    LOBYTE(v16) = *((_BYTE *)this + 8);
    v29 = a6;
    v28 = v16;
    v30 = a5;
    v32 = a4;
    Size = wil::details_abi::UsageIndexProperty::GetSize((wil::details_abi::UsageIndexProperty *)&v27);
    v18 = *((_QWORD *)this + 5);
    v19 = *((_QWORD *)this + 4);
    v21 = v20 + Size;
    if ( ((v18 - v19) & -(__int64)(v19 < v18)) >= v20 + Size )
    {
      memmove_s(&v11[v21], v18 - v21 - (_QWORD)v11, v11, v19 - (_QWORD)v11);
      v22 = (unsigned __int8 *)(v21 + *((_QWORD *)this + 4));
      *((_QWORD *)this + 4) = v22;
      if ( v12 )
      {
        if ( BYTE2(v24) )
          wil::details_abi::UsageIndexProperty::UpdateCount((wil::details_abi::UsageIndexProperty *)&v24, v15 + 1);
      }
      else
      {
        wil::details_abi::UsageIndexProperty::Write(
          (wil::details_abi::UsageIndexProperty *)&v24,
          &InsertionPointOrIncrement,
          v22);
      }
      wil::details_abi::UsageIndexProperty::Write(
        (wil::details_abi::UsageIndexProperty *)&v27,
        &InsertionPointOrIncrement,
        *((unsigned __int8 **)this + 4));
      *((_BYTE *)this + 56) = 1;
      return 1;
    }
  }
  return 0;
}
