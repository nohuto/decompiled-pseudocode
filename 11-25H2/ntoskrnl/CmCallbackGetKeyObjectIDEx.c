/*
 * XREFs of CmCallbackGetKeyObjectIDEx @ 0x14087E720
 * Callers:
 *     <none>
 * Callees:
 *     CmpAllocatePool @ 0x1403DCED4 (CmpAllocatePool.c)
 *     CmpInitializeThreadInfo @ 0x1403F5C00 (CmpInitializeThreadInfo.c)
 *     CmCleanupThreadInfo @ 0x140429780 (CmCleanupThreadInfo.c)
 *     CmSiFreeMemory @ 0x14046F140 (CmSiFreeMemory.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     CmpConstructNameFromKeyNodes @ 0x140879050 (CmpConstructNameFromKeyNodes.c)
 *     CmpConstructNameFromKcbNameBlocks @ 0x14087E5E4 (CmpConstructNameFromKcbNameBlocks.c)
 *     CmpUnlockKcb @ 0x140BA92B0 (CmpUnlockKcb.c)
 *     CmpLockKcbShared @ 0x140BA9340 (CmpLockKcbShared.c)
 *     CmpAcquireShutdownRundown @ 0x140BA9460 (CmpAcquireShutdownRundown.c)
 *     CmpLockRegistry @ 0x140BA9570 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x140BA9920 (CmpUnlockRegistry.c)
 *     CmpReleaseShutdownRundown @ 0x140BA9970 (CmpReleaseShutdownRundown.c)
 *     CmpAttachToRegistryProcess @ 0x140BA99D0 (CmpAttachToRegistryProcess.c)
 *     CmpDetachFromRegistryProcess @ 0x140BA9A10 (CmpDetachFromRegistryProcess.c)
 */

