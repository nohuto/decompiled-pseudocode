/*
 * XREFs of CmpVEExecuteOpenLogic @ 0x1408788D0
 * Callers:
 *     CmpDoParseKey @ 0x140872AE0 (CmpDoParseKey.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     HvUnlockHiveFlusherShared @ 0x14086E934 (HvUnlockHiveFlusherShared.c)
 *     CmpIsKeyDeleted @ 0x140872540 (CmpIsKeyDeleted.c)
 *     CmpLockKcbExclusive @ 0x1408747A0 (CmpLockKcbExclusive.c)
 *     HvpMarkCellDirty @ 0x140875930 (HvpMarkCellDirty.c)
 *     HvpGetCellFlat @ 0x1408787A0 (HvpGetCellFlat.c)
 *     HvpGetCellPaged @ 0x1408787F0 (HvpGetCellPaged.c)
 *     HvpGetCellContextInitialize @ 0x140879A60 (HvpGetCellContextInitialize.c)
 *     HvpReleaseCellPaged @ 0x140879A90 (HvpReleaseCellPaged.c)
 *     HvLockHiveFlusherShared @ 0x140881BD8 (HvLockHiveFlusherShared.c)
 *     HvpReleaseCellFlat @ 0x140888A60 (HvpReleaseCellFlat.c)
 *     CmpFindPathByNameEx @ 0x1408E289C (CmpFindPathByNameEx.c)
 *     CmpIsSystemEntity @ 0x1408E4D80 (CmpIsSystemEntity.c)
 *     CmpBlockHiveWrites @ 0x140A1FD70 (CmpBlockHiveWrites.c)
 *     CmpUnblockHiveWrites @ 0x140A4040C (CmpUnblockHiveWrites.c)
 *     CmVirtualKCBToRealPath @ 0x140A57538 (CmVirtualKCBToRealPath.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 *     CmpUnlockKcb @ 0x140BBB2C0 (CmpUnlockKcb.c)
 *     CmpAttachToRegistryProcess @ 0x140BBB8E0 (CmpAttachToRegistryProcess.c)
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
