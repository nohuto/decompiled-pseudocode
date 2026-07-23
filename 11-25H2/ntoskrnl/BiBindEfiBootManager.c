/*
 * XREFs of BiBindEfiBootManager @ 0x140A25DC8
 * Callers:
 *     BiBindEfiNamespaceObjects @ 0x140A27E30 (BiBindEfiNamespaceObjects.c)
 * Callees:
 *     BiSetFirmwareModified @ 0x1404A75E4 (BiSetFirmwareModified.c)
 *     BiIsOfflineHandle @ 0x1404A9F20 (BiIsOfflineHandle.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     BcdOpenObject @ 0x1409666B4 (BcdOpenObject.c)
 *     BiAcquireBcdSyncMutant @ 0x140966848 (BiAcquireBcdSyncMutant.c)
 *     BiReleaseBcdSyncMutant @ 0x14096690C (BiReleaseBcdSyncMutant.c)
 *     BcdSetElementDataWithFlags @ 0x14096B5A4 (BcdSetElementDataWithFlags.c)
 *     BcdDeleteObject @ 0x140A24A18 (BcdDeleteObject.c)
 *     BiQueryBootEntryOrder @ 0x140A2609C (BiQueryBootEntryOrder.c)
 *     BiQueryBootOptions @ 0x140A26178 (BiQueryBootOptions.c)
 *     BiCreateObject @ 0x140A262E4 (BiCreateObject.c)
 *     BiLogMessage @ 0x140A26990 (BiLogMessage.c)
 *     BiTranslateBootOrder @ 0x140A269FC (BiTranslateBootOrder.c)
 *     BiTranslateBootEntryId @ 0x140A26A8C (BiTranslateBootEntryId.c)
 *     BcdCloseObject @ 0x140A27BE8 (BcdCloseObject.c)
 *     BiIsLinkedToFirmwareVariable @ 0x140A27ED0 (BiIsLinkedToFirmwareVariable.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall BiBindEfiBootManager(void *a1, __int64 a2)
{
  void *v4; // r14
  HANDLE v5; // rdi
  char IsOfflineHandle; // r15
  NTSTATUS v7; // ebx
  int Object; // eax
  int v9; // eax
  PVOID v10; // r15
  __int64 Pool2; // rax
  BCD_FLAGS v12; // r8d
  int v13; // eax
  BCD_FLAGS v14; // r8d
  unsigned int *v15; // rsi
  __int64 v16; // rdx
  BCD_FLAGS v18; // r8d
  int v19; // [rsp+30h] [rbp-50h] BYREF
  HANDLE BcdObjectHandle; // [rsp+38h] [rbp-48h] BYREF
  int v21; // [rsp+40h] [rbp-40h] BYREF
  _DWORD v22[2]; // [rsp+48h] [rbp-38h] BYREF
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
    Object = BiCreateObject(
               (_DWORD)a1,
               (unsigned int)&GUID_FIRMWARE_BOOTMGR,
               (unsigned int)v22,
               0,
               (__int64)&BcdObjectHandle);
    v5 = BcdObjectHandle;
    v7 = Object;
    if ( Object >= 0 && (unsigned __int8)BiIsLinkedToFirmwareVariable(BcdObjectHandle, 0LL) )
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
        Pool2 = ExAllocatePool2(0x102uLL);
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
    BiLogMessage(4LL, L"BiBindEfiBootManager failed %x", (unsigned int)v7);
  return (unsigned int)v7;
}
