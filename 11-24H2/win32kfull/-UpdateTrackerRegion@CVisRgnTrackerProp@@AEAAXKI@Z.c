/*
 * XREFs of ?UpdateTrackerRegion@CVisRgnTrackerProp@@AEAAXKI@Z @ 0x140049F70
 * Callers:
 *     ?Update@CVisRgnTrackerProp@@QEAAXXZ @ 0x1400489D4 (-Update@CVisRgnTrackerProp@@QEAAXXZ.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     _IsTopLevelWindow @ 0x140049A60 (_IsTopLevelWindow.c)
 *     _GetTopLevelWindow @ 0x140049F30 (_GetTopLevelWindow.c)
 *     ?_GhostWindowFromHungWindow@@YAPEAUtagWND@@PEBU1@@Z @ 0x140062E78 (-_GhostWindowFromHungWindow@@YAPEAUtagWND@@PEBU1@@Z.c)
 *     ?GetVisRgn@@YA_NPEAUtagWND@@KPEAUHRGN__@@@Z @ 0x14018287C (-GetVisRgn@@YA_NPEAUtagWND@@KPEAUHRGN__@@@Z.c)
 *     ?GetWindowRgn@@YAHPEAUtagWND@@PEAUHRGN__@@K@Z @ 0x14018295C (-GetWindowRgn@@YAHPEAUtagWND@@PEAUHRGN__@@K@Z.c)
 *     DwmAsyncUpdateVisRgn @ 0x1401A082C (DwmAsyncUpdateVisRgn.c)
 *     DwmAsyncUpdateLargeVisRgn @ 0x140268F24 (DwmAsyncUpdateLargeVisRgn.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 *     memset_0 @ 0x140340780 (memset_0.c)
 */

