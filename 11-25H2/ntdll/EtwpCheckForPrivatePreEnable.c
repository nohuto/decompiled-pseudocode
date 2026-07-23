/*
 * XREFs of EtwpCheckForPrivatePreEnable @ 0x180045BB0
 * Callers:
 *     EtwNotificationRegister @ 0x180045640 (EtwNotificationRegister.c)
 * Callees:
 *     EtwpFindGuidEntry @ 0x180045DA0 (EtwpFindGuidEntry.c)
 *     RtlAcquireSRWLockShared @ 0x18004F0C0 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockShared @ 0x18004F120 (RtlReleaseSRWLockShared.c)
 *     EtwpGetUmProcessImageInfo @ 0x1800922DC (EtwpGetUmProcessImageInfo.c)
 *     EtwpRegisterGuidsApiCallback @ 0x1800F3094 (EtwpRegisterGuidsApiCallback.c)
 *     EtwpUpdatePrivateEnableInfo @ 0x1800FBB4C (EtwpUpdatePrivateEnableInfo.c)
 *     EtwpPreEnableEventApiCallback @ 0x18010FFA8 (EtwpPreEnableEventApiCallback.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x180174030 (memset$thunk$772440563353939046.c)
 */

void __fastcall EtwpCheckForPrivatePreEnable(__int64 a1)
{
  char v2; // si
  _RTL_SRWLOCK *GuidEntry; // rax
  _RTL_SRWLOCK *v4; // rdi
  unsigned __int8 *v5; // rbp
  __int64 v6; // r14
  __int16 v7; // cx
  __int128 v8; // xmm0
  __int64 v9; // r8
  _BYTE v10[40]; // [rsp+20h] [rbp-A8h] BYREF
  __int128 v11; // [rsp+48h] [rbp-80h]
  unsigned __int64 Value; // [rsp+88h] [rbp-40h]
  int v13; // [rsp+90h] [rbp-38h]

  v2 = 0;
  GuidEntry = (_RTL_SRWLOCK *)EtwpFindGuidEntry((void *)(a1 + 32));
  v4 = GuidEntry;
  if ( GuidEntry )
  {
    RtlAcquireSRWLockShared(GuidEntry + 5);
    *(_QWORD *)(a1 + 240) = v4;
    *(_OWORD *)(a1 + 120) = *(_OWORD *)&v4[7].0;
    *(_RTL_SRWLOCK *)(a1 + 136) = v4[9];
    *(_OWORD *)(a1 + 144) = *(_OWORD *)&v4[10].0;
    *(_RTL_SRWLOCK *)(a1 + 160) = v4[12];
    *(_OWORD *)(a1 + 168) = *(_OWORD *)&v4[13].0;
    *(_RTL_SRWLOCK *)(a1 + 184) = v4[15];
    *(_OWORD *)(a1 + 192) = *(_OWORD *)&v4[16].0;
    *(_RTL_SRWLOCK *)(a1 + 208) = v4[18];
    EtwpUpdatePrivateEnableInfo(a1);
    v5 = (unsigned __int8 *)(a1 + 142);
    v6 = 4LL;
    do
    {
      if ( *(v5 - 2) )
      {
        v7 = *(_WORD *)(a1 + 86);
        if ( (v7 & 0x3FFF) == 2 || v7 < 0 )
          EtwpGetUmProcessImageInfo(*v5, a1);
        v2 = 1;
      }
      v5 += 24;
      --v6;
    }
    while ( v6 );
    if ( v2 )
    {
      if ( (*(_WORD *)(a1 + 86) & 0x3FFF) == 2 )
      {
        memset_thunk_772440563353939046(v10, 0, 0x78uLL);
        v8 = *(_OWORD *)&v4[3].0;
        Value = v4[19].Value;
        v13 = (int)v4[20].0;
        v11 = v8;
        RtlReleaseSRWLockShared(v4 + 5);
        LOBYTE(v9) = 1;
        EtwpRegisterGuidsApiCallback(v10, a1, v9);
      }
      else
      {
        RtlReleaseSRWLockShared(v4 + 5);
        EtwpPreEnableEventApiCallback(a1);
      }
    }
    else
    {
      RtlReleaseSRWLockShared(v4 + 5);
    }
  }
}
