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

__int64 __fastcall BiBindEfiBootManager(__int64 a1, __int64 a2)
{
  void *v4; // r14
  void *v5; // rdi
  char IsOfflineHandle; // r15
  int v7; // ebx
  int Object; // eax
  int v9; // eax
  PVOID v10; // r15
  __int64 Pool2; // rax
  __int64 v12; // r8
  int v13; // eax
  __int64 v14; // r8
  unsigned int *v15; // rsi
  __int64 v16; // rdx
  __int64 v18; // r8
  int v19; // [rsp+30h] [rbp-50h] BYREF
  void *v20; // [rsp+38h] [rbp-48h] BYREF
  int v21; // [rsp+40h] [rbp-40h] BYREF
  _DWORD v22[2]; // [rsp+48h] [rbp-38h] BYREF
  PVOID v23; // [rsp+50h] [rbp-30h] BYREF
  PVOID P; // [rsp+58h] [rbp-28h] BYREF
  __int64 v25; // [rsp+60h] [rbp-20h] BYREF
  __int128 v26; // [rsp+68h] [rbp-18h] BYREF

  v21 = 0;
  v19 = 0;
  v25 = 0LL;
  v23 = 0LL;
  P = 0LL;
  v20 = 0LL;
  v4 = 0LL;
  v26 = 0LL;
  if ( (int)BcdOpenObject(a1, &GUID_FIRMWARE_BOOTMGR.Data1, &v20) >= 0 )
  {
    BcdDeleteObject(v20);
    v5 = 0LL;
    v20 = 0LL;
  }
  else
  {
    v5 = v20;
  }
  v22[0] = 1;
  v22[1] = 269484033;
  IsOfflineHandle = BiIsOfflineHandle(a1);
  v7 = BiAcquireBcdSyncMutant(IsOfflineHandle);
  if ( v7 >= 0 )
  {
    Object = BiCreateObject(a1, (unsigned int)&GUID_FIRMWARE_BOOTMGR, (unsigned int)v22, 0, (__int64)&v20);
    v5 = v20;
    v7 = Object;
    if ( Object >= 0 && (unsigned __int8)BiIsLinkedToFirmwareVariable(v20, 0LL) )
      BiSetFirmwareModified(a1, 1);
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
          if ( !v19 || (v7 = BcdSetElementDataWithFlags(v5, 603979777LL, v12, (__int64)v4, 16 * v19), v7 >= 0) )
          {
LABEL_11:
            v13 = BiQueryBootOptions(&P, &v21);
            v15 = (unsigned int *)P;
            v7 = v13;
            if ( v13 >= 0 )
            {
              if ( *((_DWORD *)P + 2) == -1
                || (v25 = *((unsigned int *)P + 2),
                    v7 = BcdSetElementDataWithFlags(v5, 620756996LL, v14, (__int64)&v25, 8u),
                    v7 >= 0) )
              {
                v16 = v15[4];
                if ( (_DWORD)v16 == -2
                  || (int)BiTranslateBootEntryId(a2, v16, &v26) < 0
                  || (v7 = BcdSetElementDataWithFlags(v5, 603979778LL, v18, (__int64)&v26, 0x10u), v7 >= 0) )
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
