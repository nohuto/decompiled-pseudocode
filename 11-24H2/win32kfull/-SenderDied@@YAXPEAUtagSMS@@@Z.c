/*
 * XREFs of ?SenderDied@@YAXPEAUtagSMS@@@Z @ 0x14010766C
 * Callers:
 *     SendMsgCleanup @ 0x140107600 (SendMsgCleanup.c)
 * Callees:
 *     SetWakeBit @ 0x1400456D0 (SetWakeBit.c)
 *     UnlinkSendListSms @ 0x14016F544 (UnlinkSendListSms.c)
 */

void __fastcall SenderDied(struct tagSMS *a1)
{
  __int64 v1; // r8
  __int64 v2; // r9
  int v3; // edx
  __int64 v4; // rdx

  v1 = *((_QWORD *)a1 + 4);
  v2 = 0LL;
  if ( !v1 )
    v1 = *((_QWORD *)a1 + 8);
  *((_QWORD *)a1 + 4) = 0LL;
  v3 = *((_DWORD *)a1 + 21);
  *((_DWORD *)a1 + 21) = v3 | 4;
  if ( (v3 & 0x4000) != 0 )
  {
    v2 = 1LL;
    *((_DWORD *)a1 + 21) = v3 | 0xC;
  }
  if ( *(struct tagSMS **)(v1 + 544) == a1 )
    v2 = 1LL;
  if ( (_InterlockedCompareExchange((volatile signed __int32 *)(v1 + 528), 0, 0) & 1) != 0 || !(_DWORD)v2 )
  {
    v4 = *((unsigned int *)a1 + 21);
    if ( (v4 & 2) != 0 || (v4 & 9) == 1 )
      UnlinkSendListSms(a1, v4, v1, v2);
    else
      *((_DWORD *)a1 + 21) = v4 | 8;
  }
  else
  {
    *((_DWORD *)a1 + 21) |= 1u;
    *((_QWORD *)a1 + 9) = 0LL;
    SetWakeBit(v1, 512LL);
  }
}
