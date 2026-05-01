/*
 * XREFs of ?RecordUsageInternal@RawUsageIndex@details_abi@wil@@AEAA_NPEAX_K01I@Z @ 0x180061F6C
 * Callers:
 *     ?RecordUsage@RawUsageIndex@details_abi@wil@@QEAA_NPEAX_K01I@Z @ 0x180061D58 (-RecordUsage@RawUsageIndex@details_abi@wil@@QEAA_NPEAX_K01I@Z.c)
 * Callees:
 *     ?Read@UsageIndexProperty@details_abi@wil@@QEAA_NAEAPEAEPEAE@Z @ 0x18006217C (-Read@UsageIndexProperty@details_abi@wil@@QEAA_NAEAPEAEPEAE@Z.c)
 *     ?SkipValues@RawUsageIndex@details_abi@wil@@AEAAPEAEAEAUUsageIndexProperty@23@PEAE@Z @ 0x180062284 (-SkipValues@RawUsageIndex@details_abi@wil@@AEAAPEAEAEAUUsageIndexProperty@23@PEAE@Z.c)
 *     ?FindInsertionPointOrIncrement@RawUsageIndex@details_abi@wil@@AEAAPEAEAEAUUsageIndexProperty@23@PEAEPEAX_KI@Z @ 0x1800623B4 (-FindInsertionPointOrIncrement@RawUsageIndex@details_abi@wil@@AEAAPEAEAEAUUsageIndexProperty@23@.c)
 *     ?GetSize@UsageIndexProperty@details_abi@wil@@QEBA_KXZ @ 0x18006AC04 (-GetSize@UsageIndexProperty@details_abi@wil@@QEBA_KXZ.c)
 *     ?UpdateCount@UsageIndexProperty@details_abi@wil@@QEAAXI@Z @ 0x18007692C (-UpdateCount@UsageIndexProperty@details_abi@wil@@QEAAXI@Z.c)
 *     ?Write@UsageIndexProperty@details_abi@wil@@QEBA_NAEAPEAEPEAE@Z @ 0x180076CCC (-Write@UsageIndexProperty@details_abi@wil@@QEBA_NAEAPEAEPEAE@Z.c)
 *     memcmp_0 @ 0x1800A7AE6 (memcmp_0.c)
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
  __int16 v15; // cx
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // r9
  __int64 v19; // r8
  __int64 v20; // r14
  unsigned __int8 *v21; // r8
  unsigned __int8 *InsertionPointOrIncrement; // [rsp+30h] [rbp-50h] BYREF
  __int16 v23; // [rsp+38h] [rbp-48h] BYREF
  char v24; // [rsp+3Ah] [rbp-46h]
  int v25; // [rsp+3Ch] [rbp-44h]
  unsigned __int16 v26; // [rsp+40h] [rbp-40h]
  void *Buf2[2]; // [rsp+48h] [rbp-38h]
  __int16 v28; // [rsp+58h] [rbp-28h] BYREF
  char v29; // [rsp+5Ah] [rbp-26h]
  unsigned int v30; // [rsp+5Ch] [rbp-24h]
  __int16 v31; // [rsp+60h] [rbp-20h]
  __int64 v32; // [rsp+68h] [rbp-18h]
  void *v33; // [rsp+70h] [rbp-10h]

  v6 = *((_QWORD *)this + 3);
  if ( !v6 )
    return 0;
  v11 = (unsigned __int8 *)(v6 + 10);
  v23 = *((_WORD *)this + 1);
  v12 = 0;
  v24 = *((_BYTE *)this + 4);
  InsertionPointOrIncrement = v11;
  v25 = 0;
  v26 = 0;
  *(_OWORD *)Buf2 = 0LL;
  while ( 1 )
  {
    if ( !wil::details_abi::UsageIndexProperty::Read(
            (wil::details_abi::UsageIndexProperty *)&v23,
            &InsertionPointOrIncrement,
            *((unsigned __int8 **)this + 4)) )
    {
      v11 = InsertionPointOrIncrement;
      *((_QWORD *)this + 4) = InsertionPointOrIncrement;
LABEL_18:
      Buf2[0] = 0LL;
      v25 = 1;
      v26 = Size;
      Buf2[1] = Buf1;
      wil::details_abi::UsageIndexProperty::GetSize((wil::details_abi::UsageIndexProperty *)&v23);
      goto LABEL_19;
    }
    v13 = Size == v26 ? memcmp_0(Buf1, Buf2[1], Size) : Size - v26;
    if ( v13 < 0 )
      break;
    if ( !v13 )
    {
      InsertionPointOrIncrement = wil::details_abi::RawUsageIndex::FindInsertionPointOrIncrement(
                                    this,
                                    (struct wil::details_abi::UsageIndexProperty *)&v23,
                                    InsertionPointOrIncrement,
                                    a4,
                                    a5,
                                    a6);
      v11 = InsertionPointOrIncrement;
      if ( InsertionPointOrIncrement )
      {
        v12 = 1;
        goto LABEL_15;
      }
      return 1;
    }
    v11 = wil::details_abi::RawUsageIndex::SkipValues(
            this,
            (struct wil::details_abi::UsageIndexProperty *)&v23,
            InsertionPointOrIncrement);
    InsertionPointOrIncrement = v11;
  }
  InsertionPointOrIncrement = v11;
LABEL_15:
  if ( !v12 )
    goto LABEL_18;
LABEL_19:
  v15 = *((_WORD *)this + 3);
  v32 = 0LL;
  v28 = v15;
  v29 = *((_BYTE *)this + 8);
  v30 = a6;
  v31 = a5;
  v33 = a4;
  v16 = wil::details_abi::UsageIndexProperty::GetSize((wil::details_abi::UsageIndexProperty *)&v28);
  v17 = *((_QWORD *)this + 5);
  v18 = *((_QWORD *)this + 4);
  v20 = v19 + v16;
  if ( ((v17 - v18) & -(__int64)(v18 < v17)) >= v19 + v16 )
  {
    memmove_s(&v11[v20], v17 - v20 - (_QWORD)v11, v11, v18 - (_QWORD)v11);
    v21 = (unsigned __int8 *)(v20 + *((_QWORD *)this + 4));
    *((_QWORD *)this + 4) = v21;
    if ( v12 )
    {
      if ( v24 )
        wil::details_abi::UsageIndexProperty::UpdateCount((wil::details_abi::UsageIndexProperty *)&v23, v25 + 1);
    }
    else
    {
      wil::details_abi::UsageIndexProperty::Write(
        (wil::details_abi::UsageIndexProperty *)&v23,
        &InsertionPointOrIncrement,
        v21);
    }
    wil::details_abi::UsageIndexProperty::Write(
      (wil::details_abi::UsageIndexProperty *)&v28,
      &InsertionPointOrIncrement,
      *((unsigned __int8 **)this + 4));
    *((_BYTE *)this + 56) = 1;
    return 1;
  }
  return 0;
}
