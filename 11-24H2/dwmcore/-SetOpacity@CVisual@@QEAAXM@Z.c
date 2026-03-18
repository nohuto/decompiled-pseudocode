/*
 * XREFs of ?SetOpacity@CVisual@@QEAAXM@Z @ 0x18000CD84
 * Callers:
 *     ?SetProperty@CVisual@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x18000C3F0 (-SetProperty@CVisual@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 *     ?ProcessSetOpacity@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETOPACITY@@@Z @ 0x1802030E8 (-ProcessSetOpacity@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETOPACITY@@@Z.c)
 * Callees:
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x18000CD4C (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?GetOpacityInternal@CVisual@@QEBAMXZ @ 0x18000E7D0 (-GetOpacityInternal@CVisual@@QEBAMXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@@Z @ 0x1800BEB20 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@@Z.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x1800BEF90 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?ScheduleCompositionPass@CComposition@@QEAAXKW4CompositionReason@@@Z @ 0x1800BF040 (-ScheduleCompositionPass@CComposition@@QEAAXKW4CompositionReason@@@Z.c)
 *     ?ExpandStorage@AllocatedStorage@CSparseStorage@@SAXPEAPEAV12@_K@Z @ 0x180192E80 (-ExpandStorage@AllocatedStorage@CSparseStorage@@SAXPEAPEAV12@_K@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// local variable allocation has failed, the output may be wrong!
void __fastcall CVisual::SetOpacity(struct CSparseStorage::AllocatedStorage **this, double a2)
{
  float OpacityInternal; // xmm0_4
  char *v4; // r15
  unsigned int v5; // ebx
  struct CSparseStorage::AllocatedStorage *v6; // r14
  int v7; // r12d
  int v8; // ebp
  char *v9; // rdi
  unsigned __int64 v10; // r8
  int v11; // edx
  int v12; // ecx
  struct CSparseStorage::AllocatedStorage *v13; // rax
  struct CSparseStorage::AllocatedStorage *v14; // rax
  __int64 v15; // rdi
  struct _RTL_GENERIC_TABLE *v16; // rcx
  __int64 v17; // rbp
  unsigned __int64 v18; // rcx
  __int64 v19; // rbp
  __int64 v20; // rdx
  __int64 v21; // rcx
  signed __int64 v22; // rdi
  __int64 v23; // r10
  struct CSparseStorage::AllocatedStorage *v24; // rcx
  unsigned int v25; // edx
  int v26; // eax
  int v27; // r9d
  __int64 v28; // rax
  _QWORD v29[2]; // [rsp+40h] [rbp-78h] BYREF
  int Buffer; // [rsp+50h] [rbp-68h] BYREF
  __int128 v31; // [rsp+58h] [rbp-60h] BYREF
  __int64 v32; // [rsp+68h] [rbp-50h]
  int v33; // [rsp+70h] [rbp-48h]

  OpacityInternal = CVisual::GetOpacityInternal((CVisual *)this);
  if ( OpacityInternal != *(float *)&a2 )
  {
    v4 = (char *)(this + 28);
    v5 = 0;
    v6 = this[28];
    v7 = _mm_cvtsi128_si32(*(__m128i *)&a2);
    if ( v7 == (_DWORD)`CVisual::SetOpacityInternal'::`2'::sc_defaultValue )
    {
      *((_DWORD *)v6 + 1) &= ~0x8000000u;
    }
    else
    {
      v8 = *((_DWORD *)v6 + 1) & 0x8000000;
      if ( v6 == (struct CSparseStorage::AllocatedStorage *)&CSparseStorage::s_defaultEmptyAllocatedStorage )
      {
        v6 = (struct CSparseStorage::AllocatedStorage *)DefaultHeap::AllocClear(0x2CuLL);
        if ( !v6 )
          RaiseFailFastException(0LL, 0LL, 0);
        *(_DWORD *)v6 = 44;
        *(_QWORD *)v4 = v6;
      }
      v9 = (char *)v6 + 12;
      v10 = (unsigned __int64)v6 + *(unsigned int *)v6;
      while ( (unsigned __int64)(v9 + 4) <= v10 )
      {
        v11 = *(_DWORD *)v9;
        v12 = HIBYTE(*(_DWORD *)v9) & 0x7F;
        if ( v12 == 5 )
          goto LABEL_10;
        if ( !v12 )
        {
          if ( (unsigned __int64)(v9 + 8) <= v10 )
          {
            *(_DWORD *)v9 = v11 & 0xFF000000 | 4;
            goto LABEL_10;
          }
          break;
        }
        if ( !v8 && (v11 & 0xFFFFFF) == 4 && (__ROR4__(1, v12) & *((_DWORD *)v6 + 1)) == 0 )
          goto LABEL_10;
        v9 += (*(_QWORD *)&v11 & 0xFFFFFFLL) + 4;
      }
      v22 = v9 - (char *)v6;
      CSparseStorage::AllocatedStorage::ExpandStorage(this + 28, v22 + 32);
      v9 = (char *)(*(_QWORD *)v4 + v22);
      *(_DWORD *)v9 &= 0xFF000004;
      *(_DWORD *)v9 |= 4u;
LABEL_10:
      *((_DWORD *)v9 + 1) = v7;
      *(_DWORD *)v9 &= 0x85FFFFFF;
      *(_DWORD *)v9 |= 0x5000000u;
      *(_DWORD *)(*(_QWORD *)v4 + 4LL) |= 0x8000000u;
    }
    CVisual::PropagateFlags(
      this,
      ((COERCE_FLOAT(LODWORD(a2) & _xmm) < 0.0000011920929) ^ (unsigned int)(COERCE_FLOAT(LODWORD(OpacityInternal) & _xmm) < 0.0000011920929))
    + 4);
    v13 = this[7];
    if ( v13 )
    {
      if ( *((_DWORD *)v13 + 27) )
      {
        if ( *((_DWORD *)this + 18) )
        {
          if ( (*((_DWORD *)this + 19) & 0x4000000) != 0 )
          {
            v23 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this[3] + 799) + 72LL))(
                    *((_QWORD *)this[3] + 799),
                    11LL);
            if ( v23 )
            {
              v24 = this[7];
              if ( v24 )
                v25 = *((_DWORD *)v24 + 27);
              else
                v25 = 0;
              v29[0] = v25;
              v29[1] = *((unsigned int *)this + 18);
              v26 = ((__int64 (__fastcall *)(__int64, _QWORD *, __int64, __int64, _WORD, void *, int, _QWORD))CoreUICallSend)(
                      v23,
                      v29,
                      2LL,
                      11LL,
                      0,
                      &unk_18032BF6A,
                      26,
                      *(float *)&a2);
              v27 = 0;
              if ( v26 != -2018375675 )
                v27 = v26;
              if ( v27 < 0 )
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v27, 0xC8u, 0LL);
            }
          }
        }
      }
    }
    v14 = this[3];
    v15 = *((_QWORD *)v14 + 111);
    if ( v15 == *((_QWORD *)v14 + 112) )
    {
      v28 = v15 + 1;
      v15 = 1LL;
      if ( v28 )
        v15 = v28;
    }
    v16 = (struct _RTL_GENERIC_TABLE *)this[6];
    v17 = 0LL;
    if ( v16 )
    {
      v32 = 0LL;
      v33 = 0;
      v31 = 0LL;
      Buffer = 26;
      v17 = (__int64)RtlLookupElementGenericTable(v16, &Buffer);
      DynArrayImpl<0>::~DynArrayImpl<0>(&v31);
    }
    v18 = v17 + 8;
    v19 = -v17;
    v20 = v18 & -(__int64)(v19 != 0);
    if ( v20 )
    {
      if ( *(_DWORD *)((v18 & -(__int64)(v19 != 0)) + 0x18) )
      {
        do
        {
          v21 = v5++;
          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v20 + 8 * v21) + 232LL) = v15;
        }
        while ( v5 < *(_DWORD *)(v20 + 24) );
      }
      *(_BYTE *)(*((_QWORD *)this[3] + 103) + 440LL) |= 2u;
      CComposition::ScheduleCompositionPass(this[3], 0LL, 8LL);
    }
  }
}
