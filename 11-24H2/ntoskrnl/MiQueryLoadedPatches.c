/*
 * XREFs of MiQueryLoadedPatches @ 0x140AA11D8
 * Callers:
 *     NtManageHotPatch @ 0x140AE9BD0 (NtManageHotPatch.c)
 * Callees:
 *     MiAllocatePool @ 0x140277450 (MiAllocatePool.c)
 *     ExfReleasePushLockShared @ 0x14028E410 (ExfReleasePushLockShared.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14031F9EC (ExfAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x140362C10 (KiCheckForKernelApcDelivery.c)
 *     RtlCopyUnicodeString @ 0x1403FA370 (RtlCopyUnicodeString.c)
 *     MiFindUserSidHotPatchContext @ 0x1407F2D6C (MiFindUserSidHotPatchContext.c)
 *     RtlCopySid @ 0x1408E7870 (RtlCopySid.c)
 */

__int64 __fastcall MiQueryLoadedPatches(_QWORD *SourceSid, _QWORD *a2, _DWORD *a3, __int64 a4, unsigned int a5)
{
  struct _KTHREAD *CurrentThread; // r13
  _DWORD *v6; // r14
  _QWORD *v7; // r15
  unsigned __int64 i; // rbx
  char *v10; // rdi
  _QWORD *UserSidHotPatchContext; // rax
  unsigned __int64 v12; // rdx
  unsigned int v13; // esi
  int *v14; // rax
  unsigned __int64 j; // rcx
  unsigned __int64 v16; // r8
  _QWORD **v17; // rax
  _QWORD *v18; // r8
  unsigned int v19; // ebx
  int v20; // r12d
  _DWORD *Pool; // rax
  _DWORD *v22; // rdi
  __int64 v23; // rax
  UNICODE_STRING *v24; // r15
  _DWORD *v25; // r14
  char *v26; // rsi
  wchar_t *v27; // rbp
  unsigned __int16 v28; // ax
  unsigned __int64 v29; // rcx
  _QWORD **v30; // rax
  _QWORD *v31; // rcx
  bool v32; // zf

  CurrentThread = KeGetCurrentThread();
  v6 = a3;
  v7 = a2;
  i = 0LL;
  --CurrentThread->SpecialApcDisable;
  v10 = (char *)KeAbPreAcquire((__int64)&qword_140E375D0, 0LL);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140E375D0, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx((signed __int64 *)&qword_140E375D0, 0, v10, (__int64)&qword_140E375D0);
  if ( v10 )
    v10[10] = 1;
  if ( SourceSid )
  {
    UserSidHotPatchContext = MiFindUserSidHotPatchContext(SourceSid);
    v12 = 96LL;
    v13 = 0;
    v14 = (int *)((unsigned __int64)(UserSidHotPatchContext + 3) & -(__int64)(UserSidHotPatchContext != 0LL));
    if ( !v14 )
      goto LABEL_21;
  }
  else
  {
    v14 = &qword_140E375B8;
    v12 = 96LL;
    v13 = 0;
  }
  for ( i = 0LL; ; i = (unsigned __int64)v14 )
  {
    v14 = *(int **)v14;
    if ( !v14 )
      break;
  }
  j = i;
  while ( j )
  {
    ++v13;
    v16 = j;
    v12 += *(unsigned __int16 *)(j + 40) + 24LL;
    v17 = *(_QWORD ***)(j + 8);
    if ( v17 )
    {
      v18 = *v17;
      for ( j = *(_QWORD *)(j + 8); v18; v18 = (_QWORD *)*v18 )
        j = (unsigned __int64)v18;
    }
    else
    {
      while ( 1 )
      {
        j = *(_QWORD *)(j + 16) & 0xFFFFFFFFFFFFFFFCuLL;
        if ( !j || *(_QWORD *)j == v16 )
          break;
        v16 = j;
      }
    }
  }
LABEL_21:
  if ( a5 >= v12 )
  {
    v20 = v12;
    Pool = (_DWORD *)MiAllocatePool(0x100uLL, (unsigned int)v12, 1900571981);
    v22 = Pool;
    if ( !Pool )
    {
      v19 = -1073741670;
      goto LABEL_42;
    }
    *Pool = 2;
    if ( SourceSid )
      RtlCopySid(0x44u, Pool + 1, SourceSid);
    if ( v13 )
    {
      v23 = v13;
      v24 = (UNICODE_STRING *)(v22 + 24);
      *((_QWORD *)v22 + 10) = v22 + 24;
      v25 = &v22[4 * v13 + 24];
      v26 = (char *)v22 - a4;
      *((_QWORD *)v22 + 11) = v25;
      v27 = (wchar_t *)&v25[2 * v23];
      while ( i )
      {
        *v25 = *(_DWORD *)(i + 24);
        v25[1] = *(_DWORD *)(i + 28);
        v28 = *(_WORD *)(i + 40);
        v24->Length = v28;
        v24->MaximumLength = v28;
        v24->Buffer = v27;
        RtlCopyUnicodeString(v24, (PCUNICODE_STRING)(i + 40));
        v24->Buffer = (wchar_t *)((char *)v24->Buffer - v26);
        v25 += 2;
        ++v22[18];
        v29 = i;
        v27 = (wchar_t *)((char *)v27 + v24->Length);
        ++v24;
        v30 = *(_QWORD ***)(i + 8);
        if ( v30 )
        {
          v31 = *v30;
          for ( i = *(_QWORD *)(i + 8); v31; v31 = (_QWORD *)*v31 )
            i = (unsigned __int64)v31;
        }
        else
        {
          while ( 1 )
          {
            i = *(_QWORD *)(i + 16) & 0xFFFFFFFFFFFFFFFCuLL;
            if ( !i || *(_QWORD *)i == v29 )
              break;
            v29 = i;
          }
        }
      }
      *((_QWORD *)v22 + 11) -= v26;
      *((_QWORD *)v22 + 10) -= v26;
      v6 = a3;
      v7 = a2;
    }
    *v7 = v22;
    *v6 = v20;
  }
  else
  {
    if ( v12 > 0xFFFFFFFF )
    {
      v19 = -1073741675;
      goto LABEL_42;
    }
    *v7 = 0LL;
    *v6 = v12;
  }
  v19 = 0;
LABEL_42:
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140E375D0, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&qword_140E375D0);
  KeAbPostRelease((ULONG_PTR)&qword_140E375D0);
  v32 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v32 && ($727077A9B6E167EAE1398C74674DC5A5 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery();
  return v19;
}
