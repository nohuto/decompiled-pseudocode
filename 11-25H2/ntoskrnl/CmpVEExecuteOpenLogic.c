/*
 * XREFs of CmpVEExecuteOpenLogic @ 0x140878260
 * Callers:
 *     CmpDoParseKey @ 0x140871670 (CmpDoParseKey.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14043FFA0 (RtlInitUnicodeString.c)
 *     CmpFindPathByNameEx @ 0x14083F1D0 (CmpFindPathByNameEx.c)
 *     CmpIsSystemEntity @ 0x1408416A0 (CmpIsSystemEntity.c)
 *     HvUnlockHiveFlusherShared @ 0x14086CDC0 (HvUnlockHiveFlusherShared.c)
 *     CmpIsKeyDeleted @ 0x140871220 (CmpIsKeyDeleted.c)
 *     CmpLockKcbExclusive @ 0x140874380 (CmpLockKcbExclusive.c)
 *     HvpMarkCellDirty @ 0x1408751B0 (HvpMarkCellDirty.c)
 *     HvpGetCellFlat @ 0x140878130 (HvpGetCellFlat.c)
 *     HvpGetCellPaged @ 0x140878180 (HvpGetCellPaged.c)
 *     HvpGetCellContextInitialize @ 0x140878FA0 (HvpGetCellContextInitialize.c)
 *     HvpReleaseCellPaged @ 0x140878FD0 (HvpReleaseCellPaged.c)
 *     HvLockHiveFlusherShared @ 0x14087DA14 (HvLockHiveFlusherShared.c)
 *     HvpReleaseCellFlat @ 0x14088B670 (HvpReleaseCellFlat.c)
 *     CmpBlockHiveWrites @ 0x140A2224C (CmpBlockHiveWrites.c)
 *     CmpUnblockHiveWrites @ 0x140A445B0 (CmpUnblockHiveWrites.c)
 *     CmVirtualKCBToRealPath @ 0x140A5D600 (CmVirtualKCBToRealPath.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 *     CmpUnlockKcb @ 0x140BA92B0 (CmpUnlockKcb.c)
 *     CmpAttachToRegistryProcess @ 0x140BA99D0 (CmpAttachToRegistryProcess.c)
 */

__int64 __fastcall CmpVEExecuteOpenLogic(
        ULONG_PTR BugCheckParameter2,
        __int64 a2,
        char a3,
        __m128i *a4,
        char a5,
        struct _SECURITY_SUBJECT_CONTEXT *a6)
{
  int v10; // ebx
  char PathByName; // bl
  void *v13; // rcx
  ULONG_PTR v14; // rbp
  ULONG_PTR v15; // rdx
  __int64 CellFlat; // rax
  __int64 v17; // r14
  __int64 v18; // rcx
  unsigned int v19; // [rsp+30h] [rbp-38h] BYREF
  __int64 v20; // [rsp+38h] [rbp-30h] BYREF
  __int64 v21; // [rsp+40h] [rbp-28h] BYREF
  ULONG_PTR v22; // [rsp+48h] [rbp-20h] BYREF
  __m128i P; // [rsp+50h] [rbp-18h] BYREF

  v19 = 0;
  v22 = 0LL;
  v20 = 0LL;
  v21 = 0LL;
  P = 0LL;
  RtlInitUnicodeString((PUNICODE_STRING)&P, 0LL);
  HvpGetCellContextInitialize(&v20);
  if ( CmpVEEnabled )
  {
    if ( (*(_DWORD *)(a2 + 24) & 0x10) != 0 )
    {
      v10 = -1073741199;
    }
    else if ( *(_WORD *)(BugCheckParameter2 + 66) )
    {
      v10 = -1073741199;
    }
    else if ( (*(_DWORD *)(BugCheckParameter2 + 184) & 0x2000000) != 0 )
    {
      if ( (*(_DWORD *)(BugCheckParameter2 + 8) & 0x7FE00000u) > 0xA00000 )
      {
        if ( CmpIsSystemEntity(a5, a6, (int *)(a2 + 16)) )
        {
          v10 = -1073741199;
        }
        else if ( CmpVEEnabled && (*(_DWORD *)(BugCheckParameter2 + 184) & 0x1000000) != 0 )
        {
          v10 = -1073741199;
        }
        else
        {
          if ( (*(_DWORD *)(a2 + 160) & 1) == 0 )
          {
            CmpAttachToRegistryProcess((PRKAPC_STATE)(a2 + 168));
            *(_DWORD *)(a2 + 160) |= 1u;
          }
          v10 = CmVirtualKCBToRealPath(BugCheckParameter2, &P);
          if ( v10 >= 0 )
          {
            v10 = CmpBlockHiveWrites(0LL, 16LL, &v21);
            if ( v10 < 0 )
            {
              if ( v21 )
                CmpUnblockHiveWrites(0LL, 16LL);
            }
            else
            {
              PathByName = CmpFindPathByNameEx(0LL, &P, 0LL, 16, &v19, &v22);
              CmpUnblockHiveWrites(0LL, 16LL);
              if ( PathByName )
              {
                v13 = (void *)a4->m128i_i64[1];
                if ( v13 )
                  ExFreePoolWithTag(v13, 0);
                *a4 = P;
                RtlInitUnicodeString((PUNICODE_STRING)&P, 0LL);
                *(_DWORD *)a2 |= 8u;
                v10 = 260;
              }
              else if ( a3
                     || (CmpUnlockKcb(BugCheckParameter2),
                         CmpLockKcbExclusive(BugCheckParameter2),
                         !CmpIsKeyDeleted(BugCheckParameter2, 0LL)) )
              {
                HvLockHiveFlusherShared(*(_QWORD *)(BugCheckParameter2 + 32));
                v14 = *(_QWORD *)(BugCheckParameter2 + 32);
                v15 = *(unsigned int *)(BugCheckParameter2 + 40);
                if ( (*(_BYTE *)(v14 + 140) & 1) != 0 )
                  CellFlat = HvpGetCellFlat(v14, v15, &v20);
                else
                  CellFlat = HvpGetCellPaged(v14, v15, &v20);
                v17 = CellFlat;
                if ( CellFlat )
                {
                  v10 = HvpMarkCellDirty(
                          *(_QWORD *)(BugCheckParameter2 + 32),
                          *(unsigned int *)(BugCheckParameter2 + 40),
                          1);
                  if ( v10 >= 0 )
                  {
                    *(_WORD *)(v17 + 2) |= 0x100u;
                    *(_WORD *)(BugCheckParameter2 + 186) |= 0x100u;
                    *(_DWORD *)a2 |= 8u;
                    v10 = 260;
                  }
                  v18 = *(_QWORD *)(BugCheckParameter2 + 32);
                  if ( (*(_BYTE *)(v18 + 140) & 1) != 0 )
                    HvpReleaseCellFlat(v18, &v20);
                  else
                    HvpReleaseCellPaged(v18, &v20);
                }
                else
                {
                  v10 = -1073741670;
                }
                if ( v14 )
                  HvUnlockHiveFlusherShared(v14);
              }
              else
              {
                v10 = -1073741772;
              }
            }
          }
        }
      }
      else
      {
        v10 = -1073741199;
      }
    }
    else
    {
      v10 = -1073741199;
    }
  }
  else
  {
    v10 = -1073741199;
  }
  if ( P.m128i_i64[1] )
    ExFreePoolWithTag((PVOID)P.m128i_i64[1], 0);
  return (unsigned int)v10;
}
