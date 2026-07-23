/*
 * XREFs of CmpLinkHiveToMaster @ 0x14092E380
 * Callers:
 *     CmpLoadKeyCommon @ 0x14045ABA8 (CmpLoadKeyCommon.c)
 *     CmpFinishSystemHivesLoad @ 0x1407CA720 (CmpFinishSystemHivesLoad.c)
 *     CmpLoadHiveVolatile @ 0x1407CEB00 (CmpLoadHiveVolatile.c)
 *     CmInitSystem1 @ 0x140C47010 (CmInitSystem1.c)
 *     CmpInitializePreloadedHive @ 0x140C496B0 (CmpInitializePreloadedHive.c)
 *     CmpInitializeSystemHive @ 0x140C49DD8 (CmpInitializeSystemHive.c)
 * Callees:
 *     KeResetEvent @ 0x14029EAC0 (KeResetEvent.c)
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     RtlUnicodeStringCopy @ 0x1403D20F0 (RtlUnicodeStringCopy.c)
 *     PsGetCurrentSilo @ 0x1403FCA20 (PsGetCurrentSilo.c)
 *     CmpDrainDelayDerefContext @ 0x14040AEB0 (CmpDrainDelayDerefContext.c)
 *     CmpInitializeDelayDerefContext @ 0x140418320 (CmpInitializeDelayDerefContext.c)
 *     CmpFreeTransientPoolWithTag @ 0x140438B90 (CmpFreeTransientPoolWithTag.c)
 *     SetFailureLocation @ 0x14045B110 (SetFailureLocation.c)
 *     CmpRemoveHiveFromNamespace @ 0x14048BF4C (CmpRemoveHiveFromNamespace.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     CmpLogHiveLinkEvent @ 0x1407D6958 (CmpLogHiveLinkEvent.c)
 *     CmpRecordUnloadEventForHive @ 0x1407DAD3C (CmpRecordUnloadEventForHive.c)
 *     ObReferenceObjectByHandle @ 0x140847200 (ObReferenceObjectByHandle.c)
 *     CmpConstructName @ 0x14087A710 (CmpConstructName.c)
 *     CmpReferenceKeyControlBlockUnsafe @ 0x14087F300 (CmpReferenceKeyControlBlockUnsafe.c)
 *     ObOpenObjectByNameEx @ 0x1408A41E0 (ObOpenObjectByNameEx.c)
 *     CmpEtwDumpKcb @ 0x14092E190 (CmpEtwDumpKcb.c)
 *     CmpInitializeKcbCache @ 0x14092E274 (CmpInitializeKcbCache.c)
 *     CmpInitializeParseContext @ 0x14092F540 (CmpInitializeParseContext.c)
 *     CmpCleanupParseContext @ 0x14092F5F0 (CmpCleanupParseContext.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     CmpAttachToRegistryProcess @ 0x140BBB8E0 (CmpAttachToRegistryProcess.c)
 *     CmpDetachFromRegistryProcess @ 0x140BBB920 (CmpDetachFromRegistryProcess.c)
 *     CmpLockRegistry @ 0x140BBBE60 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x140BBBF50 (CmpUnlockRegistry.c)
 */

