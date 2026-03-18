/*
 * XREFs of ?ProcessSetSize@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETSIZE@@@Z @ 0x1800BE8B8
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801114F0 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@@Z @ 0x1800BEB20 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@@Z.c)
 *     ?OnOuterTransformChanged@CVisual@@AEAAXXZ @ 0x1800BEE54 (-OnOuterTransformChanged@CVisual@@AEAAXXZ.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x1800BEF90 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?ScheduleCompositionPass@CComposition@@QEAAXKW4CompositionReason@@@Z @ 0x1800BF040 (-ScheduleCompositionPass@CComposition@@QEAAXKW4CompositionReason@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CVisual::ProcessSetSize(
        CVisual *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_VISUAL_SETSIZE *a3)
{
  __m128 v4; // xmm6
  float *v5; // rax
  __m128 v6; // xmm7
  __int64 v7; // rax
  unsigned int v8; // ebx
  __int64 v9; // rax
  __int64 v10; // rsi
  struct _RTL_GENERIC_TABLE *v11; // rcx
  __int64 v12; // r14
  unsigned __int64 v13; // rcx
  __int64 v14; // r14
  __int64 v15; // rdx
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rcx
  unsigned int v20; // edx
  int v21; // eax
  int v22; // r9d
  __int64 v23; // rax
  _QWORD v24[2]; // [rsp+48h] [rbp-19h] BYREF
  int Buffer; // [rsp+58h] [rbp-9h] BYREF
  __int128 v26; // [rsp+60h] [rbp-1h] BYREF
  __int64 v27; // [rsp+70h] [rbp+Fh]
  int v28; // [rsp+78h] [rbp+17h]
  struct CResourceTable *v29; // [rsp+D0h] [rbp+6Fh] BYREF

  v29 = a2;
  v4 = (__m128)*((unsigned int *)a3 + 3);
  v5 = (float *)((char *)this + 140);
  v6 = (__m128)*((unsigned int *)a3 + 2);
  if ( *((float *)this + 34) != v6.m128_f32[0] || *v5 != v4.m128_f32[0] )
  {
    *((_DWORD *)this + 34) = v6.m128_i32[0];
    *v5 = v4.m128_f32[0];
    CVisual::PropagateFlags(this, 5LL);
    CVisual::OnOuterTransformChanged(this);
    v7 = *((_QWORD *)this + 7);
    v8 = 0;
    if ( v7 )
    {
      if ( *(_DWORD *)(v7 + 108) )
      {
        if ( *((_DWORD *)this + 18) )
        {
          if ( (*((_DWORD *)this + 19) & 0x20000000) != 0 )
          {
            v18 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(*((_QWORD *)this + 3) + 6392LL) + 72LL))(
                    *(_QWORD *)(*((_QWORD *)this + 3) + 6392LL),
                    11LL);
            if ( v18 )
            {
              v19 = *((_QWORD *)this + 7);
              if ( v19 )
                v20 = *(_DWORD *)(v19 + 108);
              else
                v20 = 0;
              v24[0] = v20;
              v24[1] = *((unsigned int *)this + 18);
              v29 = (struct CResourceTable *)_mm_unpacklo_ps(v6, v4).m128_u64[0];
              v21 = CoreUICallSend(v18, v24, 2LL, 11LL, 2, &unk_18032BF72, 29, &v29, v20);
              v22 = 0;
              if ( v21 != -2018375675 )
                v22 = v21;
              if ( v22 < 0 )
                MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v22, 0x125u, 0LL);
            }
          }
        }
      }
    }
    v9 = *((_QWORD *)this + 3);
    v10 = *(_QWORD *)(v9 + 888);
    if ( v10 == *(_QWORD *)(v9 + 896) )
    {
      v23 = v10 + 1;
      v10 = 1LL;
      if ( v23 )
        v10 = v23;
    }
    v11 = (struct _RTL_GENERIC_TABLE *)*((_QWORD *)this + 6);
    v12 = 0LL;
    if ( v11 )
    {
      v27 = 0LL;
      v28 = 0;
      v26 = 0LL;
      Buffer = 29;
      v12 = (__int64)RtlLookupElementGenericTable(v11, &Buffer);
      DynArrayImpl<0>::~DynArrayImpl<0>(&v26);
    }
    v13 = v12 + 8;
    v14 = -v12;
    v15 = v13 & -(__int64)(v14 != 0);
    if ( v15 )
    {
      if ( *(_DWORD *)((v13 & -(__int64)(v14 != 0)) + 0x18) )
      {
        do
        {
          v17 = v8++;
          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v15 + 8 * v17) + 232LL) = v10;
        }
        while ( v8 < *(_DWORD *)(v15 + 24) );
      }
      *(_BYTE *)(*(_QWORD *)(*((_QWORD *)this + 3) + 824LL) + 440LL) |= 2u;
      CComposition::ScheduleCompositionPass(*((_QWORD *)this + 3), 0LL, 8LL);
    }
  }
  return 0LL;
}
