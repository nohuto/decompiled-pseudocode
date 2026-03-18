/*
 * XREFs of CmpConstructName @ 0x14087A050
 * Callers:
 *     CmpDoQueryKeyName @ 0x140206830 (CmpDoQueryKeyName.c)
 *     CmpIsHiveAlreadyLoaded @ 0x1407CAEF0 (CmpIsHiveAlreadyLoaded.c)
 *     CmpDumpKeyBodyList @ 0x1407CB47C (CmpDumpKeyBodyList.c)
 *     CmpReportAuditVirtualizationEvent @ 0x1407CE0A8 (CmpReportAuditVirtualizationEvent.c)
 *     CmRealKCBToVirtualPath @ 0x14083EA38 (CmRealKCBToVirtualPath.c)
 *     CmpDereferenceKeyControlBlock @ 0x140849FE0 (CmpDereferenceKeyControlBlock.c)
 *     CmAddLogForAction @ 0x140868A1C (CmAddLogForAction.c)
 *     CmpDoParseKey @ 0x140871670 (CmpDoParseKey.c)
 *     CmpCleanUpKcbCacheWithLock @ 0x1408743F0 (CmpCleanUpKcbCacheWithLock.c)
 *     CmpCreateKeyControlBlock @ 0x140875390 (CmpCreateKeyControlBlock.c)
 *     CmQueryKey @ 0x14087AC40 (CmQueryKey.c)
 *     CmpDereferenceKeyControlBlockWithLock @ 0x14087B820 (CmpDereferenceKeyControlBlockWithLock.c)
 *     CmpEtwDumpKcb @ 0x140911B40 (CmpEtwDumpKcb.c)
 *     CmpLinkHiveToMaster @ 0x140911D30 (CmpLinkHiveToMaster.c)
 *     CmLoadAppKey @ 0x1409122B0 (CmLoadAppKey.c)
 *     CmVirtualKCBToRealPath @ 0x140A5D600 (CmVirtualKCBToRealPath.c)
 *     CmEtwRunDown @ 0x140A6CC98 (CmEtwRunDown.c)
 *     CmpTraceHiveSaveStart @ 0x140ABB210 (CmpTraceHiveSaveStart.c)
 * Callees:
 *     CmpAllocatePool @ 0x1403DCED4 (CmpAllocatePool.c)
 *     CmSiFreeMemory @ 0x14046F140 (CmSiFreeMemory.c)
 *     CmpConstructNameFromKeyNodes @ 0x140879050 (CmpConstructNameFromKeyNodes.c)
 *     CmpConstructNameFromKcbNameBlocks @ 0x14087E5E4 (CmpConstructNameFromKcbNameBlocks.c)
 *     CmpAcquireShutdownRundown @ 0x140BA9460 (CmpAcquireShutdownRundown.c)
 *     CmpReleaseShutdownRundown @ 0x140BA9970 (CmpReleaseShutdownRundown.c)
 */

__int64 __fastcall CmpConstructName(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbp
  char v6; // al
  int v7; // edi
  char v8; // r14
  struct _PRIVILEGE_SET *Pool; // rbx
  __int64 v10; // rax
  __int16 j; // ax
  PPRIVILEGE_SET v12; // rcx
  int v13; // eax
  __int64 v14; // rcx
  __int64 i; // rcx
  struct _PRIVILEGE_SET *v17; // rdx
  __int128 v18; // [rsp+20h] [rbp-38h] BYREF
  PPRIVILEGE_SET Privileges[2]; // [rsp+30h] [rbp-28h]
  __int64 v20; // [rsp+60h] [rbp+8h] BYREF

  v18 = 0LL;
  v4 = 0LL;
  WORD1(v18) = -1;
  v20 = 0LL;
  *(_OWORD *)Privileges = 0LL;
  v6 = CmpAcquireShutdownRundown(a1, a2, a3, a4);
  v7 = *(__int16 *)(a1 + 66);
  v8 = v6;
  Pool = 0LL;
  if ( v7 < 2 || (Pool = (struct _PRIVILEGE_SET *)CmpAllocatePool(0x100uLL)) != 0LL )
  {
    v10 = *(__int16 *)(a1 + 66);
    LOWORD(v18) = v7;
    Privileges[1] = Pool;
    WORD1(v18) = v10;
    if ( (_WORD)v10 )
    {
      for ( i = *(_QWORD *)(a1 + 192); i; LOWORD(v10) = v10 - 1 )
      {
        v17 = *(struct _PRIVILEGE_SET **)(i + 16);
        if ( (__int16)v10 >= 2 )
        {
          *((_QWORD *)Pool + (__int16)v10 - 2) = v17;
        }
        else
        {
          Privileges[(__int16)v10 - 1] = v17;
          Pool = Privileges[1];
        }
        i = *(_QWORD *)(i + 24);
      }
    }
    else
    {
      Privileges[v10 - 1] = (PPRIVILEGE_SET)a1;
      Pool = Privileges[1];
    }
    if ( v8 && (*(_DWORD *)(a1 + 8) & 0x20000) == 0 )
    {
      for ( j = WORD1(v18); j >= 0; --j )
      {
        v12 = j >= 2 ? (PPRIVILEGE_SET)*((_QWORD *)Pool + j - 2) : Privileges[j - 1];
        if ( HIWORD(v12[3].Control) && BYTE1(v12[3].Control) == 1 )
          break;
        if ( v12[2].PrivilegeCount != -1 )
        {
          if ( *(_DWORD *)(a1 + 40) == -1 && (*(_DWORD *)(a1 + 184) & 0x40000) != 0 )
            break;
          v13 = CmpConstructNameFromKeyNodes((__int64)&v18, &v20);
          Pool = Privileges[1];
          if ( v13 < 0 )
            goto LABEL_16;
          goto LABEL_15;
        }
      }
    }
    if ( (int)CmpConstructNameFromKcbNameBlocks(a1, &v20) >= 0 )
LABEL_15:
      v4 = v20;
  }
  else
  {
    Pool = Privileges[1];
  }
LABEL_16:
  if ( Pool )
    CmSiFreeMemory(Pool);
  if ( v8 )
    CmpReleaseShutdownRundown(v14);
  return v4;
}
