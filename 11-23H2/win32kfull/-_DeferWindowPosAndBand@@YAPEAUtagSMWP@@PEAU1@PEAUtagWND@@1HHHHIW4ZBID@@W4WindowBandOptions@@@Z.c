/*
 * XREFs of ?_DeferWindowPosAndBand@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@1HHHHIW4ZBID@@W4WindowBandOptions@@@Z @ 0x1C004595C
 * Callers:
 *     NtUserDeferWindowPosAndBand @ 0x1C00461C0 (NtUserDeferWindowPosAndBand.c)
 *     _lambda_febfd44819ec4f1448c7d434538d8b97_::operator() @ 0x1C0083310 (_lambda_febfd44819ec4f1448c7d434538d8b97_--operator().c)
 * Callees:
 *     IAMThreadAccessGranted @ 0x1C0030E2C (IAMThreadAccessGranted.c)
 *     ?_DeferWindowPos@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@1HHHHIW4ZBID@@@Z @ 0x1C0045FC8 (-_DeferWindowPos@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@1HHHHIW4ZBID@@@Z.c)
 *     IsValidBand @ 0x1C0086484 (IsValidBand.c)
 *     IsValidBandForProcess @ 0x1C0094FD8 (IsValidBandForProcess.c)
 *     _GetDesktopWindow @ 0x1C00EA360 (_GetDesktopWindow.c)
 *     UserSetLastError @ 0x1C00EDA4C (UserSetLastError.c)
 */

__int64 __fastcall _DeferWindowPosAndBand(
        __int64 a1,
        __int64 a2,
        _QWORD *a3,
        int a4,
        int a5,
        int a6,
        int a7,
        unsigned int a8,
        unsigned int a9,
        char a10)
{
  unsigned int v14; // ecx
  int v15; // ebx
  int v16; // edi
  unsigned int v17; // esi
  int v18; // edx
  int v19; // eax
  int v20; // r8d
  __int64 v22; // r9
  int v23; // eax
  __int64 v24; // r9
  __int64 v25; // rdx
  __int64 v26; // rdx
  __int64 v27; // rcx
  int v28; // ecx
  int v29; // edx
  __int64 v30; // r8
  __int64 v31; // rcx
  _QWORD *v32; // rax

  if ( (a10 & 1) != 0 )
  {
    v17 = a9;
    v22 = gptiCurrent;
    if ( (unsigned __int64)a3 - 2 <= 0xFFFFFFFFFFFFFFFBuLL )
    {
      v28 = *(_DWORD *)(a3[5] + 236LL);
      if ( v28 != a9 && *(_DWORD *)(*(_QWORD *)(a2 + 40) + 236LL) != v28 )
        goto LABEL_33;
    }
    v15 = 0;
    v16 = 1;
    if ( (a10 & 2) == 0 )
    {
      LOBYTE(v23) = IAMThreadAccessGranted(gptiCurrent);
      if ( !v23 )
        goto LABEL_33;
    }
    if ( !(unsigned int)IsValidBand(a9, a2, a3, v22) )
      goto LABEL_49;
    if ( !(unsigned int)IsValidBandForProcess(*(_QWORD *)(v24 + 424), a9, 0LL)
      || a9 == 15
      || (v25 = *(_QWORD *)(a2 + 40), *(_DWORD *)(v25 + 236) == 15) )
    {
LABEL_33:
      v27 = 5LL;
LABEL_50:
      UserSetLastError(v27);
      return 0LL;
    }
    if ( *(_QWORD *)(a2 + 104) != GetDesktopWindow(a2, v25) || *(char *)(v26 + 20) < 0 )
      goto LABEL_49;
    if ( (unsigned __int64)a3 > 1 )
    {
      if ( a3 == (_QWORD *)-2LL || a3 == (_QWORD *)-1LL )
      {
        if ( a9 != 1 )
          goto LABEL_49;
      }
      else if ( *(_DWORD *)(a3[5] + 236LL) != a9 )
      {
        v29 = *(_DWORD *)(a1 + 28) - 1;
        if ( v29 >= 0 )
        {
          v30 = *(_QWORD *)(a1 + 40);
          v31 = v29;
          v32 = (_QWORD *)(v30 + 168LL * v29);
          while ( *v32 != *a3 )
          {
            --v29;
            v32 -= 21;
            if ( --v31 < 0 )
              goto LABEL_46;
          }
          if ( *(_DWORD *)(168LL * v29 + v30 + 152) != a9 )
            goto LABEL_49;
        }
LABEL_46:
        if ( v29 == -1 )
        {
LABEL_49:
          v27 = 87LL;
          goto LABEL_50;
        }
      }
    }
    v14 = a8 & 0xFFF9FBFF | 0x60000;
  }
  else
  {
    v14 = a8;
    v15 = 0;
    v16 = 0;
    v17 = 0;
  }
  if ( ((v16 != 0 ? -459776 : -66560) & v14) != 0 )
    goto LABEL_49;
  if ( (v14 & 2) != 0 )
  {
    v18 = a5;
  }
  else
  {
    if ( a4 > 0x7FFF )
    {
      a4 = 0x7FFF;
    }
    else if ( a4 < -32768 )
    {
      a4 = -32768;
    }
    v18 = a5;
    if ( a5 > 0x7FFF )
    {
      v18 = 0x7FFF;
    }
    else if ( a5 < -32768 )
    {
      v18 = -32768;
    }
  }
  v19 = a6;
  if ( (v14 & 1) != 0 )
  {
    v15 = a7;
  }
  else
  {
    if ( a6 < 0 )
    {
      v19 = 0;
    }
    else if ( a6 > 0x7FFF )
    {
      v19 = 0x7FFF;
    }
    v20 = a7;
    if ( a7 >= 0 )
    {
      if ( a7 > 0x7FFF )
        v20 = 0x7FFF;
      v15 = v20;
    }
  }
  return _DeferWindowPos(a1, a2, a3, (unsigned int)a4, v18, v19, v15, v14, v17);
}
