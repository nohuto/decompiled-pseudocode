/*
 * XREFs of xxxInternalDoSyncPaint @ 0x1C0060D80
 * Callers:
 *     xxxDoSyncPaint @ 0x1C0060C04 (xxxDoSyncPaint.c)
 *     xxxInternalDoSyncPaint @ 0x1C0060D80 (xxxInternalDoSyncPaint.c)
 *     xxxRealDefWindowProc @ 0x1C0109880 (xxxRealDefWindowProc.c)
 * Callees:
 *     DwmAsyncChildStyleChange @ 0x1C0026730 (DwmAsyncChildStyleChange.c)
 *     xxxInternalDoSyncPaint @ 0x1C0060D80 (xxxInternalDoSyncPaint.c)
 *     ?GetNCUpdateRgn@@YAPEAUHRGN__@@PEAUtagWND@@H@Z @ 0x1C0061370 (-GetNCUpdateRgn@@YAPEAUHRGN__@@PEAUtagWND@@H@Z.c)
 *     xxxSendEraseBkgnd @ 0x1C00614A4 (xxxSendEraseBkgnd.c)
 *     ?xxxSendNCPaint@@YAXPEAUtagWND@@PEAUHRGN__@@@Z @ 0x1C00615B8 (-xxxSendNCPaint@@YAXPEAUtagWND@@PEAUHRGN__@@@Z.c)
 *     SetOrClrWF @ 0x1C00B5D8C (SetOrClrWF.c)
 *     DirtyVisRgnTrackers @ 0x1C00B699C (DirtyVisRgnTrackers.c)
 *     ?CheckForChanges@WindowMargins@@YAXPEAUtagWND@@W4ChangeReason@1@@Z @ 0x1C00EBC94 (-CheckForChanges@WindowMargins@@YAXPEAUtagWND@@W4ChangeReason@1@@Z.c)
 *     ??B?$SGDCRITTYPEgpresUser@PEAU_ERESOURCE@@@@QEAAAEAPEAU_ERESOURCE@@XZ @ 0x1C01389C0 (--B-$SGDCRITTYPEgpresUser@PEAU_ERESOURCE@@@@QEAAAEAPEAU_ERESOURCE@@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C014083C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall xxxInternalDoSyncPaint(__int64 *a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // r12d
  __int64 *v4; // rsi
  __int64 *v5; // r9
  __int64 v6; // rax
  int v7; // ebx
  int v8; // r15d
  int v9; // r13d
  _DWORD *v10; // rax
  int v11; // r12d
  int v12; // ecx
  int v13; // edx
  int v14; // ebp
  int v15; // eax
  int v16; // r14d
  int v17; // r15d
  _QWORD *v18; // rax
  __int64 v19; // rbx
  __int64 v20; // rdx
  __int64 v21; // rcx
  void *v22; // rax
  int v23; // ebx
  HRGN NCUpdateRgn; // rax
  HRGN v25; // rbp
  struct tagBWL *v26; // rbx
  __int64 *v27; // rsi
  __int64 v28; // rbp
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rdi
  __int64 v32; // rdi
  __int64 v33; // rax
  __int64 v34; // rdi
  _QWORD *v35; // rax
  PERESOURCE *v36; // rax
  __int64 *ThreadWin32Thread; // rax
  char *v38; // r14
  __int64 i; // rdi
  __int64 v40; // rsi
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 *v44; // r15
  __int64 v45; // rdi
  __int64 v46; // rcx
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r8
  struct tagBWL *v50; // rdx
  struct tagBWL *v51; // rcx
  struct tagBWL *v52; // rcx
  __int128 v53; // [rsp+20h] [rbp-48h] BYREF
  __int64 v54; // [rsp+30h] [rbp-38h]
  unsigned int v55; // [rsp+78h] [rbp+10h]

  v55 = a2;
  v3 = a2;
  v4 = a1;
  v5 = a1;
  if ( a1 )
  {
    while ( (*(_BYTE *)(v5[5] + 27) & 2) == 0 )
    {
      v5 = (__int64 *)v5[13];
      if ( !v5 )
        goto LABEL_4;
    }
    v18 = a1 + 5;
    goto LABEL_38;
  }
LABEL_4:
  v6 = a1[5];
  v7 = *(_DWORD *)(v6 + 28);
  v8 = *(_DWORD *)(v6 + 24);
  v9 = *(_DWORD *)(v6 + 232);
  *(_BYTE *)(v6 + 18) &= ~0x40u;
  if ( (unsigned int)IsWindowDesktopComposed(a1) )
  {
    v10 = (_DWORD *)v4[5];
    v11 = v10[7];
    v12 = v10[6];
    v13 = v10[58];
    v14 = v8 ^ v12;
    v15 = v9 ^ v13;
    v16 = v7 ^ v11;
    if ( v7 == v11 )
    {
      if ( v14 )
        goto LABEL_11;
      if ( !v15 )
      {
LABEL_19:
        v3 = v55;
        goto LABEL_20;
      }
    }
    if ( (v16 & 0xB1CF0000) != 0 )
    {
      v17 = -16;
      goto LABEL_15;
    }
LABEL_11:
    if ( (v14 & 0x4E27A9) != 0 )
    {
      v17 = -20;
      v11 = v12;
    }
    else
    {
      if ( (v15 & 0x12C0) == 0 )
      {
LABEL_16:
        if ( (v16 & 0xC40000) != 0 || (v14 & 0x200A0381) != 0 )
          WindowMargins::CheckForChanges(v4, 1LL);
        goto LABEL_19;
      }
      v17 = -268435456;
      v11 = v13;
    }
LABEL_15:
    DirtyVisRgnTrackers(v4);
    v19 = *v4;
    v22 = (void *)ReferenceDwmApiPort(v21, v20);
    DwmAsyncChildStyleChange(v22, v19, v17, v11);
    goto LABEL_16;
  }
LABEL_20:
  a2 = v4[5];
  a1 = (__int64 *)((*(unsigned __int8 *)(a2 + 17) >> 2) & 2);
  v23 = (*(unsigned __int8 *)(a2 + 17) >> 2) & 2 | 1;
  v18 = v4 + 5;
  if ( (*(_BYTE *)(a2 + 17) & 2) == 0 )
    v23 = (*(unsigned __int8 *)(a2 + 17) >> 2) & 2;
  if ( v23 )
  {
    if ( (*(_BYTE *)(a2 + 31) & 0x10) != 0 )
    {
      if ( !*(_QWORD *)(a2 + 136) )
      {
        SetOrClrWF(0LL, v4, 258LL, 1LL);
        SetOrClrWF(0LL, v4, 260LL, 1LL);
        LOBYTE(v23) = v23 & 0xFE;
      }
      v18 = v4 + 5;
      if ( v4[2] != gptiCurrent )
        goto LABEL_38;
      NCUpdateRgn = GetNCUpdateRgn((struct tagWND *)v4, 1);
      v25 = NCUpdateRgn;
      if ( (v23 & 2) != 0 && (*(_BYTE *)(v4[5] + 17) & 8) != 0 )
        xxxSendNCPaint((struct tagWND *)v4, NCUpdateRgn);
      if ( (v23 & 1) != 0 )
      {
        if ( (*(_BYTE *)(v4[5] + 17) & 8) != 0 )
        {
          DeleteMaybeSpecialRgn(v25);
          v25 = GetNCUpdateRgn((struct tagWND *)v4, 0);
        }
        if ( (*(_BYTE *)(v4[5] + 17) & 2) != 0 )
        {
          SetOrClrWF(0LL, v4, 258LL, 1LL);
          SetOrClrWF(0LL, v4, 260LL, 1LL);
          xxxSendEraseBkgnd(v4, 0LL, v25);
        }
      }
      DeleteMaybeSpecialRgn(v25);
    }
    else
    {
      SetOrClrWF(0LL, v4, 264LL, 1LL);
      SetOrClrWF(0LL, v4, 258LL, 1LL);
      SetOrClrWF(0LL, v4, 1664LL, 1LL);
      SetOrClrWF(0LL, v4, 260LL, 1LL);
    }
    v18 = v4 + 5;
  }
LABEL_38:
  if ( (v3 & 0x20) != 0 || (v3 & 4) != 0 && (*(_BYTE *)(*v18 + 31LL) & 2) != 0 )
  {
    v26 = pbwlCache;
    v27 = (__int64 *)v4[14];
    v28 = 0LL;
    v54 = 0LL;
    v53 = 0LL;
    if ( pbwlCache )
    {
      pbwlCache = 0LL;
    }
    else
    {
      v29 = Win32AllocPoolZInit(296LL, 1819767637LL);
      v26 = (struct tagBWL *)v29;
      if ( !v29 )
        return;
      *(_QWORD *)(v29 + 16) = v29 + 280;
    }
    *((_QWORD *)v26 + 3) = 0LL;
    for ( *((_QWORD *)v26 + 1) = (char *)v26 + 32; v27; v27 = (__int64 *)v27[11] )
    {
      v30 = *((_QWORD *)v26 + 3);
      if ( !v30 || v30 == v27[2] )
      {
        a1 = (__int64 *)*((_QWORD *)v26 + 1);
        *a1 = *v27;
        v31 = *((_QWORD *)v26 + 1) + 8LL;
        *((_QWORD *)v26 + 1) = v31;
        if ( v31 == *((_QWORD *)v26 + 2) )
        {
          v32 = v31 - (_QWORD)v26;
          v33 = UserReAllocPool(v26, (unsigned int)v32 + 8LL, (unsigned int)v32 + 72LL, 1819767637LL);
          if ( !v33 )
            break;
          v34 = v33 + v32;
          v26 = (struct tagBWL *)v33;
          *(_QWORD *)(v33 + 8) = v34;
          a1 = (__int64 *)(v34 + 64);
          *(_QWORD *)(v33 + 16) = v34 + 64;
        }
      }
    }
    v35 = (_QWORD *)*((_QWORD *)v26 + 1);
    if ( (unsigned __int64)v35 >= *((_QWORD *)v26 + 2) )
      goto LABEL_80;
    *v35 = 1LL;
    v36 = (PERESOURCE *)SGDCRITTYPEgpresUser<_ERESOURCE *>::operator _ERESOURCE * &(a1, a2, a3, v5);
    if ( !ExIsResourceAcquiredSharedLite(*v36) )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 151LL);
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
    if ( ThreadWin32Thread )
      v28 = *ThreadWin32Thread;
    v38 = (char *)v26 + 32;
    *((_QWORD *)v26 + 3) = v28;
    *((_QWORD *)v26 + 3) = gptiCurrent;
    *(_QWORD *)v26 = gpbwlList;
    gpbwlList = v26;
    for ( i = *((_QWORD *)v26 + 4); i != 1; v38 += 8 )
    {
      if ( i )
      {
        PsGetThreadWin32Thread(KeGetCurrentThread());
        if ( (unsigned __int64)(unsigned __int16)i < *(_QWORD *)(gpsi + 8LL) )
        {
          v40 = gSharedInfo[1] + LODWORD(gSharedInfo[2]) * (unsigned int)(unsigned __int16)i;
          v44 = (__int64 *)HMPkheFromPhe(v40);
          LOWORD(i) = WORD1(i) & 0x7FFF;
          if ( ((WORD1(i) & 0x7FFF) == *(_WORD *)(v40 + 26)
             || (_WORD)i == 0x7FFF
             || !(_WORD)i && PsGetCurrentProcessWow64Process(v42, v41, v43))
            && (*(_BYTE *)(v40 + 25) & 1) == 0
            && *(_BYTE *)(v40 + 24) == 1 )
          {
            v45 = *v44;
            if ( *v44 )
            {
              if ( (*(_BYTE *)(*(_QWORD *)(v45 + 40) + 31LL) & 0x40) == 0 || gptiCurrent == *(_QWORD *)(v45 + 16) )
              {
                v46 = *v44;
                *(_QWORD *)&v53 = *(_QWORD *)(gptiCurrent + 416LL);
                *(_QWORD *)(gptiCurrent + 416LL) = &v53;
                *((_QWORD *)&v53 + 1) = v45;
                HMLockObject(v46);
                xxxInternalDoSyncPaint(v45, v3);
                ThreadUnlock1(v48, v47, v49);
              }
            }
          }
        }
      }
      i = *((_QWORD *)v38 + 1);
    }
    if ( *(_QWORD *)v26 == 3LL )
      goto LABEL_80;
    v50 = (struct tagBWL *)gpbwlList;
    v51 = (struct tagBWL *)gpbwlList;
    if ( !gpbwlList )
      return;
    while ( v51 != v26 )
    {
      v50 = v51;
      v51 = *(struct tagBWL **)v51;
      if ( !v51 )
        return;
    }
    *(_QWORD *)v50 = *(_QWORD *)v26;
    v52 = pbwlCache;
    if ( !pbwlCache )
    {
      pbwlCache = v26;
      return;
    }
    if ( (__int64)((*((_QWORD *)v26 + 2) - (_QWORD)v26 - 32LL) & 0xFFFFFFFFFFFFFFF8uLL) <= (__int64)((*((_QWORD *)pbwlCache + 2) - (_QWORD)pbwlCache - 32LL) & 0xFFFFFFFFFFFFFFF8uLL) )
LABEL_80:
      v52 = v26;
    else
      pbwlCache = v26;
    Win32FreePool(v52);
  }
}
