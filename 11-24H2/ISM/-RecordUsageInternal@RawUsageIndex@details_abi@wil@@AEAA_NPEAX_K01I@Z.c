/*
 * XREFs of ?RecordUsageInternal@RawUsageIndex@details_abi@wil@@AEAA_NPEAX_K01I@Z @ 0x180073930
 * Callers:
 *     ?RecordUsage@RawUsageIndex@details_abi@wil@@QEAA_NPEAX_K01I@Z @ 0x1800A11A0 (-RecordUsage@RawUsageIndex@details_abi@wil@@QEAA_NPEAX_K01I@Z.c)
 * Callees:
 *     ?FindInsertionPointOrIncrement@RawUsageIndex@details_abi@wil@@AEAAPEAEAEAUUsageIndexProperty@23@PEAEPEAX_KI@Z @ 0x180073B54 (-FindInsertionPointOrIncrement@RawUsageIndex@details_abi@wil@@AEAAPEAEAEAUUsageIndexProperty@23@.c)
 *     memmove_s @ 0x180073DCC (memmove_s.c)
 *     ?GetSize@UsageIndexProperty@details_abi@wil@@QEBA_KXZ @ 0x180073E34 (-GetSize@UsageIndexProperty@details_abi@wil@@QEBA_KXZ.c)
 *     ?Read@UsageIndexProperty@details_abi@wil@@QEAA_NAEAPEAEPEAE@Z @ 0x1800970D0 (-Read@UsageIndexProperty@details_abi@wil@@QEAA_NAEAPEAEPEAE@Z.c)
 *     ?Write@UsageIndexProperty@details_abi@wil@@QEBA_NAEAPEAEPEAE@Z @ 0x1800979F0 (-Write@UsageIndexProperty@details_abi@wil@@QEBA_NAEAPEAEPEAE@Z.c)
 *     ?SkipValues@RawUsageIndex@details_abi@wil@@AEAAPEAEAEAUUsageIndexProperty@23@PEAE@Z @ 0x1800A2050 (-SkipValues@RawUsageIndex@details_abi@wil@@AEAAPEAEAEAUUsageIndexProperty@23@PEAE@Z.c)
 *     ?UpdateCount@UsageIndexProperty@details_abi@wil@@QEAAXI@Z @ 0x1800A24C8 (-UpdateCount@UsageIndexProperty@details_abi@wil@@QEAAXI@Z.c)
 *     memcmp_0 @ 0x1801CF190 (memcmp_0.c)
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
  unsigned __int8 *v11; // rdi
  char v12; // r14
  bool v13; // al
  __int64 v14; // r9
  int v15; // ecx
  unsigned __int8 *InsertionPointOrIncrement; // rax
  unsigned __int64 v18; // r8
  int v19; // esi
  __int64 v20; // rdx
  char v21; // cl
  __int64 v22; // rax
  unsigned __int64 v23; // rdx
  unsigned __int64 v24; // r15
  unsigned __int64 v25; // r9
  unsigned __int8 *v26; // r8
  unsigned __int8 *v27; // [rsp+30h] [rbp-50h] BYREF
  __int16 v28; // [rsp+38h] [rbp-48h] BYREF
  char v29; // [rsp+3Ah] [rbp-46h]
  int v30; // [rsp+3Ch] [rbp-44h]
  unsigned __int16 v31; // [rsp+40h] [rbp-40h]
  void *Buf2[2]; // [rsp+48h] [rbp-38h]
  __int16 v33; // [rsp+58h] [rbp-28h] BYREF
  char v34; // [rsp+5Ah] [rbp-26h]
  unsigned int v35; // [rsp+5Ch] [rbp-24h]
  __int16 v36; // [rsp+60h] [rbp-20h]
  __int64 v37; // [rsp+68h] [rbp-18h]
  void *v38; // [rsp+70h] [rbp-10h]

  v6 = *((_QWORD *)this + 3);
  if ( v6 )
  {
    v11 = (unsigned __int8 *)(v6 + 10);
    v28 = *((_WORD *)this + 1);
    v12 = 0;
    v29 = *((_BYTE *)this + 4);
    v27 = v11;
    v30 = 0;
    v31 = 0;
    *(_OWORD *)Buf2 = 0LL;
    while ( 1 )
    {
      v13 = wil::details_abi::UsageIndexProperty::Read(
              (wil::details_abi::UsageIndexProperty *)&v28,
              &v27,
              *((unsigned __int8 **)this + 4));
      v14 = 0LL;
      if ( !v13 )
      {
        v11 = v27;
        *((_QWORD *)this + 4) = v27;
        goto LABEL_17;
      }
      if ( Size == v31 )
      {
        v15 = memcmp_0(Buf1, Buf2[1], Size);
        v14 = 0LL;
      }
      else
      {
        v15 = Size - v31;
      }
      if ( v15 < 0 )
        break;
      if ( !v15 )
      {
        InsertionPointOrIncrement = wil::details_abi::RawUsageIndex::FindInsertionPointOrIncrement(
                                      this,
                                      (struct wil::details_abi::UsageIndexProperty *)&v28,
                                      v27,
                                      a4,
                                      a5,
                                      a6);
        v14 = 0LL;
        v27 = InsertionPointOrIncrement;
        v11 = InsertionPointOrIncrement;
        if ( InsertionPointOrIncrement )
        {
          v12 = 1;
          goto LABEL_14;
        }
        return 1;
      }
      v11 = wil::details_abi::RawUsageIndex::SkipValues(this, (struct wil::details_abi::UsageIndexProperty *)&v28, v27);
      v27 = v11;
    }
    v27 = v11;
LABEL_14:
    v18 = 0LL;
    if ( v12 )
    {
      v19 = v30;
      goto LABEL_18;
    }
LABEL_17:
    v19 = 1;
    v31 = Size;
    v30 = 1;
    Buf2[0] = 0LL;
    Buf2[1] = Buf1;
    v18 = wil::details_abi::UsageIndexProperty::GetSize((wil::details_abi::UsageIndexProperty *)&v28);
LABEL_18:
    v20 = *((unsigned __int16 *)this + 3);
    v21 = *((_BYTE *)this + 8);
    v35 = a6;
    v38 = a4;
    v33 = v20;
    v34 = v21;
    v36 = a5;
    v37 = v14;
    v22 = (_WORD)v20 ? v20 : (unsigned __int16)a5 + 2LL;
    if ( v21 == 1 )
    {
      v22 += 2LL;
    }
    else if ( v21 == 2 )
    {
      v22 += 4LL;
    }
    v23 = *((_QWORD *)this + 5);
    v24 = v22 + v18;
    v25 = *((_QWORD *)this + 4);
    if ( ((v23 - v25) & -(__int64)(v25 < v23)) >= v22 + v18 )
    {
      memmove_s(&v11[v24], v23 - v24 - (_QWORD)v11, v11, v25 - (_QWORD)v11);
      v26 = (unsigned __int8 *)(v24 + *((_QWORD *)this + 4));
      *((_QWORD *)this + 4) = v26;
      if ( v12 )
      {
        if ( v29 )
          wil::details_abi::UsageIndexProperty::UpdateCount((wil::details_abi::UsageIndexProperty *)&v28, v19 + 1);
      }
      else
      {
        wil::details_abi::UsageIndexProperty::Write((wil::details_abi::UsageIndexProperty *)&v28, &v27, v26);
      }
      wil::details_abi::UsageIndexProperty::Write(
        (wil::details_abi::UsageIndexProperty *)&v33,
        &v27,
        *((unsigned __int8 **)this + 4));
      *((_BYTE *)this + 56) = 1;
      return 1;
    }
  }
  return 0;
}
