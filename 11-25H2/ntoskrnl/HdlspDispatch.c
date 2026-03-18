/*
 * XREFs of HdlspDispatch @ 0x140B9D320
 * Callers:
 *     HeadlessDispatch @ 0x140647D90 (HeadlessDispatch.c)
 *     HdlspKernelAddLogEntry @ 0x140B9DD70 (HdlspKernelAddLogEntry.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402535A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeReleaseSpinLock @ 0x1402EA780 (KeReleaseSpinLock.c)
 *     sprintf_s @ 0x1405019F0 (sprintf_s.c)
 *     InbvPortGetByte @ 0x140696188 (InbvPortGetByte.c)
 *     InbvPortPollOnly @ 0x14069633C (InbvPortPollOnly.c)
 *     InbvPortPutByte @ 0x1406963A4 (InbvPortPutByte.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     strcmp @ 0x1406B5100 (strcmp.c)
 *     HdlspAddLogEntry @ 0x140B9D008 (HdlspAddLogEntry.c)
 *     HdlspBugCheckProcessing @ 0x140B9D1F8 (HdlspBugCheckProcessing.c)
 *     HdlspEnableTerminal @ 0x140B9D9D4 (HdlspEnableTerminal.c)
 *     HdlspGetLine @ 0x140B9DAA4 (HdlspGetLine.c)
 *     HdlspProcessDumpCommand @ 0x140B9DFDC (HdlspProcessDumpCommand.c)
 *     HdlspPutString @ 0x140B9E2F0 (HdlspPutString.c)
 *     HdlspPutWideString @ 0x140B9E468 (HdlspPutWideString.c)
 *     HdlspSendBlueScreenInfo @ 0x140B9E528 (HdlspSendBlueScreenInfo.c)
 *     HdlspSendStringAtBaud @ 0x140B9E5CC (HdlspSendStringAtBaud.c)
 *     HdlspSetBlueScreenInformation @ 0x140B9E600 (HdlspSetBlueScreenInformation.c)
 */

