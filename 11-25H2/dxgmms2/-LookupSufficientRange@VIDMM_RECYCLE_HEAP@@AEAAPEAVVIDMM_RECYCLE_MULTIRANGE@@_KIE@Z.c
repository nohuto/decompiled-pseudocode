/*
 * XREFs of ?LookupSufficientRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@_KIE@Z @ 0x1400ECAA8
 * Callers:
 *     ?Allocate@VIDMM_RECYCLE_HEAP@@QEAAJ_KIPEAPEAUVIDMM_HEAP_ALLOC@@PEAPEAX2PEAEE@Z @ 0x1400EC7AC (-Allocate@VIDMM_RECYCLE_HEAP@@QEAAJ_KIPEAPEAUVIDMM_HEAP_ALLOC@@PEAPEAX2PEAEE@Z.c)
 * Callees:
 *     ?BuildIdleLockedMultirangeForRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@PEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x14008FC58 (-BuildIdleLockedMultirangeForRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@PEAVVID.c)
 *     ?BuildIdleCommittedMultirangeForRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@PEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x140090434 (-BuildIdleCommittedMultirangeForRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@PEAV.c)
 *     ?BuildIdleFreeMultirangeForRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@PEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x140090A64 (-BuildIdleFreeMultirangeForRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@PEAVVIDMM.c)
 *     ?VidMmFindAlignedRange@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z @ 0x1400ECC00 (-VidMmFindAlignedRange@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z.c)
 *     ?AddRangeToTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1400ECDD8 (-AddRangeToTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?RemoveRangeFromTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1400ECF70 (-RemoveRangeFromTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_RANGE.c)
 */

struct VIDMM_RECYCLE_MULTIRANGE *__fastcall VIDMM_RECYCLE_HEAP::LookupSufficientRange(
        VIDMM_RECYCLE_HEAP *this,
        __int64 a2,
        unsigned int a3,
        __int64 a4)
{
  struct _RTL_BALANCED_NODE *v4; // rbx
  int AlignedRange; // eax
  struct VIDMM_RECYCLE_MULTIRANGE *result; // rax
  int v8; // eax
  int v9; // eax
  __int64 v10; // rdx
  _QWORD v11[2]; // [rsp+20h] [rbp-28h] BYREF
  char v12; // [rsp+30h] [rbp-18h]

  v4 = (struct _RTL_BALANCED_NODE *)*((_QWORD *)this + 6);
  v11[1] = a3;
  v11[0] = a2;
  v12 = a4;
  while ( v4 )
  {
    AlignedRange = VidMmFindAlignedRange(v11, v4);
    if ( AlignedRange >= 0 )
    {
      if ( AlignedRange <= 0 )
        break;
      v4 = v4->Children[1];
    }
    else
    {
      v4 = v4->Children[0];
    }
  }
  if ( !v4 )
  {
    v4 = (struct _RTL_BALANCED_NODE *)*((_QWORD *)this + 7);
    while ( v4 )
    {
      v8 = VidMmFindAlignedRange(v11, v4);
      if ( v8 >= 0 )
      {
        if ( v8 <= 0 )
          break;
        v4 = v4->Children[1];
      }
      else
      {
        v4 = v4->Children[0];
      }
    }
    if ( v4 )
    {
      if ( LODWORD(v4[1].Children[0]) )
        return (struct VIDMM_RECYCLE_MULTIRANGE *)v4;
      VIDMM_RECYCLE_HEAP::RemoveRangeFromTree(this, LODWORD(v4[3].ParentValue), v4, a4);
      result = VIDMM_RECYCLE_HEAP::BuildIdleCommittedMultirangeForRange(this, (struct VIDMM_RECYCLE_RANGE *)v4);
      if ( result )
        return result;
      v10 = 1LL;
    }
    else
    {
      v4 = (struct _RTL_BALANCED_NODE *)*((_QWORD *)this + 8);
      while ( v4 )
      {
        v9 = VidMmFindAlignedRange(v11, v4);
        if ( v9 >= 0 )
        {
          if ( v9 <= 0 )
            break;
          v4 = v4->Children[1];
        }
        else
        {
          v4 = v4->Children[0];
        }
      }
      if ( !v4 )
        return 0LL;
      if ( LODWORD(v4[1].Children[0]) )
        return (struct VIDMM_RECYCLE_MULTIRANGE *)v4;
      VIDMM_RECYCLE_HEAP::RemoveRangeFromTree(this, LODWORD(v4[3].ParentValue), v4, a4);
      result = VIDMM_RECYCLE_HEAP::BuildIdleFreeMultirangeForRange(this, (struct VIDMM_RECYCLE_RANGE *)v4);
      if ( result )
        return result;
      v10 = 2LL;
    }
LABEL_26:
    VIDMM_RECYCLE_HEAP::AddRangeToTree(this, v10, v4);
    return 0LL;
  }
  if ( LODWORD(v4[1].Children[0]) )
    return (struct VIDMM_RECYCLE_MULTIRANGE *)v4;
  VIDMM_RECYCLE_HEAP::RemoveRangeFromTree(this, LODWORD(v4[3].ParentValue), v4, a4);
  result = VIDMM_RECYCLE_HEAP::BuildIdleLockedMultirangeForRange(this, (struct VIDMM_RECYCLE_RANGE *)v4);
  if ( !result )
  {
    v10 = 0LL;
    goto LABEL_26;
  }
  return result;
}
