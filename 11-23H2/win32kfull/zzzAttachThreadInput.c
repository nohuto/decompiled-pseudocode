/*
 * XREFs of zzzAttachThreadInput @ 0x1C0038BD8
 * Callers:
 *     ?xxxHandleOwnerSwitch@@YAXPEAUtagWND@@00@Z @ 0x1C000B40C (-xxxHandleOwnerSwitch@@YAXPEAUtagWND@@00@Z.c)
 *     xxxSetModernAppWindow @ 0x1C000EF34 (xxxSetModernAppWindow.c)
 *     NtUserAttachThreadInput @ 0x1C0011FA0 (NtUserAttachThreadInput.c)
 *     xxxCreateWindowEx @ 0x1C0051ED0 (xxxCreateWindowEx.c)
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1C00ACC1C (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     xxxDestroyWindow @ 0x1C00F2000 (xxxDestroyWindow.c)
 *     ?TryAttachShellFrame@@YAXPEAUtagTHREADINFO@@I@Z @ 0x1C01B5470 (-TryAttachShellFrame@@YAXPEAUtagTHREADINFO@@I@Z.c)
 *     TryDetachShellFrame @ 0x1C01B655C (TryDetachShellFrame.c)
 * Callees:
 *     zzzReattachThreads @ 0x1C0038F98 (zzzReattachThreads.c)
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C00EB194 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ExemptedFromImmersiveRestrictions @ 0x1C01B2990 (ExemptedFromImmersiveRestrictions.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall zzzAttachThreadInput(__int64 a1, __int64 a2, __int16 a3)
{
  int v3; // ebp
  BOOL v6; // r14d
  __int64 v7; // rax
  __int64 v8; // r8
  __int64 v9; // rdx
  __int64 v11; // rdx
  __int64 *i; // rcx
  __int64 v13; // rdx
  __int64 v14; // rax
  int v15; // eax
  __int64 *v16; // rdx
  __int64 *v17; // rcx
  __int64 v18; // r8
  __int64 *v19; // rcx

  v3 = a3 & 1;
  v6 = (a3 & 0x4000) != 0 && (a3 & 1) == 0;
  if ( a1 != a2 )
  {
    if ( (a3 & 0x8000) == 0 )
    {
      v7 = *(_QWORD *)(a2 + 424);
      if ( v7 != *(_QWORD *)(a1 + 424) || *(_QWORD *)(gptiCurrent + 424LL) != v7 )
      {
        if ( !(unsigned __int8)CheckAccess(*(_QWORD *)(gptiCurrent + 424LL) + 896LL, *(_QWORD *)(a2 + 432) + 432LL)
          && *(int *)(*(_QWORD *)(gptiCurrent + 424LL) + 12LL) >= 0 )
        {
          v8 = *(_QWORD *)(a2 + 432);
          v9 = a2;
LABEL_9:
          EtwTraceUIPIInputError(gptiCurrent, v9, v8, *(_QWORD *)(v8 + 432));
          return 3221225506LL;
        }
        if ( !(unsigned __int8)CheckAccess(*(_QWORD *)(gptiCurrent + 424LL) + 896LL, *(_QWORD *)(a1 + 432) + 432LL)
          && *(int *)(*(_QWORD *)(gptiCurrent + 424LL) + 12LL) >= 0
          || (unsigned int)IsDesktopApp(*(_QWORD *)(gptiCurrent + 424LL), v11)
          && ((unsigned int)IsImmersiveAppRestricted(*(_QWORD *)(a2 + 424))
           || (unsigned int)IsImmersiveAppRestricted(*(_QWORD *)(a1 + 424)))
          && !(unsigned int)ExemptedFromImmersiveRestrictions(gptiCurrent)
          && (*(_DWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 824LL) & 0x100) == 0 )
        {
          v8 = *(_QWORD *)(a1 + 432);
          v9 = a1;
          goto LABEL_9;
        }
      }
    }
    if ( (*(_DWORD *)(a2 + 488) & 0x40) != 0
      || (*(_DWORD *)(a1 + 488) & 0x40) != 0
      || *(_QWORD *)(a2 + 456) != *(_QWORD *)(a1 + 456) )
    {
      return 3221225506LL;
    }
    if ( v3 )
    {
      for ( i = (__int64 *)gpai; ; i = (__int64 *)*i )
      {
        if ( !i )
        {
          v14 = Win32AllocPoolZInit(32LL, 1767994197LL);
          if ( v14 )
          {
            *(_QWORD *)(v14 + 8) = a1;
            *(_QWORD *)(v14 + 16) = a2;
            *(_DWORD *)(v14 + 24) = 1;
            *(_QWORD *)v14 = gpai;
            gpai = v14;
            goto LABEL_26;
          }
          return 3221225495LL;
        }
        v13 = i[2];
        if ( v13 == a2 && i[1] == a1 )
          break;
        if ( v13 == a1 && i[1] == a2 )
          break;
      }
      v15 = *((_DWORD *)i + 6);
      if ( v15 == -1 )
        return 3221225485LL;
      *((_DWORD *)i + 6) = v15 + 1;
      return 0LL;
    }
    v16 = (__int64 *)gpai;
    v17 = (__int64 *)gpai;
    if ( gpai )
    {
      while ( 1 )
      {
        v18 = v17[2];
        if ( v18 == a2 && v17[1] == a1 )
          break;
        if ( v18 == a1 && v17[1] == a2 )
          break;
        v16 = v17;
        v17 = (__int64 *)*v17;
        if ( !v17 )
          return 3221225485LL;
      }
      --*((_DWORD *)v17 + 6);
      v19 = (__int64 *)*v16;
      if ( !*(_DWORD *)(*v16 + 24) || v6 )
      {
        *v16 = *v19;
        Win32FreePool(v19);
LABEL_26:
        *(_DWORD *)(a2 + 1272) |= 0x200u;
        *(_DWORD *)(a1 + 1272) |= 0x200u;
        if ( _bittest((const signed __int32 *)(a1 + 1272), 0xAu) )
          KeSetEvent(*(PRKEVENT *)(a1 + 736), 1, 0);
        if ( _bittest((const signed __int32 *)(a2 + 1272), 0xAu) )
          KeSetEvent(*(PRKEVENT *)(a2 + 736), 1, 0);
        if ( !*(_QWORD *)(*((_QWORD *)PtiCurrentShared() + 58) + 48LL)
          && !*(_QWORD *)(*((_QWORD *)PtiCurrentShared() + 58) + 56LL) )
        {
          zzzReattachThreads(0LL, a1, a2);
        }
      }
      return 0LL;
    }
  }
  return 3221225485LL;
}
