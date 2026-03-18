/*
 * XREFs of RootHub_WdfEvtTimer20PortResumeComplete @ 0x140027D64
 * Callers:
 *     RootHub_WdfEvtTimer20PortResumeCompleteDpc @ 0x140027D20 (RootHub_WdfEvtTimer20PortResumeCompleteDpc.c)
 * Callees:
 *     Controller_IsControllerAccessible @ 0x1400086E0 (Controller_IsControllerAccessible.c)
 *     RootHub_AcquireReadModifyWriteLock @ 0x140008750 (RootHub_AcquireReadModifyWriteLock.c)
 *     RootHub_ReleaseReadModifyWriteLock @ 0x140008E18 (RootHub_ReleaseReadModifyWriteLock.c)
 *     XilRegister_ReadUlong @ 0x1400099C0 (XilRegister_ReadUlong.c)
 *     XilRegister_WriteUlong @ 0x14000B858 (XilRegister_WriteUlong.c)
 *     WPP_RECORDER_SF_ @ 0x14000CCC8 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x14000CDA0 (WPP_RECORDER_SF_d.c)
 *     Debug_FreAssertMsg @ 0x14000D87C (Debug_FreAssertMsg.c)
 *     Register_WriteSecureMmio @ 0x14000E158 (Register_WriteSecureMmio.c)
 */

char __fastcall RootHub_WdfEvtTimer20PortResumeComplete(_QWORD *a1, int a2)
{
  __int64 v4; // rcx
  __int64 v5; // r15
  __int64 v6; // rax
  int v7; // edx
  unsigned int v8; // r13d
  int v9; // edx
  __int64 v10; // r12
  unsigned int *v11; // r12
  int Ulong; // eax
  int v13; // edx
  int v14; // ebx
  int v15; // ebx
  __int64 v16; // rax
  char v17; // al
  int v18; // edx
  __int64 v19; // r12
  int v20; // eax
  int v21; // edx
  int v22; // ebx
  int v23; // ebx
  signed __int32 v25[8]; // [rsp+0h] [rbp-68h] BYREF
  int v26; // [rsp+70h] [rbp+8h] BYREF
  __int64 v27; // [rsp+80h] [rbp+18h]

  if ( *(_BYTE *)(a1[1] + 1001LL) && KeGetCurrentIrql() )
    Debug_FreAssertMsg(
      (__int64)"Code Path Requires Passive Level",
      0,
      (int)"onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\roothub.c",
      4722);
  v4 = a1[1];
  v5 = *(_QWORD *)(v4 + 88);
  LOBYTE(v6) = Controller_IsControllerAccessible(v4);
  if ( (_BYTE)v6 )
  {
    v8 = a2 - 1;
    RootHub_AcquireReadModifyWriteLock((__int64)a1, a2 - 1);
    v10 = a1[5];
    v27 = 16LL * (unsigned int)(a2 - 1);
    v11 = (unsigned int *)(v27 + v10);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v9) = 4;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(a1[1] + 72LL),
        v9,
        11,
        221,
        (__int64)&WPP_e351447cda05377d20ca116ee7000203_Traceguids,
        a2);
    }
    Ulong = XilRegister_ReadUlong(v5, v11);
    v14 = Ulong;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v13) = 4;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(a1[1] + 72LL),
        v13,
        11,
        222,
        (__int64)&WPP_e351447cda05377d20ca116ee7000203_Traceguids,
        Ulong);
    }
    v15 = v14 & 0xE00C200 | 0x410000;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v13) = 4;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(a1[1] + 72LL),
        v13,
        11,
        223,
        (__int64)&WPP_e351447cda05377d20ca116ee7000203_Traceguids,
        v15);
    }
    v16 = *(_QWORD *)(v5 + 8);
    v26 = v15;
    if ( *(_BYTE *)(v16 + 1001) )
    {
      Register_WriteSecureMmio(v5, (__int64)v11, 2u, &v26);
    }
    else
    {
      *v11 = v15;
      _InterlockedOr(v25, 0);
    }
    RootHub_ReleaseReadModifyWriteLock((__int64)a1, v8);
    v17 = XilRegister_ReadUlong(v5, v11);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v18) = 4;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(a1[1] + 72LL),
        v18,
        11,
        224,
        (__int64)&WPP_e351447cda05377d20ca116ee7000203_Traceguids,
        v17);
    }
    v6 = a1[1];
    if ( (*(_QWORD *)(v6 + 736) & 0x8000000LL) != 0 )
    {
      v6 = a1[6];
      if ( *(_BYTE *)(120LL * v8 + v6 + 23) )
      {
        v19 = v27 + a1[5];
        RootHub_AcquireReadModifyWriteLock((__int64)a1, v8);
        v20 = XilRegister_ReadUlong(v5, (unsigned int *)(v19 + 4));
        v22 = v20;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v21) = 4;
          WPP_RECORDER_SF_d(
            *(_QWORD *)(a1[1] + 72LL),
            v21,
            11,
            225,
            (__int64)&WPP_e351447cda05377d20ca116ee7000203_Traceguids,
            v20);
        }
        v23 = v22 | 0x10000;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v21) = 4;
          WPP_RECORDER_SF_d(
            *(_QWORD *)(a1[1] + 72LL),
            v21,
            11,
            226,
            (__int64)&WPP_e351447cda05377d20ca116ee7000203_Traceguids,
            v23);
        }
        XilRegister_WriteUlong(v5, (_DWORD *)(v19 + 4), v23);
        LOBYTE(v6) = RootHub_ReleaseReadModifyWriteLock((__int64)a1, v8);
      }
    }
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v7) = 4;
    LOBYTE(v6) = WPP_RECORDER_SF_(
                   *(_QWORD *)(a1[1] + 72LL),
                   v7,
                   11,
                   220,
                   (__int64)&WPP_e351447cda05377d20ca116ee7000203_Traceguids);
  }
  return v6;
}
