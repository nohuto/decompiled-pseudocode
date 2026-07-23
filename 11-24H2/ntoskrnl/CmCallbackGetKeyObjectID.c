/*
 * XREFs of CmCallbackGetKeyObjectID @ 0x1409C76A0
 * Callers:
 *     EtwpRegTraceCallback @ 0x1409764B0 (EtwpRegTraceCallback.c)
 * Callees:
 *     CmpAllocatePool @ 0x1403C9EA4 (CmpAllocatePool.c)
 *     CmpInitializeThreadInfo @ 0x1403F0160 (CmpInitializeThreadInfo.c)
 *     CmpCleanupThreadInfo @ 0x140414BA0 (CmpCleanupThreadInfo.c)
 *     CmpFreeTransientPoolWithTag @ 0x140438B90 (CmpFreeTransientPoolWithTag.c)
 *     CmSiFreeMemory @ 0x140464550 (CmSiFreeMemory.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     CmpConstructNameWithStatus @ 0x140879DE0 (CmpConstructNameWithStatus.c)
 *     CmpUnlockKcb @ 0x140BBB2C0 (CmpUnlockKcb.c)
 *     CmpAttachToRegistryProcess @ 0x140BBB8E0 (CmpAttachToRegistryProcess.c)
 *     CmpDetachFromRegistryProcess @ 0x140BBB920 (CmpDetachFromRegistryProcess.c)
 *     CmpLockKcbShared @ 0x140BBBA1C (CmpLockKcbShared.c)
 *     CmpLockRegistry @ 0x140BBBE60 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x140BBBF50 (CmpUnlockRegistry.c)
 */

