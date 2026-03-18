/*
 * XREFs of ?_DeferWindowPosAndBand@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@1HHHHIW4ZBID@@W4WindowBandOptions@@@Z @ 0x1400F4D44
 * Callers:
 *     _lambda_febfd44819ec4f1448c7d434538d8b97_::operator() @ 0x1400F642C (_lambda_febfd44819ec4f1448c7d434538d8b97_--operator().c)
 *     NtUserDeferWindowPosAndBand @ 0x140241080 (NtUserDeferWindowPosAndBand.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     UserSetLastError @ 0x14005FE74 (UserSetLastError.c)
 *     ?_DeferWindowPos@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@1HHHHIW4ZBID@@@Z @ 0x1400F4FF8 (-_DeferWindowPos@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@1HHHHIW4ZBID@@@Z.c)
 *     IsPseudoPwnd @ 0x1400F5860 (IsPseudoPwnd.c)
 *     IAMThreadAccessGranted @ 0x1400F5BC0 (IAMThreadAccessGranted.c)
 *     IsValidBand @ 0x1400F63FC (IsValidBand.c)
 *     ?IsValidBandForProcess@@YA_NPEBUtagPROCESSINFO@@W4ZBID@@PEAUtagWND@@@Z @ 0x1402B4358 (-IsValidBandForProcess@@YA_NPEBUtagPROCESSINFO@@W4ZBID@@PEAUtagWND@@@Z.c)
 */

__int64 __fastcall _DeferWindowPosAndBand(
        __int64 a1,
        _QWORD *a2,
        _QWORD *a3,
        int a4,
        int a5,
        int a6,
        int a7,
        unsigned int a8,
        unsigned int a9,
        char a10)
{
  int v14; // ebx
  int v15; // edi
  unsigned int v16; // ecx
  unsigned int v17; // ebp
  int v18; // edx
  int v19; // eax
  int v20; // r8d
  struct tagTHREADINFO *v22; // rdi
  int v23; // ecx
  __int64 v24; // r8
  __int64 v25; // rcx
  __int64 v26; // rax
  __int64 v27; // rdx
  int v28; // edx
  int v29; // edx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9

  if ( (a10 & 1) == 0 )
  {
    v14 = 0;
    v15 = 0;
    PtiCurrent(a1, (__int64)a2);
    v16 = a8;
    v17 = 0;
    goto LABEL_3;
  }
  v22 = PtiCurrent(a1, (__int64)a2);
  v17 = a9;
  v14 = 0;
  if ( !(unsigned int)IsPseudoPwnd(a3) )
  {
    v28 = *(_DWORD *)(a3[5] + 236LL);
    if ( v28 != a9 && *(_DWORD *)(a2[5] + 236LL) != v28 )
      goto LABEL_25;
  }
  if ( (a10 & 2) == 0 && !(unsigned int)IAMThreadAccessGranted(v22) )
    goto LABEL_25;
  if ( !(unsigned int)IsValidBand(a9) )
    goto LABEL_44;
  if ( !(unsigned __int8)IsValidBandForProcess(*((_QWORD *)v22 + 58), a9, 0LL)
    || a9 == 15
    || (v24 = a2[5], *(_DWORD *)(v24 + 236) == 15) )
  {
LABEL_25:
    v23 = 5;
LABEL_26:
    UserSetLastError(v23);
    return 0LL;
  }
  v25 = a2[3];
  v26 = 0LL;
  if ( v25 )
  {
    v27 = *(_QWORD *)(v25 + 8);
    if ( v27 )
      v26 = *(_QWORD *)(v27 + 24);
  }
  if ( a2[13] != v26 || *(char *)(v24 + 20) < 0 )
    goto LABEL_44;
  if ( (unsigned __int64)a3 > 1 )
  {
    if ( (unsigned __int64)a3 < 0xFFFFFFFFFFFFFFFEuLL )
    {
      v15 = 1;
      if ( *(_DWORD *)(a3[5] + 236LL) != a9 )
      {
        v29 = *(_DWORD *)(a1 + 28) - 1;
        v30 = v29;
        v31 = 168LL * v29;
        while ( v30 >= 0 )
        {
          v32 = *(_QWORD *)(a1 + 40);
          if ( *(_QWORD *)(v31 + v32) == *a3 )
          {
            if ( *(_DWORD *)(168LL * v29 + v32 + 152) != a9 )
              goto LABEL_44;
            break;
          }
          --v29;
          --v30;
          v31 -= 168LL;
        }
        if ( v29 == -1 )
          goto LABEL_44;
      }
      goto LABEL_38;
    }
    if ( a9 != 1 )
      goto LABEL_44;
  }
  v15 = 1;
LABEL_38:
  v16 = a8 & 0xFFF9FBFF | 0x60000;
LABEL_3:
  if ( ((v15 != 0 ? -394240 : -1024) & v16) != 0 )
  {
LABEL_44:
    v23 = 87;
    goto LABEL_26;
  }
  if ( (v16 & 2) != 0 )
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
  if ( (v16 & 1) != 0 )
  {
    v14 = a7;
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
      v14 = v20;
    }
  }
  return _DeferWindowPos(a1, a2, a3, (unsigned int)a4, v18, v19, v14, v16, v17);
}
