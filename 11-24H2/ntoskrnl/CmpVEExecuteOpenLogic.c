/*
 * XREFs of CmpVEExecuteOpenLogic @ 0x1408745A0
 * Callers:
 *     CmpDoParseKey @ 0x14086E7B0 (CmpDoParseKey.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1404241A0 (RtlInitUnicodeString.c)
 *     HvUnlockHiveFlusherShared @ 0x14086A604 (HvUnlockHiveFlusherShared.c)
 *     CmpIsKeyDeleted @ 0x14086E210 (CmpIsKeyDeleted.c)
 *     CmpLockKcbExclusive @ 0x140870470 (CmpLockKcbExclusive.c)
 *     HvpMarkCellDirty @ 0x140871600 (HvpMarkCellDirty.c)
 *     HvpGetCellFlat @ 0x140874470 (HvpGetCellFlat.c)
 *     HvpGetCellPaged @ 0x1408744C0 (HvpGetCellPaged.c)
 *     HvpGetCellContextInitialize @ 0x140875730 (HvpGetCellContextInitialize.c)
 *     HvpReleaseCellPaged @ 0x140875760 (HvpReleaseCellPaged.c)
 *     HvLockHiveFlusherShared @ 0x14087DD28 (HvLockHiveFlusherShared.c)
 *     HvpReleaseCellFlat @ 0x140884BB0 (HvpReleaseCellFlat.c)
 *     CmpFindPathByNameEx @ 0x14090B17C (CmpFindPathByNameEx.c)
 *     CmpIsSystemEntity @ 0x14090D660 (CmpIsSystemEntity.c)
 *     CmpBlockHiveWrites @ 0x140A2BEB0 (CmpBlockHiveWrites.c)
 *     CmpUnblockHiveWrites @ 0x140A496EC (CmpUnblockHiveWrites.c)
 *     CmVirtualKCBToRealPath @ 0x140A5F3C0 (CmVirtualKCBToRealPath.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 *     CmpUnlockKcb @ 0x140BB92C0 (CmpUnlockKcb.c)
 *     CmpAttachToRegistryProcess @ 0x140BB98E0 (CmpAttachToRegistryProcess.c)
 */

__int64 __fastcall CmpVEExecuteOpenLogic(
        ULONG_PTR BugCheckParameter2,
        __int64 a2,
        char a3,
        UNICODE_STRING *a4,
        unsigned __int8 a5)
{
  int v9; // ebx
  char PathByName; // bl
  wchar_t *Buffer; // rcx
  ULONG_PTR v13; // rbp
  ULONG_PTR v14; // rdx
  __int64 CellFlat; // rax
  __int64 v16; // r14
  __int64 v17; // rcx
  int v18; // [rsp+30h] [rbp-38h] BYREF
  __int64 v19; // [rsp+38h] [rbp-30h] BYREF
  __int64 v20; // [rsp+40h] [rbp-28h] BYREF
  __int64 v21; // [rsp+48h] [rbp-20h] BYREF
  UNICODE_STRING P; // [rsp+50h] [rbp-18h] BYREF

  v18 = 0;
  v21 = 0LL;
  v19 = 0LL;
  v20 = 0LL;
  P = 0LL;
  RtlInitUnicodeString(&P, 0LL);
  HvpGetCellContextInitialize(&v19);
  if ( CmpVEEnabled )
  {
    if ( (*(_DWORD *)(a2 + 24) & 0x10) != 0 )
    {
      v9 = -1073741199;
    }
    else if ( *(_WORD *)(BugCheckParameter2 + 66) )
    {
      v9 = -1073741199;
    }
    else if ( (*(_DWORD *)(BugCheckParameter2 + 184) & 0x2000000) != 0 )
    {
      if ( (*(_DWORD *)(BugCheckParameter2 + 8) & 0x7FE00000u) > 0xA00000 )
      {
        if ( (unsigned __int8)CmpIsSystemEntity(a5) )
        {
          v9 = -1073741199;
        }
        else if ( CmpVEEnabled && (*(_DWORD *)(BugCheckParameter2 + 184) & 0x1000000) != 0 )
        {
          v9 = -1073741199;
        }
        else
        {
          if ( (*(_DWORD *)(a2 + 160) & 1) == 0 )
          {
            CmpAttachToRegistryProcess((PRKAPC_STATE)(a2 + 168));
            *(_DWORD *)(a2 + 160) |= 1u;
          }
          v9 = CmVirtualKCBToRealPath(BugCheckParameter2, &P);
          if ( v9 >= 0 )
          {
            v9 = CmpBlockHiveWrites(0LL, 16LL, &v20);
            if ( v9 < 0 )
            {
              if ( v20 )
                CmpUnblockHiveWrites(0LL, 16LL);
            }
            else
            {
              PathByName = CmpFindPathByNameEx(0LL, &P, 0LL, 16LL, &v18, &v21);
              CmpUnblockHiveWrites(0LL, 16LL);
              if ( PathByName )
              {
                Buffer = a4->Buffer;
                if ( Buffer )
                  ExFreePoolWithTag(Buffer, 0);
                *a4 = P;
                RtlInitUnicodeString(&P, 0LL);
                *(_DWORD *)a2 |= 8u;
                v9 = 260;
              }
              else if ( a3
                     || (CmpUnlockKcb(BugCheckParameter2),
                         CmpLockKcbExclusive(BugCheckParameter2),
                         !CmpIsKeyDeleted(BugCheckParameter2, 0LL)) )
              {
                HvLockHiveFlusherShared(*(_QWORD *)(BugCheckParameter2 + 32));
                v13 = *(_QWORD *)(BugCheckParameter2 + 32);
                v14 = *(unsigned int *)(BugCheckParameter2 + 40);
                if ( (*(_BYTE *)(v13 + 140) & 1) != 0 )
                  CellFlat = HvpGetCellFlat(v13, v14, &v19);
                else
                  CellFlat = HvpGetCellPaged(v13, v14, &v19);
                v16 = CellFlat;
                if ( CellFlat )
                {
                  v9 = HvpMarkCellDirty(
                         *(_QWORD *)(BugCheckParameter2 + 32),
                         *(unsigned int *)(BugCheckParameter2 + 40),
                         1);
                  if ( v9 >= 0 )
                  {
                    *(_WORD *)(v16 + 2) |= 0x100u;
                    *(_WORD *)(BugCheckParameter2 + 186) |= 0x100u;
                    *(_DWORD *)a2 |= 8u;
                    v9 = 260;
                  }
                  v17 = *(_QWORD *)(BugCheckParameter2 + 32);
                  if ( (*(_BYTE *)(v17 + 140) & 1) != 0 )
                    HvpReleaseCellFlat(v17, &v19);
                  else
                    HvpReleaseCellPaged(v17, &v19);
                }
                else
                {
                  v9 = -1073741670;
                }
                if ( v13 )
                  HvUnlockHiveFlusherShared(v13);
              }
              else
              {
                v9 = -1073741772;
              }
            }
          }
        }
      }
      else
      {
        v9 = -1073741199;
      }
    }
    else
    {
      v9 = -1073741199;
    }
  }
  else
  {
    v9 = -1073741199;
  }
  if ( P.Buffer )
    ExFreePoolWithTag(P.Buffer, 0);
  return (unsigned int)v9;
}
