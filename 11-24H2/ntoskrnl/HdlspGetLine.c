/*
 * XREFs of HdlspGetLine @ 0x140BAFAA4
 * Callers:
 *     HdlspBugCheckProcessing @ 0x140BAF1F8 (HdlspBugCheckProcessing.c)
 *     HdlspDispatch @ 0x140BAF320 (HdlspDispatch.c)
 *     HdlspPutMore @ 0x140BB0214 (HdlspPutMore.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14027E340 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140285130 (KeAcquireSpinLockRaiseToDpc.c)
 *     sprintf_s @ 0x140501A30 (sprintf_s.c)
 *     strcpy_s @ 0x140501BA0 (strcpy_s.c)
 *     InbvPortGetByte @ 0x1406A2414 (InbvPortGetByte.c)
 *     InbvPortPollOnly @ 0x1406A25C8 (InbvPortPollOnly.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     HdlspSendStringAtBaud @ 0x140BB05CC (HdlspSendStringAtBaud.c)
 */

char __fastcall HdlspGetLine(void *a1, size_t Size)
{
  KIRQL v4; // al
  KSPIN_LOCK *v5; // rcx
  int v6; // edx
  unsigned __int8 v8; // dl
  PKSPIN_LOCK v9; // r10
  char *v10; // rcx
  KSPIN_LOCK v11; // rcx
  KSPIN_LOCK v12; // rax
  KSPIN_LOCK v13; // rcx
  unsigned __int64 v14; // rax
  __int64 v15; // r8
  PKSPIN_LOCK v16; // rdx
  KSPIN_LOCK v17; // rax
  char *v18; // rcx
  __int64 v19; // r8
  char v20; // al
  PKSPIN_LOCK v21; // rbx
  size_t v22; // r8
  const void *v23; // rdx
  unsigned __int8 v24; // [rsp+40h] [rbp+18h] BYREF

  v24 = 0;
  if ( (HeadlessGlobals[6] & 2) != 0 )
    v4 = -1;
  else
    v4 = KeAcquireSpinLockRaiseToDpc(HeadlessGlobals);
  v5 = HeadlessGlobals;
  v6 = *((_DWORD *)HeadlessGlobals + 12);
  if ( (v6 & 0x10) != 0 )
  {
    if ( v4 != 0xFF )
      KeReleaseSpinLock(HeadlessGlobals, v4);
    return 0;
  }
  else
  {
    *((_DWORD *)HeadlessGlobals + 12) = v6 | 0x10;
    if ( v4 != 0xFF )
      KeReleaseSpinLock(v5, v4);
    if ( (HeadlessGlobals[6] & 0x20) == 0 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          if ( InbvPortPollOnly(*((_DWORD *)HeadlessGlobals + 14))
            && InbvPortGetByte(*((_DWORD *)HeadlessGlobals + 14), &v24) )
          {
            v8 = v24;
          }
          else
          {
            v8 = 0;
            v24 = 0;
          }
          if ( !v8 )
            goto LABEL_32;
          v9 = HeadlessGlobals;
          *(_BYTE *)(HeadlessGlobals[4] + HeadlessGlobals[11]) = v8;
          if ( !*((_BYTE *)v9 + 117) || v24 != 10 )
            break;
          *((_BYTE *)v9 + 117) = 0;
        }
        *((_BYTE *)v9 + 117) = v24 == 13;
        if ( v24 == 10 || v24 == 13 )
          break;
        switch ( v24 )
        {
          case 8u:
          case 0x7Fu:
            if ( v9[11] )
            {
              HdlspSendStringAtBaud("\b \b");
              --HeadlessGlobals[11];
            }
            break;
          case 3u:
            v11 = ++v9[11];
            v12 = v9[4];
            goto LABEL_35;
          case 9u:
          case 0x1Bu:
            HdlspSendStringAtBaud("\a");
LABEL_32:
            *((_DWORD *)HeadlessGlobals + 12) &= ~0x10u;
            return 0;
          default:
            v10 = (char *)v9[3];
            if ( v9[11] == 78 )
            {
              sprintf_s(v10, 0x50uLL, "\b%c", v24);
              HdlspSendStringAtBaud(HeadlessGlobals[3]);
            }
            else
            {
              sprintf_s(v10, 0x50uLL, "%c", v24);
              HdlspSendStringAtBaud(HeadlessGlobals[3]);
              ++HeadlessGlobals[11];
            }
            break;
        }
      }
      HdlspSendStringAtBaud("\r\n");
      v9 = HeadlessGlobals;
      v11 = HeadlessGlobals[4];
      v12 = HeadlessGlobals[11];
LABEL_35:
      *(_BYTE *)(v11 + v12) = 0;
      v13 = v9[11]++;
      if ( v9[11] != 1 )
      {
        do
        {
          v14 = *(unsigned __int8 *)(v9[4] + v13);
          if ( (unsigned __int8)v14 > 0x20u )
            break;
          v15 = 0x100000201LL;
          if ( !_bittest64(&v15, v14) )
            break;
          --v13;
        }
        while ( v13 );
      }
      v16 = HeadlessGlobals;
      v17 = HeadlessGlobals[4];
      if ( *(_BYTE *)(v17 + v13) )
        *(_BYTE *)(v17 + v13 + 1) = 0;
      v18 = (char *)v16[4];
      v19 = 0LL;
      v20 = *v18;
      if ( *v18 )
      {
        do
        {
          if ( v20 != 9 && v20 != 32 )
            break;
          v20 = v18[++v19];
        }
        while ( v20 );
        if ( v19 )
          strcpy_s(v18, 0x50uLL, &v18[v19]);
      }
    }
    v21 = HeadlessGlobals;
    v22 = HeadlessGlobals[11];
    v23 = (const void *)HeadlessGlobals[4];
    if ( Size < v22 )
    {
      memmove(a1, v23, Size);
      memmove((void *)v21[4], (const void *)(v21[4] + Size), v21[11] - Size);
      *((_DWORD *)v21 + 12) |= 0x20u;
      v21[11] -= Size;
    }
    else
    {
      memmove(a1, v23, v22);
      v21[11] = 0LL;
      *((_DWORD *)v21 + 12) &= ~0x20u;
    }
    *((_DWORD *)v21 + 12) &= ~0x10u;
    return 1;
  }
}
