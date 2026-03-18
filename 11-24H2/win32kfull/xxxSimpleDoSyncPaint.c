/*
 * XREFs of xxxSimpleDoSyncPaint @ 0x1400477B0
 * Callers:
 *     ?xxxUpdateWindow2@@YAXPEAUtagWND@@K@Z @ 0x1400322FC (-xxxUpdateWindow2@@YAXPEAUtagWND@@K@Z.c)
 *     xxxGetUpdateRect @ 0x140033B40 (xxxGetUpdateRect.c)
 *     xxxInternalDoSyncPaint @ 0x140047490 (xxxInternalDoSyncPaint.c)
 *     xxxGetUpdateRgn @ 0x1400F5390 (xxxGetUpdateRgn.c)
 *     xxxDispatchMessage @ 0x1401095B8 (xxxDispatchMessage.c)
 * Callees:
 *     xxxSendEraseBkgnd @ 0x140035C60 (xxxSendEraseBkgnd.c)
 *     ?xxxSendNCPaint@@YAXPEAUtagWND@@PEAUHRGN__@@@Z @ 0x140036318 (-xxxSendNCPaint@@YAXPEAUtagWND@@PEAUHRGN__@@@Z.c)
 *     ?GetNCUpdateRgn@@YAPEAUHRGN__@@PEAUtagWND@@H@Z @ 0x1400363D4 (-GetNCUpdateRgn@@YAPEAUHRGN__@@PEAUtagWND@@H@Z.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     SetOrClrWF @ 0x140049160 (SetOrClrWF.c)
 *     ?CheckForChanges@WindowMargins@@YAXPEAUtagWND@@W4ChangeReason@1@@Z @ 0x140049338 (-CheckForChanges@WindowMargins@@YAXPEAUtagWND@@W4ChangeReason@1@@Z.c)
 *     DirtyVisRgnTrackers @ 0x1400497E8 (DirtyVisRgnTrackers.c)
 *     ?IncrementDWMWindowUniqueness@@YA_JXZ @ 0x140062E44 (-IncrementDWMWindowUniqueness@@YA_JXZ.c)
 */

