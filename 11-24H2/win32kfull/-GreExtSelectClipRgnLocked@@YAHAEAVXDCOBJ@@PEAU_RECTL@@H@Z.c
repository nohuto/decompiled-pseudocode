/*
 * XREFs of ?GreExtSelectClipRgnLocked@@YAHAEAVXDCOBJ@@PEAU_RECTL@@H@Z @ 0x1400CE13C
 * Callers:
 *     ?NtGdiFlushUserBatchInternal@@YAXPEAX@Z @ 0x140172FB0 (-NtGdiFlushUserBatchInternal@@YAXPEAX@Z.c)
 * Callees:
 *     ?bTightenRao@DC@@QEAAHXZ @ 0x14001666C (-bTightenRao@DC@@QEAAHXZ.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x140016CFC (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ??0CFixPred@Prediction@@QEAA@XZ @ 0x1400BB03C (--0CFixPred@Prediction@@QEAA@XZ.c)
 *     ?iComplexity@RGNOBJ@@QEBAJXZ @ 0x1400CDFD8 (-iComplexity@RGNOBJ@@QEBAJXZ.c)
 *     ?iSelectTightenRao@DC@@QEAAHPEAVREGION@@H@Z @ 0x1400CE3D8 (-iSelectTightenRao@DC@@QEAAHPEAVREGION@@H@Z.c)
 *     ?prgnVisSnap@DC@@QEBAPEAVREGION@@XZ @ 0x1400CE6CC (-prgnVisSnap@DC@@QEBAPEAVREGION@@XZ.c)
 *     ?RegionCore_is_rect@Win32kRS@@YAHPEBVREGION_CORE@@@Z @ 0x1400CE83C (-RegionCore_is_rect@Win32kRS@@YAHPEBVREGION_CORE@@@Z.c)
 *     ?get_sizeScan@REGION_CORE@@IEBAKXZ @ 0x1400CE8CC (-get_sizeScan@REGION_CORE@@IEBAKXZ.c)
 */

__int64 __fastcall GreExtSelectClipRgnLocked(DC **this, struct _RECTL *a2, int a3)
{
  unsigned int v4; // r13d
  unsigned int v5; // esi
  DC *v7; // rcx
  ULONG v8; // ecx
  struct REGION *v10; // rax
  __int64 v11; // rbx
  const struct BaseRustGlobals *BaseRustGlobals; // rax
  const struct REGION_CORE *v13; // rdx
  Win32kRS *v14; // rcx
  __int128 v15; // [rsp+20h] [rbp-10h] BYREF
  struct REGION *v16; // [rsp+78h] [rbp+48h] BYREF

  v4 = a3 & 0xF7FFFFFF;
  v5 = 0;
  if ( (a3 & 0xF7FFFFFF) - 1 > 4 )
  {
    v8 = 87;
    goto LABEL_4;
  }
  v7 = *this;
  if ( !v7 )
  {
    v8 = 6;
LABEL_4:
    EngSetLastError(v8);
    return v5;
  }
  if ( (a3 & 0x8000000) != 0 )
  {
    if ( v4 != 5 )
      return v5;
    v5 = DC::iSelectTightenRao(v7, 0LL, 5);
    DC::bTightenRao(*this);
    if ( !v5 )
      return v5;
    v10 = DC::prgnVisSnap(*this);
    goto LABEL_10;
  }
  v11 = *((_QWORD *)v7 + 20);
  if ( v11 )
  {
    BaseRustGlobals = GetBaseRustGlobals();
    v14 = (Win32kRS *)(v11 + 24);
    if ( BaseRustGlobals )
    {
      if ( !(unsigned int)Win32kRS::RegionCore_is_rect(v14, v13) )
        goto LABEL_15;
    }
    else if ( REGION_CORE::get_sizeScan(v14) != 56 )
    {
      goto LABEL_15;
    }
    v15 = *(_OWORD *)(v11 + 52);
    if ( a2->left == (_DWORD)v15 && *(_QWORD *)&a2->top == *(_QWORD *)((char *)&v15 + 4) && a2->bottom == HIDWORD(v15) )
    {
      v10 = XDCOBJ::prgnEffRao(this);
LABEL_10:
      v16 = v10;
      return (unsigned int)RGNOBJ::iComplexity((RGNOBJ *)&v16);
    }
  }
LABEL_15:
  Prediction::CFixPred::CFixPred((Prediction::CFixPred *)&v16);
  RGNMEMOBJ::vInitialize((RGNMEMOBJ *)&v16, 0x70u);
  RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v16);
  if ( !v16 )
  {
LABEL_22:
    RGNMEMOBJ::vPopThreadGuardedObject((RGNMEMOBJ *)&v16);
    RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v16);
    return v5;
  }
  if ( ((a2->left & 0xF8000000) == 0 || (a2->left & 0xF8000000) == -134217728)
    && ((a2->bottom & 0xF8000000) == 0 || (a2->bottom & 0xF8000000) == -134217728)
    && ((a2->right & 0xF8000000) == 0 || (a2->right & 0xF8000000) == 0xF8000000)
    && ((a2->top & 0xF8000000) == 0 || (a2->top & 0xF8000000) == -134217728)
    && a2->left < a2->right
    && a2->top < a2->bottom )
  {
    RGNOBJ::vSet((RGNOBJ *)&v16, a2);
    v5 = DC::iSelectTightenRao(*this, v16, v4);
    DC::bTightenRao(*this);
    if ( v5 )
    {
      *(_QWORD *)&v15 = XDCOBJ::prgnEffRao(this);
      v5 = RGNOBJ::iComplexity((RGNOBJ *)&v15);
    }
    goto LABEL_22;
  }
  RGNMEMOBJ::vPopThreadGuardedObject((RGNMEMOBJ *)&v16);
  RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v16);
  return 0LL;
}
