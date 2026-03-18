/*
 * XREFs of ?xxxRedrawHungWindow@@YAXPEAUtagWND@@PEAUHRGN__@@@Z @ 0x1C0156276
 * Callers:
 *     ?xxxUpdateOtherThreadsWindows@@YAXPEAUtagWND@@PEAUHRGN__@@@Z @ 0x1C0156834 (-xxxUpdateOtherThreadsWindows@@YAXPEAUtagWND@@PEAUHRGN__@@@Z.c)
 * Callees:
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C0042ABC (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     FillRect @ 0x1C004579C (FillRect.c)
 *     PhysicalToLogicalInPlaceRgn @ 0x1C004F3FC (PhysicalToLogicalInPlaceRgn.c)
 *     xxxInternalInvalidate @ 0x1C004FB80 (xxxInternalInvalidate.c)
 *     xxxInternalPaintDesktop @ 0x1C0095728 (xxxInternalPaintDesktop.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C00A6788 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     IntersectRect @ 0x1C00AEB30 (IntersectRect.c)
 *     SetOrClrWF @ 0x1C00B5D8C (SetOrClrWF.c)
 *     xxxDrawWindowFrame @ 0x1C00E28A0 (xxxDrawWindowFrame.c)
 *     _GetDesktopWindow @ 0x1C00EA360 (_GetDesktopWindow.c)
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C00EB194 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     xxxCalcClientRect @ 0x1C010BA30 (xxxCalcClientRect.c)
 *     GetStyleWindow @ 0x1C01199B0 (GetStyleWindow.c)
 *     __security_check_cookie @ 0x1C01381F0 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C014083C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     GreWatchVisRgnChange @ 0x1C02A832C (GreWatchVisRgnChange.c)
 */

