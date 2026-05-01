/*
 * XREFs of ?FindInsertionPointOrIncrement@RawUsageIndex@details_abi@wil@@AEAAPEAEAEAUUsageIndexProperty@23@PEAEPEAX_KI@Z @ 0x180008290
 * Callers:
 *     ?RecordUsageInternal@RawUsageIndex@details_abi@wil@@AEAA_NPEAX_K01I@Z @ 0x180006680 (-RecordUsageInternal@RawUsageIndex@details_abi@wil@@AEAA_NPEAX_K01I@Z.c)
 * Callees:
 *     ?Read@UsageIndexProperty@details_abi@wil@@QEAA_NAEAPEAEPEAE@Z @ 0x18000CA20 (-Read@UsageIndexProperty@details_abi@wil@@QEAA_NAEAPEAEPEAE@Z.c)
 *     ?Compare@UsageIndexProperty@details_abi@wil@@QEBAHPEAX_K@Z @ 0x18000F140 (-Compare@UsageIndexProperty@details_abi@wil@@QEBAHPEAX_K@Z.c)
 *     ?UpdateCount@UsageIndexProperty@details_abi@wil@@QEAAXI@Z @ 0x180017798 (-UpdateCount@UsageIndexProperty@details_abi@wil@@QEAAXI@Z.c)
 *     memcmp_0 @ 0x18001C1B6 (memcmp_0.c)
 */

