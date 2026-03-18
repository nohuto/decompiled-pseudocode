/*
 * XREFs of _UnregisterClass @ 0x1C00ED730
 * Callers:
 *     NtUserUnregisterClass @ 0x1C00ED5C0 (NtUserUnregisterClass.c)
 * Callees:
 *     UserSetLastError @ 0x1C00EDA4C (UserSetLastError.c)
 *     DestroyClass @ 0x1C00F4924 (DestroyClass.c)
 *     ??B?$SGDCRITTYPEgpresUser@PEAU_ERESOURCE@@@@QEAAAEAPEAU_ERESOURCE@@XZ @ 0x1C01389C0 (--B-$SGDCRITTYPEgpresUser@PEAU_ERESOURCE@@@@QEAAAEAPEAU_ERESOURCE@@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C014083C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall UnregisterClass(_WORD *a1, __int64 a2, _QWORD *a3)
{
  unsigned __int64 v5; // rbx
  int v6; // r14d
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  PERESOURCE *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 CurrentThreadWin32Thread; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  _WORD *v19; // rax
  int v20; // r10d
  __int16 v21; // r9
  __int64 v22; // rax
  __int64 v23; // r10
  _QWORD *v24; // r9
  _QWORD *v25; // r8
  __int64 v26; // rdx
  _QWORD *v27; // rcx
  bool i; // zf
  __int64 v29; // rax
  __int64 v30; // rcx

  v5 = (unsigned __int64)a1;
  v6 = 0;
  if ( !*(_QWORD *)(SGDGetUserSessionState(a1) + 8)
    || (v11 = (PERESOURCE *)SGDCRITTYPEgpresUser<_ERESOURCE *>::operator _ERESOURCE * &(v8, v7, v9, v10),
        !ExIsResourceAcquiredSharedLite(*v11)) )
  {
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 226LL);
    if ( (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x164u, 0x2AuLL, 0LL, 0LL, 0LL);
    DbgkWerCaptureLiveKernelDump(L"NTUSER", 400LL, 42LL, 0LL, 0LL, 0LL, 0LL, 0LL, 0);
  }
  CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread(v13, v12, v14);
  ++*(_DWORD *)(CurrentThreadWin32Thread + 48);
  if ( (v5 & 0xFFFFFFFFFFFF0000uLL) != 0 )
  {
    v16 = 2147483646LL;
    v17 = 256LL;
    v19 = &gawchAtomScratch;
    v20 = 0;
    v18 = 0LL;
    while ( v17 )
    {
      if ( !v16 )
        goto LABEL_14;
      v21 = *(_WORD *)v5;
      if ( !*(_WORD *)v5 )
        goto LABEL_14;
      v5 += 2LL;
      *v19++ = v21;
      --v17;
      --v16;
      ++v18;
    }
    --v19;
    --v18;
    v20 = -2147483643;
LABEL_14:
    *v19 = 0;
    if ( v20 < 0 )
      LOWORD(v5) = 0;
    else
      LOWORD(v5) = UserFindAtom(&gawchAtomScratch);
  }
  v22 = PsGetCurrentThreadWin32Thread(v17, v16, v18);
  --*(_DWORD *)(v22 + 48);
  v23 = *(_QWORD *)(gptiCurrent + 424LL);
  v24 = (_QWORD *)(v23 + 352);
  if ( !(_WORD)v5 || (v25 = (_QWORD *)*v24) == 0LL )
  {
LABEL_24:
    v24 = (_QWORD *)(v23 + 360);
    if ( (_WORD)v5 )
    {
      v27 = (_QWORD *)*v24;
      for ( i = *v24 == 0LL; !i; i = v27 == 0LL )
      {
        v29 = v27[1];
        if ( *(_WORD *)v29 == (_WORD)v5 && (*(_BYTE *)(v29 + 6) & 4) == 0 )
        {
          v6 = 1;
          goto LABEL_31;
        }
        v24 = v27;
        v27 = (_QWORD *)*v27;
      }
    }
    v30 = 1411LL;
    goto LABEL_37;
  }
  while ( 1 )
  {
    v26 = v25[1];
    if ( *(_WORD *)v26 == (_WORD)v5
      && (!a2 || HIWORD(*(_DWORD *)(v26 + 64)) == WORD1(a2))
      && (*(_BYTE *)(v26 + 6) & 4) == 0 )
    {
      break;
    }
    v24 = v25;
    v25 = (_QWORD *)*v25;
    if ( !v25 )
      goto LABEL_24;
  }
LABEL_31:
  if ( *(_DWORD *)(*v24 + 72LL) )
  {
    v30 = 1412LL;
LABEL_37:
    UserSetLastError(v30);
    return 0LL;
  }
  *a3 = *(_QWORD *)(*(_QWORD *)(*v24 + 8LL) + 16LL);
  a3[1] = *(_QWORD *)(*(_QWORD *)(*v24 + 8LL) + 24LL);
  a3[2] = 0LL;
  if ( v6 )
    *(_DWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 12LL) &= ~0x2000u;
  DestroyClass(*(struct tagPROCESSINFO **)(gptiCurrent + 424LL));
  return 1LL;
}