NTSTATUS __stdcall CmCallbackGetKeyObjectID(
        PLARGE_INTEGER Cookie,
        PVOID Object,
        PULONG_PTR ObjectID,
        PCUNICODE_STRING *ObjectName)
{
  __int16 v4; // bx
  const UNICODE_STRING *v7; // r13
  __int64 *v8; // r10
  __int64 v9; // r11
  __int64 v10; // r15
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  int v14; // edi
  __int64 Pool; // rcx
  __int64 v16; // rsi
  __int16 v17; // di
  char *v18; // r14
  signed __int64 v19; // r15
  char *v20; // rcx
  unsigned __int64 v21; // rax
  int v22; // edi
  NTSTATUS v23; // r14d
  ULONG_PTR *v24; // rdi
  signed __int64 v25; // r15
  ULONG_PTR *v26; // rcx
  bool v28; // zf
  void *v29; // rcx
  struct _PRIVILEGE_SET *v30; // rdx
  void *v31; // [rsp+28h] [rbp-59h] BYREF
  __int128 v32; // [rsp+30h] [rbp-51h] BYREF
  PPRIVILEGE_SET Privileges[2]; // [rsp+40h] [rbp-41h]
  __int128 v34; // [rsp+50h] [rbp-31h] BYREF
  __int64 v35; // [rsp+60h] [rbp-21h]
  struct _KAPC_STATE ApcState; // [rsp+68h] [rbp-19h] BYREF

  v4 = 0;
  v35 = 0LL;
  v34 = 0LL;
  v7 = 0LL;
  memset(&ApcState, 0, sizeof(ApcState));
  CmpInitializeThreadInfo((_KAFFINITY_EX *)&v34);
  v32 = 0LL;
  WORD1(v32) = -1;
  *(_OWORD *)Privileges = 0LL;
  if ( !Object || *(_DWORD *)Object != 1803104306 || !v9 )
  {
LABEL_36:
    v23 = -1073741811;
    goto LABEL_33;
  }
  v10 = *((_QWORD *)Object + 1);
  v31 = (void *)v10;
  if ( v8 )
    *v8 = v10;
  if ( ObjectName )
  {
    if ( (v10 & 1) == 0 )
    {
      CmpAttachToRegistryProcess(&ApcState);
      CmpLockRegistry(v11);
      v14 = *(__int16 *)(v10 + 66);
      Pool = 0LL;
      if ( v14 >= 2 )
      {
        Pool = CmpAllocatePool(0x100uLL, 8LL * (unsigned int)(v14 - 1), 0x35364D43u);
        if ( !Pool )
        {
          v23 = -1073741670;
LABEL_32:
          CmpUnlockRegistry(Pool);
          CmpDetachFromRegistryProcess(&ApcState);
          goto LABEL_33;
        }
      }
      v16 = *(__int16 *)(v10 + 66);
      LOWORD(v32) = v14;
      Privileges[1] = (PPRIVILEGE_SET)Pool;
      WORD1(v32) = v16;
      if ( (_WORD)v16 )
      {
        Pool = *(_QWORD *)(v10 + 192);
        if ( !Pool )
        {
LABEL_12:
          v17 = 0;
          if ( (v16 & 0x8000u) == 0LL )
          {
            v18 = (char *)&v32 + 8;
            v19 = (char *)Privileges[1] - ((char *)&v32 + 8) - 16;
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
            v10 = (__int64)v31;
          }
          if ( !*(_QWORD *)(v10 + 80) )
          {
            v23 = -1073741670;
LABEL_27:
            if ( (v16 & 0x8000u) == 0LL )
            {
              v24 = (ULONG_PTR *)&v32 + 1;
              v25 = (char *)Privileges[1] - ((char *)&v32 + 8) - 16;
              do
              {
                if ( v4 >= 2 )
                  v26 = (ULONG_PTR *)((char *)v24 + v25);
                else
                  v26 = v24;
                CmpUnlockKcb(*v26);
                ++v4;
                ++v24;
              }
              while ( v4 <= (__int16)v16 );
            }
            goto LABEL_32;
          }
          v21 = *(_QWORD *)(v10 + 296);
          v31 = 0LL;
          if ( (v21 & 1) != 0 )
            v21 &= ~1uLL;
          if ( !v21 )
          {
            v22 = CmpConstructNameWithStatus(v10, &v31, v12, v13);
            if ( v22 < 0 )
              goto LABEL_23;
            v28 = _InterlockedCompareExchange64((volatile signed __int64 *)(v10 + 296), (signed __int64)v31, 0LL) == 0;
            v29 = v31;
            v21 = *(_QWORD *)(v10 + 296);
            if ( v28 )
              v29 = 0LL;
            v31 = v29;
            if ( (v21 & 1) != 0 )
              v21 &= ~1uLL;
          }
          v7 = (const UNICODE_STRING *)v21;
          v22 = 0;
LABEL_23:
          Pool = (__int64)v31;
          if ( v31 )
            CmpFreeTransientPoolWithTag(v31, 0x624E4D43u);
          LOWORD(v16) = WORD1(v32);
          if ( v22 < 0 )
          {
            v23 = -1073741670;
          }
          else
          {
            *ObjectName = v7;
            v23 = 0;
          }
          goto LABEL_27;
        }
        do
        {
          v30 = *(struct _PRIVILEGE_SET **)(Pool + 16);
          v12 = (__int16)v16;
          if ( (__int16)v16 >= 2 )
            *((_QWORD *)Privileges[1] + (__int16)v16 - 2) = v30;
          else
            Privileges[(__int16)v16 - 1] = v30;
          Pool = *(_QWORD *)(Pool + 24);
          LOWORD(v16) = v16 - 1;
        }
        while ( Pool );
      }
      else
      {
        Privileges[v16 - 1] = (PPRIVILEGE_SET)v10;
      }
      LOWORD(v16) = WORD1(v32);
      goto LABEL_12;
    }
    goto LABEL_36;
  }
  v23 = 0;
LABEL_33:
  if ( Privileges[1] )
    CmSiFreeMemory(Privileges[1]);
  CmpCleanupThreadInfo((_KAFFINITY_EX **)&v34);
  return v23;
}
