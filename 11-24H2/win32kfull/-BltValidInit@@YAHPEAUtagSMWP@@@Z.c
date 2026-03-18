/*
 * XREFs of ?BltValidInit@@YAHPEAUtagSMWP@@@Z @ 0x140171754
 * Callers:
 *     ?zzzBltValidBits@@YA?AW4BltBitsResult@@PEAUtagSMWP@@@Z @ 0x14022C6A8 (-zzzBltValidBits@@YA-AW4BltBitsResult@@PEAUtagSMWP@@@Z.c)
 * Callees:
 *     ?SwpCalcVisRgn@@YAHPEAUtagWND@@PEAUHRGN__@@@Z @ 0x1400463C0 (-SwpCalcVisRgn@@YAHPEAUtagWND@@PEAUHRGN__@@@Z.c)
 *     SpbCheckRect @ 0x140097868 (SpbCheckRect.c)
 *     ?IsStillWindowC@@YAHPEAUHWND__@@@Z @ 0x1401719B4 (-IsStillWindowC@@YAHPEAUHWND__@@@Z.c)
 *     W32GetCurrentThreadNonPaged @ 0x14026E814 (W32GetCurrentThreadNonPaged.c)
 *     ?PreventInterMonitorBlts@@YAXPEAUtagCVR@@@Z @ 0x14026F7E0 (-PreventInterMonitorBlts@@YAXPEAUtagCVR@@@Z.c)
 */

__int64 __fastcall BltValidInit(struct tagSMWP *a1, __int64 a2)
{
  __int64 *v2; // rdi
  int v3; // r14d
  int v4; // r12d
  int v5; // r15d
  __int64 UserSessionState; // rbx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rbx
  __int64 v10; // r8
  struct tagWND **v11; // r13
  __int16 v12; // si
  struct tagWND *v13; // rbx
  int v14; // ebp
  __int64 v15; // rsi
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  HRGN EmptyRgn; // rax

  v2 = (__int64 *)*((_QWORD *)a1 + 5);
  v3 = *((_DWORD *)a1 + 7);
  v4 = 0;
  v5 = 0;
  while ( --v3 >= 0 )
  {
    v14 = *((_DWORD *)v2 + 8);
    v2[12] = 0LL;
    v15 = *v2;
    if ( *v2 )
    {
      W32GetCurrentThreadNonPaged(a1, a2);
      a1 = *(struct tagSMWP **)(W32GetUserSessionState(v17, v16) + 19928);
      if ( (unsigned __int64)(unsigned __int16)v15 < *((_QWORD *)a1 + 1)
        && ((UserSessionState = W32GetUserSessionState(a1, a2),
             v9 = *(_DWORD *)(W32GetUserSessionState(v8, v7) + 19952) * (unsigned int)(unsigned __int16)v15
                + *(_QWORD *)(UserSessionState + 19944),
             v11 = (struct tagWND **)HMPkheFromPhe(v9),
             v12 = WORD1(v15) & 0x7FFF,
             (WORD1(v15) & 0x7FFF) == *(_WORD *)(v9 + 26))
         || v12 == 0x7FFF
         || !v12 && PsGetCurrentProcessWow64Process(a1, a2, v10))
        && (*(_BYTE *)(v9 + 25) & 1) == 0
        && *(_BYTE *)(v9 + 24) == 1
        && (v13 = *v11) != 0LL
        && (unsigned int)IsStillWindowC((HWND)v2[1]) )
      {
        a1 = *(struct tagSMWP **)(W32GetUserSessionState(a1, a2) + 57008);
        if ( *((_QWORD *)a1 + 5) && (v14 & 8) == 0 )
          SpbCheckRect(v13, (struct tagRECT *)(*((_QWORD *)v13 + 5) + 88LL));
        ++v4;
        if ( (v14 & 0x80000) != 0 || (v14 & 0x18E7) != 0x1807 )
          v5 = 1;
        if ( (v2[4] & 8) == 0 )
        {
          v20 = *(_QWORD *)(W32GetUserSessionState(a1, a2) + 19928);
          if ( !*(_DWORD *)(v20 + 2220) )
            PreventInterMonitorBlts((struct tagCVR *)v2);
          *((_DWORD *)v2 + 22) = 0;
          EmptyRgn = (HRGN)CreateEmptyRgn(v20, v19, v21, v22);
          v2[12] = (__int64)EmptyRgn;
          if ( !EmptyRgn || !(unsigned int)SwpCalcVisRgn(v13, EmptyRgn) )
            *((_DWORD *)v2 + 22) = 2;
        }
      }
      else
      {
        *v2 = 0LL;
        *((_DWORD *)v2 + 8) = 6159;
      }
    }
    v2 += 21;
  }
  return v4 & (unsigned int)-(v5 != 0);
}
