/*
 * XREFs of ObpCreateSymbolicLinkName @ 0x140AC15D4
 * Callers:
 *     ObpCreateHandle @ 0x1408518D0 (ObpCreateHandle.c)
 * Callees:
 *     PsReferenceSiloContext @ 0x14029A8F0 (PsReferenceSiloContext.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ObpReleaseLookupContext @ 0x1402BC6D0 (ObpReleaseLookupContext.c)
 *     ObfDereferenceObject @ 0x140309490 (ObfDereferenceObject.c)
 *     PsGetCurrentServerSiloGlobals @ 0x14030F050 (PsGetCurrentServerSiloGlobals.c)
 *     KeLeaveGuardedRegion @ 0x140320910 (KeLeaveGuardedRegion.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 *     ObDereferenceObjectDeferDelete @ 0x1403F2E60 (ObDereferenceObjectDeferDelete.c)
 *     PsGetCurrentSilo @ 0x1403FA570 (PsGetCurrentSilo.c)
 *     OBP_GET_SILO_ROOT_DIRECTORY_FROM_SILO @ 0x1403FA5D0 (OBP_GET_SILO_ROOT_DIRECTORY_FROM_SILO.c)
 *     ObFastReplaceObject @ 0x14044FAEC (ObFastReplaceObject.c)
 *     Feature_Servicing_ReferSymbolicLinkFlagGlobal__private_IsEnabledDeviceUsageNoInline @ 0x1405C7D1C (Feature_Servicing_ReferSymbolicLinkFlagGlobal__private_IsEnabledDeviceUsageNoInline.c)
 *     ObpUnlockDirectory @ 0x140845F60 (ObpUnlockDirectory.c)
 *     ObpLookupDirectoryEntry @ 0x140846000 (ObpLookupDirectoryEntry.c)
 *     RtlUpcaseUnicodeChar @ 0x140848120 (RtlUpcaseUnicodeChar.c)
 *     ObpParseComponentName @ 0x14099B870 (ObpParseComponentName.c)
 *     ObpLockDirectoryShared @ 0x1409C2CD0 (ObpLockDirectoryShared.c)
 *     ObpLockChildDirectory @ 0x1409CD9D0 (ObpLockChildDirectory.c)
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
  int IsEnabledDeviceUsageNoInline; // eax
  char v15; // di
  unsigned int v16; // eax
  unsigned int v17; // eax
  unsigned int v18; // eax
  unsigned int v19; // eax
  unsigned int v20; // eax
  unsigned int v21; // eax
  unsigned int v22; // eax
  unsigned int v23; // eax
  __int64 v24; // r12
  struct _KTHREAD *CurrentThread; // rax
  __int64 *v26; // rax
  __int64 *v27; // r15
  __int64 v28; // r15
  int v29; // r12d
  void *v30; // rdi
  __int128 v32; // [rsp+20h] [rbp-40h] BYREF
  __int128 v33; // [rsp+30h] [rbp-30h] BYREF
  __int128 v34; // [rsp+40h] [rbp-20h] BYREF
  __int64 v35; // [rsp+50h] [rbp-10h]
  __int64 v36; // [rsp+A0h] [rbp+40h]
  PVOID v37; // [rsp+A8h] [rbp+48h]

  LOWORD(v1) = *(unsigned __int8 *)(a1 - 48 + 26);
  v3 = 64;
  v33 = 0LL;
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
              v35 = 0LL;
              v34 = 0LL;
              CurrentSilo = PsGetCurrentSilo();
              v37 = OBP_GET_SILO_ROOT_DIRECTORY_FROM_SILO((__int64)CurrentSilo);
              v7 = v37;
              PsReferenceSiloContext(v37);
              v32 = *(_OWORD *)(a1 + 8);
              CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
LABEL_8:
              v10 = *(void **)((unsigned __int64)CurrentServerSiloGlobals->Flink & 0xFFFFFFFFFFFFFFF0uLL);
              if ( v10 && (unsigned __int16)v32 >= 8u && **((_QWORD **)&v32 + 1) == 0x5C003F003F005CLL )
              {
                *((_QWORD *)&v32 + 1) += 8LL;
                LOWORD(v32) = v32 - 8;
                v8 = v10;
              }
              ObpLockDirectoryShared((__int64)&v34, (__int64)v8);
              while ( ObpParseComponentName((__int16 *)&v32, &v33) )
              {
                v11 = ObpLookupDirectoryEntry((unsigned __int16 *)&v33, 0, (__int64)&v34);
                v12 = v11;
                if ( !v11 )
                  goto LABEL_28;
                v13 = (struct _OBJECT_TYPE *)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(v11 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(v11 - 48) >> 8)];
                if ( v13 != ObpDirectoryObjectType )
                {
                  if ( v13 == ObpSymbolicLinkObjectType && !*(_DWORD *)(v12 + 24) )
                  {
                    if ( v3 )
                    {
                      --v3;
                      ObpUnlockDirectory((__int64)&v34);
                      if ( (_WORD)v32 || (*(_DWORD *)(a1 + 28) & 0xE) != 0 )
                        *(_DWORD *)(a1 + 28) &= ~0x20u;
                      IsEnabledDeviceUsageNoInline = Feature_Servicing_ReferSymbolicLinkFlagGlobal__private_IsEnabledDeviceUsageNoInline();
                      v8 = v37;
                      if ( IsEnabledDeviceUsageNoInline )
                      {
                        if ( (*(_BYTE *)(v12 + 28) & 1) != 0 )
                          v8 = ObpRootDirectoryObject;
                      }
                      v32 = *(_OWORD *)(v12 + 8);
                      goto LABEL_8;
                    }
                    v12 = 0LL;
                  }
LABEL_28:
                  v15 = 1;
                  v36 = *(_QWORD *)(*(_QWORD *)(a1 - 48 - ObpInfoMaskToOffset[*(_BYTE *)(a1 - 48 + 26) & 3]) + 304LL);
                  if ( !v12 )
                    goto LABEL_47;
                  if ( ((unsigned __int8)ObHeaderCookie ^ (unsigned __int8)(*(_BYTE *)(v12 - 24) ^ ((unsigned __int16)(v12 - 48) >> 8))) != *(_BYTE *)(IoDeviceObjectType + 40) )
                  {
                    v12 = 0LL;
                    goto LABEL_47;
                  }
                  v16 = *(_DWORD *)(v12 + 72);
                  if ( v16 > 0x10 )
                  {
                    v20 = v16 - 18;
                    if ( v20 )
                    {
                      v21 = v20 - 1;
                      if ( v21 )
                      {
                        v22 = v21 - 1;
                        if ( v22 )
                        {
                          v23 = v22 - 16;
                          if ( !v23 )
                          {
                            v15 = 6;
                            goto LABEL_47;
                          }
                          if ( v23 != 4 )
                            goto LABEL_43;
                        }
                      }
                    }
                  }
                  else if ( v16 != 16 )
                  {
                    v17 = v16 - 2;
                    if ( v17 && (v18 = v17 - 1) != 0 )
                    {
                      v19 = v18 - 4;
                      if ( !v19 || v19 - 1 <= 1 )
                      {
                        v15 = ((*(_DWORD *)(v12 + 52) & 1) == 0) + 2;
                        goto LABEL_47;
                      }
LABEL_43:
                      v15 = 0;
                    }
                    else
                    {
                      v15 = 5;
                    }
LABEL_47:
                    v24 = (unsigned int)(*(_DWORD *)(a1 + 24) - 1);
                    if ( !v12 || (*(_DWORD *)(a1 + 28) & 0x20) == 0 )
                      v12 = a1;
                    PsReferenceSiloContext((void *)v12);
                    CurrentThread = KeGetCurrentThread();
                    --CurrentThread->SpecialApcDisable;
                    v26 = KeAbPreAcquire((__int64)&CurrentServerSiloGlobals[7].Blink, 0LL);
                    v27 = v26;
                    if ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentServerSiloGlobals[7].Blink, 0LL) )
                      ExfAcquirePushLockExclusiveEx(
                        (unsigned __int64 *)&CurrentServerSiloGlobals[7].Blink,
                        v26,
                        (__int64)&CurrentServerSiloGlobals[7].Blink);
                    if ( v27 )
                      *((_BYTE *)v27 + 10) = 1;
                    v28 = (unsigned int)v24;
                    *(_BYTE *)(v24 + v36 + 260) = v15;
                    v29 = 1 << v24;
                    *(_DWORD *)(v36 + 256) |= v29;
                    v30 = (void *)ObFastReplaceObject((volatile __int64 *)(v36 + 32 + 8 * v28), v12);
                    if ( v36 == ((unsigned __int64)CurrentServerSiloGlobals->Flink & 0xFFFFFFFFFFFFFFF0uLL) )
                      LODWORD(CurrentServerSiloGlobals->Blink) |= v29;
                    else
                      ++*((_DWORD *)&CurrentServerSiloGlobals->Blink + v28 + 1);
                    if ( (_InterlockedExchangeAdd64(
                            (volatile signed __int64 *)&CurrentServerSiloGlobals[7].Blink,
                            0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                      ExfTryToWakePushLock((volatile signed __int64 *)&CurrentServerSiloGlobals[7].Blink);
                    KeAbPostRelease((ULONG_PTR)&CurrentServerSiloGlobals[7].Blink);
                    KeLeaveGuardedRegion();
                    if ( v30 )
                      ObDereferenceObjectDeferDelete(v30);
                    v7 = v37;
                    break;
                  }
                  v15 = 4;
                  goto LABEL_47;
                }
                ObpLockChildDirectory((__int64 *)&v34, v12, 0);
              }
              ObpReleaseLookupContext((__int64)&v34);
              LOWORD(v1) = ObfDereferenceObject(v7);
            }
          }
        }
      }
    }
  }
  return v1;
}
