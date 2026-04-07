/*
 * XREFs of ?SetOwner@CWindowList@@AEAAJPEAVCWindowData@@0@Z @ 0x18001CE24
 * Callers:
 *     ?ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x18001BC68 (-ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 *     ?OwnerChange@CWindowList@@UEAAJPEAUIDwmWindow@@0@Z @ 0x180081F80 (-OwnerChange@CWindowList@@UEAAJPEAUIDwmWindow@@0@Z.c)
 * Callees:
 *     ?UpdateOwnerLists@CWindowData@@QEAAX_N@Z @ 0x18001DB64 (-UpdateOwnerLists@CWindowData@@QEAAX_N@Z.c)
 *     ?NotifyRepresentationChanged@CWindowData@@QEAAJXZ @ 0x18001E67C (-NotifyRepresentationChanged@CWindowData@@QEAAJXZ.c)
 *     ?CheckOwnedWindowEligibility@CWindowData@@QEAAXXZ @ 0x18001E780 (-CheckOwnedWindowEligibility@CWindowData@@QEAAXXZ.c)
 *     ?ReevaluateAutoParenting@CWindowList@@AEAAJPEAVCWindowData@@_N@Z @ 0x180024BD0 (-ReevaluateAutoParenting@CWindowList@@AEAAJPEAVCWindowData@@_N@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180025C28 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094EC0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CWindowList::SetOwner(CWindowList *this, struct CWindowData *a2, struct CWindowData *a3)
{
  __int64 v3; // rdi
  unsigned int v4; // ebx
  CWindowData *v6; // rax
  unsigned int v9; // edx
  __int64 v10; // rcx
  __int64 v11; // r9
  CWindowData *i; // r8
  __int64 j; // rdx
  struct CWindowData *v14; // rdx
  unsigned int v15; // eax
  unsigned int v16; // r8d
  int v17; // edi
  int v18; // eax
  int v19; // eax
  unsigned int v20; // edi
  unsigned int v21; // eax
  unsigned int v22; // [rsp+20h] [rbp-18h]
  unsigned int v23; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  CWindowData *v25; // [rsp+48h] [rbp+10h] BYREF

  v25 = a2;
  v3 = *((_QWORD *)a2 + 75);
  v4 = 0;
  v6 = a2;
  if ( (struct CWindowData *)v3 == a3 )
    return v4;
  if ( v3 )
  {
    CWindowData::UpdateOwnerLists(a2, 0);
    v6 = v25;
  }
  *((_QWORD *)v6 + 75) = 0LL;
  if ( v3 )
  {
    v9 = *(_DWORD *)(v3 + 632);
    v10 = 0LL;
    v11 = *(_QWORD *)(v3 + 608);
    for ( i = v25; (unsigned int)v10 < v9; v10 = (unsigned int)(v10 + 1) )
    {
      if ( v25 == *(CWindowData **)(v11 + 8 * v10) )
        break;
    }
    if ( (unsigned int)v10 < v9 )
    {
      while ( (unsigned int)v10 < v9 - 1 )
      {
        *(_QWORD *)(v11 + 8 * v10) = *(_QWORD *)(v11 + 8LL * (unsigned int)(v10 + 1));
        v10 = (unsigned int)(v10 + 1);
        v9 = *(_DWORD *)(v3 + 632);
      }
      *(_DWORD *)(v3 + 632) = v9 - 1;
      i = v25;
    }
    for ( j = 0LL; (unsigned int)j < *(_DWORD *)(v3 + 520); j = (unsigned int)(j + 1) )
    {
      if ( *(CWindowData **)(*(_QWORD *)(*(_QWORD *)(v3 + 496) + 8 * j) + 64LL) == i )
      {
        v18 = CWindowData::NotifyRepresentationChanged((CWindowData *)v3);
        v4 = v18;
        if ( v18 >= 0 )
          goto LABEL_24;
        v23 = 4760;
        goto LABEL_19;
      }
    }
  }
  else
  {
LABEL_24:
    i = v25;
  }
  *((_QWORD *)i + 75) = a3;
  if ( !a3 )
    goto LABEL_21;
  v14 = v25;
  if ( a3 == v25 )
    goto LABEL_22;
  v15 = *((_DWORD *)a3 + 158);
  v16 = v15 + 1;
  if ( v15 + 1 < v15 )
  {
    v4 = -2147024362;
    v21 = 179;
    v17 = -2147024362;
    goto LABEL_32;
  }
  if ( v16 > *((_DWORD *)a3 + 157) )
  {
    v17 = DynArrayImpl<0>::AddMultipleAndSet((char *)a3 + 608, 8LL, 1LL, &v25);
    v4 = v17;
    if ( v17 >= 0 )
      goto LABEL_17;
    v21 = 190;
LABEL_32:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, v21, 0LL);
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v17, 0x12A5u, 0LL);
    return v4;
  }
  *(_QWORD *)(*((_QWORD *)a3 + 76) + 8LL * *((unsigned int *)a3 + 158)) = v25;
  *((_DWORD *)a3 + 158) = v16;
LABEL_17:
  CWindowData::CheckOwnedWindowEligibility(v25);
  v18 = CWindowData::NotifyRepresentationChanged(a3);
  v4 = v18;
  if ( v18 < 0 )
  {
    v23 = 4778;
LABEL_19:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v18, v23, 0LL);
    return v4;
  }
LABEL_21:
  v14 = v25;
LABEL_22:
  v19 = CWindowList::ReevaluateAutoParenting(this, v14, 0);
  v20 = v19;
  if ( v19 >= 0 )
    return v4;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x12AD,
    (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowlist.cpp",
    (const char *)(unsigned int)v19,
    v22);
  return v20;
}