__int64 __fastcall xxxSimpleDoSyncPaint(struct tagWND *a1)
{
  __int64 result; // rax
  __int64 v3; // rax
  int v4; // ebx
  int v5; // ebp
  int v6; // r14d
  _DWORD *v7; // rax
  int v8; // r15d
  int v9; // edx
  int v10; // esi
  int v11; // ecx
  int v12; // ebx
  int v13; // eax
  __int64 v14; // rdx
  int v15; // ebx
  int v16; // ebp
  __int64 v17; // r12
  __int64 v18; // rdx
  __int64 v19; // rcx
  void *v20; // r14
  __int64 v21; // rsi
  HRGN NCUpdateRgn; // rax
  unsigned __int64 v23; // rsi
  int v24; // [rsp+20h] [rbp-58h] BYREF
  __int16 v25; // [rsp+24h] [rbp-54h]
  __int128 v26; // [rsp+26h] [rbp-52h]
  __int128 v27; // [rsp+36h] [rbp-42h]
  __int16 v28; // [rsp+46h] [rbp-32h]
  int v29; // [rsp+48h] [rbp-30h]
  __int64 v30; // [rsp+4Ch] [rbp-2Ch]
  int v31; // [rsp+54h] [rbp-24h]
  int v32; // [rsp+58h] [rbp-20h]

  result = (__int64)a1;
  if ( a1 )
  {
    while ( (*(_BYTE *)(*(_QWORD *)(result + 40) + 27LL) & 2) == 0 )
    {
      result = *(_QWORD *)(result + 104);
      if ( !result )
        goto LABEL_6;
    }
  }
  if ( !result )
  {
LABEL_6:
    v3 = *((_QWORD *)a1 + 5);
    v4 = *(_DWORD *)(v3 + 28);
    v5 = *(_DWORD *)(v3 + 24);
    v6 = *(_DWORD *)(v3 + 232);
    *(_BYTE *)(v3 + 18) &= ~0x40u;
    if ( !(unsigned int)IsWindowDesktopComposed(a1) )
    {
LABEL_10:
      v14 = *((_QWORD *)a1 + 5);
      result = *(unsigned __int8 *)(v14 + 17);
      v15 = (*(unsigned __int8 *)(v14 + 17) >> 2) & 2 | 1;
      if ( (result & 2) == 0 )
        v15 = (*(unsigned __int8 *)(v14 + 17) >> 2) & 2;
      if ( v15 )
      {
        if ( (*(_BYTE *)(v14 + 31) & 0x10) != 0 )
        {
          result = (__int64)PtiCurrent();
          v21 = result;
          if ( !*(_QWORD *)(*((_QWORD *)a1 + 5) + 136LL) )
          {
            SetOrClrWF(0LL, a1, 258LL, 1LL);
            result = SetOrClrWF(0LL, a1, 260LL, 1LL);
            LOBYTE(v15) = v15 & 0xFE;
          }
          if ( *((_QWORD *)a1 + 2) == v21 )
          {
            NCUpdateRgn = (HRGN)GetNCUpdateRgn(a1, 1);
            v23 = (unsigned __int64)NCUpdateRgn;
            if ( (v15 & 2) != 0 && (*(_BYTE *)(*((_QWORD *)a1 + 5) + 17LL) & 8) != 0 )
              xxxSendNCPaint(a1, NCUpdateRgn);
            if ( (v15 & 1) != 0 )
            {
              if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 17LL) & 8) != 0 )
              {
                DeleteMaybeSpecialRgn(v23);
                v23 = GetNCUpdateRgn(a1, 0);
              }
              if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 17LL) & 2) != 0 )
              {
                SetOrClrWF(0LL, a1, 258LL, 1LL);
                SetOrClrWF(0LL, a1, 260LL, 1LL);
                xxxSendEraseBkgnd((__int64)a1, 0LL, v23);
              }
            }
            return DeleteMaybeSpecialRgn(v23);
          }
        }
        else
        {
          SetOrClrWF(0LL, a1, 264LL, 1LL);
          SetOrClrWF(0LL, a1, 258LL, 1LL);
          return SetOrClrWF(0LL, a1, 260LL, 1LL);
        }
      }
      return result;
    }
    v7 = (_DWORD *)*((_QWORD *)a1 + 5);
    v8 = v7[7];
    v9 = v7[6];
    v10 = v4 ^ v8;
    v11 = v7[58];
    v12 = v5 ^ v9;
    v13 = v6 ^ v11;
    if ( !v10 )
    {
      if ( v12 )
        goto LABEL_15;
      if ( !v13 )
        goto LABEL_10;
    }
    if ( (v10 & 0xB9CF0000) != 0 )
    {
      v16 = -16;
      goto LABEL_19;
    }
LABEL_15:
    if ( (v12 & 0x4E27A9) != 0 )
    {
      v16 = -20;
      v8 = v9;
    }
    else
    {
      if ( (v13 & 0x3F2C0) == 0 )
      {
LABEL_21:
        if ( (v10 & 0x1C40000) != 0 || (v12 & 0x200A0381) != 0 )
          WindowMargins::CheckForChanges(a1, 1LL);
        goto LABEL_10;
      }
      v16 = -268435456;
      v8 = v11;
    }
LABEL_19:
    DirtyVisRgnTrackers(a1);
    v17 = *(_QWORD *)a1;
    v20 = (void *)ReferenceDwmApiPort(v19, v18);
    IncrementDWMWindowUniqueness();
    if ( v20 )
    {
      v24 = 3932180;
      v28 = 0;
      v29 = 1073741846;
      v25 = 0x8000;
      v30 = v17;
      v31 = v16;
      v26 = 0LL;
      v32 = v8;
      v27 = 0LL;
      LpcRequestPort(v20, &v24);
      ObfDereferenceObject(v20);
    }
    goto LABEL_21;
  }
  return result;
}
