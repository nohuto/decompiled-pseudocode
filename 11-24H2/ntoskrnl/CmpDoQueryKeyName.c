/*
 * XREFs of CmpDoQueryKeyName @ 0x140414760
 * Callers:
 *     CmpQueryKeyName @ 0x140952F50 (CmpQueryKeyName.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     CmpCleanupThreadInfo @ 0x140414BA0 (CmpCleanupThreadInfo.c)
 *     CmpIsRegistryLockAcquired @ 0x140414BC0 (CmpIsRegistryLockAcquired.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     CmPostCallbackNotification @ 0x140843DE0 (CmPostCallbackNotification.c)
 *     CmpCallCallBacks @ 0x140843EA0 (CmpCallCallBacks.c)
 *     CmpConstructName @ 0x14087A710 (CmpConstructName.c)
 *     RtlFreeAnsiString @ 0x1408B69C0 (RtlFreeAnsiString.c)
 *     CmVirtualKCBToRealPath @ 0x140A57538 (CmVirtualKCBToRealPath.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 *     CmpUnlockKcb @ 0x140BBB2C0 (CmpUnlockKcb.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x140BBB7D0 (CmpPerformKeyBodyDeletionCheck.c)
 *     CmpAttachToRegistryProcess @ 0x140BBB8E0 (CmpAttachToRegistryProcess.c)
 *     CmpDetachFromRegistryProcess @ 0x140BBB920 (CmpDetachFromRegistryProcess.c)
 *     CmpLockKcbShared @ 0x140BBBA1C (CmpLockKcbShared.c)
 *     CmpLockRegistry @ 0x140BBBE60 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x140BBBF50 (CmpUnlockRegistry.c)
 */

