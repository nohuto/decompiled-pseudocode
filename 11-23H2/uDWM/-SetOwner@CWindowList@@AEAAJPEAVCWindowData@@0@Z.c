/*
 * XREFs of ?SetOwner@CWindowList@@AEAAJPEAVCWindowData@@0@Z @ 0x18010C78C
 * Callers:
 *     ?ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x180049060 (-ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 * Callees:
 *     ?UpdateOwnerLists@CWindowData@@QEAAX_N@Z @ 0x180007C08 (-UpdateOwnerLists@CWindowData@@QEAAX_N@Z.c)
 *     ?Remove@?$DynArray@PEAVCWindowData@@$0A@@@QEAAHAEBQEAVCWindowData@@@Z @ 0x180011C20 (-Remove@-$DynArray@PEAVCWindowData@@$0A@@@QEAAHAEBQEAVCWindowData@@@Z.c)
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x18003A9B0 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 *     ?NotifyRepresentationChanged@CWindowData@@QEAAJXZ @ 0x18004E40C (-NotifyRepresentationChanged@CWindowData@@QEAAJXZ.c)
 *     ?CheckOwnedWindowEligibility@CWindowData@@QEAAXXZ @ 0x18004ED94 (-CheckOwnedWindowEligibility@CWindowData@@QEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180065FCC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D254 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ReevaluateAutoParenting@CWindowList@@AEAAJPEAVCWindowData@@_N@Z @ 0x18010B6B0 (-ReevaluateAutoParenting@CWindowList@@AEAAJPEAVCWindowData@@_N@Z.c)
 */

__int64 __fastcall CWindowList::SetOwner(CWindowList *this, struct CWindowData *a2, struct CWindowData *a3)
{
  __int64 v3; // rdi
  unsigned int v4; // ebx
  struct CWindowData *v6; // rax
  unsigned int v8; // r9d
  __int64 v9; // rdx
  struct CWindowData *v10; // r8
  int v11; // eax
  struct CWindowData *v13; // rdx
  _QWORD *v14; // rbx
  unsigned int v15; // eax
  unsigned int v16; // r8d
  unsigned int v17; // eax
  int v18; // edi
  int v19; // r9d
  int v20; // eax
  int v21; // eax
  unsigned int v22; // edi
  unsigned int v23; // [rsp+20h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  struct CWindowData *v25; // [rsp+58h] [rbp+28h] BYREF
  struct CWindowData **v26; // [rsp+60h] [rbp+30h] BYREF

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
    DynArray<CWindowData *,0>::Remove((__int64 *)(v3 + 608), &v25);
    v8 = *(_DWORD *)(v3 + 520);
    v9 = 0LL;
    if ( v8 )
    {
      v10 = v25;
      while ( *(struct CWindowData **)(*(_QWORD *)(*(_QWORD *)(v3 + 496) + 8 * v9) + 64LL) != v25 )
      {
        v9 = (unsigned int)(v9 + 1);
        if ( (unsigned int)v9 >= v8 )
          goto LABEL_15;
      }
      v11 = CWindowData::NotifyRepresentationChanged((CWindowData *)v3);
      v4 = v11;
      if ( v11 < 0 )
      {
        v23 = 4455;
LABEL_12:
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v11, v23);
        return v4;
      }
    }
  }
  v10 = v25;
LABEL_15:
  *((_QWORD *)v10 + 75) = a3;
  if ( a3 )
  {
    v13 = v25;
    if ( a3 == v25 )
      goto LABEL_28;
    v14 = (_QWORD *)((char *)a3 + 608);
    v15 = *((_DWORD *)a3 + 158);
    v16 = v15 + 1;
    if ( v15 + 1 < v15 )
    {
      v4 = -2147024362;
      v17 = 181;
      v18 = -2147024362;
      v19 = -2147024362;
LABEL_26:
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v19, v17);
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v18, 0x1174u);
      return v4;
    }
    if ( v16 > *((_DWORD *)a3 + 157) )
    {
      v26 = &v25;
      v20 = DynArrayImpl<0>::Grow((char **)a3 + 76, 8u, 1, 0, (unsigned __int64 *)&v26);
      v18 = v20;
      v19 = v20;
      if ( v20 < 0 )
      {
        v4 = v20;
        v17 = 192;
        goto LABEL_26;
      }
      *(_QWORD *)((unsigned int)(8 * (*((_DWORD *)a3 + 158))++) + *v14) = *v26;
    }
    else
    {
      *(_QWORD *)(*v14 + 8LL * *((unsigned int *)a3 + 158)) = v25;
      *((_DWORD *)a3 + 158) = v16;
    }
    CWindowData::CheckOwnedWindowEligibility(v25);
    v11 = CWindowData::NotifyRepresentationChanged(a3);
    v4 = v11;
    if ( v11 < 0 )
    {
      v23 = 4473;
      goto LABEL_12;
    }
  }
  v13 = v25;
LABEL_28:
  v21 = CWindowList::ReevaluateAutoParenting(this, v13, 0);
  v22 = v21;
  if ( v21 >= 0 )
    return v4;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x117C,
    (__int64)"clientcore\\windows\\dwm\\udwm\\windowlist.cpp",
    (const char *)(unsigned int)v21);
  return v22;
}