__int64 __fastcall CmCallbackGetKeyObjectIDEx(__int64 a1, __int64 a2, __int64 a3, __int64 *a4, int a5)
{
  __int64 *v6; // r8
  __int64 v7; // r9
  __int64 v8; // r10
  __int16 v9; // bx
  __int64 v10; // r15
  __int64 v11; // rcx
  struct _PRIVILEGE_SET *v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 Pool; // rcx
  __int64 v16; // rsi
  __int16 v17; // di
  char *v18; // r14
  signed __int64 v19; // r12
  char *v20; // rcx
  char v21; // al
  int v22; // edi
  char v23; // r13
  struct _PRIVILEGE_SET *v24; // r14
  unsigned int v25; // r12d
  __int64 v26; // rax
  __int16 j; // cx
  PPRIVILEGE_SET v28; // rax
  int v29; // eax
  int v30; // edi
  __int64 v31; // r15
  ULONG_PTR *v32; // rdi
  signed __int64 v33; // r14
  ULONG_PTR *v34; // rcx
  __int64 i; // rcx
  struct _PRIVILEGE_SET *v37; // rdx
  __int128 v38; // [rsp+28h] [rbp-81h] BYREF
  PPRIVILEGE_SET v39[2]; // [rsp+38h] [rbp-71h]
  __int64 v40; // [rsp+48h] [rbp-61h] BYREF
  __int128 v41; // [rsp+50h] [rbp-59h] BYREF
  PPRIVILEGE_SET Privileges[2]; // [rsp+60h] [rbp-49h]
  __int64 *v43; // [rsp+70h] [rbp-39h]
  __int128 v44; // [rsp+78h] [rbp-31h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+88h] [rbp-21h] BYREF

  v43 = a4;
  v44 = 0LL;
  memset(&ApcState, 0, sizeof(ApcState));
  CmpInitializeThreadInfo((_KAFFINITY_EX *)&v44);
  v9 = 0;
  v38 = 0LL;
  *(_OWORD *)v39 = 0LL;
  if ( !a2 || *(_DWORD *)a2 != 1803104306 || !v8 || a5 )
  {
LABEL_52:
    v25 = -1073741811;
    goto LABEL_46;
  }
  v10 = *(_QWORD *)(a2 + 8);
  if ( v6 )
    *v6 = v10;
  if ( v7 )
  {
    if ( (v10 & 1) == 0 )
    {
      CmpAttachToRegistryProcess(&ApcState);
      CmpLockRegistry(v11);
      Pool = 0LL;
      if ( *(__int16 *)(v10 + 66) >= 2 )
      {
        Pool = CmpAllocatePool(0x100uLL);
        if ( !Pool )
        {
          v25 = -1073741670;
LABEL_45:
          CmpUnlockRegistry(Pool);
          CmpDetachFromRegistryProcess(&ApcState);
          goto LABEL_46;
        }
      }
      v16 = *(__int16 *)(v10 + 66);
      v39[1] = (PPRIVILEGE_SET)Pool;
      WORD1(v38) = v16;
      if ( (_WORD)v16 )
      {
        Pool = *(_QWORD *)(v10 + 192);
        if ( !Pool )
          goto LABEL_13;
        do
        {
          v12 = *(struct _PRIVILEGE_SET **)(Pool + 16);
          v13 = (__int16)v16;
          if ( (__int16)v16 >= 2 )
            *((_QWORD *)v39[1] + (__int16)v16 - 2) = v12;
          else
            v39[(__int16)v16 - 1] = v12;
          Pool = *(_QWORD *)(Pool + 24);
          LOWORD(v16) = v16 - 1;
        }
        while ( Pool );
      }
      else
      {
        v39[v16 - 1] = (PPRIVILEGE_SET)v10;
      }
      LOWORD(v16) = WORD1(v38);
LABEL_13:
      v17 = 0;
      if ( (v16 & 0x8000u) == 0LL )
      {
        v18 = (char *)&v38 + 8;
        v19 = (char *)v39[1] - ((char *)&v38 + 8) - 16;
        do
        {
          if ( v17 >= 2 )
            v20 = &v18[v19];
          else
            v20 = v18;
          CmpLockKcbShared(*(_QWORD *)v20);
          ++v17;
          v18 += 8;
        }
        while ( v17 <= (__int16)v16 );
      }
      if ( *(_QWORD *)(v10 + 80) )
      {
        v40 = 0LL;
        v41 = 0LL;
        WORD1(v41) = -1;
        *(_OWORD *)Privileges = 0LL;
        v21 = CmpAcquireShutdownRundown(Pool, v12, v13, v14);
        v22 = *(__int16 *)(v10 + 66);
        v23 = v21;
        v24 = 0LL;
        v25 = -1073741670;
        if ( v22 < 2 || (v24 = (struct _PRIVILEGE_SET *)CmpAllocatePool(0x100uLL)) != 0LL )
        {
          v26 = *(__int16 *)(v10 + 66);
          LOWORD(v41) = v22;
          Privileges[1] = v24;
          WORD1(v41) = v26;
          if ( (_WORD)v26 )
          {
            for ( i = *(_QWORD *)(v10 + 192); i; LOWORD(v26) = v26 - 1 )
            {
              v37 = *(struct _PRIVILEGE_SET **)(i + 16);
              if ( (__int16)v26 >= 2 )
              {
                *((_QWORD *)v24 + (__int16)v26 - 2) = v37;
              }
              else
              {
                Privileges[(__int16)v26 - 1] = v37;
                v24 = Privileges[1];
              }
              i = *(_QWORD *)(i + 24);
            }
          }
          else
          {
            Privileges[v26 - 1] = (PPRIVILEGE_SET)v10;
            v24 = Privileges[1];
          }
          if ( v23 && (*(_DWORD *)(v10 + 8) & 0x20000) == 0 )
          {
            for ( j = WORD1(v41); j >= 0; --j )
            {
              v28 = j >= 2 ? (PPRIVILEGE_SET)*((_QWORD *)v24 + j - 2) : Privileges[j - 1];
              if ( HIWORD(v28[3].Control) && BYTE1(v28[3].Control) == 1 )
                break;
              if ( v28[2].PrivilegeCount != -1 )
              {
                if ( *(_DWORD *)(v10 + 40) == -1 && (*(_DWORD *)(v10 + 184) & 0x40000) != 0 )
                  break;
                v29 = CmpConstructNameFromKeyNodes((__int64)&v41, &v40);
                v24 = Privileges[1];
                v30 = v29;
                if ( v29 < 0 )
                  goto LABEL_50;
                goto LABEL_33;
              }
            }
          }
          v30 = CmpConstructNameFromKcbNameBlocks(v10, &v40);
          if ( v30 >= 0 )
          {
LABEL_33:
            v31 = v40;
            v30 = 0;
          }
          else
          {
LABEL_50:
            v31 = 0LL;
          }
        }
        else
        {
          v24 = Privileges[1];
          v30 = -1073741670;
          v31 = 0LL;
        }
        if ( v24 )
          CmSiFreeMemory(v24);
        if ( v23 )
          CmpReleaseShutdownRundown(Pool);
        if ( v30 >= 0 )
        {
          v25 = 0;
          *v43 = v31;
        }
      }
      else
      {
        v25 = -1073741670;
      }
      if ( (v16 & 0x8000u) == 0LL )
      {
        v32 = (ULONG_PTR *)&v38 + 1;
        v33 = (char *)v39[1] - ((char *)&v38 + 8) - 16;
        do
        {
          if ( v9 >= 2 )
            v34 = (ULONG_PTR *)((char *)v32 + v33);
          else
            v34 = v32;
          CmpUnlockKcb(*v34);
          ++v9;
          ++v32;
        }
        while ( v9 <= (__int16)v16 );
      }
      goto LABEL_45;
    }
    goto LABEL_52;
  }
  v25 = 0;
LABEL_46:
  if ( v39[1] )
    CmSiFreeMemory(v39[1]);
  CmCleanupThreadInfo((_KAFFINITY_EX **)&v44);
  return v25;
}