__int64 __fastcall CmpDoQueryKeyName(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, _DWORD *a5)
{
  __int64 v6; // r13
  ULONG_PTR v7; // r14
  UNICODE_STRING *p_UnicodeString; // r15
  char v9; // bl
  char v10; // r12
  struct _KTHREAD *CurrentThread; // rcx
  _KAFFINITY_EX *UserAffinity; // rax
  struct _KTHREAD *v13; // rax
  int v14; // r8d
  int v15; // eax
  int v16; // esi
  wchar_t *Buffer; // r10
  unsigned int v18; // r13d
  unsigned int v19; // r13d
  char v21; // [rsp+30h] [rbp-118h]
  char v22; // [rsp+31h] [rbp-117h]
  int v25; // [rsp+58h] [rbp-F0h]
  _QWORD v26[2]; // [rsp+60h] [rbp-E8h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+70h] [rbp-D8h] BYREF
  _BYTE v28[24]; // [rsp+80h] [rbp-C8h] BYREF
  __int64 v29; // [rsp+98h] [rbp-B0h]
  __int128 v30; // [rsp+A0h] [rbp-A8h] BYREF
  __int128 v31; // [rsp+B0h] [rbp-98h]
  __int128 v32; // [rsp+C0h] [rbp-88h]
  __int64 v33; // [rsp+D0h] [rbp-78h]
  struct _KAPC_STATE ApcState; // [rsp+D8h] [rbp-70h] BYREF

  v6 = a1;
  v25 = a1;
  v29 = a1;
  *(_OWORD *)&v28[8] = 0LL;
  UnicodeString = 0LL;
  v30 = 0LL;
  v31 = 0LL;
  v32 = 0LL;
  v33 = 0LL;
  v7 = 0LL;
  p_UnicodeString = 0LL;
  v9 = 0;
  v21 = 0;
  v22 = 0;
  v10 = 0;
  memset(&ApcState, 0, sizeof(ApcState));
  CurrentThread = KeGetCurrentThread();
  UserAffinity = CurrentThread[1].UserAffinity;
  if ( UserAffinity )
  {
    *(_OWORD *)v28 = *(_OWORD *)&UserAffinity->Count;
    *(_QWORD *)&v28[16] = UserAffinity->StaticBitmap[1];
  }
  else
  {
    *(_OWORD *)&v28[8] = 0LL;
  }
  *(_QWORD *)v28 = UserAffinity;
  CurrentThread[1].UserAffinity = (_KAFFINITY_EX *)v28;
  v26[1] = v26;
  v26[0] = v26;
  v13 = KeGetCurrentThread();
  --v13->KernelApcDisable;
  if ( !CmpCallBackCount || (unsigned int)CmpIsRegistryLockAcquired() )
  {
    v10 = 1;
  }
  else
  {
    *(_QWORD *)&v30 = v6;
    *((_QWORD *)&v30 + 1) = a3;
    LODWORD(v31) = a4;
    *((_QWORD *)&v31 + 1) = a5;
    v15 = CmpCallCallBacks(47, (unsigned int)&v30, v14, 48, v6, (__int64)v26);
    if ( v15 < 0 )
    {
      v16 = 0;
      if ( v15 != -1073740541 )
        v16 = v15;
      goto LABEL_21;
    }
    v10 = 1;
    v22 = 1;
  }
  CmpAttachToRegistryProcess(&ApcState);
  CmpLockRegistry();
  v7 = *(_QWORD *)(v6 + 8);
  if ( (v7 & 1) != 0 )
  {
    v7 ^= 1uLL;
  }
  else if ( (*(_DWORD *)(v6 + 48) & 2) == 0 )
  {
    CmpLockKcbShared(v7);
    v9 = 1;
    v21 = 1;
  }
  v16 = CmpPerformKeyBodyDeletionCheck(v6, 0LL);
  if ( v16 >= 0 )
  {
    if ( CmpVEEnabled && (*(_DWORD *)(v7 + 184) & 0x1000000) != 0 )
    {
      p_UnicodeString = &UnicodeString;
      if ( (int)CmVirtualKCBToRealPath(v7, &UnicodeString) < 0 )
        p_UnicodeString = 0LL;
    }
    else
    {
      p_UnicodeString = (UNICODE_STRING *)CmpConstructName(v7);
    }
    if ( p_UnicodeString )
    {
      if ( v9 )
      {
        CmpUnlockKcb(v7);
        v21 = 0;
      }
      CmpUnlockRegistry();
      CmpDetachFromRegistryProcess(&ApcState);
      v10 = 0;
      if ( a4 <= 0x10 )
      {
        *a5 = p_UnicodeString->Length + 18;
        v16 = -1073741820;
      }
      else
      {
        Buffer = p_UnicodeString->Buffer;
        v18 = p_UnicodeString->Length + 2;
        *a5 = p_UnicodeString->Length + 18;
        if ( v18 <= (unsigned __int64)a4 - 16 )
        {
          v16 = 0;
LABEL_20:
          v19 = v18 - 2;
          memmove((void *)(a3 + 16), Buffer, v19);
          *(_WORD *)(a3 + 16 + 2 * ((unsigned __int64)v19 >> 1)) = 0;
          *(_WORD *)a3 = v19;
          *(_WORD *)(a3 + 2) = v19;
          *(_QWORD *)(a3 + 8) = a3 + 16;
          LODWORD(v6) = v25;
          goto LABEL_21;
        }
        v18 = a4 - 16;
        v16 = -1073741820;
        if ( a4 - 16 >= 2 )
          goto LABEL_20;
        LODWORD(v6) = v25;
      }
    }
    else
    {
      v16 = -1073741670;
    }
  }
LABEL_21:
  if ( v21 )
    CmpUnlockKcb(v7);
  if ( v10 )
  {
    CmpUnlockRegistry();
    CmpDetachFromRegistryProcess(&ApcState);
  }
  if ( v22 )
    CmPostCallbackNotification(48, v6, v16, (unsigned int)&v30, (__int64)v26);
  KeLeaveCriticalRegion();
  if ( UnicodeString.Buffer )
  {
    RtlFreeAnsiString(&UnicodeString);
  }
  else if ( p_UnicodeString )
  {
    ExFreePoolWithTag(p_UnicodeString, 0x624E4D43u);
  }
  CmpCleanupThreadInfo(v28);
  return (unsigned int)v16;
}
