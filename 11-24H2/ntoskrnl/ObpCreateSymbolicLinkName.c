/*
 * XREFs of ObpCreateSymbolicLinkName @ 0x1407421D0
 * Callers:
 *     ObpCreateHandle @ 0x140849D60 (ObpCreateHandle.c)
 * Callees:
 *     ObpReleaseLookupContext @ 0x14028EDF0 (ObpReleaseLookupContext.c)
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     PsReferenceSiloContext @ 0x14031EF70 (PsReferenceSiloContext.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     PsGetCurrentServerSiloGlobals @ 0x140326710 (PsGetCurrentServerSiloGlobals.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     KeLeaveGuardedRegion @ 0x140362BA0 (KeLeaveGuardedRegion.c)
 *     ObDereferenceObjectDeferDelete @ 0x1403B48A0 (ObDereferenceObjectDeferDelete.c)
 *     PsGetCurrentSilo @ 0x1403FCA20 (PsGetCurrentSilo.c)
 *     OBP_GET_SILO_ROOT_DIRECTORY_FROM_SILO @ 0x1403FCA80 (OBP_GET_SILO_ROOT_DIRECTORY_FROM_SILO.c)
 *     ObFastReplaceObject @ 0x14044674C (ObFastReplaceObject.c)
 *     ObpUnlockDirectory @ 0x14083E760 (ObpUnlockDirectory.c)
 *     ObpLookupDirectoryEntry @ 0x14083E800 (ObpLookupDirectoryEntry.c)
 *     RtlUpcaseUnicodeChar @ 0x1408404B0 (RtlUpcaseUnicodeChar.c)
 *     ObpParseComponentName @ 0x140978290 (ObpParseComponentName.c)
 *     ObpLockDirectoryShared @ 0x14099A610 (ObpLockDirectoryShared.c)
 *     ObpLockChildDirectory @ 0x1409AF090 (ObpLockChildDirectory.c)
 */

