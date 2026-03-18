/*
 * XREFs of ?GreGetDeviceCapsInternal@@YAHAEAVPDEVOBJ@@H@Z @ 0x14001D4C4
 * Callers:
 *     GreGetDeviceCaps @ 0x14001D350 (GreGetDeviceCaps.c)
 *     NtGdiGetDeviceCaps @ 0x14001E030 (NtGdiGetDeviceCaps.c)
 * Callees:
 *     ??$GreReleaseSemaphoreCommon@$0BD@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140016394 (--$GreReleaseSemaphoreCommon@$0BD@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ?GreAcquireSemaphoreInternal@@YAXPEAUHSEMAPHORE__@@@Z @ 0x140020150 (-GreAcquireSemaphoreInternal@@YAXPEAUHSEMAPHORE__@@@Z.c)
 *     ??$GrepAcquireLockValidate@$0BD@@@YAXXZ @ 0x140023374 (--$GrepAcquireLockValidate@$0BD@@@YAXXZ.c)
 *     CaptureAndValidateUserModeDpiAwarenessContext @ 0x1400451F0 (CaptureAndValidateUserModeDpiAwarenessContext.c)
 *     EngMulDiv @ 0x140053870 (EngMulDiv.c)
 *     IsGetColorManagementCapsSupported @ 0x14011F4DC (IsGetColorManagementCapsSupported.c)
 *     ?cFonts@PDEVOBJ@@QEAAKXZ @ 0x14011F520 (-cFonts@PDEVOBJ@@QEAAKXZ.c)
 *     GetColorManagementCapsWrap @ 0x14011F588 (GetColorManagementCapsWrap.c)
 *     W32GetCurrentThreadNonPaged @ 0x1401A2438 (W32GetCurrentThreadNonPaged.c)
 */

