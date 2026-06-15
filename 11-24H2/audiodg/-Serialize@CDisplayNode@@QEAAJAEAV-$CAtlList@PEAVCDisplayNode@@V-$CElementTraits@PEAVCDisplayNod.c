/*
 * XREFs of ?Serialize@CDisplayNode@@QEAAJAEAV?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@AEAPEAEAEAI@Z @ 0x14006AEAC
 * Callers:
 *     ?SerializeNodeArray@@YAJAEAV?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@AEAPEAEAEAI@Z @ 0x14006B260 (-SerializeNodeArray@@YAJAEAV-$CAtlList@PEAVCDisplayNode@@V-$CElementTraits@PEAVCDisplayNode@@@AT.c)
 * Callees:
 *     ?GetNext@?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@QEAAAEAPEAVCDisplayNode@@AEAPEAU__POSITION@@@Z @ 0x140036F64 (-GetNext@-$CAtlList@PEAVCDisplayNode@@V-$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@QEAAAEAPEA.c)
 *     memcpy_s @ 0x1400436D4 (memcpy_s.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x14005619C (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?GetDisplayName@CDisplayNode@@QEAAPEBDXZ @ 0x14006A20C (-GetDisplayName@CDisplayNode@@QEAAPEBDXZ.c)
 *     ?GetNodeMode@CDisplayNode@@QEAAIXZ @ 0x14006A8B0 (-GetNodeMode@CDisplayNode@@QEAAIXZ.c)
 */

__int64 __fastcall CDisplayNode::Serialize(CDisplayNode *this, __int64 a2, _QWORD *a3, unsigned int *a4)
{
  const char *DisplayName; // r14
  __int64 v9; // rcx
  __int64 v10; // rbx
  __int64 v11; // rax
  unsigned int v12; // r8d
  unsigned int v13; // r14d
  int v14; // ebx
  __int64 v15; // rcx
  __int64 v16; // rcx
  _QWORD *v17; // rax
  __int64 v18; // r9
  unsigned int v19; // edx
  unsigned __int64 v20; // r8
  __int64 v21; // rax
  _QWORD *v22; // rcx
  int Source; // [rsp+20h] [rbp-28h] BYREF
  _QWORD *i; // [rsp+28h] [rbp-20h] BYREF

  DisplayName = CDisplayNode::GetDisplayName(this);
  if ( *a4 > 0x1000 )
    return (unsigned int)-2147024774;
  if ( memcpy_s((void *const)(*a3 + *a4), 4096 - *a4, "NODE", 5uLL) )
    return (unsigned int)-2147024774;
  v9 = *a4 + 5;
  *a4 = v9;
  if ( (unsigned int)v9 > 0x1000 )
    return (unsigned int)-2147024774;
  v10 = -1LL;
  v11 = -1LL;
  do
    ++v11;
  while ( DisplayName[v11] );
  if ( memcpy_s((void *const)(*a3 + v9), (unsigned int)(4096 - v9), DisplayName, (unsigned int)(v11 + 1)) )
    return (unsigned int)-2147024774;
  do
    ++v10;
  while ( DisplayName[v10] );
  v12 = *a4 + 1 + v10;
  *a4 = v12;
  Source = *(_DWORD *)(*(_QWORD *)this + 40LL);
  if ( v12 > 0x1000 )
    return (unsigned int)-2147024774;
  if ( memcpy_s((void *const)(*a3 + v12), 4096 - v12, &Source, 4uLL) )
    return (unsigned int)-2147024774;
  v13 = *a4 + 4;
  *a4 = v13;
  v14 = 0;
  Source = CDisplayNode::GetNodeMode(this);
  if ( v13 > 0x1000 )
    return (unsigned int)-2147024774;
  if ( memcpy_s((void *const)(*a3 + v13), 4096 - v13, &Source, 4uLL) )
    return (unsigned int)-2147024774;
  v15 = *a4 + 4;
  *a4 = v15;
  Source = *((_DWORD *)this + 6);
  if ( (unsigned int)v15 > 0x1000 || memcpy_s((void *const)(*a3 + v15), (unsigned int)(4096 - v15), &Source, 4uLL) )
  {
    return (unsigned int)-2147024774;
  }
  else
  {
    *a4 += 4;
    v17 = (_QWORD *)*((_QWORD *)this + 1);
    for ( i = v17; v17; v17 = i )
    {
      v18 = *ATL::CAtlList<CDisplayNode *,ATL::CElementTraits<CDisplayNode *>>::GetNext(v16, &i);
      v14 = -2147023728;
      v19 = 0;
      v20 = *(_QWORD *)(a2 + 16);
      if ( v20 )
      {
        v21 = 0LL;
        do
        {
          v22 = *(_QWORD **)a2;
          if ( !*(_QWORD *)a2 )
            goto LABEL_29;
          for ( ; v21; --v21 )
            v22 = (_QWORD *)*v22;
          if ( !v22 )
LABEL_29:
            ATL::AtlThrowImpl(-2147467259);
          if ( v18 == v22[2] )
          {
            Source = v19;
            v14 = 0;
          }
          v21 = ++v19;
        }
        while ( v19 < v20 );
      }
      if ( v14 < 0 )
        break;
      if ( *a4 > 0x1000 || memcpy_s((void *const)(*a3 + *a4), 4096 - *a4, &Source, 4uLL) )
        return (unsigned int)-2147024774;
      *a4 += 4;
    }
  }
  return (unsigned int)v14;
}
