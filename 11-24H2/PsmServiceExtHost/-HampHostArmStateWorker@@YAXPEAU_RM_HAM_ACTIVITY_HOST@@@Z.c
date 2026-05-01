/*
 * XREFs of ?HampHostArmStateWorker@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18002908C
 * Callers:
 *     ?HampHostCheckQueueStateWorker@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x1800286D0 (-HampHostCheckQueueStateWorker@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1800A7B40 (__security_check_cookie.c)
 */

void __fastcall HampHostArmStateWorker(struct _RM_HAM_ACTIVITY_HOST *a1)
{
  __int64 v2; // rax
  __int64 v3; // [rsp+38h] [rbp-1h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+40h] [rbp+7h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp+17h] BYREF
  void *v6; // [rsp+60h] [rbp+27h]
  int v7; // [rsp+68h] [rbp+2Fh]
  int v8; // [rsp+6Ch] [rbp+33h]
  __int64 *v9; // [rsp+70h] [rbp+37h]
  int v10; // [rsp+78h] [rbp+3Fh]
  int v11; // [rsp+7Ch] [rbp+43h]

  if ( (*((_QWORD *)a1 + 83) & 0x400000000LL) == 0 )
  {
    if ( (unsigned int)dword_1800E82B0 > 4
      && (qword_1800E82C0 & 0x40) != 0
      && (qword_1800E82C8 & 0x40) == qword_1800E82C8 )
    {
      v2 = *((_QWORD *)a1 - 4);
      v11 = 0;
      v3 = v2;
      v10 = 8;
      v9 = &v3;
      *(_DWORD *)&EventDescriptor.Level = 4;
      UserData.Ptr = (ULONGLONG)off_1800E82B8;
      *(_DWORD *)&EventDescriptor.Id = 184549376;
      EventDescriptor.Keyword = 64LL;
      UserData.Size = *(unsigned __int16 *)off_1800E82B8;
      v6 = &unk_1800D3AB8;
      UserData.Reserved = 2;
      v7 = 34;
      v8 = 1;
      EventWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 3u, &UserData);
    }
    *((_QWORD *)a1 + 83) |= 0x400000000uLL;
    if ( _InterlockedIncrement64((volatile signed __int64 *)a1 - 6) <= 1 )
      __fastfail(0xEu);
    TpPostWork(*((_QWORD *)a1 + 80));
  }
}
