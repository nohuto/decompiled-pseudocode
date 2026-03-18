/*
 * XREFs of ?UpdateTrackerRegion@CVisRgnTrackerProp@@AEAAXKI@Z @ 0x1C00E9EF4
 * Callers:
 *     ?Update@CVisRgnTrackerProp@@QEAAXXZ @ 0x1C00E9E0C (-Update@CVisRgnTrackerProp@@QEAAXXZ.c)
 * Callees:
 *     DwmAsyncUpdateVisRgn @ 0x1C0026F84 (DwmAsyncUpdateVisRgn.c)
 *     ?GetVisRgn@@YA_NPEAUtagWND@@KPEAUHRGN__@@@Z @ 0x1C002EF98 (-GetVisRgn@@YA_NPEAUtagWND@@KPEAUHRGN__@@@Z.c)
 *     ?GetLayeredRegion@@YA_NPEAUtagWND@@PEAUHRGN__@@PEA_N@Z @ 0x1C00EA148 (-GetLayeredRegion@@YA_NPEAUtagWND@@PEAUHRGN__@@PEA_N@Z.c)
 *     __security_check_cookie @ 0x1C01381F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1C0140D40 (memset_0.c)
 *     DwmAsyncUpdateLargeVisRgn @ 0x1C026D50C (DwmAsyncUpdateLargeVisRgn.c)
 */

void __fastcall CVisRgnTrackerProp::UpdateTrackerRegion(CVisRgnTrackerProp *this, unsigned int a2, unsigned int a3)
{
  unsigned int v3; // r14d
  __int64 v4; // rdi
  __int64 v7; // r12
  HRGN v8; // rbp
  HRGN v9; // r13
  HRGN EmptyRgn; // rax
  HRGN v11; // rsi
  struct tagWND *v12; // rcx
  char VisRgn; // al
  _QWORD *v14; // rcx
  __int64 *v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  unsigned int RegionData; // eax
  __int64 v19; // rbx
  void *v20; // rax
  __int64 v21; // r14
  __int64 v22; // r12
  __int64 ProcessWin32Process; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  void *v26; // rax
  bool v27; // [rsp+30h] [rbp-278h] BYREF
  unsigned int v28; // [rsp+34h] [rbp-274h]
  char v29[8]; // [rsp+40h] [rbp-268h] BYREF
  int v30; // [rsp+48h] [rbp-260h]
  __int128 v31[32]; // [rsp+60h] [rbp-248h] BYREF

  v3 = a3;
  v4 = 0LL;
  v28 = a3;
  v7 = a3;
  v8 = 0LL;
  v9 = (HRGN)*((_QWORD *)this + a3 + 6);
  EmptyRgn = (HRGN)CreateEmptyRgn(this);
  v11 = EmptyRgn;
  if ( !EmptyRgn )
    goto LABEL_15;
  v12 = (struct tagWND *)*((_QWORD *)this + 2);
  v27 = 0;
  if ( v3 == 2 )
  {
    if ( !GetLayeredRegion(v12, EmptyRgn, &v27) )
    {
      GreDeleteObject(v11);
      v11 = 0LL;
    }
    VisRgn = v27;
  }
  else
  {
    VisRgn = GetVisRgn(v12, a2, EmptyRgn);
  }
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
        goto LABEL_12;
    }
    else if ( !v8 )
    {
      goto LABEL_15;
    }
    memset_0(v29, 0, 0x220uLL);
    if ( !v11 )
      goto LABEL_25;
    RegionData = GreGetRegionData(v11, 0LL, 0LL);
    if ( RegionData > 0x220 )
    {
      v21 = CreateEmptyRgn(v17);
      if ( (unsigned int)GreCombineRgn(v21, v11, 0LL, 5LL) )
      {
        v22 = ReferenceDwmProcess();
        ProcessWin32Process = PsGetProcessWin32Process(v22);
        if ( ProcessWin32Process )
          ProcessWin32Process &= -(__int64)(*(_QWORD *)ProcessWin32Process != 0LL);
        if ( (unsigned int)GreSetRegionOwner(v21, *(unsigned int *)(ProcessWin32Process + 56)) )
        {
          v26 = (void *)ReferenceDwmApiPort(v25, v24);
          v3 = v28;
          DwmAsyncUpdateLargeVisRgn(v26);
        }
        else
        {
          GreDeleteObject(v21);
          v3 = v28;
        }
        DereferenceDwmProcess(v22);
        v7 = v3;
        goto LABEL_26;
      }
      v3 = v28;
    }
    else
    {
      if ( !RegionData )
      {
LABEL_25:
        v19 = **((_QWORD **)this + 2);
        v20 = (void *)ReferenceDwmApiPort(v17, v16);
        DwmAsyncUpdateVisRgn(v20, v19, v3, (__int64)v31, v30);
LABEL_26:
        if ( v8 )
          GreDeleteObject(v8);
        *((_QWORD *)this + v7 + 6) = v11;
        v8 = v11;
        goto LABEL_13;
      }
      if ( (unsigned int)GreGetRegionData(v11, RegionData, v29) )
      {
        if ( !v30 )
        {
          v30 = 1;
          v31[0] = 0LL;
        }
        goto LABEL_25;
      }
    }
LABEL_12:
    GreDeleteObject(v11);
    goto LABEL_13;
  }
  if ( v11 )
    goto LABEL_12;
LABEL_13:
  if ( v8 )
    GreSetRegionOwner(v8, 2147483666LL);
LABEL_15:
  v14 = (_QWORD *)*((_QWORD *)this + 2);
  v15 = (__int64 *)v14[13];
  if ( v15 )
    v4 = *v15;
  EtwTraceDwmVisRgnUpdate(*v14, v4, v3, v9 != *((HRGN *)this + v7 + 6));
}