void __fastcall xxxRedrawHungWindow(struct tagWND *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rbx
  unsigned __int64 v11; // rdi
  unsigned __int64 EmptyRgn; // rdi
  HDC DCEx; // rax
  HDC v14; // r14
  __int16 v15; // r8
  int v16; // eax
  __int64 v17; // rcx
  __int64 v18; // rax
  struct tagWND *i; // r14
  __int64 v20; // r8
  int v21; // ebx
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r8
  HDC v25; // rdi
  __int64 DesktopWindow; // rbx
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r8
  RECT v31; // xmm0
  int v32; // edx
  int v33; // ecx
  int v34; // edx
  unsigned __int64 v35; // rbx
  int ObjectOwner; // r14d
  unsigned int BrushColor; // eax
  HBRUSH v38; // r8
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  _BYTE v42[8]; // [rsp+20h] [rbp-49h] BYREF
  HRGN v43; // [rsp+28h] [rbp-41h] BYREF
  __int128 v44; // [rsp+30h] [rbp-39h] BYREF
  __int128 v45; // [rsp+40h] [rbp-29h] BYREF
  __int64 v46; // [rsp+50h] [rbp-19h]
  __int128 v47; // [rsp+58h] [rbp-11h] BYREF
  __int64 v48; // [rsp+68h] [rbp-1h]
  RECT v49; // [rsp+70h] [rbp+7h] BYREF

  v46 = 0LL;
  v49 = 0LL;
  v48 = 0LL;
  v45 = 0LL;
  v47 = 0LL;
  if ( *((_QWORD *)PtiCurrentShared((__int64)a1, a2, a3, a4) + 57) )
  {
    v7 = **(_QWORD **)(*((_QWORD *)PtiCurrentShared(v7, v6, v8, v9) + 57) + 8LL);
    if ( (*(_DWORD *)(v7 + 64) & 1) != 0 )
    {
      LODWORD(v43) = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 2159);
    }
  }
  v10 = *((_QWORD *)a1 + 5);
  v11 = *(_QWORD *)(v10 + 136);
  if ( v11 && (*(_BYTE *)(v10 + 31) & 0x10) != 0 && (!a2 || !GetStyleWindow((__int64)a1, 2568)) )
  {
    if ( v11 <= 1 )
    {
      v49 = *(RECT *)(v10 + 88);
      EmptyRgn = GreCreateRectRgnIndirect(&v49);
      if ( !EmptyRgn )
        EmptyRgn = 1LL;
    }
    else
    {
      EmptyRgn = CreateEmptyRgn(v7);
      if ( !EmptyRgn )
      {
LABEL_12:
        EmptyRgn = 1LL;
        goto LABEL_15;
      }
      if ( !(unsigned int)GreCombineRgn(EmptyRgn, *(_QWORD *)(*((_QWORD *)a1 + 5) + 136LL), 0LL, 5LL) )
      {
        GreDeleteObject(EmptyRgn);
        goto LABEL_12;
      }
    }
LABEL_15:
    if ( a2 && EmptyRgn != 1 && (unsigned int)GreCombineRgn(EmptyRgn, EmptyRgn, a2, 1LL) == 1 )
    {
      GreDeleteObject(EmptyRgn);
      return;
    }
    ThreadLock(a1, &v45);
    if ( gihmodUserApiHook < 0 )
    {
      DCEx = (HDC)_GetDCEx(a1, EmptyRgn, 328833LL);
      v14 = DCEx;
      if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 16LL) & 0x40) == 0
        || (v15 = 8193, *(_QWORD *)(*((_QWORD *)a1 + 2) + 432LL) != gpqForeground) )
      {
        v15 = 0x2000;
      }
      xxxDrawWindowFrame(a1, DCEx, v15);
      _ReleaseDC(v14);
    }
    xxxInternalInvalidate(a1, (HRGN)EmptyRgn, 0x485u);
    v49 = *(RECT *)(*((_QWORD *)a1 + 5) + 88LL);
    xxxCalcClientRect((__int64 *)a1, &v49, 1);
    SetRectRgnIndirect(ghrgnInv2, &v49);
    if ( EmptyRgn > 1 )
    {
      v16 = GreCombineRgn(EmptyRgn, EmptyRgn, ghrgnInv2, 1LL);
      if ( v16 )
      {
        if ( v16 == 1 )
        {
          GreDeleteObject(EmptyRgn);
          EmptyRgn = 0LL;
LABEL_43:
          v24 = (4 * (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 4)) | 0x8Bu;
          if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 2) == 0 )
            v24 = (4 * (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 4)) | 0x83u;
          v25 = (HDC)_GetDCEx(a1, EmptyRgn, v24);
          GreWatchVisRgnChange(v25);
          if ( a1 == *(struct tagWND **)(*(_QWORD *)(*((_QWORD *)a1 + 3) + 8LL) + 184LL) )
          {
            DesktopWindow = GetDesktopWindow((__int64)a1);
            ThreadLock(DesktopWindow, &v47);
            xxxInternalPaintDesktop(DesktopWindow, v25, 1);
            ThreadUnlock1(v28, v27, v29);
          }
          else
          {
            v30 = *((_QWORD *)a1 + 5);
            v49 = *(RECT *)(v30 + 88);
            v31 = v49;
            v32 = *(_DWORD *)(v30 + 92);
            v33 = -*(_DWORD *)(v30 + 88);
            v49.right -= *(_DWORD *)(v30 + 88);
            v34 = -v32;
            v49.bottom += v34;
            v49.top += v34;
            v49.left = v33 + _mm_cvtsi128_si32((__m128i)v31);
            v35 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 17) + 8LL) + 72LL);
            if ( v35 )
            {
              if ( v35 <= 0x1F )
                v35 = *(_QWORD *)(gpsi + 8 * v35 + 4688);
            }
            else if ( (*(_BYTE *)(v30 + 18) & 1) != 0 && (*(_BYTE *)(v30 + 21) & 2) != 0 )
            {
              v35 = *(_QWORD *)(gpsi + 4816LL);
            }
            else
            {
              v35 = *(_QWORD *)(gpsi + 4736LL);
            }
            ObjectOwner = GreGetObjectOwner(v35, 16LL);
            if ( !ObjectOwner || ObjectOwner == (unsigned int)PsGetCurrentProcessId() )
            {
              v38 = (HBRUSH)v35;
            }
            else
            {
              BrushColor = GreGetBrushColor(v35);
              if ( BrushColor == -1 )
                BrushColor = GreGetBrushColor(*(_QWORD *)(gpsi + 4736LL));
              GreSetSolidBrush(ghbrHungApp, BrushColor);
              v38 = (HBRUSH)ghbrHungApp;
            }
            FillRect(v25, &v49, v38);
          }
          GreWatchVisRgnChange(v25);
          _ReleaseDC(v25);
          SetOrClrWF(1, (__int64 *)a1, 0x108u, 1);
          SetOrClrWF(1, (__int64 *)a1, 0x102u, 1);
          SetOrClrWF(1, (__int64 *)a1, 0x120u, 1);
          ThreadUnlock1(v40, v39, v41);
          return;
        }
      }
      else
      {
        GreDeleteObject(EmptyRgn);
        EmptyRgn = 1LL;
      }
    }
    v17 = *((_QWORD *)a1 + 5);
    if ( (*(_BYTE *)(v17 + 31) & 2) != 0 )
      goto LABEL_43;
    v18 = *(_QWORD *)(v17 + 136);
    v44 = 0LL;
    if ( v18 != 1 )
    {
      if ( (unsigned int)GreGetRgnBox(v18, &v49) )
        goto LABEL_34;
      v17 = *((_QWORD *)a1 + 5);
    }
    v49 = *(RECT *)(v17 + 88);
LABEL_34:
    for ( i = (struct tagWND *)*((_QWORD *)a1 + 14); i; i = (struct tagWND *)*((_QWORD *)i + 11) )
    {
      v20 = *((_QWORD *)i + 5);
      if ( (*(_BYTE *)(v20 + 31) & 0x10) != 0 && ((*(_BYTE *)(v20 + 20) & 4) != 0 || !*(_QWORD *)(v20 + 136)) )
      {
        if ( (unsigned int)IntersectRect(&v44, &v49.left, (int *)(v20 + 88)) )
        {
          v43 = (HRGN)EmptyRgn;
          v21 = PhysicalToLogicalInPlaceRgn((__int64)i, (__int64)&v43);
          AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v42);
          xxxInternalInvalidate(i, v43, 0x485u);
          AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v42, v22, v23);
          if ( v21 )
            GreDeleteObject(v43);
        }
      }
    }
    goto LABEL_43;
  }
}
