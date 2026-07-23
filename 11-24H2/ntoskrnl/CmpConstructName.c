/*
 * XREFs of CmpConstructName @ 0x14087A710
 * Callers:
 *     CmpDoQueryKeyName @ 0x140414760 (CmpDoQueryKeyName.c)
 *     CmpIsHiveAlreadyLoaded @ 0x1407DAC04 (CmpIsHiveAlreadyLoaded.c)
 *     CmpDumpKeyBodyList @ 0x1407DB190 (CmpDumpKeyBodyList.c)
 *     CmpReportAuditVirtualizationEvent @ 0x1407DDDB8 (CmpReportAuditVirtualizationEvent.c)
 *     CmpDereferenceKeyControlBlock @ 0x140841F90 (CmpDereferenceKeyControlBlock.c)
 *     CmpDoParseKey @ 0x140872AE0 (CmpDoParseKey.c)
 *     CmpCleanUpKcbCacheWithLock @ 0x140874810 (CmpCleanUpKcbCacheWithLock.c)
 *     CmpCreateKeyControlBlock @ 0x140875AF0 (CmpCreateKeyControlBlock.c)
 *     CmQueryKey @ 0x14087BBC0 (CmQueryKey.c)
 *     CmpDereferenceKeyControlBlockWithLock @ 0x140881CD0 (CmpDereferenceKeyControlBlockWithLock.c)
 *     CmRealKCBToVirtualPath @ 0x1408E1EE8 (CmRealKCBToVirtualPath.c)
 *     CmpEtwDumpKcb @ 0x14092E190 (CmpEtwDumpKcb.c)
 *     CmpLinkHiveToMaster @ 0x14092E380 (CmpLinkHiveToMaster.c)
 *     CmLoadAppKey @ 0x14092FCDC (CmLoadAppKey.c)
 *     CmAddLogForAction @ 0x140A01858 (CmAddLogForAction.c)
 *     CmVirtualKCBToRealPath @ 0x140A57538 (CmVirtualKCBToRealPath.c)
 *     CmEtwRunDown @ 0x140A6836C (CmEtwRunDown.c)
 *     CmpTraceHiveSaveStart @ 0x140ABA48C (CmpTraceHiveSaveStart.c)
 * Callees:
 *     CmpAllocatePool @ 0x1403C9EA4 (CmpAllocatePool.c)
 *     CmSiFreeMemory @ 0x140464550 (CmSiFreeMemory.c)
 *     CmpConstructNameFromKeyNodes @ 0x1408794A0 (CmpConstructNameFromKeyNodes.c)
 *     CmpConstructNameFromKcbNameBlocks @ 0x14088067C (CmpConstructNameFromKcbNameBlocks.c)
 *     CmpAcquireShutdownRundown @ 0x140BBB400 (CmpAcquireShutdownRundown.c)
 *     CmpReleaseShutdownRundown @ 0x140BBB880 (CmpReleaseShutdownRundown.c)
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
  if ( v7 < 2
    || (Pool = (struct _PRIVILEGE_SET *)CmpAllocatePool(0x100uLL, 8LL * (unsigned int)(v7 - 1), 0x35364D43u)) != 0LL )
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
          if ( *(_DWORD *)(a1 + 40) != -1 || (*(_DWORD *)(a1 + 184) & 0x40000) == 0 )
          {
            v13 = CmpConstructNameFromKeyNodes((__int64)&v18, &v20);
            Pool = Privileges[1];
            goto LABEL_15;
          }
          break;
        }
      }
    }
    v13 = CmpConstructNameFromKcbNameBlocks(a1, &v20);
LABEL_15:
    if ( v13 >= 0 )
      v4 = v20;
  }
  else
  {
    Pool = Privileges[1];
  }
  if ( Pool )
    CmSiFreeMemory(Pool);
  if ( v8 )
    CmpReleaseShutdownRundown(v14);
  return v4;
}
