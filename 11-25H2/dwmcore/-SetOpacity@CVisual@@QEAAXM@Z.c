/*
 * XREFs of ?SetOpacity@CVisual@@QEAAXM@Z @ 0x18000D6B0
 * Callers:
 *     ?SetProperty@CVisual@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x18000D0B0 (-SetProperty@CVisual@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 *     ?ProcessSetOpacity@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETOPACITY@@@Z @ 0x18020F108 (-ProcessSetOpacity@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETOPACITY@@@Z.c)
 * Callees:
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x18000D968 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?GetOpacityInternal@CVisual@@QEBAMXZ @ 0x180034550 (-GetOpacityInternal@CVisual@@QEBAMXZ.c)
 *     ?InvalidateAnimationSources@CResource@@IEAAXI@Z @ 0x1800E4E40 (-InvalidateAnimationSources@CResource@@IEAAXI@Z.c)
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@@Z @ 0x1800E5090 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ExpandStorage@AllocatedStorage@CSparseStorage@@SAXPEAPEAV12@_K@Z @ 0x1801B11A0 (-ExpandStorage@AllocatedStorage@CSparseStorage@@SAXPEAPEAV12@_K@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// local variable allocation has failed, the output may be wrong!
void __fastcall CVisual::SetOpacity(struct CSparseStorage::AllocatedStorage **this, double a2)
{
  float OpacityInternal; // xmm0_4
  char *v4; // r14
  struct CSparseStorage::AllocatedStorage *v5; // rdi
  int v6; // r15d
  int v7; // ebp
  char *v8; // rbx
  unsigned __int64 v9; // r8
  int v10; // edx
  int v11; // ecx
  struct CSparseStorage::AllocatedStorage *v12; // rax
  signed __int64 v13; // rbx
  __int64 v14; // r10
  struct CSparseStorage::AllocatedStorage *v15; // rcx
  unsigned int v16; // edx
  int v17; // eax
  int v18; // r9d
  _QWORD v19[2]; // [rsp+40h] [rbp-48h] BYREF

  OpacityInternal = CVisual::GetOpacityInternal((CVisual *)this);
  if ( OpacityInternal != *(float *)&a2 )
  {
    v4 = (char *)(this + 28);
    v5 = this[28];
    v6 = _mm_cvtsi128_si32(*(__m128i *)&a2);
    if ( v6 == (_DWORD)`CVisual::SetOpacityInternal'::`2'::sc_defaultValue )
    {
      *((_DWORD *)v5 + 1) &= ~0x8000000u;
    }
    else
    {
      v7 = *((_DWORD *)v5 + 1) & 0x8000000;
      if ( v5 == (struct CSparseStorage::AllocatedStorage *)&CSparseStorage::s_defaultEmptyAllocatedStorage )
      {
        v5 = (struct CSparseStorage::AllocatedStorage *)DefaultHeap::AllocClear(0x2CuLL);
        if ( !v5 )
          RaiseFailFastException(0LL, 0LL, 0);
        *(_DWORD *)v5 = 44;
        *(_QWORD *)v4 = v5;
      }
      v8 = (char *)v5 + 12;
      v9 = (unsigned __int64)v5 + *(unsigned int *)v5;
      while ( (unsigned __int64)(v8 + 4) <= v9 )
      {
        v10 = *(_DWORD *)v8;
        v11 = HIBYTE(*(_DWORD *)v8) & 0x7F;
        if ( v11 == 5 )
          goto LABEL_10;
        if ( !v11 )
        {
          if ( (unsigned __int64)(v8 + 8) <= v9 )
          {
            *(_DWORD *)v8 = v10 & 0xFF000000 | 4;
            goto LABEL_10;
          }
          break;
        }
        if ( !v7 && (v10 & 0xFFFFFF) == 4 && (__ROR4__(1, v11) & *((_DWORD *)v5 + 1)) == 0 )
          goto LABEL_10;
        v8 += (*(_QWORD *)&v10 & 0xFFFFFFLL) + 4;
      }
      v13 = v8 - (char *)v5;
      CSparseStorage::AllocatedStorage::ExpandStorage(this + 28, v13 + 32);
      v8 = (char *)(*(_QWORD *)v4 + v13);
      *(_DWORD *)v8 &= 0xFF000004;
      *(_DWORD *)v8 |= 4u;
LABEL_10:
      *((_DWORD *)v8 + 1) = v6;
      *(_DWORD *)v8 &= 0x85FFFFFF;
      *(_DWORD *)v8 |= 0x5000000u;
      *(_DWORD *)(*(_QWORD *)v4 + 4LL) |= 0x8000000u;
    }
    CVisual::PropagateFlags(
      this,
      ((COERCE_FLOAT(LODWORD(a2) & _xmm) < 0.0000011920929) ^ (unsigned int)(COERCE_FLOAT(LODWORD(OpacityInternal) & _xmm) < 0.0000011920929))
    + 4);
    v12 = this[7];
    if ( v12 )
    {
      if ( *((_DWORD *)v12 + 27) )
      {
        if ( *((_DWORD *)this + 18) )
        {
          if ( (*((_DWORD *)this + 19) & 0x4000000) != 0 )
          {
            v14 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this[3] + 802) + 72LL))(
                    *((_QWORD *)this[3] + 802),
                    11LL);
            if ( v14 )
            {
              v15 = this[7];
              if ( v15 )
                v16 = *((_DWORD *)v15 + 27);
              else
                v16 = 0;
              v19[0] = v16;
              v19[1] = *((unsigned int *)this + 18);
              v17 = ((__int64 (__fastcall *)(__int64, _QWORD *, __int64, __int64, _WORD, void *, int, _QWORD))CoreUICallSend)(
                      v14,
                      v19,
                      2LL,
                      11LL,
                      0,
                      &unk_180336EAA,
                      26,
                      *(float *)&a2);
              v18 = 0;
              if ( v17 != -2018375675 )
                v18 = v17;
              if ( v18 < 0 )
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v18, 0xC8u, 0LL);
            }
          }
        }
      }
    }
    CResource::InvalidateAnimationSources((CResource *)this, 0x1Au);
  }
}
