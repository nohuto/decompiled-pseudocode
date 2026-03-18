/*
 * XREFs of NtUserEndPaint @ 0x1C0071310
 * Callers:
 *     <none>
 * Callees:
 *     zzzInternalShowCaret @ 0x1C00062D4 (zzzInternalShowCaret.c)
 *     DwmAsyncChildStyleChange @ 0x1C0026730 (DwmAsyncChildStyleChange.c)
 *     InternalInvalidate3 @ 0x1C0051900 (InternalInvalidate3.c)
 *     SetOrClrWF @ 0x1C00B5D8C (SetOrClrWF.c)
 *     DirtyVisRgnTrackers @ 0x1C00B699C (DirtyVisRgnTrackers.c)
 *     ?CheckForChanges@WindowMargins@@YAXPEAUtagWND@@W4ChangeReason@1@@Z @ 0x1C00EBC94 (-CheckForChanges@WindowMargins@@YAXPEAUtagWND@@W4ChangeReason@1@@Z.c)
 *     UserSetLastError @ 0x1C00EDA4C (UserSetLastError.c)
 *     memset_0 @ 0x1C0140D40 (memset_0.c)
 */

__int64 __fastcall NtUserEndPaint(__int64 a1, ULONG64 a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 *v6; // rsi
  __int64 v7; // r8
  __int64 v8; // r9
  int v9; // edi
  __int64 v10; // rax
  int v11; // ebx
  int v12; // r12d
  int v13; // r13d
  _DWORD *v14; // rax
  int v15; // edx
  int v16; // r8d
  int v17; // r14d
  int v18; // r9d
  int v19; // eax
  int v20; // r15d
  __int64 v21; // rax
  int v22; // ebx
  int v23; // r14d
  int v24; // r15d
  __int64 v25; // rdx
  __int64 v26; // r8
  unsigned int *v27; // rax
  int v28; // r12d
  int v29; // r9d
  int v30; // ecx
  int v31; // r13d
  __int64 v32; // rcx
  int v34; // r12d
  int v35; // r13d
  int v36; // ecx
  __int64 v37; // rbx
  __int64 v38; // rdx
  __int64 v39; // rcx
  void *v40; // rax
  int v41; // r14d
  int v42; // r15d
  int v43; // eax
  __int64 v44; // rbx
  __int64 v45; // rdx
  __int64 v46; // rcx
  void *v47; // rax
  __int128 v48; // [rsp+30h] [rbp-88h] BYREF
  __int64 v49; // [rsp+40h] [rbp-78h]
  _OWORD v50[4]; // [rsp+50h] [rbp-68h] BYREF
  __int64 v51; // [rsp+90h] [rbp-28h]

  memset_0(v50, 0, 0x48uLL);
  v48 = 0LL;
  v49 = 0LL;
  EnterCrit(0LL, 0LL);
  v6 = (__int64 *)ValidateHwnd(a1);
  v9 = 0;
  if ( !v6 )
    goto LABEL_16;
  *(_QWORD *)&v48 = *(_QWORD *)(gptiCurrent + 416LL);
  *(_QWORD *)(gptiCurrent + 416LL) = &v48;
  *((_QWORD *)&v48 + 1) = v6;
  HMLockObject(v6);
  if ( a2 >= MmUserProbeAddress )
    a2 = MmUserProbeAddress;
  v50[0] = *(_OWORD *)a2;
  v50[1] = *(_OWORD *)(a2 + 16);
  v50[2] = *(_OWORD *)(a2 + 32);
  v50[3] = *(_OWORD *)(a2 + 48);
  v51 = *(_QWORD *)(a2 + 64);
  ReleaseCacheDC(*(_QWORD *)&v50[0], 1LL);
  if ( (*(_BYTE *)(v6[5] + 20) & 2) != 0 )
  {
    if ( *(_QWORD *)&WPP_MAIN_CB.DeviceQueue.Type )
    {
      InternalInvalidate3(v6, *(__int64 *)&WPP_MAIN_CB.DeviceQueue.Type, (unsigned int)gRdwFlags);
      if ( !--LODWORD(WPP_MAIN_CB.DeviceQueue.DeviceListHead.Flink) )
      {
        GreDeleteObject(*(_QWORD *)&WPP_MAIN_CB.DeviceQueue.Type);
        *(_QWORD *)&WPP_MAIN_CB.DeviceQueue.Type = 0LL;
        gRdwFlags = 0;
      }
    }
    SetOrClrWF(0LL, v6, 1026LL, 1LL);
  }
  v10 = v6[5];
  v11 = *(_DWORD *)(v10 + 28);
  v12 = *(_DWORD *)(v10 + 24);
  v13 = *(_DWORD *)(v10 + 232);
  *(_BYTE *)(v10 + 20) &= ~1u;
  if ( (unsigned int)IsWindowDesktopComposed(v6) )
  {
    v14 = (_DWORD *)v6[5];
    v15 = v14[7];
    v16 = v14[6];
    v17 = v12 ^ v16;
    v18 = v14[58];
    v19 = v13 ^ v18;
    v20 = v11 ^ v15;
    if ( v11 != v15 || v17 || v19 )
    {
      v34 = 0;
      v35 = 0;
      v36 = 0;
      if ( (v20 & 0xB1CF0000) != 0 )
      {
        v34 = -16;
        v35 = v15;
      }
      else if ( (v17 & 0x4E27A9) != 0 )
      {
        v34 = -20;
        v35 = v16;
      }
      else
      {
        if ( (v19 & 0x12C0) == 0 )
        {
LABEL_28:
          if ( v36 )
          {
            DirtyVisRgnTrackers(v6);
            v37 = *v6;
            v40 = (void *)ReferenceDwmApiPort(v39, v38);
            DwmAsyncChildStyleChange(v40, v37, v34, v35);
          }
          if ( (v17 & 0x200A0381) != 0 || (v20 & 0xC40000) != 0 )
            WindowMargins::CheckForChanges(v6, 1LL);
          goto LABEL_9;
        }
        v34 = -268435456;
        v35 = v18;
      }
      v36 = 1;
      goto LABEL_28;
    }
  }
LABEL_9:
  v21 = v6[5];
  v22 = *(_DWORD *)(v21 + 28);
  v23 = *(_DWORD *)(v21 + 24);
  v24 = *(_DWORD *)(v21 + 232);
  *(_BYTE *)(v21 + 20) &= ~4u;
  if ( (unsigned int)IsWindowDesktopComposed(v6) )
  {
    v27 = (unsigned int *)v6[5];
    v25 = v27[7];
    v26 = v27[6];
    v28 = v23 ^ v27[6];
    v29 = v27[58];
    v30 = v24 ^ v29;
    v31 = v22 ^ v27[7];
    if ( v31 || v28 || v30 )
    {
      v41 = 0;
      v42 = 0;
      v43 = 0;
      if ( (v31 & 0xB1CF0000) != 0 )
      {
        v41 = -16;
        v42 = v25;
      }
      else if ( (v28 & 0x4E27A9) != 0 )
      {
        v41 = -20;
        v42 = v26;
      }
      else
      {
        if ( (v30 & 0x12C0) == 0 )
        {
LABEL_39:
          if ( v43 )
          {
            DirtyVisRgnTrackers(v6);
            v44 = *v6;
            v47 = (void *)ReferenceDwmApiPort(v46, v45);
            DwmAsyncChildStyleChange(v47, v44, v41, v42);
          }
          if ( (v31 & 0xC40000) != 0 || (v28 & 0x200A0381) != 0 )
            WindowMargins::CheckForChanges(v6, 1LL);
          goto LABEL_13;
        }
        v41 = -268435456;
        v42 = v29;
      }
      v43 = 1;
      goto LABEL_39;
    }
  }
LABEL_13:
  v32 = gptiCurrent;
  if ( v6 == *(__int64 **)(*(_QWORD *)(gptiCurrent + 432LL) + 304LL) )
    zzzInternalShowCaret();
  v9 = 1;
  ThreadUnlock1(v32, v25, v26);
LABEL_16:
  UserSessionSwitchLeaveCrit(v5, v4, v7, v8);
  return v9;
}