unsigned __int8 *__fastcall wil::details_abi::RawUsageIndex::FindInsertionPointOrIncrement(
        wil::details_abi::RawUsageIndex *this,
        struct wil::details_abi::UsageIndexProperty *a2,
        unsigned __int8 *a3,
        void *a4,
        size_t Size,
        unsigned int a6)
{
  unsigned int v6; // r15d
  unsigned __int8 *v7; // r13
  char v8; // al
  unsigned __int16 v10; // cx
  unsigned __int64 v11; // r8
  int v14; // edi
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // r12
  __int64 v17; // rax
  unsigned __int16 v18; // di
  size_t v19; // r15
  unsigned __int64 v20; // rbx
  unsigned __int64 v21; // r13
  unsigned __int8 *v22; // rbx
  unsigned __int8 *v23; // r15
  int v24; // ecx
  unsigned __int8 *v25; // rbx
  unsigned __int64 v26; // rdi
  unsigned __int8 *v27; // rdx
  char *v29; // r13
  char v30; // al
  unsigned __int8 *v31; // r8
  unsigned __int16 Destination; // [rsp+20h] [rbp-60h] BYREF
  unsigned __int8 *v33; // [rsp+28h] [rbp-58h]
  unsigned __int8 *v34; // [rsp+30h] [rbp-50h]
  unsigned __int16 v35; // [rsp+38h] [rbp-48h] BYREF
  char v36; // [rsp+3Ah] [rbp-46h]
  int v37; // [rsp+3Ch] [rbp-44h] BYREF
  unsigned __int16 v38; // [rsp+40h] [rbp-40h] BYREF
  __int128 v39; // [rsp+48h] [rbp-38h]
  unsigned __int16 v40; // [rsp+58h] [rbp-28h]
  unsigned __int8 v41; // [rsp+5Ah] [rbp-26h]
  int v42; // [rsp+5Ch] [rbp-24h] BYREF
  unsigned __int16 v43; // [rsp+60h] [rbp-20h] BYREF
  void *Buf2[2]; // [rsp+68h] [rbp-18h]
  unsigned __int8 *v45; // [rsp+C0h] [rbp+40h] BYREF
  void *Buf1; // [rsp+D8h] [rbp+58h]

  Buf1 = a4;
  v45 = (unsigned __int8 *)this;
  v6 = 0;
  v7 = (unsigned __int8 *)this;
  v35 = *((_WORD *)this + 3);
  v8 = *((_BYTE *)this + 8);
  v10 = 0;
  v36 = v8;
  v37 = 0;
  v11 = *((_QWORD *)v7 + 2);
  v38 = 0;
  v14 = -1;
  v39 = 0LL;
  if ( v11 )
  {
    v15 = (*((_QWORD *)v7 + 4) - (_QWORD)a3) / v11;
    if ( *((unsigned int *)a2 + 1) > v15 )
    {
      wil::details_abi::UsageIndexProperty::UpdateCount(a2, v15);
      v10 = v38;
    }
    v16 = *((unsigned int *)a2 + 1);
    v42 = 0;
    v17 = *((_QWORD *)v7 + 2) * v16;
    *(_OWORD *)Buf2 = 0LL;
    v18 = 0;
    v43 = 0;
    v19 = Size;
    v34 = &a3[v17];
    v40 = *((_WORD *)v7 + 3);
    v41 = v7[8];
    if ( v16 )
    {
      while ( 1 )
      {
        v20 = *((_QWORD *)v7 + 2) * (v16 >> 1);
        v21 = *((_QWORD *)v7 + 4);
        v22 = &a3[v20];
        v23 = v22;
        if ( v41 == 1 )
        {
          v23 = v22 + 2;
          if ( (unsigned __int64)(v22 + 2) > v21 )
            goto LABEL_10;
          Buf2[0] = v22;
          Destination = 0;
          memcpy_s(&Destination, 2uLL, v22, 2uLL);
          v42 = Destination;
        }
        else if ( v41 == 2 )
        {
          v23 = v22 + 4;
          if ( (unsigned __int64)(v22 + 4) > v21 )
            goto LABEL_10;
          Buf2[0] = v22;
          memcpy_s(&v42, 4uLL, v22, 4uLL);
        }
        v18 = v40;
        v43 = v40;
        if ( v40 )
          goto LABEL_8;
        v33 = v23 + 2;
        if ( (unsigned __int64)(v23 + 2) <= v21 )
        {
          memcpy_s(&v43, 2uLL, v23, 2uLL);
          v23 = v33;
          v18 = v43;
LABEL_8:
          if ( (unsigned __int64)&v23[v18] <= v21 )
          {
            Buf2[1] = v23;
            v22 = &v23[v18];
          }
        }
LABEL_10:
        v19 = Size;
        if ( Size == v18 )
          v24 = memcmp_0(Buf1, Buf2[1], Size);
        else
          v24 = Size - v18;
        if ( v24 > 0 )
          v16 += -1LL - (v16 >> 1);
        else
          v16 >>= 1;
        v7 = v45;
        if ( v24 <= 0 )
          v22 = a3;
        a3 = v22;
        if ( !v16 )
        {
          v10 = v38;
          break;
        }
      }
    }
    if ( a3 >= v34 )
      return a3;
    v25 = a3;
    v26 = *((_QWORD *)v7 + 4);
    if ( v36 == 1 )
    {
      v25 = a3 + 2;
      if ( (unsigned __int64)(a3 + 2) > v26 )
        goto LABEL_37;
      *(_QWORD *)&v39 = a3;
      LOWORD(v45) = 0;
      memcpy_s(&v45, 2uLL, a3, 2uLL);
      v37 = (unsigned __int16)v45;
    }
    else if ( v36 == 2 )
    {
      v25 = a3 + 4;
      if ( (unsigned __int64)(a3 + 4) > v26 )
        goto LABEL_37;
      *(_QWORD *)&v39 = a3;
      memcpy_s(&v37, 4uLL, a3, 4uLL);
    }
    v10 = v35;
    v38 = v35;
    if ( v35 )
    {
LABEL_22:
      v27 = (unsigned __int8 *)*((_QWORD *)&v39 + 1);
      if ( (unsigned __int64)&v25[v10] <= v26 )
        v27 = v25;
      *((_QWORD *)&v39 + 1) = v27;
      goto LABEL_25;
    }
    if ( (unsigned __int64)(v25 + 2) <= v26 )
    {
      memcpy_s(&v38, 2uLL, v25, 2uLL);
      v10 = v38;
      v25 += 2;
      goto LABEL_22;
    }
LABEL_37:
    v27 = (unsigned __int8 *)*((_QWORD *)&v39 + 1);
LABEL_25:
    if ( v19 == v10 )
      v14 = memcmp_0(Buf1, v27, v19);
    else
      v14 = v19 - v10;
    goto LABEL_27;
  }
  while ( v6 < *((_DWORD *)a2 + 1) )
  {
    v31 = (unsigned __int8 *)*((_QWORD *)v7 + 4);
    v45 = a3;
    if ( !wil::details_abi::UsageIndexProperty::Read((wil::details_abi::UsageIndexProperty *)&v35, &v45, v31) )
    {
      wil::details_abi::UsageIndexProperty::UpdateCount(a2, v6);
      break;
    }
    v14 = wil::details_abi::UsageIndexProperty::Compare((wil::details_abi::UsageIndexProperty *)&v35, a4, Size);
    if ( v14 <= 0 )
      break;
    a3 = v45;
    ++v6;
  }
LABEL_27:
  if ( v14 )
    return a3;
  if ( v36 )
  {
    wil::details_abi::UsageIndexProperty::UpdateCount((wil::details_abi::UsageIndexProperty *)&v35, a6 + v37);
    v29 = (char *)(v7 + 56);
    goto LABEL_55;
  }
  v29 = (char *)(v7 + 56);
  if ( *v29 )
  {
LABEL_55:
    v30 = 1;
    goto LABEL_33;
  }
  v30 = 0;
LABEL_33:
  *v29 = v30;
  return 0LL;
}
