/*
 * XREFs of SeExchangePrimaryToken @ 0x140792C70
 * Callers:
 *     PspAssignPrimaryToken @ 0x140777290 (PspAssignPrimaryToken.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x14022BF50 (ExAcquireResourceExclusiveLite.c)
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14028AA60 (ExReleaseResourceLite.c)
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     PsGetSessionIdEx @ 0x14030CBE0 (PsGetSessionIdEx.c)
 *     PsReferenceSiloContext @ 0x14031EF70 (PsReferenceSiloContext.c)
 *     PsGetSessionId @ 0x1403C1560 (PsGetSessionId.c)
 *     PsGetSessionObjectById @ 0x1403C2DE0 (PsGetSessionObjectById.c)
 *     SepSetTrustLevelForProcessToken @ 0x1403EB1F4 (SepSetTrustLevelForProcessToken.c)
 *     ObFastReplaceObject @ 0x14044674C (ObFastReplaceObject.c)
 *     SepAuditAssignPrimaryToken @ 0x140791B48 (SepAuditAssignPrimaryToken.c)
 *     SeAuditingWithTokenForSubcategory @ 0x1408F2E10 (SeAuditingWithTokenForSubcategory.c)
 *     SepSetTokenSessionById @ 0x1409F6674 (SepSetTokenSessionById.c)
 *     SepDereferenceLowBoxNumberEntry @ 0x140A3B0C0 (SepDereferenceLowBoxNumberEntry.c)
 *     SepSetTokenLowboxNumber @ 0x140A42978 (SepSetTokenLowboxNumber.c)
 */

__int64 __fastcall SeExchangePrimaryToken(__int64 a1, ULONG_PTR a2, unsigned __int64 *a3)
{
  bool v4; // zf
  void *SessionObjectById; // rdi
  __int64 result; // rax
  int SessionId; // eax
  struct _KTHREAD *CurrentThread; // rcx
  int v11; // ebp
  int v12; // r8d
  int v13; // r14d
  PVOID v14; // rcx
  __int64 v15; // rcx
  int v16; // r8d
  __int64 v17; // rdx
  unsigned __int64 v18; // rbx
  struct _KTHREAD *v19; // rax
  signed __int32 v20[8]; // [rsp+0h] [rbp-58h] BYREF
  char v21; // [rsp+68h] [rbp+10h] BYREF
  PVOID Object; // [rsp+78h] [rbp+20h] BYREF

  v4 = *(_DWORD *)(a2 + 192) == 1;
  Object = 0LL;
  SessionObjectById = 0LL;
  v21 = 0;
  if ( !v4 )
    return 3221225640LL;
  if ( (unsigned int)PsGetSessionIdEx(a1) != -1 && !SeTokenDoesNotTrackSessionObject )
    SessionObjectById = PsGetSessionObjectById();
  SessionId = PsGetSessionId(a1);
  CurrentThread = KeGetCurrentThread();
  v11 = SessionId;
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(*(PERESOURCE *)(a2 + 48), 1u);
  _InterlockedOr(v20, 0);
  if ( *(_BYTE *)(a2 + 204) )
  {
    _InterlockedOr(v20, 0);
    ExReleaseResourceLite(*(PERESOURCE *)(a2 + 48));
    KeLeaveCriticalRegion();
    if ( SessionObjectById )
      ObfDereferenceObject(SessionObjectById);
    return 3221225771LL;
  }
  *(_BYTE *)(a2 + 204) = 1;
  v13 = SepSetTrustLevelForProcessToken(a2, a1, &v21);
  if ( v13 < 0 )
  {
    _InterlockedOr(v20, 0);
    ExReleaseResourceLite(*(PERESOURCE *)(a2 + 48));
    KeLeaveCriticalRegion();
    if ( !SessionObjectById )
      return (unsigned int)v13;
    v14 = SessionObjectById;
LABEL_13:
    ObfDereferenceObject(v14);
    return (unsigned int)v13;
  }
  if ( (*(_DWORD *)(a2 + 200) & 0x4000) != 0 )
  {
    v15 = *(unsigned int *)(a2 + 120);
    if ( (_DWORD)v15 != v11 )
    {
      SepDereferenceLowBoxNumberEntry(v15, *(_QWORD *)(a2 + 1080));
      *(_QWORD *)(a2 + 1080) = 0LL;
      LOBYTE(v16) = 1;
      SepSetTokenSessionById(a2, v11, v16, (_DWORD)SessionObjectById, (__int64)&Object);
      v17 = *(_QWORD *)(a2 + 784);
      *(_DWORD *)(a2 + 120) = v11;
      v13 = SepSetTokenLowboxNumber(a2, v17);
      if ( v13 < 0 )
      {
        _InterlockedOr(v20, 0);
        ExReleaseResourceLite(*(PERESOURCE *)(a2 + 48));
        KeLeaveCriticalRegion();
        v14 = Object;
        if ( !Object )
          return (unsigned int)v13;
        goto LABEL_13;
      }
    }
  }
  LOBYTE(v12) = 1;
  SepSetTokenSessionById(a2, v11, v12, (_DWORD)SessionObjectById, (__int64)&Object);
  *(_DWORD *)(a2 + 120) = v11;
  _InterlockedOr(v20, 0);
  ExReleaseResourceLite(*(PERESOURCE *)(a2 + 48));
  KeLeaveCriticalRegion();
  if ( Object )
    ObfDereferenceObject(Object);
  if ( (unsigned __int8)SeAuditingWithTokenForSubcategory(134LL, 0LL) )
    SepAuditAssignPrimaryToken(a1, a2);
  PsReferenceSiloContext((void *)a2);
  v18 = ObFastReplaceObject((volatile __int64 *)(a1 + 584), a2);
  if ( !v18 )
    return 3221225596LL;
  v19 = KeGetCurrentThread();
  --v19->KernelApcDisable;
  ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v18 + 48), 1u);
  _InterlockedOr(v20, 0);
  *(_BYTE *)(v18 + 204) = 0;
  _InterlockedOr(v20, 0);
  ExReleaseResourceLite(*(PERESOURCE *)(v18 + 48));
  KeLeaveCriticalRegion();
  result = 0LL;
  *a3 = v18;
  return result;
}
