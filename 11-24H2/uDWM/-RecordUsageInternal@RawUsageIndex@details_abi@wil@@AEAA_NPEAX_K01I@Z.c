/*
 * XREFs of ?RecordUsageInternal@RawUsageIndex@details_abi@wil@@AEAA_NPEAX_K01I@Z @ 0x180070E80
 * Callers:
 *     ?RecordUsage@RawUsageIndex@details_abi@wil@@QEAA_NPEAX_K01I@Z @ 0x180070C68 (-RecordUsage@RawUsageIndex@details_abi@wil@@QEAA_NPEAX_K01I@Z.c)
 * Callees:
 *     ?Read@UsageIndexProperty@details_abi@wil@@QEAA_NAEAPEAEPEAE@Z @ 0x180071094 (-Read@UsageIndexProperty@details_abi@wil@@QEAA_NAEAPEAEPEAE@Z.c)
 *     ?FindInsertionPointOrIncrement@RawUsageIndex@details_abi@wil@@AEAAPEAEAEAUUsageIndexProperty@23@PEAEPEAX_KI@Z @ 0x180071184 (-FindInsertionPointOrIncrement@RawUsageIndex@details_abi@wil@@AEAAPEAEAEAUUsageIndexProperty@23@.c)
 *     ?GetSize@UsageIndexProperty@details_abi@wil@@QEBA_KXZ @ 0x180084EB4 (-GetSize@UsageIndexProperty@details_abi@wil@@QEBA_KXZ.c)
 *     memmove_s @ 0x180089768 (memmove_s.c)
 *     ?SkipValues@RawUsageIndex@details_abi@wil@@AEAAPEAEAEAUUsageIndexProperty@23@PEAE@Z @ 0x1800970D8 (-SkipValues@RawUsageIndex@details_abi@wil@@AEAAPEAEAEAUUsageIndexProperty@23@PEAE@Z.c)
 *     ?UpdateCount@UsageIndexProperty@details_abi@wil@@QEAAXI@Z @ 0x1800A050C (-UpdateCount@UsageIndexProperty@details_abi@wil@@QEAAXI@Z.c)
 *     ?Write@UsageIndexProperty@details_abi@wil@@QEBA_NAEAPEAEPEAE@Z @ 0x1800A06DC (-Write@UsageIndexProperty@details_abi@wil@@QEBA_NAEAPEAEPEAE@Z.c)
 *     memcmp_0 @ 0x1800F636C (memcmp_0.c)
 */

char __fastcall wil::details_abi::RawUsageIndex::RecordUsageInternal(
        wil::details_abi::RawUsageIndex *this,
        void *Buf1,
        size_t Size,
        void *a4,
        unsigned __int64 a5,
        unsigned int a6)
{
  __int64 v6; // rdi
  unsigned __int8 *v11; // rdi
  char v12; // si
  int v13; // ecx
  int v15; // r14d
  __int16 v16; // cx
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // r9
  __int64 v20; // r8
  __int64 v21; // r15
  unsigned __int8 *v22; // r8
  unsigned __int8 *InsertionPointOrIncrement; // [rsp+30h] [rbp-50h] BYREF
  __int16 v24; // [rsp+38h] [rbp-48h] BYREF
  char v25; // [rsp+3Ah] [rbp-46h]
  int v26; // [rsp+3Ch] [rbp-44h]
  unsigned __int16 v27; // [rsp+40h] [rbp-40h]
  void *Buf2[2]; // [rsp+48h] [rbp-38h]
  __int16 v29; // [rsp+58h] [rbp-28h] BYREF
  char v30; // [rsp+5Ah] [rbp-26h]
  unsigned int v31; // [rsp+5Ch] [rbp-24h]
  __int16 v32; // [rsp+60h] [rbp-20h]
  __int64 v33; // [rsp+68h] [rbp-18h]
  void *v34; // [rsp+70h] [rbp-10h]

  v6 = *((_QWORD *)this + 3);
  if ( v6 )
  {
    v11 = (unsigned __int8 *)(v6 + 10);
    v24 = *((_WORD *)this + 1);
    v12 = 0;
    v25 = *((_BYTE *)this + 4);
    InsertionPointOrIncrement = v11;
    v26 = 0;
    v27 = 0;
    *(_OWORD *)Buf2 = 0LL;
    while ( 1 )
    {
      if ( !wil::details_abi::UsageIndexProperty::Read(
              (wil::details_abi::UsageIndexProperty *)&v24,
              &InsertionPointOrIncrement,
              *((unsigned __int8 **)this + 4)) )
      {
        v11 = InsertionPointOrIncrement;
        *((_QWORD *)this + 4) = InsertionPointOrIncrement;
        goto LABEL_17;
      }
      v13 = Size == v27 ? memcmp_0(Buf1, Buf2[1], Size) : Size - v27;
      if ( v13 < 0 )
        break;
      if ( !v13 )
      {
        InsertionPointOrIncrement = wil::details_abi::RawUsageIndex::FindInsertionPointOrIncrement(
                                      this,
                                      (struct wil::details_abi::UsageIndexProperty *)&v24,
                                      InsertionPointOrIncrement,
                                      a4,
                                      a5,
                                      a6);
        v11 = InsertionPointOrIncrement;
        if ( InsertionPointOrIncrement )
        {
          v12 = 1;
          goto LABEL_14;
        }
        return 1;
      }
      v11 = wil::details_abi::RawUsageIndex::SkipValues(
              this,
              (struct wil::details_abi::UsageIndexProperty *)&v24,
              InsertionPointOrIncrement);
      InsertionPointOrIncrement = v11;
    }
    InsertionPointOrIncrement = v11;
LABEL_14:
    if ( v12 )
    {
      v15 = v26;
      goto LABEL_18;
    }
LABEL_17:
    Buf2[0] = 0LL;
    v15 = 1;
    v27 = Size;
    v26 = 1;
    Buf2[1] = Buf1;
    wil::details_abi::UsageIndexProperty::GetSize((wil::details_abi::UsageIndexProperty *)&v24);
LABEL_18:
    v16 = *((_WORD *)this + 3);
    v33 = 0LL;
    v29 = v16;
    LOBYTE(v16) = *((_BYTE *)this + 8);
    v31 = a6;
    v30 = v16;
    v32 = a5;
    v34 = a4;
    v17 = wil::details_abi::UsageIndexProperty::GetSize((wil::details_abi::UsageIndexProperty *)&v29);
    v18 = *((_QWORD *)this + 5);
    v19 = *((_QWORD *)this + 4);
    v21 = v20 + v17;
    if ( ((v18 - v19) & -(__int64)(v19 < v18)) >= v20 + v17 )
    {
      memmove_s(&v11[v21], v18 - v21 - (_QWORD)v11, v11, v19 - (_QWORD)v11);
      v22 = (unsigned __int8 *)(v21 + *((_QWORD *)this + 4));
      *((_QWORD *)this + 4) = v22;
      if ( v12 )
      {
        if ( v25 )
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
        (wil::details_abi::UsageIndexProperty *)&v29,
        &InsertionPointOrIncrement,
        *((unsigned __int8 **)this + 4));
      *((_BYTE *)this + 56) = 1;
      return 1;
    }
  }
  return 0;
}
