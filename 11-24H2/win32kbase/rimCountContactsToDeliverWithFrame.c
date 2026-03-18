/*
 * XREFs of rimCountContactsToDeliverWithFrame @ 0x14017ED68
 * Callers:
 *     RIMCompletePointerDeviceFrame @ 0x140058A68 (RIMCompletePointerDeviceFrame.c)
 * Callees:
 *     RIMCmActiveContactsBeginNoButton @ 0x140059F50 (RIMCmActiveContactsBeginNoButton.c)
 *     RIMCmActiveContactsEnd @ 0x140059FD4 (RIMCmActiveContactsEnd.c)
 *     RIMCmActiveContactsNext @ 0x14005A08C (RIMCmActiveContactsNext.c)
 *     ??9tagLIST_TABLE_ITERATOR@@QEBA_NAEBU0@@Z @ 0x1400D0398 (--9tagLIST_TABLE_ITERATOR@@QEBA_NAEBU0@@Z.c)
 *     RIMCmGetButtonContact @ 0x140104458 (RIMCmGetButtonContact.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

char __fastcall rimCountContactsToDeliverWithFrame(__int64 a1, _DWORD *a2, _DWORD *a3)
{
  __int64 active; // rax
  __int64 v7; // xmm1_8
  __int64 ButtonContact; // rax
  __int64 v9; // rdi
  int v10; // edx
  __int128 v12; // [rsp+20h] [rbp-50h] BYREF
  __int64 v13; // [rsp+30h] [rbp-40h]
  __int128 v14; // [rsp+38h] [rbp-38h] BYREF
  __int64 v15; // [rsp+48h] [rbp-28h]
  __int128 v16; // [rsp+50h] [rbp-20h] BYREF
  __int64 v17; // [rsp+60h] [rbp-10h]

  *a2 = 0;
  *a3 = 0;
  active = RIMCmActiveContactsBeginNoButton((__int64)&v14, a1);
  v7 = *(_QWORD *)(active + 16);
  v16 = *(_OWORD *)active;
  v17 = v7;
  RIMCmActiveContactsEnd((__int64)&v12, a1);
  v14 = v12;
  v15 = v13;
  LOBYTE(ButtonContact) = tagLIST_TABLE_ITERATOR::operator!=((__int64)&v16, (__int64)&v14);
  while ( (_BYTE)ButtonContact )
  {
    v9 = v17;
    if ( (*(_DWORD *)(v17 + 16) & 2) == 0 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 601LL);
    if ( (*(_DWORD *)(v9 + 16) & 4) != 0 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 602LL);
    if ( (*(_DWORD *)(v9 + 2348) & 1) != 0 )
      ++*a2;
    RIMCmActiveContactsNext(a1, &v16);
    RIMCmActiveContactsEnd((__int64)&v12, a1);
    v14 = v12;
    v15 = v13;
    LOBYTE(ButtonContact) = tagLIST_TABLE_ITERATOR::operator!=((__int64)&v16, (__int64)&v14);
  }
  if ( !*a2 )
  {
    ButtonContact = RIMCmGetButtonContact(a1);
    if ( ButtonContact )
    {
      v10 = *(_DWORD *)(ButtonContact + 32);
      if ( (v10 & 2) != 0 )
      {
        LODWORD(ButtonContact) = *(_DWORD *)(ButtonContact + 2364);
        if ( (ButtonContact & 1) != 0 )
        {
          if ( (v10 & 4) == 0 )
            LOBYTE(ButtonContact) = MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 623LL);
          *a2 = 1;
          *a3 = 1;
        }
      }
    }
  }
  return ButtonContact;
}
