/*
 * XREFs of CmpDoQueryKeyName @ 0x140206830
 * Callers:
 *     CmpQueryKeyName @ 0x1408C1890 (CmpQueryKeyName.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     CmpIsRegistryLockAcquired @ 0x140206FB0 (CmpIsRegistryLockAcquired.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     CmPostCallbackNotification @ 0x14084BE60 (CmPostCallbackNotification.c)
 *     CmpCallCallBacks @ 0x14084BF20 (CmpCallCallBacks.c)
 *     CmpConstructName @ 0x14087A050 (CmpConstructName.c)
 *     RtlFreeAnsiString @ 0x1408F1D50 (RtlFreeAnsiString.c)
 *     CmVirtualKCBToRealPath @ 0x140A5D600 (CmVirtualKCBToRealPath.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 *     CmpUnlockKcb @ 0x140BA92B0 (CmpUnlockKcb.c)
 *     CmpLockKcbShared @ 0x140BA9340 (CmpLockKcbShared.c)
 *     CmpLockRegistry @ 0x140BA9570 (CmpLockRegistry.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x140BA9880 (CmpPerformKeyBodyDeletionCheck.c)
 *     CmpUnlockRegistry @ 0x140BA9920 (CmpUnlockRegistry.c)
 *     CmpAttachToRegistryProcess @ 0x140BA99D0 (CmpAttachToRegistryProcess.c)
 *     CmpDetachFromRegistryProcess @ 0x140BA9A10 (CmpDetachFromRegistryProcess.c)
 */

__int64 __fastcall CmpDoQueryKeyName(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, _DWORD *a5)
{
  __int64 v6; // r12
  ULONG_PTR v7; // r14
  UNICODE_STRING *p_UnicodeString; // r13
  char v9; // bl
  char v10; // r15
  struct _KTHREAD *CurrentThread; // rcx
  _KAFFINITY_EX *UserAffinity; // rax
  struct _KTHREAD *v13; // rax
  int v14; // r8d
  int v15; // eax
  int v16; // esi
  wchar_t *Buffer; // r10
  unsigned int v18; // r12d
  unsigned int v19; // r12d
  char v21; // [rsp+30h] [rbp-118h]
  char v22; // [rsp+31h] [rbp-117h]
  int v25; // [rsp+58h] [rbp-F0h]
  _QWORD v26[2]; // [rsp+60h] [rbp-E8h] BYREF
  __int128 v27; // [rsp+70h] [rbp-D8h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+80h] [rbp-C8h] BYREF
  __int64 v29; // [rsp+90h] [rbp-B8h]
  __int128 v30; // [rsp+98h] [rbp-B0h] BYREF
  __int128 v31; // [rsp+A8h] [rbp-A0h]
  __int128 v32; // [rsp+B8h] [rbp-90h]
  __int64 v33; // [rsp+C8h] [rbp-80h]
  struct _KAPC_STATE ApcState; // [rsp+D0h] [rbp-78h] BYREF

  v6 = a1;
  v25 = a1;
  v29 = a1;
  *((_QWORD *)&v27 + 1) = 0LL;
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
    v27 = *(_OWORD *)&UserAffinity->Count;
  else
    *((_QWORD *)&v27 + 1) = 0LL;
  *(_QWORD *)&v27 = UserAffinity;
  CurrentThread[1].UserAffinity = (_KAFFINITY_EX *)&v27;
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
  KeGetCurrentThread()[1].UserAffinity = (_KAFFINITY_EX *)v27;
  return (unsigned int)v16;
}
