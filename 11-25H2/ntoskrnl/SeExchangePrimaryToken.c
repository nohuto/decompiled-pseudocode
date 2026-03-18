/*
 * XREFs of SeExchangePrimaryToken @ 0x14078384C
 * Callers:
 *     PspAssignPrimaryToken @ 0x1407676A0 (PspAssignPrimaryToken.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     PsGetSessionIdEx @ 0x140246440 (PsGetSessionIdEx.c)
 *     ExAcquireResourceExclusiveLite @ 0x14028A9E0 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x140296E10 (ExReleaseResourceLite.c)
 *     PsReferenceSiloContext @ 0x14029A8F0 (PsReferenceSiloContext.c)
 *     ObfDereferenceObject @ 0x140309490 (ObfDereferenceObject.c)
 *     SepSetTrustLevelForProcessToken @ 0x14036B140 (SepSetTrustLevelForProcessToken.c)
 *     PsGetSessionObjectById @ 0x1403D6D20 (PsGetSessionObjectById.c)
 *     PsGetSessionId @ 0x140433C80 (PsGetSessionId.c)
 *     ObFastReplaceObject @ 0x14044FAEC (ObFastReplaceObject.c)
 *     SepAuditAssignPrimaryToken @ 0x1407828B8 (SepAuditAssignPrimaryToken.c)
 *     SeAuditingWithTokenForSubcategory @ 0x140936F00 (SeAuditingWithTokenForSubcategory.c)
 *     SepSetTokenSessionById @ 0x140A00ACC (SepSetTokenSessionById.c)
 *     SepSetTokenLowboxNumber @ 0x140A0DB74 (SepSetTokenLowboxNumber.c)
 *     SepDereferenceLowBoxNumberEntry @ 0x140A0E024 (SepDereferenceLowBoxNumberEntry.c)
 */

__int64 __fastcall SeExchangePrimaryToken(__int64 a1, ULONG_PTR a2, unsigned __int64 *a3)
{
  bool v4; // zf
  void *SessionObjectById; // rdi
  __int64 result; // rax
  int SessionId; // eax
  struct _KTHREAD *CurrentThread; // rcx
  int v11; // ebp
  __int64 v12; // r9
  int v13; // r8d
  int v14; // r14d
  PVOID v15; // rcx
  __int64 v16; // rcx
  int v17; // r8d
  __int64 v18; // rdx
  unsigned __int64 v19; // rbx
  struct _KTHREAD *v20; // rax
  signed __int32 v21[8]; // [rsp+0h] [rbp-58h] BYREF
  char v22; // [rsp+68h] [rbp+10h] BYREF
  PVOID Object; // [rsp+78h] [rbp+20h] BYREF

  v4 = *(_DWORD *)(a2 + 192) == 1;
  Object = 0LL;
  SessionObjectById = 0LL;
  v22 = 0;
  if ( !v4 )
    return 3221225640LL;
  if ( (unsigned int)PsGetSessionIdEx(a1) != -1 && !SeTokenDoesNotTrackSessionObject )
    SessionObjectById = PsGetSessionObjectById();
  SessionId = PsGetSessionId(a1);
  CurrentThread = KeGetCurrentThread();
  v11 = SessionId;
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(*(PERESOURCE *)(a2 + 48), 1u);
  _InterlockedOr(v21, 0);
  if ( *(_BYTE *)(a2 + 204) )
  {
    _InterlockedOr(v21, 0);
    ExReleaseResourceLite(*(PERESOURCE *)(a2 + 48));
    KeLeaveCriticalRegion();
    if ( SessionObjectById )
      ObfDereferenceObject(SessionObjectById);
    return 3221225771LL;
  }
  *(_BYTE *)(a2 + 204) = 1;
  v14 = SepSetTrustLevelForProcessToken(a2, a1, &v22, v12);
  if ( v14 < 0 )
  {
    _InterlockedOr(v21, 0);
    ExReleaseResourceLite(*(PERESOURCE *)(a2 + 48));
    KeLeaveCriticalRegion();
    if ( !SessionObjectById )
      return (unsigned int)v14;
    v15 = SessionObjectById;
LABEL_13:
    ObfDereferenceObject(v15);
    return (unsigned int)v14;
  }
  if ( (*(_DWORD *)(a2 + 200) & 0x4000) != 0 )
  {
    v16 = *(unsigned int *)(a2 + 120);
    if ( (_DWORD)v16 != v11 )
    {
      SepDereferenceLowBoxNumberEntry(v16, *(_QWORD *)(a2 + 1080));
      *(_QWORD *)(a2 + 1080) = 0LL;
      LOBYTE(v17) = 1;
      SepSetTokenSessionById(a2, v11, v17, (_DWORD)SessionObjectById, (__int64)&Object);
      v18 = *(_QWORD *)(a2 + 784);
      *(_DWORD *)(a2 + 120) = v11;
      v14 = SepSetTokenLowboxNumber(a2, v18);
      if ( v14 < 0 )
      {
        _InterlockedOr(v21, 0);
        ExReleaseResourceLite(*(PERESOURCE *)(a2 + 48));
        KeLeaveCriticalRegion();
        v15 = Object;
        if ( !Object )
          return (unsigned int)v14;
        goto LABEL_13;
      }
    }
  }
  LOBYTE(v13) = 1;
  SepSetTokenSessionById(a2, v11, v13, (_DWORD)SessionObjectById, (__int64)&Object);
  *(_DWORD *)(a2 + 120) = v11;
  _InterlockedOr(v21, 0);
  ExReleaseResourceLite(*(PERESOURCE *)(a2 + 48));
  KeLeaveCriticalRegion();
  if ( Object )
    ObfDereferenceObject(Object);
  if ( (unsigned __int8)SeAuditingWithTokenForSubcategory(134LL, 0LL) )
    SepAuditAssignPrimaryToken(a1, a2);
  PsReferenceSiloContext((void *)a2);
  v19 = ObFastReplaceObject((volatile __int64 *)(a1 + 584), a2);
  if ( !v19 )
    return 3221225596LL;
  v20 = KeGetCurrentThread();
  --v20->KernelApcDisable;
  ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v19 + 48), 1u);
  _InterlockedOr(v21, 0);
  *(_BYTE *)(v19 + 204) = 0;
  _InterlockedOr(v21, 0);
  ExReleaseResourceLite(*(PERESOURCE *)(v19 + 48));
  KeLeaveCriticalRegion();
  result = 0LL;
  *a3 = v19;
  return result;
}
