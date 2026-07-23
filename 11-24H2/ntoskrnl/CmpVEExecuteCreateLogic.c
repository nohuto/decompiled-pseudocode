/*
 * XREFs of CmpVEExecuteCreateLogic @ 0x140A154DC
 * Callers:
 *     CmpDoParseKey @ 0x140872AE0 (CmpDoParseKey.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     KCBNeedsVirtualImage @ 0x14041A8FC (KCBNeedsVirtualImage.c)
 *     CmpDoAccessCheckOnKCB @ 0x1407DB9B8 (CmpDoAccessCheckOnKCB.c)
 *     CmpReparseToVirtualPath @ 0x1407DC0B8 (CmpReparseToVirtualPath.c)
 *     CmpReplicateKeyToVirtual @ 0x1407DC15C (CmpReplicateKeyToVirtual.c)
 *     CmpExamineSaclForAuditEvent @ 0x1407DD410 (CmpExamineSaclForAuditEvent.c)
 *     CmpReportAuditVirtualizationEvent @ 0x1407DDDB8 (CmpReportAuditVirtualizationEvent.c)
 *     CmpLockKcbExclusive @ 0x1408747A0 (CmpLockKcbExclusive.c)
 *     CmRealKCBToVirtualPath @ 0x1408E1EE8 (CmRealKCBToVirtualPath.c)
 *     CmpCheckAdminAccess @ 0x140990AA8 (CmpCheckAdminAccess.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 *     CmpUnlockKcb @ 0x140BBB2C0 (CmpUnlockKcb.c)
 *     CmpAttachToRegistryProcess @ 0x140BBB8E0 (CmpAttachToRegistryProcess.c)
 */

__int64 __fastcall CmpVEExecuteCreateLogic(
        ULONG_PTR a1,
        ULONG_PTR a2,
        UNICODE_STRING *a3,
        __int64 a4,
        char a5,
        int a6,
        __int64 a7,
        __int64 a8,
        UNICODE_STRING *a9)
{
  __int64 v13; // rdi
  int *v14; // r14
  __int64 v15; // rdx
  int v16; // ebx
  ACCESS_MASK v18; // ebx
  ULONG_PTR v19; // rax
  UNICODE_STRING *v20; // rbx
  wchar_t *Buffer; // rcx
  char v22[8]; // [rsp+20h] [rbp-20h] BYREF
  ULONG_PTR v23; // [rsp+28h] [rbp-18h] BYREF
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-10h] BYREF
  BOOLEAN v25; // [rsp+70h] [rbp+30h] BYREF

  v25 = 0;
  v23 = 0LL;
  v22[0] = 0;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, 0LL);
  if ( *(_WORD *)(a1 + 66) )
    goto LABEL_4;
  v13 = a8;
  if ( (*(_DWORD *)(a8 + 24) & 0x10) != 0 )
    goto LABEL_4;
  v14 = (int *)(a4 + 32);
  if ( !KCBNeedsVirtualImage() )
    goto LABEL_4;
  if ( (*(_DWORD *)(v13 + 160) & 1) == 0 )
  {
    CmpAttachToRegistryProcess((PRKAPC_STATE)(v13 + 168));
    *(_DWORD *)(v13 + 160) |= 1u;
  }
  if ( CmpReparseToVirtualPath(a1, v15, (__int64)v14, &DestinationString) )
  {
    ExFreePoolWithTag(DestinationString.Buffer, 0);
    RtlInitUnicodeString(&DestinationString, 0LL);
    goto LABEL_22;
  }
  if ( (*(_DWORD *)(a1 + 184) & 0x20) != 0 || (v18 = a6 | 4, CmpDoAccessCheckOnKCB(a1, a7, a6 | 4, a5)) )
  {
LABEL_4:
    v16 = -1073741199;
    goto LABEL_5;
  }
  if ( !CmpDoAccessCheckOnKCB(a1, a7, 131097, a5) )
    goto LABEL_26;
  v16 = CmpCheckAdminAccess(v18, (PSECURITY_DESCRIPTOR)(*(_QWORD *)(a1 + 88) + 32LL), (__int64)v14, &v25);
  if ( v16 < 0 )
    goto LABEL_5;
  if ( !v25 )
  {
LABEL_26:
    v16 = -1073741790;
    goto LABEL_5;
  }
  CmpUnlockKcb(a2);
  v16 = CmpReplicateKeyToVirtual(a1, (__int64)v14, (*(_DWORD *)v13 & 0x400) != 0, &v23);
  CmpLockKcbExclusive(a2);
  if ( v16 >= 0 )
  {
    v16 = CmpExamineSaclForAuditEvent((void *)(*(_QWORD *)(a1 + 88) + 32LL), (__int64)v14, v22);
    if ( v16 >= 0 )
    {
      if ( !v22[0] || (v16 = CmpReportAuditVirtualizationEvent(a1, (__int64)v14), v16 >= 0) )
      {
        v19 = v23;
        *(_DWORD *)(v13 + 100) |= 2u;
        *(_QWORD *)(v13 + 112) = v19;
LABEL_22:
        v16 = CmRealKCBToVirtualPath(a1, a3, v14, &DestinationString);
        if ( v16 >= 0 )
        {
          v20 = a9;
          Buffer = a9->Buffer;
          if ( Buffer )
            ExFreePoolWithTag(Buffer, 0);
          *v20 = DestinationString;
          RtlInitUnicodeString(&DestinationString, 0LL);
          *(_DWORD *)v13 |= 8u;
          v16 = 260;
        }
      }
    }
  }
LABEL_5:
  if ( DestinationString.Buffer )
    ExFreePoolWithTag(DestinationString.Buffer, 0);
  return (unsigned int)v16;
}