__int64 __fastcall HdlspDispatch(int a1, int *a2, unsigned __int64 a3, __int64 a4, _QWORD *a5)
{
  unsigned int v5; // ebx
  KIRQL v10; // al
  KSPIN_LOCK *v11; // rcx
  int v12; // edx
  __int64 v14; // rcx
  int v15; // esi
  int v16; // esi
  int v17; // esi
  int v18; // esi
  int v19; // esi
  int v20; // esi
  const char *v21; // r8
  int v22; // eax
  __int64 v23; // r9
  bool v24; // di
  unsigned int v25; // eax
  char Line; // al
  char *v27; // rcx
  PKSPIN_LOCK v28; // rax
  unsigned int v29; // esi
  __int64 v30; // rcx
  PKSPIN_LOCK v31; // rcx
  unsigned int v32; // edx
  int v33; // eax
  char Str1[80]; // [rsp+40h] [rbp-98h] BYREF

  v5 = 0;
  switch ( a1 )
  {
    case 17:
    case 14:
      goto LABEL_113;
    case 20:
      goto LABEL_108;
    case 15:
LABEL_113:
      switch ( a1 )
      {
        case 14:
          *((_DWORD *)HeadlessGlobals + 12) = HeadlessGlobals[6] & 0xFFFFFFBD | 2;
          return v5;
        case 15:
          if ( (HeadlessGlobals[6] & 1) != 0 )
            HdlspBugCheckProcessing();
          return v5;
        case 16:
          if ( a4 && a5 && *a5 >= 0x20uLL )
          {
            v31 = HeadlessGlobals;
            *(_DWORD *)a4 = 1;
            *(_BYTE *)(a4 + 8) = 1;
            *(_BYTE *)(a4 + 9) = (v31[6] & 8) != 0;
            *(_DWORD *)(a4 + 24) = *((_DWORD *)v31 + 13);
            v32 = *((_DWORD *)v31 + 12);
            v33 = (v32 >> 9) & 7;
            if ( v33 || (v32 & 8) != 0 )
            {
              *(_DWORD *)(a4 + 12) = v33;
              *(_QWORD *)(a4 + 16) = v31[8];
            }
            else
            {
              *(_DWORD *)(a4 + 12) = 0;
              *(_QWORD *)(a4 + 16) = 0LL;
            }
            *(_BYTE *)(a4 + 28) = *((_BYTE *)v31 + 84);
            goto LABEL_135;
          }
          goto LABEL_134;
      }
      v30 = (unsigned int)(a1 - 17);
      if ( a1 == 17 )
      {
        if ( a2 )
          HdlspAddLogEntry(a2);
        else
          return (unsigned int)-1073741811;
        return v5;
      }
      if ( a1 == 18 )
      {
        if ( a2 && a3 == 1 )
        {
          LOBYTE(v30) = *(_BYTE *)a2;
          HdlspProcessDumpCommand(v30);
          goto LABEL_135;
        }
        goto LABEL_134;
      }
LABEL_118:
      v5 = -1073741811;
      if ( a1 != 20 )
        goto LABEL_135;
      return v5;
  }
  if ( (HeadlessGlobals[6] & 2) != 0 )
    v10 = -1;
  else
    v10 = KeAcquireSpinLockRaiseToDpc(HeadlessGlobals);
  v11 = HeadlessGlobals;
  v12 = *((_DWORD *)HeadlessGlobals + 12);
  if ( (v12 & 0x40) == 0 )
  {
    *((_DWORD *)HeadlessGlobals + 12) = v12 | 0x40;
    if ( v10 != 0xFF )
      KeReleaseSpinLock(v11, v10);
    if ( a1 <= 13 )
    {
      if ( a1 == 13 )
      {
        if ( !a4 || !a5 || *a5 < 2uLL )
          goto LABEL_134;
        if ( (HeadlessGlobals[6] & 1) != 0 )
        {
          Line = HdlspGetLine((void *)(a4 + 1), *a5 - 1LL);
          goto LABEL_65;
        }
      }
      else
      {
        if ( a1 <= 7 )
        {
          if ( a1 == 7 )
            goto LABEL_23;
          v14 = (unsigned int)(a1 - 1);
          if ( a1 != 1 )
          {
            if ( a1 != 2 )
            {
              if ( a1 == 3 )
              {
                if ( a2 )
                {
                  if ( (HeadlessGlobals[6] & 1) != 0 )
                    HdlspPutString(a2);
                  goto LABEL_135;
                }
                goto LABEL_134;
              }
              if ( a1 == 4 || (unsigned int)(a1 - 5) <= 1 )
              {
LABEL_23:
                if ( (HeadlessGlobals[6] & 1) != 0 )
                {
                  v15 = a1 - 4;
                  if ( !v15 )
                  {
                    v27 = "\x1B[2J";
                    goto LABEL_75;
                  }
                  v16 = v15 - 1;
                  if ( !v16 )
                  {
                    v27 = "\x1B[0J";
                    goto LABEL_75;
                  }
                  v17 = v16 - 1;
                  if ( !v17 )
                  {
                    v27 = "\x1B[0K";
                    goto LABEL_75;
                  }
                  v18 = v17 - 1;
                  if ( !v18 )
                  {
                    v27 = "\x1B[0m";
                    goto LABEL_75;
                  }
                  v19 = v18 - 1;
                  if ( !v19 )
                  {
                    v27 = "\x1B[7m";
                    goto LABEL_75;
                  }
                  v20 = v19 - 1;
                  if ( v20 )
                  {
                    if ( v20 == 1 && a2 && a3 == 8 )
                    {
                      v21 = "\x1B[%d;%dH";
                      v22 = *a2 + 1;
                      v23 = (unsigned int)(a2[1] + 1);
LABEL_69:
                      sprintf_s(Str1, 0x50uLL, v21, v23, v22);
                      v27 = Str1;
LABEL_75:
                      HdlspSendStringAtBaud(v27);
                      goto LABEL_135;
                    }
                  }
                  else if ( a2 && a3 == 8 )
                  {
                    v22 = *a2;
                    v21 = "\x1B[%d;%dm";
                    v23 = (unsigned int)a2[1];
                    goto LABEL_69;
                  }
LABEL_134:
                  v5 = -1073741811;
                }
LABEL_135:
                *((_DWORD *)HeadlessGlobals + 12) &= ~0x40u;
                return v5;
              }
              goto LABEL_118;
            }
            if ( !a4 )
              goto LABEL_134;
            if ( !a5 )
              goto LABEL_134;
            v24 = 1;
            if ( *a5 != 1LL )
              goto LABEL_134;
            if ( (HeadlessGlobals[6] & 1) != 0 )
            {
              if ( (unsigned __int8)HdlspGetLine(Str1, 0x50uLL) )
              {
                if ( strcmp(Str1, "reboot") )
                  v24 = strcmp(Str1, "shutdown") == 0;
                *(_BYTE *)a4 = v24;
              }
              goto LABEL_135;
            }
LABEL_45:
            *(_BYTE *)a4 = 0;
            goto LABEL_135;
          }
          if ( !a2 || a3 != 1 )
            goto LABEL_134;
          LOBYTE(v14) = *(_BYTE *)a2;
          v25 = HdlspEnableTerminal(v14);
LABEL_85:
          v5 = v25;
          goto LABEL_135;
        }
        if ( a1 == 8 || a1 == 9 || a1 == 10 )
          goto LABEL_23;
        if ( a1 != 11 )
        {
          if ( !a4 || !a5 || *a5 != 1LL )
            goto LABEL_134;
          if ( ((unsigned __int8)*((_DWORD *)HeadlessGlobals + 12) & (unsigned __int8)(a1 - 11)) != 0
            && InbvPortPollOnly(*((_DWORD *)HeadlessGlobals + 14)) )
          {
            InbvPortGetByte(*((_DWORD *)HeadlessGlobals + 14), (_BYTE *)a4);
            goto LABEL_135;
          }
          goto LABEL_45;
        }
        if ( !a4 || !a5 || *a5 != 1LL )
          goto LABEL_134;
        if ( (HeadlessGlobals[6] & 1) != 0 )
        {
          Line = InbvPortPollOnly(*((_DWORD *)HeadlessGlobals + 14));
LABEL_65:
          *(_BYTE *)a4 = Line;
          goto LABEL_135;
        }
      }
      Line = 0;
      goto LABEL_65;
    }
    if ( a1 <= 19 )
    {
      if ( a1 == 19 )
      {
        if ( a2 )
        {
          v25 = HdlspSetBlueScreenInformation(a2, a3);
          goto LABEL_85;
        }
        return 3221225485LL;
      }
      goto LABEL_113;
    }
    if ( a1 != 20 )
    {
      switch ( a1 )
      {
        case 21:
          if ( a4 && a5 && *a5 >= 0x10uLL )
          {
            *(_OWORD *)a4 = *(_OWORD *)((char *)HeadlessGlobals + 100);
            goto LABEL_135;
          }
          goto LABEL_134;
        case 22:
          if ( a2 && a3 )
          {
            if ( (HeadlessGlobals[6] & 1) != 0 )
            {
              v29 = 0;
              do
              {
                InbvPortPutByte(*((_DWORD *)HeadlessGlobals + 14));
                ++v29;
              }
              while ( v29 < a3 );
            }
            goto LABEL_135;
          }
          goto LABEL_134;
        case 23:
          if ( a2 )
          {
            if ( (HeadlessGlobals[6] & 1) != 0 )
              HdlspPutWideString(a2);
            goto LABEL_135;
          }
          goto LABEL_134;
        case 24:
          if ( a4 && a5 && *a5 >= 0xCuLL )
          {
            v28 = HeadlessGlobals;
            *(_QWORD *)a4 = *(PKSPIN_LOCK)((char *)HeadlessGlobals + 118);
            *(_DWORD *)(a4 + 8) = *(_DWORD *)((char *)v28 + 126);
            goto LABEL_135;
          }
          goto LABEL_134;
      }
      goto LABEL_118;
    }
LABEL_108:
    if ( (HeadlessGlobals[6] & 3) != 3 )
      return v5;
    if ( a2 && a3 == 4 )
    {
      HdlspSendBlueScreenInfo((unsigned int)*a2);
      HdlspSendStringAtBaud("\n\r!SAC>");
      return v5;
    }
    return 3221225485LL;
  }
  if ( v10 != 0xFF )
    KeReleaseSpinLock(HeadlessGlobals, v10);
  return 3221225473LL;
}
