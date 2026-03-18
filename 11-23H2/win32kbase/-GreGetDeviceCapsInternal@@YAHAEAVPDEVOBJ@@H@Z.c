/*
 * XREFs of ?GreGetDeviceCapsInternal@@YAHAEAVPDEVOBJ@@H@Z @ 0x1C005D98C
 * Callers:
 *     GreGetDeviceCaps @ 0x1C005D880 (GreGetDeviceCaps.c)
 * Callees:
 *     IsGetColorManagementCapsSupported @ 0x1C0019970 (IsGetColorManagementCapsSupported.c)
 *     ?cFonts@PDEVOBJ@@QEAAKXZ @ 0x1C00199A0 (-cFonts@PDEVOBJ@@QEAAKXZ.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C00428F0 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0042EC0 (EtwTraceGreLockReleaseSemaphore.c)
 *     EngAcquireSemaphore @ 0x1C0044400 (EngAcquireSemaphore.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C004D320 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     EngMulDiv @ 0x1C005A530 (EngMulDiv.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D6930 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall GreGetDeviceCapsInternal(struct PDEVOBJ *a1, int a2)
{
  unsigned int *v2; // rdi
  unsigned int v5; // ebx
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  __int64 v7; // rcx
  char v8; // r15
  unsigned int v9; // ebp
  __int64 CurrentProcessWin32Process; // rax
  __int64 v12; // rcx
  int v13; // eax
  int v15; // ecx
  __int64 v16; // rdi
  __int64 v17; // rcx
  struct _ERESOURCE *v18; // rcx
  int v19; // ecx
  int v20; // ebx
  int v21; // eax
  __int64 v22; // rcx

  v2 = (unsigned int *)(*(_QWORD *)a1 + 2104LL);
  v5 = 0;
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
            return *(unsigned int *)(*(_QWORD *)a1 + 2136LL);
          case 22:
            return (unsigned int)PDEVOBJ::cFonts(a1);
          case 26:
            return 0;
          case 28:
            return 511;
          case 30:
            return 254;
          case 32:
            return 255;
          case 34:
            v19 = *(_DWORD *)(*(_QWORD *)a1 + 2152LL);
            v20 = v2[12] | 0x4000;
            if ( !v2[1] )
              v20 = v19;
            return v20 | 0x1800u;
        }
        goto LABEL_64;
      }
      v21 = *(_DWORD *)(*(_QWORD *)a1 + 2136LL);
      if ( v21 != -1 )
        return (unsigned int)(5 * v21);
    }
    else if ( a2 != 16 )
    {
      if ( a2 <= 6 )
      {
        switch ( a2 )
        {
          case 6:
            v15 = *(_DWORD *)(*(_QWORD *)a1 + 2116LL);
            break;
          case -2147483648:
            return *(unsigned int *)(*(_QWORD *)a1 + 2112LL);
          case -2147483646:
            return *(unsigned int *)(*(_QWORD *)a1 + 2116LL);
          case 0:
            return *v2;
          case 2:
            return *(unsigned int *)(*(_QWORD *)a1 + 2108LL);
          case 4:
            v15 = *(_DWORD *)(*(_QWORD *)a1 + 2112LL);
            break;
          default:
            goto LABEL_64;
        }
        return (v15 + 500) / 0x3E8u;
      }
      switch ( a2 )
      {
        case 8:
          v5 = *(_DWORD *)(*(_QWORD *)a1 + 2120LL);
          break;
        case 10:
          v5 = *(_DWORD *)(*(_QWORD *)a1 + 2124LL);
          break;
        case 12:
          v5 = *(_DWORD *)(*(_QWORD *)a1 + 2128LL);
          if ( v5 == 15 )
            return 16;
          return v5;
        case 14:
          return *(unsigned int *)(*(_QWORD *)a1 + 2132LL);
        default:
          goto LABEL_64;
      }
      goto LABEL_12;
    }
    return (unsigned int)-1;
  }
  if ( a2 > 110 )
  {
    switch ( a2 )
    {
      case 'o':
        return *(unsigned int *)(*(_QWORD *)a1 + 2204LL);
      case 'p':
        return *(unsigned int *)(*(_QWORD *)a1 + 2192LL);
      case 'q':
        return *(unsigned int *)(*(_QWORD *)a1 + 2196LL);
      case 't':
        return *(unsigned int *)(*(_QWORD *)a1 + 2352LL);
      case 'u':
        return *(unsigned int *)(*(_QWORD *)a1 + 2124LL);
      case 'v':
        return *(unsigned int *)(*(_QWORD *)a1 + 2120LL);
      case 'w':
        return *(unsigned int *)(*(_QWORD *)a1 + 2356LL);
      case 'x':
        return *(unsigned int *)(*(_QWORD *)a1 + 2408LL);
    }
    if ( a2 == 121 && (int)IsGetColorManagementCapsSupported() >= 0 && qword_1C0294650 )
    {
      qword_1C0294650(*(_QWORD *)a1);
      return v5;
    }
    goto LABEL_64;
  }
  if ( a2 == 110 )
    return *(unsigned int *)(*(_QWORD *)a1 + 2200LL);
  if ( a2 != 90 )
  {
    if ( a2 > 90 )
    {
      switch ( a2 )
      {
        case '^':
          v16 = *(_QWORD *)(SGDGetSessionState(a1) + 24);
          EngAcquireSemaphore(*(HSEMAPHORE *)(v16 + 8));
          EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"GreBaseGlobals.hsemDriverMgmt", *(_QWORD *)(v16 + 8), 16);
          v17 = *(_QWORD *)(*(_QWORD *)a1 + 2552LL);
          if ( ((v17 + 4) & 0xFFFFFFFFFFFFFFFBuLL) != 0 )
          {
            v5 = (*(_DWORD *)(v17 + 160) & 8) << 11;
            if ( (*(_DWORD *)(v17 + 160) & 0x2000000) != 0 )
              v5 |= 0x8000u;
          }
          EtwTraceGreLockReleaseSemaphore((__int64)L"GreBaseGlobals.hsemDriverMgmt", *(_QWORD *)(v16 + 8));
          v18 = *(struct _ERESOURCE **)(v16 + 8);
          if ( v18 )
          {
            ExReleaseResourceAndLeaveCriticalRegion(v18);
            PsLeavePriorityRegion();
          }
          return v5;
        case 'h':
          return *(unsigned int *)(*(_QWORD *)a1 + 2208LL);
        case 'j':
          return 20;
        case 'l':
          return (unsigned int)(*(_DWORD *)(*(_QWORD *)a1 + 2156LL)
                              + *(_DWORD *)(*(_QWORD *)a1 + 2160LL)
                              + *(_DWORD *)(*(_QWORD *)a1 + 2164LL));
      }
    }
    else
    {
      switch ( a2 )
      {
        case '&':
          return *(unsigned int *)(*(_QWORD *)a1 + 2140LL);
        case '(':
          return *(unsigned int *)(*(_QWORD *)a1 + 2168LL);
        case '*':
          return *(unsigned int *)(*(_QWORD *)a1 + 2172LL);
        case ',':
          return *(unsigned int *)(*(_QWORD *)a1 + 2176LL);
        case 'X':
          v5 = *(_DWORD *)(*(_QWORD *)a1 + 2144LL);
          goto LABEL_12;
      }
    }
LABEL_64:
    v5 = 0;
    if ( a2 != 88 && a2 != 90 && a2 != 8 && a2 != 10 )
      return v5;
    goto LABEL_12;
  }
  v5 = *(_DWORD *)(*(_QWORD *)a1 + 2148LL);
LABEL_12:
  if ( (*(_DWORD *)(*(_QWORD *)a1 + 40LL) & 1) != 0 )
  {
    CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext();
    v8 = CurrentThreadDpiAwarenessContext;
    v9 = (CurrentThreadDpiAwarenessContext >> 8) & 0x1FF;
    if ( !v9 )
    {
      v9 = v2[11];
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v7);
      if ( CurrentProcessWin32Process )
      {
        if ( *(_QWORD *)CurrentProcessWin32Process && *(_WORD *)(CurrentProcessWin32Process + 284) )
          v9 = *(unsigned __int16 *)(CurrentProcessWin32Process + 284);
      }
    }
    if ( ((a2 - 88) & 0xFFFFFFFD) == 0 )
      return v9;
    if ( (v8 & 0xF) == 2 )
      return v5;
    v12 = *(_QWORD *)a1;
    v13 = *(_DWORD *)(*(_QWORD *)a1 + 2432LL);
    if ( !v13
      && ((*(_DWORD *)(v12 + 40) & 0x20000) == 0
       || (v22 = *(_QWORD *)(*(_QWORD *)(v12 + 1768) + 40LL)) == 0
       || (*(_DWORD *)(v22 + 40) & 1) == 0
       || (v13 = *(_DWORD *)(v22 + 2432)) == 0) )
    {
      v13 = 100;
    }
    return (unsigned int)EngMulDiv(v5, v9, (96 * v13 + 50) / 0x64u);
  }
  return v5;
}
