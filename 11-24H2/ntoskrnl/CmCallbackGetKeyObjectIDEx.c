/*
 * XREFs of CmCallbackGetKeyObjectIDEx @ 0x14087C350
 * Callers:
 *     <none>
 * Callees:
 *     CmpAllocatePool @ 0x1403E1834 (CmpAllocatePool.c)
 *     CmpInitializeThreadInfo @ 0x1403FA250 (CmpInitializeThreadInfo.c)
 *     CmpCleanupThreadInfo @ 0x14041EE60 (CmpCleanupThreadInfo.c)
 *     CmSiFreeMemory @ 0x14046B8D0 (CmSiFreeMemory.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     CmpConstructNameFromKeyNodes @ 0x140875170 (CmpConstructNameFromKeyNodes.c)
 *     CmpConstructNameFromKcbNameBlocks @ 0x14087C7CC (CmpConstructNameFromKcbNameBlocks.c)
 *     CmpUnlockKcb @ 0x140BB92C0 (CmpUnlockKcb.c)
 *     CmpAcquireShutdownRundown @ 0x140BB9400 (CmpAcquireShutdownRundown.c)
 *     CmpReleaseShutdownRundown @ 0x140BB9880 (CmpReleaseShutdownRundown.c)
 *     CmpAttachToRegistryProcess @ 0x140BB98E0 (CmpAttachToRegistryProcess.c)
 *     CmpDetachFromRegistryProcess @ 0x140BB9920 (CmpDetachFromRegistryProcess.c)
 *     CmpLockKcbShared @ 0x140BB9A1C (CmpLockKcbShared.c)
 *     CmpLockRegistry @ 0x140BB9E60 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x140BB9F50 (CmpUnlockRegistry.c)
 */

__int64 __fastcall CmCallbackGetKeyObjectIDEx(__int64 a1, __int64 a2, __int64 a3, __int64 *a4, int a5)
{
  __int64 v6; // r9
  _QWORD *v7; // r10
  __int64 v8; // r11
  __int16 v9; // bx
  __int64 v10; // rdi
  __int64 v11; // rcx
  struct _PRIVILEGE_SET *v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 Pool; // rcx
  __int64 v16; // rsi
  __int16 v17; // r14
  char *v18; // r15
  signed __int64 v19; // r12
  char *v20; // rcx
  char v21; // al
  int v22; // r15d
  char v23; // r12
  struct _PRIVILEGE_SET *v24; // r14
  unsigned int v25; // r13d
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
  __int64 v45; // [rsp+88h] [rbp-21h]
  struct _KAPC_STATE ApcState; // [rsp+90h] [rbp-19h] BYREF

  v43 = a4;
  v45 = 0LL;
  v44 = 0LL;
  memset(&ApcState, 0, sizeof(ApcState));
  CmpInitializeThreadInfo((_KAFFINITY_EX *)&v44);
  v9 = 0;
  v38 = 0LL;
  *(_OWORD *)v39 = 0LL;
  if ( !a2 || *(_DWORD *)a2 != 1803104306 || !v8 || a5 )
  {
LABEL_51:
    v25 = -1073741811;
    goto LABEL_47;
  }
  v10 = *(_QWORD *)(a2 + 8);
  if ( v7 )
    *v7 = v10;
  if ( v6 )
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
LABEL_46:
          CmpUnlockRegistry(Pool);
          CmpDetachFromRegistryProcess(&ApcState);
          goto LABEL_47;
        }
      }
      v16 = *(__int16 *)(v10 + 66);
      v39[1] = (PPRIVILEGE_SET)Pool;
      WORD1(v38) = v16;
      if ( (_WORD)v16 )
      {
        Pool = *(_QWORD *)(v10 + 192);
        if ( !Pool )
        {
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
          if ( !*(_QWORD *)(v10 + 80) )
          {
            v25 = -1073741670;
LABEL_41:
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
            goto LABEL_46;
          }
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
                  if ( *(_DWORD *)(v10 + 40) != -1 || (*(_DWORD *)(v10 + 184) & 0x40000) == 0 )
                  {
                    v29 = CmpConstructNameFromKeyNodes((__int64)&v41, &v40);
                    v24 = Privileges[1];
                    goto LABEL_33;
                  }
                  break;
                }
              }
            }
            v29 = CmpConstructNameFromKcbNameBlocks(v10, &v40);
LABEL_33:
            v30 = v29;
            if ( v29 >= 0 )
            {
              v31 = v40;
              v30 = 0;
LABEL_35:
              if ( v24 )
                CmSiFreeMemory(v24);
              if ( v23 )
                CmpReleaseShutdownRundown(Pool);
              if ( v30 >= 0 )
              {
                v25 = 0;
                *v43 = v31;
              }
              goto LABEL_41;
            }
          }
          else
          {
            v24 = Privileges[1];
            v30 = -1073741670;
          }
          v31 = 0LL;
          goto LABEL_35;
        }
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
      goto LABEL_13;
    }
    goto LABEL_51;
  }
  v25 = 0;
LABEL_47:
  if ( v39[1] )
    CmSiFreeMemory(v39[1]);
  CmpCleanupThreadInfo((_KAFFINITY_EX **)&v44);
  return v25;
}
