/*
 * XREFs of BiBindEfiBootManager @ 0x1409A6BC4
 * Callers:
 *     BiBindEfiNamespaceObjects @ 0x1409A812C (BiBindEfiNamespaceObjects.c)
 * Callees:
 *     BiSetFirmwareModified @ 0x1404A29C4 (BiSetFirmwareModified.c)
 *     BiIsOfflineHandle @ 0x1404A5974 (BiIsOfflineHandle.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     BiIsLinkedToFirmwareVariable @ 0x140859B3C (BiIsLinkedToFirmwareVariable.c)
 *     BiCreateObject @ 0x140859DBC (BiCreateObject.c)
 *     BcdOpenObject @ 0x1409A4724 (BcdOpenObject.c)
 *     BiAcquireBcdSyncMutant @ 0x1409A48B8 (BiAcquireBcdSyncMutant.c)
 *     BiReleaseBcdSyncMutant @ 0x1409A497C (BiReleaseBcdSyncMutant.c)
 *     BiLogMessage @ 0x1409A4E48 (BiLogMessage.c)
 *     BcdSetElementDataWithFlags @ 0x1409A517C (BcdSetElementDataWithFlags.c)
 *     BcdCloseObject @ 0x1409A5C2C (BcdCloseObject.c)
 *     BiQueryBootEntryOrder @ 0x1409A6E98 (BiQueryBootEntryOrder.c)
 *     BiQueryBootOptions @ 0x1409A6F74 (BiQueryBootOptions.c)
 *     BiTranslateBootOrder @ 0x1409A8030 (BiTranslateBootOrder.c)
 *     BiTranslateBootEntryId @ 0x1409A80C0 (BiTranslateBootEntryId.c)
 *     BcdDeleteObject @ 0x1409A8B70 (BcdDeleteObject.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall BiBindEfiBootManager(void *a1, __int64 a2)
{
  void *v4; // r14
  HANDLE v5; // rdi
  char IsOfflineHandle; // r15
  NTSTATUS v7; // ebx
  NTSTATUS v8; // eax
  int v9; // eax
  PVOID v10; // r15
  __int64 Pool2; // rax
  BCD_FLAGS v12; // r8d
  int v13; // eax
  BCD_FLAGS v14; // r8d
  unsigned int *v15; // rsi
  __int64 v16; // rdx
  BCD_FLAGS v18; // r8d
  unsigned int v19; // [rsp+30h] [rbp-50h] BYREF
  HANDLE BcdObjectHandle; // [rsp+38h] [rbp-48h] BYREF
  int v21; // [rsp+40h] [rbp-40h] BYREF
  unsigned int v22[2]; // [rsp+48h] [rbp-38h] BYREF
  PVOID v23; // [rsp+50h] [rbp-30h] BYREF
  PVOID P; // [rsp+58h] [rbp-28h] BYREF
  __int64 Buffer; // [rsp+60h] [rbp-20h] BYREF
  __int128 v26; // [rsp+68h] [rbp-18h] BYREF

  v21 = 0;
  v19 = 0;
  Buffer = 0LL;
  v23 = 0LL;
  P = 0LL;
  BcdObjectHandle = 0LL;
  v4 = 0LL;
  v26 = 0LL;
  if ( BcdOpenObject(a1, &GUID_FIRMWARE_BOOTMGR, &BcdObjectHandle) >= 0 )
  {
    BcdDeleteObject(BcdObjectHandle);
    v5 = 0LL;
    BcdObjectHandle = 0LL;
  }
  else
  {
    v5 = BcdObjectHandle;
  }
  v22[0] = 1;
  v22[1] = 269484033;
  IsOfflineHandle = BiIsOfflineHandle((char)a1);
  v7 = BiAcquireBcdSyncMutant(IsOfflineHandle);
  if ( v7 >= 0 )
  {
    v8 = BiCreateObject((__int64)a1, (__int64)&GUID_FIRMWARE_BOOTMGR, v22, 0LL, &BcdObjectHandle);
    v5 = BcdObjectHandle;
    v7 = v8;
    if ( v8 >= 0 && BiIsLinkedToFirmwareVariable((__int64)BcdObjectHandle, 0LL) )
      BiSetFirmwareModified((__int64)a1, 1);
    BiReleaseBcdSyncMutant(IsOfflineHandle);
    if ( v7 >= 0 )
    {
      v9 = BiQueryBootEntryOrder(&v23, &v19);
      v10 = v23;
      v7 = v9;
      if ( v9 >= 0 )
      {
        if ( !v19 )
          goto LABEL_11;
        Pool2 = ExAllocatePool2(0x102uLL, 16LL * v19, 0x4B444342u);
        v4 = (void *)Pool2;
        if ( Pool2 )
        {
          BiTranslateBootOrder(a2, v10, Pool2, &v19);
          if ( !v19 || (v7 = BcdSetElementDataWithFlags(v5, 0x24000001u, v12, v4, 16 * v19), v7 >= 0) )
          {
LABEL_11:
            v13 = BiQueryBootOptions(&P, &v21);
            v15 = (unsigned int *)P;
            v7 = v13;
            if ( v13 >= 0 )
            {
              if ( *((_DWORD *)P + 2) == -1
                || (Buffer = *((unsigned int *)P + 2),
                    v7 = BcdSetElementDataWithFlags(v5, 0x25000004u, v14, &Buffer, 8u),
                    v7 >= 0) )
              {
                v16 = v15[4];
                if ( (_DWORD)v16 == -2
                  || (int)BiTranslateBootEntryId(a2, v16, &v26) < 0
                  || (v7 = BcdSetElementDataWithFlags(v5, 0x24000002u, v18, &v26, 0x10u), v7 >= 0) )
                {
                  v7 = 0;
                }
              }
            }
            if ( v15 )
              ExFreePoolWithTag(v15, 0x4B444342u);
          }
        }
        else
        {
          v7 = -1073741670;
        }
      }
      if ( v10 )
        ExFreePoolWithTag(v10, 0x4B444342u);
      if ( v4 )
        ExFreePoolWithTag(v4, 0x4B444342u);
    }
  }
  if ( v5 )
  {
    if ( v7 >= 0 )
    {
      BcdCloseObject(v5);
      return (unsigned int)v7;
    }
    BcdDeleteObject(v5);
    goto LABEL_34;
  }
  if ( v7 < 0 )
LABEL_34:
    BiLogMessage();
  return (unsigned int)v7;
}
