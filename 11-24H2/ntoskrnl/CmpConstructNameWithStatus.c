/*
 * XREFs of CmpConstructNameWithStatus @ 0x140879DE0
 * Callers:
 *     CmQueryLayeredKey @ 0x140457758 (CmQueryLayeredKey.c)
 *     CmpLoadHiveVolatile @ 0x1407CEB00 (CmpLoadHiveVolatile.c)
 *     CmpTraceSecurityChanging @ 0x1408317FC (CmpTraceSecurityChanging.c)
 *     CmpDoWritethroughReparse @ 0x14087F420 (CmpDoWritethroughReparse.c)
 *     CmCallbackGetKeyObjectID @ 0x1409C76A0 (CmCallbackGetKeyObjectID.c)
 *     CmpConstructAndCacheName @ 0x1409EA66C (CmpConstructAndCacheName.c)
 * Callees:
 *     CmpAllocatePool @ 0x1403C9EA4 (CmpAllocatePool.c)
 *     CmSiFreeMemory @ 0x140464550 (CmSiFreeMemory.c)
 *     CmpConstructNameFromKeyNodes @ 0x1408794A0 (CmpConstructNameFromKeyNodes.c)
 *     CmpConstructNameFromKcbNameBlocks @ 0x14088067C (CmpConstructNameFromKcbNameBlocks.c)
 *     CmpAcquireShutdownRundown @ 0x140BBB400 (CmpAcquireShutdownRundown.c)
 *     CmpReleaseShutdownRundown @ 0x140BBB880 (CmpReleaseShutdownRundown.c)
 */

__int64 __fastcall CmpConstructNameWithStatus(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  char v6; // al
  int v7; // edi
  struct _PRIVILEGE_SET *Pool; // rbx
  char v9; // bp
  __int64 v10; // rax
  __int16 j; // ax
  PPRIVILEGE_SET v12; // rcx
  int v13; // eax
  __int64 v14; // rcx
  unsigned int v15; // edi
  __int64 i; // rcx
  struct _PRIVILEGE_SET *v18; // rdx
  __int128 v19; // [rsp+20h] [rbp-38h] BYREF
  PPRIVILEGE_SET Privileges[2]; // [rsp+30h] [rbp-28h]
  __int64 v21; // [rsp+60h] [rbp+8h] BYREF

  v21 = 0LL;
  v19 = 0LL;
  WORD1(v19) = -1;
  *(_OWORD *)Privileges = 0LL;
  v6 = CmpAcquireShutdownRundown(a1, a2, a3, a4);
  v7 = *(__int16 *)(a1 + 66);
  Pool = 0LL;
  v9 = v6;
  if ( v7 < 2
    || (Pool = (struct _PRIVILEGE_SET *)CmpAllocatePool(0x100uLL, 8LL * (unsigned int)(v7 - 1), 0x35364D43u)) != 0LL )
  {
    v10 = *(__int16 *)(a1 + 66);
    LOWORD(v19) = v7;
    Privileges[1] = Pool;
    WORD1(v19) = v10;
    if ( (_WORD)v10 )
    {
      for ( i = *(_QWORD *)(a1 + 192); i; LOWORD(v10) = v10 - 1 )
      {
        v18 = *(struct _PRIVILEGE_SET **)(i + 16);
        if ( (__int16)v10 >= 2 )
        {
          *((_QWORD *)Pool + (__int16)v10 - 2) = v18;
        }
        else
        {
          Privileges[(__int16)v10 - 1] = v18;
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
    if ( v9 && (*(_DWORD *)(a1 + 8) & 0x20000) == 0 )
    {
      for ( j = WORD1(v19); j >= 0; --j )
      {
        v12 = j >= 2 ? (PPRIVILEGE_SET)*((_QWORD *)Pool + j - 2) : Privileges[j - 1];
        if ( HIWORD(v12[3].Control) && BYTE1(v12[3].Control) == 1 )
          break;
        if ( v12[2].PrivilegeCount != -1 )
        {
          if ( *(_DWORD *)(a1 + 40) != -1 || (*(_DWORD *)(a1 + 184) & 0x40000) == 0 )
          {
            v13 = CmpConstructNameFromKeyNodes((__int64)&v19, &v21);
            Pool = Privileges[1];
            goto LABEL_15;
          }
          break;
        }
      }
    }
    v13 = CmpConstructNameFromKcbNameBlocks(a1, &v21);
LABEL_15:
    v15 = v13;
    if ( v13 >= 0 )
    {
      v15 = 0;
      *a2 = v21;
    }
  }
  else
  {
    Pool = Privileges[1];
    v15 = -1073741670;
  }
  if ( Pool )
    CmSiFreeMemory(Pool);
  if ( v9 )
    CmpReleaseShutdownRundown(v14);
  return v15;
}