void __fastcall CVisRgnTrackerProp::UpdateTrackerRegion(CVisRgnTrackerProp *this, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // r12d
  __int64 v5; // rdi
  unsigned int v6; // ebx
  HRGN v8; // rbp
  HRGN v9; // r14
  HRGN EmptyRgn; // rax
  HRGN v11; // rsi
  __int64 v12; // rbx
  _QWORD *v13; // rcx
  __int64 *v14; // rax
  struct tagWND *v15; // r15
  bool VisRgn; // r12
  __int64 v17; // rdx
  __int64 v18; // rcx
  int v19; // r9d
  unsigned int v20; // r14d
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rcx
  int v25; // ecx
  int WindowRgn; // eax
  const struct tagWND *TopLevelWindow; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  unsigned int RegionData; // eax
  __int64 v31; // r8
  __int64 v32; // r9
  void *v33; // rax
  __int64 v34; // r14
  __int64 v35; // r15
  __int64 ProcessWin32Process; // rax
  __int64 v37; // rdx
  __int64 v38; // rcx
  void *v39; // rax
  unsigned int v40; // [rsp+30h] [rbp-288h]
  HRGN v41; // [rsp+38h] [rbp-280h]
  __int64 v42; // [rsp+40h] [rbp-278h]
  char v43[8]; // [rsp+50h] [rbp-268h] BYREF
  int v44; // [rsp+58h] [rbp-260h]
  __int128 v45; // [rsp+70h] [rbp-248h]

  v4 = a3;
  v5 = 0LL;
  v40 = a3;
  v6 = a2;
  v42 = (unsigned int)a3;
  v8 = 0LL;
  v9 = (HRGN)*((_QWORD *)this + (unsigned int)a3 + 6);
  v41 = v9;
  EmptyRgn = (HRGN)CreateEmptyRgn(this, a2, a3, a4);
  v11 = EmptyRgn;
  if ( !EmptyRgn )
  {
    v12 = v4;
    goto LABEL_3;
  }
  v15 = (struct tagWND *)*((_QWORD *)this + 2);
  if ( v4 == 2 )
  {
    VisRgn = 0;
    if ( IsTopLevelWindow((__int64)v15) )
    {
      WindowRgn = GetWindowRgn(v15, v11, 0x20u);
      if ( !WindowRgn )
      {
        VisRgn = 0;
        GreDeleteObject(v11);
        v11 = 0LL;
        goto LABEL_20;
      }
    }
    else
    {
      v20 = 2 * (v19 | *(_BYTE *)(*((_QWORD *)v15 + 5) + 31LL) & 4);
      if ( PtiCurrent(v18, v17) )
      {
        if ( *((_QWORD *)PtiCurrent(v22, v21) + 62) )
        {
          if ( (*(_DWORD *)(**(_QWORD **)(*((_QWORD *)PtiCurrent(v24, v23) + 62) + 8LL) + 64LL) & 1) != 0 )
          {
            v25 = *(_DWORD *)(*((_QWORD *)v15 + 5) + 288LL);
            if ( (v25 & 0xF) == 0 && (v25 & 0x40000000) != 0 )
              v20 |= 0x20u;
          }
        }
      }
      WindowRgn = GetWindowRgn(v15, v11, v20);
      v9 = v41;
    }
    if ( WindowRgn == 1 )
    {
      TopLevelWindow = (const struct tagWND *)GetTopLevelWindow((__int64)v15);
      if ( TopLevelWindow )
      {
        if ( _GhostWindowFromHungWindow(TopLevelWindow) )
          VisRgn = 1;
      }
    }
  }
  else
  {
    VisRgn = GetVisRgn(v15, v6, EmptyRgn);
  }
LABEL_20:
  if ( !VisRgn )
  {
    if ( v9 )
    {
      v8 = v9;
      GreSetRegionOwner(v9, 2147483650LL);
    }
    if ( v11 )
    {
      if ( v8 && (unsigned int)GreEqualRgn(v11, v8) )
        goto LABEL_37;
    }
    else if ( !v8 )
    {
      v4 = v40;
      v12 = v42;
      goto LABEL_3;
    }
    memset_0(v43, 0, 0x220uLL);
    if ( !v11 )
      goto LABEL_32;
    RegionData = GreGetRegionData(v11, 0LL, 0LL);
    if ( RegionData <= 0x220 )
    {
      if ( RegionData )
      {
        if ( (unsigned int)GreGetRegionData(v11, RegionData, v43) )
        {
          if ( !v44 )
          {
            v45 = 0LL;
            v44 = 1;
          }
          goto LABEL_32;
        }
        goto LABEL_37;
      }
LABEL_32:
      v33 = (void *)ReferenceDwmApiPort(v29, v28);
      v4 = v40;
      DwmAsyncUpdateVisRgn(v33, v44);
LABEL_33:
      if ( v8 )
        GreDeleteObject(v8);
      v12 = v4;
      v8 = v11;
      *((_QWORD *)this + v4 + 6) = v11;
      goto LABEL_39;
    }
    v34 = CreateEmptyRgn(v29, v28, v31, v32);
    if ( (unsigned int)GreCombineRgn(v34, v11, 0LL, 5LL) )
    {
      v35 = ReferenceDwmProcess();
      ProcessWin32Process = PsGetProcessWin32Process(v35);
      if ( ProcessWin32Process )
        ProcessWin32Process &= -(__int64)(*(_QWORD *)ProcessWin32Process != 0LL);
      if ( (unsigned int)GreSetRegionOwner(v34, *(unsigned int *)(ProcessWin32Process + 56)) )
      {
        v39 = (void *)ReferenceDwmApiPort(v38, v37);
        v4 = v40;
        DwmAsyncUpdateLargeVisRgn(v39);
      }
      else
      {
        GreDeleteObject(v34);
        v4 = v40;
      }
      DereferenceDwmProcess(v35);
      goto LABEL_33;
    }
LABEL_37:
    GreDeleteObject(v11);
    goto LABEL_38;
  }
  if ( v11 )
    goto LABEL_37;
LABEL_38:
  v12 = v42;
  v4 = v40;
LABEL_39:
  if ( v8 )
    GreSetRegionOwner(v8, 2147483666LL);
  v9 = v41;
LABEL_3:
  v13 = (_QWORD *)*((_QWORD *)this + 2);
  v14 = (__int64 *)v13[13];
  if ( v14 )
    v5 = *v14;
  EtwTraceDwmVisRgnUpdate(*v13, v5, v4, v9 != *((HRGN *)this + v12 + 6));
}
