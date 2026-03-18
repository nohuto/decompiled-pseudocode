/*
 * XREFs of ?SetSize@CVisual@@QEAAXMM@Z @ 0x1801D78F4
 * Callers:
 *     ?SetProperty@CVisual@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x18000C3F0 (-SetProperty@CVisual@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@@Z @ 0x1800BEB20 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@@Z.c)
 *     ?OnOuterTransformChanged@CVisual@@AEAAXXZ @ 0x1800BEE54 (-OnOuterTransformChanged@CVisual@@AEAAXXZ.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x1800BEF90 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?ScheduleCompositionPass@CComposition@@QEAAXKW4CompositionReason@@@Z @ 0x1800BF040 (-ScheduleCompositionPass@CComposition@@QEAAXKW4CompositionReason@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// local variable allocation has failed, the output may be wrong!
void __fastcall CVisual::SetSize(CVisual *this, double a2, double a3)
{
  float *v4; // rax
  __int64 v5; // rax
  unsigned int v6; // ebx
  __int64 v7; // rax
  __int64 v8; // rsi
  struct _RTL_GENERIC_TABLE *v9; // rcx
  __int64 v10; // r14
  unsigned __int64 v11; // rcx
  __int64 v12; // r14
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rcx
  unsigned int v17; // edx
  int v18; // eax
  int v19; // r9d
  __int64 v20; // rax
  _QWORD v21[2]; // [rsp+48h] [rbp-19h] BYREF
  int Buffer; // [rsp+58h] [rbp-9h] BYREF
  __int128 v23; // [rsp+60h] [rbp-1h] BYREF
  __int64 v24; // [rsp+70h] [rbp+Fh]
  int v25; // [rsp+78h] [rbp+17h]
  unsigned __int64 v26; // [rsp+C8h] [rbp+67h] BYREF

  v4 = (float *)((char *)this + 140);
  if ( *((float *)this + 34) != *(float *)&a2 || *v4 != *(float *)&a3 )
  {
    *((_DWORD *)this + 34) = LODWORD(a2);
    *v4 = *(float *)&a3;
    CVisual::PropagateFlags((__int64)this, 5u);
    CVisual::OnOuterTransformChanged(this);
    v5 = *((_QWORD *)this + 7);
    v6 = 0;
    if ( v5 )
    {
      if ( *(_DWORD *)(v5 + 108) )
      {
        if ( *((_DWORD *)this + 18) )
        {
          if ( (*((_DWORD *)this + 19) & 0x20000000) != 0 )
          {
            v15 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(*((_QWORD *)this + 3) + 6392LL) + 72LL))(
                    *(_QWORD *)(*((_QWORD *)this + 3) + 6392LL),
                    11LL);
            if ( v15 )
            {
              v16 = *((_QWORD *)this + 7);
              if ( v16 )
                v17 = *(_DWORD *)(v16 + 108);
              else
                v17 = 0;
              v21[0] = v17;
              v21[1] = *((unsigned int *)this + 18);
              v26 = _mm_unpacklo_ps(*(__m128 *)&a2, *(__m128 *)&a3).m128_u64[0];
              v18 = CoreUICallSend(v15, v21, 2LL, 11LL, 2, &unk_18032BF72, 29, &v26, v17);
              v19 = 0;
              if ( v18 != -2018375675 )
                v19 = v18;
              if ( v19 < 0 )
                MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v19, 0x125u, 0LL);
            }
          }
        }
      }
    }
    v7 = *((_QWORD *)this + 3);
    v8 = *(_QWORD *)(v7 + 888);
    if ( v8 == *(_QWORD *)(v7 + 896) )
    {
      v20 = v8 + 1;
      v8 = 1LL;
      if ( v20 )
        v8 = v20;
    }
    v9 = (struct _RTL_GENERIC_TABLE *)*((_QWORD *)this + 6);
    v10 = 0LL;
    if ( v9 )
    {
      v24 = 0LL;
      v25 = 0;
      v23 = 0LL;
      Buffer = 29;
      v10 = (__int64)RtlLookupElementGenericTable(v9, &Buffer);
      DynArrayImpl<0>::~DynArrayImpl<0>((__int64)&v23);
    }
    v11 = v10 + 8;
    v12 = -v10;
    v13 = v11 & -(__int64)(v12 != 0);
    if ( v13 )
    {
      if ( *(_DWORD *)((v11 & -(__int64)(v12 != 0)) + 0x18) )
      {
        do
        {
          v14 = v6++;
          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v13 + 8 * v14) + 232LL) = v8;
        }
        while ( v6 < *(_DWORD *)(v13 + 24) );
      }
      *(_BYTE *)(*(_QWORD *)(*((_QWORD *)this + 3) + 824LL) + 440LL) |= 2u;
      CComposition::ScheduleCompositionPass(*((_QWORD *)this + 3), 0, 8u);
    }
  }
}