__int64 __fastcall CmpLinkHiveToMaster(
        unsigned __int16 *a1,
        __int64 a2,
        __int64 a3,
        char a4,
        unsigned int a5,
        char a6,
        PRKEVENT Event,
        __int64 a8,
        void *a9,
        __int64 a10,
        char a11,
        _OWORD *a12)
{
  unsigned __int16 *v13; // r12
  int v15; // eax
  int v16; // eax
  int v17; // ebx
  int v18; // eax
  POBJECT_TYPE *v19; // rbx
  struct _LIST_ENTRY *CurrentSilo; // rax
  int v21; // eax
  __int64 *v22; // rsi
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rcx
  UNICODE_STRING *v28; // r15
  __int64 Pool2; // rax
  __int64 v30; // rcx
  _QWORD *v31; // rbx
  __int64 v32; // rdx
  __int128 v33; // xmm1
  __int128 v34; // xmm0
  __int128 v35; // xmm1
  __int128 v36; // xmm0
  __int64 v38; // rcx
  char v39; // [rsp+40h] [rbp-C0h]
  PVOID Object; // [rsp+48h] [rbp-B8h] BYREF
  unsigned __int16 *v41; // [rsp+50h] [rbp-B0h]
  HANDLE Handle; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v43; // [rsp+60h] [rbp-A0h]
  __int64 v44; // [rsp+68h] [rbp-98h]
  __int64 v45; // [rsp+70h] [rbp-90h]
  __int128 v46; // [rsp+78h] [rbp-88h] BYREF
  _DWORD v47[2]; // [rsp+88h] [rbp-78h] BYREF
  __int64 v48; // [rsp+90h] [rbp-70h]
  unsigned __int16 *v49; // [rsp+98h] [rbp-68h]
  int v50; // [rsp+A0h] [rbp-60h]
  int v51; // [rsp+A4h] [rbp-5Ch]
  __int64 v52; // [rsp+A8h] [rbp-58h]
  __int64 v53; // [rsp+B0h] [rbp-50h]
  _DWORD v54[10]; // [rsp+C0h] [rbp-40h] BYREF
  int v55; // [rsp+E8h] [rbp-18h]
  __int64 v56; // [rsp+F0h] [rbp-10h]
  PVOID v57; // [rsp+110h] [rbp+10h]
  __int128 v58; // [rsp+240h] [rbp+140h]
  __int128 v59; // [rsp+250h] [rbp+150h]
  __int128 v60; // [rsp+260h] [rbp+160h]
  __int128 v61; // [rsp+270h] [rbp+170h]
  __int128 v62; // [rsp+280h] [rbp+180h]
  struct _KAPC_STATE ApcState; // [rsp+290h] [rbp+190h] BYREF

  v13 = a1;
  v44 = a8;
  Object = a9;
  v43 = a2;
  v41 = a1;
  v45 = a10;
  v47[1] = 0;
  v51 = 0;
  memset_0(v54, 0, 0x1D0uLL);
  Handle = 0LL;
  v39 = 0;
  v46 = 0LL;
  memset(&ApcState, 0, sizeof(ApcState));
  CmpInitializeParseContext(v54);
  CmpInitializeDelayDerefContext(&v46);
  v15 = *(_DWORD *)(a3 + 160);
  if ( (v15 & 0x20) == 0 )
  {
    v39 = 1;
    *(_DWORD *)(a3 + 160) = v15 | 0x20;
    *(_QWORD *)(a3 + 4168) = KeGetCurrentThread();
  }
  v16 = CmpInitializeKcbCache(a3, a5);
  v17 = v16;
  if ( v16 >= 0 )
  {
    v18 = 67;
    v56 = a3;
    if ( a6 )
      v18 = 2115;
    v54[0] = v18;
    if ( a4 )
      v55 = -1;
    else
      v55 = *(_DWORD *)(*(_QWORD *)(a3 + 64) + 36LL);
    v53 = 0LL;
    v19 = CmKeyObjectType;
    v57 = Object;
    v48 = v43;
    v49 = v41;
    v52 = v44;
    v47[0] = 48;
    v50 = 576;
    CurrentSilo = PsGetCurrentSilo();
    v21 = ObOpenObjectByNameEx((__int64)v47, (__int64)v19, 0, 0LL, 131103, (__int64)v54, (__int64)CurrentSilo, &Handle);
    v17 = v21;
    if ( v21 < 0 )
    {
      SetFailureLocation((__int64)a12, 0, 30, v21, 32);
      v33 = v59;
      a12[22] = v58;
      v34 = v60;
      a12[23] = v33;
      v35 = v61;
      a12[24] = v34;
      v36 = v62;
      a12[25] = v35;
      a12[26] = v36;
LABEL_34:
      v13 = v41;
      goto LABEL_35;
    }
    Object = 0LL;
    ObReferenceObjectByHandle(Handle, 0, (POBJECT_TYPE)CmKeyObjectType, 0, &Object, 0LL);
    v22 = (__int64 *)Object;
    ZwClose(Handle);
    CmpAttachToRegistryProcess(&ApcState);
    if ( !a11 )
      CmpLockRegistry(v24);
    v28 = (UNICODE_STRING *)CmpConstructName(v22[1], v23, v25, v26);
    if ( !a11 )
      CmpUnlockRegistry(v27);
    if ( v28 && (Pool2 = ExAllocatePool2(0x100uLL, v28->Length, 0x70684D43u), (*(_QWORD *)(a3 + 1864) = Pool2) != 0LL) )
    {
      *(_WORD *)(a3 + 1856) = 0;
      *(_WORD *)(a3 + 1858) = v28->Length;
      RtlUnicodeStringCopy((PUNICODE_STRING)(a3 + 1856), v28);
      *(_BYTE *)(a3 + 141) = 0;
      *(_DWORD *)(a3 + 1676) = _InterlockedIncrement(&CmHiveIdentity);
      if ( !a11 )
        CmpLockRegistry(1LL);
      if ( a6 )
      {
        CmpReferenceKeyControlBlockUnsafe((volatile signed __int64 *)v22[1]);
        *(_QWORD *)(a3 + 2936) = v22[1];
        if ( Event )
        {
          KeResetEvent(Event);
          CmpRecordUnloadEventForHive(a3, Event);
        }
      }
      if ( CmpTraceRoutine )
        CmpEtwDumpKcb(v22[1], 0x21u);
      CmpDetachFromRegistryProcess(&ApcState);
      if ( !a11 )
        CmpUnlockRegistry(v30);
      v31 = (_QWORD *)v45;
      if ( v45 )
      {
        CmpReferenceKeyControlBlockUnsafe((volatile signed __int64 *)v22[1]);
        *v31 = v22[1];
      }
      ObfDereferenceObject(Object);
      if ( a6 )
        *(_BYTE *)(a3 + 2944) = 1;
      v17 = 0;
      v22 = 0LL;
    }
    else
    {
      v17 = -1073741670;
      if ( !a11 )
        CmpLockRegistry(v27);
      CmpRemoveHiveFromNamespace(a3, v22[1], (__int64)&v46);
      CmpDrainDelayDerefContext((_QWORD **)&v46);
      if ( !a11 )
        CmpUnlockRegistry(v38);
      CmpDetachFromRegistryProcess(&ApcState);
      if ( !v28 )
        goto LABEL_32;
    }
    CmpFreeTransientPoolWithTag(v28, 0x624E4D43u);
LABEL_32:
    if ( v22 )
      ObfDereferenceObject(v22);
    goto LABEL_34;
  }
  SetFailureLocation((__int64)a12, 0, 30, v16, 16);
LABEL_35:
  if ( v39 )
  {
    *(_DWORD *)(a3 + 160) &= ~0x20u;
    *(_QWORD *)(a3 + 4168) = 0LL;
  }
  if ( v17 >= 0 && (DWORD2(PerfGlobalGroupMask[0]) & 0x1000000) != 0 )
    CmpLogHiveLinkEvent(a3, v13);
  LOBYTE(v32) = a11;
  CmpCleanupParseContext(v54, v32);
  return (unsigned int)v17;
}
