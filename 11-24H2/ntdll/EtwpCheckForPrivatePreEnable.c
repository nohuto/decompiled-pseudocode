/*
 * XREFs of EtwpCheckForPrivatePreEnable @ 0x18001D9C0
 * Callers:
 *     EtwNotificationRegister @ 0x18001D450 (EtwNotificationRegister.c)
 * Callees:
 *     RtlAcquireSRWLockShared @ 0x180010220 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockShared @ 0x180010280 (RtlReleaseSRWLockShared.c)
 *     EtwpFindGuidEntry @ 0x18001DBB0 (EtwpFindGuidEntry.c)
 *     EtwpGetUmProcessImageInfo @ 0x18003E8EC (EtwpGetUmProcessImageInfo.c)
 *     EtwpRegisterGuidsApiCallback @ 0x1800F1524 (EtwpRegisterGuidsApiCallback.c)
 *     EtwpUpdatePrivateEnableInfo @ 0x1800F9C4C (EtwpUpdatePrivateEnableInfo.c)
 *     EtwpPreEnableEventApiCallback @ 0x18010D578 (EtwpPreEnableEventApiCallback.c)
 *     __security_check_cookie @ 0x1801659C0 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x180172030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall EtwpCheckForPrivatePreEnable(__int64 a1)
{
  char v2; // si
  __int64 result; // rax
  __int64 v4; // rdi
  unsigned __int8 *v5; // rbp
  __int64 v6; // r14
  __int16 v7; // cx
  __int128 v8; // xmm0
  __int64 v9; // r8
  _BYTE v10[40]; // [rsp+20h] [rbp-A8h] BYREF
  __int128 v11; // [rsp+48h] [rbp-80h]
  __int64 v12; // [rsp+88h] [rbp-40h]
  int v13; // [rsp+90h] [rbp-38h]

  v2 = 0;
  result = EtwpFindGuidEntry((void *)(a1 + 32));
  v4 = result;
  if ( result )
  {
    RtlAcquireSRWLockShared((volatile signed __int64 *)(result + 40));
    *(_QWORD *)(a1 + 240) = v4;
    *(_OWORD *)(a1 + 120) = *(_OWORD *)(v4 + 56);
    *(_QWORD *)(a1 + 136) = *(_QWORD *)(v4 + 72);
    *(_OWORD *)(a1 + 144) = *(_OWORD *)(v4 + 80);
    *(_QWORD *)(a1 + 160) = *(_QWORD *)(v4 + 96);
    *(_OWORD *)(a1 + 168) = *(_OWORD *)(v4 + 104);
    *(_QWORD *)(a1 + 184) = *(_QWORD *)(v4 + 120);
    *(_OWORD *)(a1 + 192) = *(_OWORD *)(v4 + 128);
    *(_QWORD *)(a1 + 208) = *(_QWORD *)(v4 + 144);
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
        v8 = *(_OWORD *)(v4 + 24);
        v12 = *(_QWORD *)(v4 + 152);
        v13 = *(_DWORD *)(v4 + 160);
        v11 = v8;
        RtlReleaseSRWLockShared((volatile signed __int64 *)(v4 + 40));
        LOBYTE(v9) = 1;
        return EtwpRegisterGuidsApiCallback(v10, a1, v9);
      }
      else
      {
        RtlReleaseSRWLockShared((volatile signed __int64 *)(v4 + 40));
        return EtwpPreEnableEventApiCallback(a1);
      }
    }
    else
    {
      return RtlReleaseSRWLockShared((volatile signed __int64 *)(v4 + 40));
    }
  }
  return result;
}