__int64 __fastcall GreGetDeviceCapsInternal(struct PDEVOBJ *a1, int a2)
{
  unsigned int *v2; // rbx
  unsigned int v5; // edi
  unsigned int v6; // r15d
  _QWORD *CurrentThreadNonPaged; // rax
  __int64 v8; // rbp
  __int64 CurrentProcessWin32Process; // rax
  unsigned int v10; // ebp
  __int64 v11; // rax
  int v13; // ecx
  __int64 v14; // rcx
  int v15; // eax
  __int64 v17; // rcx
  HSEMAPHORE v18; // rbx
  __int64 v19; // rcx
  int v20; // ecx
  int v21; // edi
  int v22; // eax

  v2 = (unsigned int *)(*(_QWORD *)a1 + 2120LL);
  v5 = 0;
  v6 = 18;
  if ( a2 <= 36 )
  {
    if ( a2 == 36 )
      return 1;
    if ( a2 > 16 )
    {
      if ( a2 != 18 )
      {
        switch ( a2 )
        {
          case 20:
            return 0;
          case 24:
            return *(unsigned int *)(*(_QWORD *)a1 + 2152LL);
          case 22:
            return PDEVOBJ::cFonts(a1);
          case 26:
            return 0;
          case 28:
            return 511;
          case 30:
            return 254;
          case 32:
            return 255;
          case 34:
            v20 = *(_DWORD *)(*(_QWORD *)a1 + 2168LL);
            v21 = v2[12] | 0x4000;
            if ( !v2[1] )
              v21 = v20;
            return v21 | 0x1800u;
        }
        goto LABEL_12;
      }
      v22 = *(_DWORD *)(*(_QWORD *)a1 + 2152LL);
      if ( v22 != -1 )
        return (unsigned int)(5 * v22);
    }
    else if ( a2 != 16 )
    {
      if ( a2 <= 6 )
      {
        switch ( a2 )
        {
          case 6:
            v13 = *(_DWORD *)(*(_QWORD *)a1 + 2132LL);
            break;
          case -2147483648:
            return *(unsigned int *)(*(_QWORD *)a1 + 2128LL);
          case -2147483646:
            return *(unsigned int *)(*(_QWORD *)a1 + 2132LL);
          case 0:
            return *v2;
          case 2:
            return *(unsigned int *)(*(_QWORD *)a1 + 2124LL);
          case 4:
            v13 = *(_DWORD *)(*(_QWORD *)a1 + 2128LL);
            break;
          default:
            goto LABEL_12;
        }
        return (v13 + 500) / 0x3E8u;
      }
      switch ( a2 )
      {
        case 8:
          v5 = *(_DWORD *)(*(_QWORD *)a1 + 2136LL);
          break;
        case 10:
          v5 = *(_DWORD *)(*(_QWORD *)a1 + 2140LL);
          break;
        case 12:
          v5 = *(_DWORD *)(*(_QWORD *)a1 + 2144LL);
          if ( v5 == 15 )
            return 16;
          return v5;
        case 14:
          return *(unsigned int *)(*(_QWORD *)a1 + 2148LL);
        default:
          goto LABEL_12;
      }
      goto LABEL_13;
    }
    return (unsigned int)-1;
  }
  if ( a2 > 110 )
  {
    switch ( a2 )
    {
      case 'o':
        return *(unsigned int *)(*(_QWORD *)a1 + 2220LL);
      case 'p':
        return *(unsigned int *)(*(_QWORD *)a1 + 2208LL);
      case 'q':
        return *(unsigned int *)(*(_QWORD *)a1 + 2212LL);
      case 't':
        return *(unsigned int *)(*(_QWORD *)a1 + 2368LL);
      case 'u':
        return *(unsigned int *)(*(_QWORD *)a1 + 2140LL);
      case 'v':
        return *(unsigned int *)(*(_QWORD *)a1 + 2136LL);
      case 'w':
        return *(unsigned int *)(*(_QWORD *)a1 + 2372LL);
      case 'x':
        return *(unsigned int *)(*(_QWORD *)a1 + 2424LL);
    }
    if ( a2 == 121 && (int)IsGetColorManagementCapsSupported() >= 0 )
    {
      GetColorManagementCapsWrap(*(_QWORD *)a1);
      return v5;
    }
    goto LABEL_12;
  }
  if ( a2 == 110 )
    return *(unsigned int *)(*(_QWORD *)a1 + 2216LL);
  if ( a2 != 90 )
  {
    if ( a2 > 90 )
    {
      switch ( a2 )
      {
        case '^':
          v18 = **(HSEMAPHORE **)(W32GetSessionState(a1) + 88);
          GreAcquireSemaphoreInternal(v18);
          GrepAcquireLockValidate<19>();
          v19 = *(_QWORD *)(*(_QWORD *)a1 + 2568LL);
          if ( ((v19 + 4) & 0xFFFFFFFFFFFFFFFBuLL) != 0 )
          {
            v5 = (*(_DWORD *)(v19 + 160) & 8) << 11;
            if ( (*(_DWORD *)(v19 + 160) & 0x2000000) != 0 )
              v5 |= 0x8000u;
          }
          if ( v18 )
            GreReleaseSemaphoreCommon<19,void (*)(HSEMAPHORE__ *)>(
              (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
              (__int64)v18);
          return v5;
        case 'h':
          return *(unsigned int *)(*(_QWORD *)a1 + 2224LL);
        case 'j':
          return 20;
        case 'l':
          return (unsigned int)(*(_DWORD *)(*(_QWORD *)a1 + 2172LL)
                              + *(_DWORD *)(*(_QWORD *)a1 + 2176LL)
                              + *(_DWORD *)(*(_QWORD *)a1 + 2180LL));
      }
    }
    else
    {
      switch ( a2 )
      {
        case '&':
          return *(unsigned int *)(*(_QWORD *)a1 + 2156LL);
        case '(':
          return *(unsigned int *)(*(_QWORD *)a1 + 2184LL);
        case '*':
          return *(unsigned int *)(*(_QWORD *)a1 + 2188LL);
        case ',':
          return *(unsigned int *)(*(_QWORD *)a1 + 2192LL);
        case 'X':
          v5 = *(_DWORD *)(*(_QWORD *)a1 + 2160LL);
          goto LABEL_13;
      }
    }
LABEL_12:
    v5 = 0;
    if ( a2 != 10 && a2 != 8 && a2 != 88 && a2 != 90 )
      return v5;
    goto LABEL_13;
  }
  v5 = *(_DWORD *)(*(_QWORD *)a1 + 2164LL);
LABEL_13:
  if ( (*(_DWORD *)(*(_QWORD *)a1 + 40LL) & 1) != 0 )
  {
    CurrentThreadNonPaged = (_QWORD *)W32GetCurrentThreadNonPaged();
    if ( CurrentThreadNonPaged )
    {
      v8 = *CurrentThreadNonPaged;
      if ( *CurrentThreadNonPaged )
      {
        if ( *(_QWORD *)(v8 + 408) )
          CaptureAndValidateUserModeDpiAwarenessContext(*CurrentThreadNonPaged);
        if ( *(_DWORD *)(v8 + 400) )
        {
          v6 = *(_DWORD *)(v8 + 400);
        }
        else
        {
          CurrentProcessWin32Process = PsGetCurrentProcessWin32Process();
          if ( CurrentProcessWin32Process && *(_QWORD *)CurrentProcessWin32Process )
            v6 = *(_DWORD *)(CurrentProcessWin32Process + 268);
        }
      }
    }
    v10 = (v6 >> 8) & 0x1FF;
    if ( !v10 )
    {
      v10 = v2[11];
      v11 = PsGetCurrentProcessWin32Process();
      if ( v11 )
      {
        if ( *(_QWORD *)v11 && *(_WORD *)(v11 + 272) )
          v10 = *(unsigned __int16 *)(v11 + 272);
      }
    }
    if ( ((a2 - 88) & 0xFFFFFFFD) == 0 )
      return v10;
    if ( (v6 & 0xF) == 2 )
      return v5;
    v14 = *(_QWORD *)a1;
    v15 = *(_DWORD *)(*(_QWORD *)a1 + 2448LL);
    if ( !v15
      && ((*(_DWORD *)(v14 + 40) & 0x20000) == 0
       || (v17 = *(_QWORD *)(*(_QWORD *)(v14 + 1784) + 40LL)) == 0
       || (*(_DWORD *)(v17 + 40) & 1) == 0
       || (v15 = *(_DWORD *)(v17 + 2448)) == 0) )
    {
      v15 = 100;
    }
    return (unsigned int)EngMulDiv(v5, v10, (96 * v15 + 50) / 0x64u);
  }
  return v5;
}
