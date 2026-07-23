/*
 * XREFs of CmpPromoteKey @ 0x1409708BC
 * Callers:
 *     CmDeleteLayeredKey @ 0x14040AAA8 (CmDeleteLayeredKey.c)
 *     CmRenameKey @ 0x1407D95B8 (CmRenameKey.c)
 *     CmpSetKeySecurity @ 0x140830A20 (CmpSetKeySecurity.c)
 *     CmSetValueKey @ 0x14086F460 (CmSetValueKey.c)
 *     CmDeleteValueKey @ 0x1408713A8 (CmDeleteValueKey.c)
 *     CmpDoParseKey @ 0x140872AE0 (CmpDoParseKey.c)
 *     CmSetLastWriteTimeKey @ 0x140962C40 (CmSetLastWriteTimeKey.c)
 *     CmSetKeyFlags @ 0x140963680 (CmSetKeyFlags.c)
 * Callees:
 *     CmpAllocatePool @ 0x1403C9EA4 (CmpAllocatePool.c)
 *     CmSiFreeMemory @ 0x140464550 (CmSiFreeMemory.c)
 *     CmpFullPromoteHiveRootFromKcbStack @ 0x1407E4170 (CmpFullPromoteHiveRootFromKcbStack.c)
 *     HvUnlockHiveFlusherShared @ 0x14086E934 (HvUnlockHiveFlusherShared.c)
 *     CmpLockKcbStackTopExclusiveRestShared @ 0x1408707C4 (CmpLockKcbStackTopExclusiveRestShared.c)
 *     CmpStartKcbStack @ 0x140872120 (CmpStartKcbStack.c)
 *     CmpUnlockKcbStack @ 0x140872A10 (CmpUnlockKcbStack.c)
 *     HvLockHiveFlusherShared @ 0x140881BD8 (HvLockHiveFlusherShared.c)
 *     CmpPromoteSingleKeyFromKcbStacks @ 0x140907DA0 (CmpPromoteSingleKeyFromKcbStacks.c)
 *     CmpCleanupKcbStack @ 0x14090AD10 (CmpCleanupKcbStack.c)
 *     CmpGetKcbAtLayerHeight @ 0x14090C380 (CmpGetKcbAtLayerHeight.c)
 *     CmpIsKeyStackDeleted @ 0x140970C00 (CmpIsKeyStackDeleted.c)
 *     CmpPopulateKcbStack @ 0x140970CD0 (CmpPopulateKcbStack.c)
 */

__int64 __fastcall CmpPromoteKey(__int64 a1, char a2, char a3)
{
  __int16 v3; // di
  __int16 v4; // dx
  int started; // ebx
  __int64 v6; // rbx
  bool v7; // di
  unsigned int v8; // r15d
  __int64 Pool; // rax
  __int64 v10; // r14
  __int64 i; // rsi
  _OWORD *v12; // r12
  _OWORD *v13; // r13
  __int64 v14; // rsi
  __int64 v15; // rcx
  int v16; // eax
  _OWORD *v17; // rax
  char v19; // r8
  _OWORD v20[2]; // [rsp+20h] [rbp-48h] BYREF
  _OWORD v21[2]; // [rsp+40h] [rbp-28h] BYREF
  __int64 KcbAtLayerHeight; // [rsp+B0h] [rbp+48h]
  struct _PRIVILEGE_SET *Privileges; // [rsp+C8h] [rbp+60h]

  v3 = *(_WORD *)(a1 + 2);
  memset(v20, 0, sizeof(v20));
  WORD1(v20[0]) = -1;
  memset(v21, 0, sizeof(v21));
  WORD1(v21[0]) = -1;
  KcbAtLayerHeight = CmpGetKcbAtLayerHeight(a1, v3);
  started = CmpStartKcbStack((__int64)v20, v4);
  if ( started >= 0 )
  {
    started = CmpStartKcbStack((__int64)v21, v3);
    if ( started >= 0 )
    {
      v6 = KcbAtLayerHeight;
      v7 = 1;
      v8 = ((*(_DWORD *)(KcbAtLayerHeight + 8) >> 21) & 0x3FF) + 1;
      Pool = CmpAllocatePool(0x100uLL, 8LL * v8, 0x37364D43u);
      Privileges = (struct _PRIVILEGE_SET *)Pool;
      if ( !Pool )
      {
        started = -1073741670;
        goto LABEL_15;
      }
      LODWORD(v10) = v8;
      for ( i = KcbAtLayerHeight; !_bittest((const signed __int32 *)(i + 184), 0x12u); i = *(_QWORD *)(i + 72) )
      {
        v10 = (*(_DWORD *)(i + 8) >> 21) & 0x3FF;
        *(_QWORD *)(Pool + 8 * v10) = i;
      }
      v12 = v20;
      v13 = v21;
      CmpPopulateKcbStack(v21, i);
      CmpLockKcbStackTopExclusiveRestShared((__int64)v21);
      if ( i != KcbAtLayerHeight )
      {
        while ( 1 )
        {
          if ( (unsigned int)v10 >= v8 )
            goto LABEL_12;
          v14 = *((_QWORD *)&Privileges->PrivilegeCount + (unsigned int)v10);
          CmpPopulateKcbStack(v12, v14);
          CmpLockKcbStackTopExclusiveRestShared(v15);
          if ( (unsigned __int8)CmpIsKeyStackDeleted(v12, 0LL) )
          {
            started = -1073741444;
LABEL_28:
            CmpUnlockKcbStack((__int64)v12);
            goto LABEL_13;
          }
          v16 = *(_DWORD *)(v14 + 40);
          if ( v14 == v6 )
          {
            if ( v16 != -1 && !a2 )
              goto LABEL_11;
            HvLockHiveFlusherShared(*(_QWORD *)(v14 + 32));
            v19 = a2;
          }
          else
          {
            if ( v16 != -1 )
              goto LABEL_11;
            HvLockHiveFlusherShared(*(_QWORD *)(v14 + 32));
            v19 = 0;
          }
          started = CmpPromoteSingleKeyFromKcbStacks((__int64)v13, (__int64)v12, v19);
          HvUnlockHiveFlusherShared(*(_QWORD *)(v14 + 32));
          if ( started < 0 )
            goto LABEL_28;
          v6 = KcbAtLayerHeight;
LABEL_11:
          CmpUnlockKcbStack((__int64)v13);
          v17 = v12;
          LODWORD(v10) = v10 + 1;
          v12 = v13;
          v13 = v17;
        }
      }
      if ( !a2
        || (HvLockHiveFlusherShared(*(_QWORD *)(i + 32)),
            started = CmpFullPromoteHiveRootFromKcbStack((__int64)v21),
            HvUnlockHiveFlusherShared(*(_QWORD *)(i + 32)),
            started >= 0) )
      {
LABEL_12:
        started = 0;
        v7 = a3 == 0;
LABEL_13:
        if ( !v7 )
          goto LABEL_14;
      }
      CmpUnlockKcbStack((__int64)v13);
LABEL_14:
      CmSiFreeMemory(Privileges);
    }
  }
LABEL_15:
  CmpCleanupKcbStack((__int64)v20);
  CmpCleanupKcbStack((__int64)v21);
  return (unsigned int)started;
}
