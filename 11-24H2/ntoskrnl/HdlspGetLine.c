/*
 * XREFs of HdlspGetLine @ 0x140BADAA4
 * Callers:
 *     HdlspBugCheckProcessing @ 0x140BAD1F8 (HdlspBugCheckProcessing.c)
 *     HdlspDispatch @ 0x140BAD320 (HdlspDispatch.c)
 *     HdlspPutMore @ 0x140BAE214 (HdlspPutMore.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14024DD30 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140254B20 (KeAcquireSpinLockRaiseToDpc.c)
 *     sprintf_s @ 0x140504170 (sprintf_s.c)
 *     strcpy_s @ 0x1405042E0 (strcpy_s.c)
 *     InbvPortGetByte @ 0x1406A13BC (InbvPortGetByte.c)
 *     InbvPortPollOnly @ 0x1406A1570 (InbvPortPollOnly.c)
 *     memmove @ 0x1406BFC40 (memmove.c)
 *     HdlspSendStringAtBaud @ 0x140BAE5CC (HdlspSendStringAtBaud.c)
 */

char __fastcall HdlspGetLine(void *a1, size_t Size, __int64 a3, __int64 a4)
{
  KIRQL v6; // al
  KSPIN_LOCK *v7; // rcx
  int v8; // edx
  __int64 v10; // rdx
  PKSPIN_LOCK v11; // r10
  char *v12; // rcx
  KSPIN_LOCK v13; // rcx
  KSPIN_LOCK v14; // rax
  KSPIN_LOCK v15; // rcx
  unsigned __int64 v16; // rax
  __int64 v17; // r8
  PKSPIN_LOCK v18; // rdx
  KSPIN_LOCK v19; // rax
  char *v20; // rcx
  __int64 v21; // r8
  char v22; // al
  PKSPIN_LOCK v23; // rbx
  size_t v24; // r8
  const void *v25; // rdx
  unsigned __int8 v26; // [rsp+40h] [rbp+18h] BYREF

  v26 = 0;
  if ( (HeadlessGlobals[6] & 2) != 0 )
    v6 = -1;
  else
    v6 = KeAcquireSpinLockRaiseToDpc(HeadlessGlobals);
  v7 = HeadlessGlobals;
  v8 = *((_DWORD *)HeadlessGlobals + 12);
  if ( (v8 & 0x10) != 0 )
  {
    if ( v6 != 0xFF )
      KeReleaseSpinLock(HeadlessGlobals, v6);
    return 0;
  }
  else
  {
    v10 = v8 | 0x10u;
    *((_DWORD *)HeadlessGlobals + 12) = v10;
    if ( v6 != 0xFF )
      KeReleaseSpinLock(v7, v6);
    if ( (HeadlessGlobals[6] & 0x20) == 0 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          if ( InbvPortPollOnly(*((_DWORD *)HeadlessGlobals + 14), v10, a3, a4)
            && InbvPortGetByte(*((_DWORD *)HeadlessGlobals + 14), &v26) )
          {
            LOBYTE(v10) = v26;
          }
          else
          {
            LOBYTE(v10) = 0;
            v26 = 0;
          }
          if ( !(_BYTE)v10 )
            goto LABEL_32;
          v11 = HeadlessGlobals;
          *(_BYTE *)(HeadlessGlobals[4] + HeadlessGlobals[11]) = v10;
          if ( !*((_BYTE *)v11 + 117) || v26 != 10 )
            break;
          *((_BYTE *)v11 + 117) = 0;
        }
        *((_BYTE *)v11 + 117) = v26 == 13;
        if ( v26 == 10 || v26 == 13 )
          break;
        switch ( v26 )
        {
          case 8u:
          case 0x7Fu:
            if ( v11[11] )
            {
              HdlspSendStringAtBaud("\b \b");
              --HeadlessGlobals[11];
            }
            break;
          case 3u:
            v13 = ++v11[11];
            v14 = v11[4];
            goto LABEL_35;
          case 9u:
          case 0x1Bu:
            HdlspSendStringAtBaud("\a");
LABEL_32:
            *((_DWORD *)HeadlessGlobals + 12) &= ~0x10u;
            return 0;
          default:
            v12 = (char *)v11[3];
            if ( v11[11] == 78 )
            {
              sprintf_s(v12, 0x50uLL, "\b%c", v26);
              HdlspSendStringAtBaud(HeadlessGlobals[3]);
            }
            else
            {
              sprintf_s(v12, 0x50uLL, "%c", v26);
              HdlspSendStringAtBaud(HeadlessGlobals[3]);
              ++HeadlessGlobals[11];
            }
            break;
        }
      }
      HdlspSendStringAtBaud("\r\n");
      v11 = HeadlessGlobals;
      v13 = HeadlessGlobals[4];
      v14 = HeadlessGlobals[11];
LABEL_35:
      *(_BYTE *)(v13 + v14) = 0;
      v15 = v11[11]++;
      if ( v11[11] != 1 )
      {
        do
        {
          v16 = *(unsigned __int8 *)(v11[4] + v15);
          if ( (unsigned __int8)v16 > 0x20u )
            break;
          v17 = 0x100000201LL;
          if ( !_bittest64(&v17, v16) )
            break;
          --v15;
        }
        while ( v15 );
      }
      v18 = HeadlessGlobals;
      v19 = HeadlessGlobals[4];
      if ( *(_BYTE *)(v19 + v15) )
        *(_BYTE *)(v19 + v15 + 1) = 0;
      v20 = (char *)v18[4];
      v21 = 0LL;
      v22 = *v20;
      if ( *v20 )
      {
        do
        {
          if ( v22 != 9 && v22 != 32 )
            break;
          v22 = v20[++v21];
        }
        while ( v22 );
        if ( v21 )
          strcpy_s(v20, 0x50uLL, &v20[v21]);
      }
    }
    v23 = HeadlessGlobals;
    v24 = HeadlessGlobals[11];
    v25 = (const void *)HeadlessGlobals[4];
    if ( Size < v24 )
    {
      memmove(a1, v25, Size);
      memmove((void *)v23[4], (const void *)(v23[4] + Size), v23[11] - Size);
      *((_DWORD *)v23 + 12) |= 0x20u;
      v23[11] -= Size;
    }
    else
    {
      memmove(a1, v25, v24);
      v23[11] = 0LL;
      *((_DWORD *)v23 + 12) &= ~0x20u;
    }
    *((_DWORD *)v23 + 12) &= ~0x10u;
    return 1;
  }
}