__int16 __fastcall ObpCreateSymbolicLinkName(ULONG_PTR a1)
{
  __int64 v1; // rax
  int v3; // edi
  __int64 *v4; // rdx
  WCHAR *v5; // rcx
  struct _LIST_ENTRY *CurrentSilo; // rax
  void *v7; // r14
  PVOID v8; // rdx
  struct _LIST_ENTRY *CurrentServerSiloGlobals; // r13
  void *v10; // r9
  __int64 v11; // rax
  ULONG_PTR v12; // rsi
  struct _OBJECT_TYPE *v13; // rax
  char v14; // di
  unsigned int v15; // eax
  unsigned int v16; // eax
  unsigned int v17; // eax
  unsigned int v18; // eax
  unsigned int v19; // eax
  unsigned int v20; // eax
  unsigned int v21; // eax
  unsigned int v22; // eax
  __int64 v23; // r12
  struct _KTHREAD *CurrentThread; // rax
  char *v25; // rax
  char *v26; // r15
  __int64 v27; // r15
  int v28; // r12d
  void *v29; // rdi
  __int128 v31; // [rsp+20h] [rbp-40h] BYREF
  __int128 v32; // [rsp+30h] [rbp-30h] BYREF
  __int128 v33; // [rsp+40h] [rbp-20h] BYREF
  __int64 v34; // [rsp+50h] [rbp-10h]
  __int64 v35; // [rsp+A0h] [rbp+40h]
  PVOID v36; // [rsp+A8h] [rbp+48h]

  LOWORD(v1) = *(unsigned __int8 *)(a1 - 48 + 26);
  v3 = 64;
  v32 = 0LL;
  if ( (v1 & 2) != 0 )
  {
    v1 = ObpInfoMaskToOffset[v1 & 3];
    v4 = (__int64 *)(a1 - 48 - v1);
    if ( v4 )
    {
      v1 = *v4;
      if ( *(_QWORD *)(*v4 + 304) )
      {
        if ( *((_WORD *)v4 + 4) == 4 )
        {
          v5 = (WCHAR *)v4[2];
          if ( v5[1] == 58 )
          {
            LOWORD(v1) = RtlUpcaseUnicodeChar(*v5);
            if ( (unsigned __int16)(v1 - 65) <= 0x19u )
            {
              *(_DWORD *)(a1 + 24) = (unsigned __int16)v1 - 64;
              v34 = 0LL;
              v33 = 0LL;
              CurrentSilo = PsGetCurrentSilo();
              v36 = OBP_GET_SILO_ROOT_DIRECTORY_FROM_SILO((__int64)CurrentSilo);
              v7 = v36;
              PsReferenceSiloContext(v36);
              v31 = *(_OWORD *)(a1 + 8);
              CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
LABEL_8:
              v10 = *(void **)((unsigned __int64)CurrentServerSiloGlobals->Flink & 0xFFFFFFFFFFFFFFF0uLL);
              if ( v10 && (unsigned __int16)v31 >= 8u && **((_QWORD **)&v31 + 1) == 0x5C003F003F005CLL )
              {
                *((_QWORD *)&v31 + 1) += 8LL;
                LOWORD(v31) = v31 - 8;
                v8 = v10;
              }
              ObpLockDirectoryShared(&v33, v8);
              while ( (unsigned __int8)ObpParseComponentName(&v31, &v32) )
              {
                v11 = ObpLookupDirectoryEntry(&v32, 0LL, &v33);
                v12 = v11;
                if ( !v11 )
                  goto LABEL_27;
                v13 = (struct _OBJECT_TYPE *)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(v11 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(v11 - 48) >> 8)];
                if ( v13 != ObpDirectoryObjectType )
                {
                  if ( v13 == ObpSymbolicLinkObjectType && !*(_DWORD *)(v12 + 24) )
                  {
                    if ( v3 )
                    {
                      --v3;
                      ObpUnlockDirectory(&v33);
                      if ( (_WORD)v31 || (*(_DWORD *)(a1 + 28) & 0xE) != 0 )
                        *(_DWORD *)(a1 + 28) &= ~0x20u;
                      v8 = v36;
                      if ( (*(_BYTE *)(v12 + 28) & 1) != 0 )
                        v8 = ObpRootDirectoryObject;
                      v31 = *(_OWORD *)(v12 + 8);
                      goto LABEL_8;
                    }
                    v12 = 0LL;
                  }
LABEL_27:
                  v14 = 1;
                  v35 = *(_QWORD *)(*(_QWORD *)(a1 - 48 - ObpInfoMaskToOffset[*(_BYTE *)(a1 - 48 + 26) & 3]) + 304LL);
                  if ( !v12 )
                    goto LABEL_46;
                  if ( ((unsigned __int8)ObHeaderCookie ^ (unsigned __int8)(*(_BYTE *)(v12 - 24) ^ ((unsigned __int16)(v12 - 48) >> 8))) != *(_BYTE *)(IoDeviceObjectType + 40) )
                  {
                    v12 = 0LL;
                    goto LABEL_46;
                  }
                  v15 = *(_DWORD *)(v12 + 72);
                  if ( v15 > 0x10 )
                  {
                    v19 = v15 - 18;
                    if ( v19 )
                    {
                      v20 = v19 - 1;
                      if ( v20 )
                      {
                        v21 = v20 - 1;
                        if ( v21 )
                        {
                          v22 = v21 - 16;
                          if ( !v22 )
                          {
                            v14 = 6;
                            goto LABEL_46;
                          }
                          if ( v22 != 4 )
                            goto LABEL_42;
                        }
                      }
                    }
                  }
                  else if ( v15 != 16 )
                  {
                    v16 = v15 - 2;
                    if ( v16 && (v17 = v16 - 1) != 0 )
                    {
                      v18 = v17 - 4;
                      if ( !v18 || v18 - 1 <= 1 )
                      {
                        v14 = ((*(_DWORD *)(v12 + 52) & 1) == 0) + 2;
                        goto LABEL_46;
                      }
LABEL_42:
                      v14 = 0;
                    }
                    else
                    {
                      v14 = 5;
                    }
LABEL_46:
                    v23 = (unsigned int)(*(_DWORD *)(a1 + 24) - 1);
                    if ( !v12 || (*(_DWORD *)(a1 + 28) & 0x20) == 0 )
                      v12 = a1;
                    PsReferenceSiloContext((void *)v12);
                    CurrentThread = KeGetCurrentThread();
                    --CurrentThread->SpecialApcDisable;
                    v25 = (char *)KeAbPreAcquire((__int64)&CurrentServerSiloGlobals[7].Blink, 0LL);
                    v26 = v25;
                    if ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentServerSiloGlobals[7].Blink, 0LL) )
                      ExfAcquirePushLockExclusiveEx(
                        (unsigned __int64 *)&CurrentServerSiloGlobals[7].Blink,
                        v25,
                        (__int64)&CurrentServerSiloGlobals[7].Blink);
                    if ( v26 )
                      v26[10] = 1;
                    v27 = (unsigned int)v23;
                    *(_BYTE *)(v23 + v35 + 260) = v14;
                    v28 = 1 << v23;
                    *(_DWORD *)(v35 + 256) |= v28;
                    v29 = (void *)ObFastReplaceObject((volatile __int64 *)(v35 + 32 + 8 * v27), v12);
                    if ( v35 == ((unsigned __int64)CurrentServerSiloGlobals->Flink & 0xFFFFFFFFFFFFFFF0uLL) )
                      LODWORD(CurrentServerSiloGlobals->Blink) |= v28;
                    else
                      ++*((_DWORD *)&CurrentServerSiloGlobals->Blink + v27 + 1);
                    if ( (_InterlockedExchangeAdd64(
                            (volatile signed __int64 *)&CurrentServerSiloGlobals[7].Blink,
                            0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                      ExfTryToWakePushLock((volatile signed __int64 *)&CurrentServerSiloGlobals[7].Blink);
                    KeAbPostRelease((ULONG_PTR)&CurrentServerSiloGlobals[7].Blink);
                    KeLeaveGuardedRegion();
                    if ( v29 )
                      ObDereferenceObjectDeferDelete(v29);
                    v7 = v36;
                    break;
                  }
                  v14 = 4;
                  goto LABEL_46;
                }
                ObpLockChildDirectory(&v33, v12, 0LL);
              }
              ObpReleaseLookupContext((__int64)&v33);
              LOWORD(v1) = ObfDereferenceObject(v7);
            }
          }
        }
      }
    }
  }
  return v1;
}
