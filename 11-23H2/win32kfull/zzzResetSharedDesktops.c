/*
 * XREFs of zzzResetSharedDesktops @ 0x1C001CC80
 * Callers:
 *     <none>
 * Callees:
 *     ?zzzInternalSetCursorPos@@YAXHHKW4_SetCursorPosReason@@@Z @ 0x1C001CEA8 (-zzzInternalSetCursorPos@@YAXHHKW4_SetCursorPosReason@@@Z.c)
 *     zzzLockDisplayAreaAndInvalidateDCCache @ 0x1C004E3A0 (zzzLockDisplayAreaAndInvalidateDCCache.c)
 *     CalcVisRgn @ 0x1C004FED0 (CalcVisRgn.c)
 *     zzzUpdateWindowsAfterModeChange @ 0x1C00A47A4 (zzzUpdateWindowsAfterModeChange.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall zzzResetSharedDesktops(__int64 a1, unsigned int a2, unsigned int a3)
{
  __int64 v5; // rbx
  __int64 v6; // rax
  __int64 v7; // r9
  __int128 v8; // kr00_16
  unsigned __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // rcx
  _QWORD *v12; // rcx
  _DWORD *v13; // r9
  __int64 v15; // [rsp+20h] [rbp-28h]
  __int128 v16; // [rsp+28h] [rbp-20h] BYREF

  v5 = a1;
  v6 = *(_QWORD *)(a1 + 40);
  v16 = *(_OWORD *)(*gpDispInfo + 24LL);
  v7 = *(_QWORD *)(v6 + 16);
  if ( v7 )
  {
    v8 = v16;
    v9 = DWORD1(v16);
    v10 = HIDWORD(*((_QWORD *)&v16 + 1));
    do
    {
      v11 = *(_QWORD *)(*(_QWORD *)(v7 + 8) + 24LL);
      *(_DWORD *)(*(_QWORD *)(v11 + 40) + 88LL) = v8;
      *(_DWORD *)(*(_QWORD *)(v11 + 40) + 92LL) = v9;
      *(_DWORD *)(*(_QWORD *)(v11 + 40) + 96LL) = DWORD2(v8);
      *(_DWORD *)(*(_QWORD *)(v11 + 40) + 100LL) = v10;
      a1 = *(_QWORD *)(*(_QWORD *)(v7 + 8) + 24LL);
      *(_DWORD *)(*(_QWORD *)(a1 + 40) + 104LL) = v8;
      *(_DWORD *)(*(_QWORD *)(a1 + 40) + 108LL) = v9;
      *(_DWORD *)(*(_QWORD *)(a1 + 40) + 112LL) = DWORD2(v8);
      *(_DWORD *)(*(_QWORD *)(a1 + 40) + 116LL) = v10;
      v7 = *(_QWORD *)(v7 + 32);
    }
    while ( v7 );
  }
  *(_QWORD *)&v16 = CreateEmptyRgn(a1);
  CalcVisRgn(&v16, *(_QWORD *)(*(_QWORD *)(v5 + 8) + 24LL), *(_QWORD *)(*(_QWORD *)(v5 + 8) + 24LL), 1LL, 0LL);
  GreLockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
  GreSelectVisRgn(*(_QWORD *)(gpDispInfo + 56LL), v16, 1LL);
  GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
  zzzUpdateWindowsAfterModeChange(a2, a3);
  v12 = *(_QWORD **)(v5 + 8);
  if ( (*(_DWORD *)(*v12 + 64LL) & 1) == 0 )
    zzzLockDisplayAreaAndInvalidateDCCache(v12[3], 0LL, 0LL);
  CCursorClip::ClearClip(gpCursorClip);
  v13 = *(_DWORD **)(*(_QWORD *)(gpDispInfo + 96LL) + 40LL);
  LODWORD(v15) = (v13[9] - v13[7]) / 2;
  HIDWORD(v15) = (v13[10] - v13[8]) / 2;
  gptSSCursor = v15;
  return zzzInternalSetCursorPos((unsigned int)v15, HIDWORD(v15), 2LL, 0LL, v15);
}
