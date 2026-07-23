/*
 * XREFs of CmpBuildAdminInformation @ 0x1409997F0
 * Callers:
 *     CmpCheckAdminAccess @ 0x14099970C (CmpCheckAdminAccess.c)
 * Callees:
 *     RtlEqualSid @ 0x14036A6E0 (RtlEqualSid.c)
 *     RtlSidHashInitialize @ 0x14036C330 (RtlSidHashInitialize.c)
 *     CmpAllocatePool @ 0x1403DCED4 (CmpAllocatePool.c)
 *     RtlLengthSid @ 0x140458B00 (RtlLengthSid.c)
 *     SeQueryInformationToken @ 0x1408418A0 (SeQueryInformationToken.c)
 *     RtlCopySidAndAttributesArray @ 0x140998A50 (RtlCopySidAndAttributesArray.c)
 *     RtlCopyLuidAndAttributesArray @ 0x140999B50 (RtlCopyLuidAndAttributesArray.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CmpBuildAdminInformation(__int64 *a1, __int64 a2)
{
  void *v2; // rcx
  unsigned int v3; // r13d
  unsigned int v4; // ebx
  unsigned int v5; // r15d
  unsigned int v6; // esi
  unsigned int v7; // r12d
  int v8; // edi
  __int64 v9; // r14
  PSE_EXPORTS v10; // r13
  ULONG v11; // ebx
  unsigned int v12; // r12d
  __int64 Pool; // rax
  __int64 v14; // r14
  ULONG *v15; // rdi
  ULONG v16; // edx
  __int64 v17; // rax
  __int64 v18; // rbx
  ULONG v19; // ecx
  __int64 v21; // rdx
  __int64 v22; // r12
  _SID_AND_ATTRIBUTES *v23; // r14
  PSID RemainingSidArea; // [rsp+40h] [rbp-38h] BYREF
  PSID Sid2; // [rsp+48h] [rbp-30h]
  _SID_AND_ATTRIBUTES Src[2]; // [rsp+50h] [rbp-28h] BYREF
  ULONG SidAreaSize; // [rsp+C8h] [rbp+50h] BYREF
  NTSTATUS v29; // [rsp+D0h] [rbp+58h]
  PVOID TokenInformation; // [rsp+D8h] [rbp+60h] BYREF

  v2 = *(void **)a2;
  RemainingSidArea = 0LL;
  SidAreaSize = 0;
  TokenInformation = 0LL;
  if ( !v2 )
    v2 = *(void **)(a2 + 16);
  v29 = SeQueryInformationToken(v2, TokenAccessInformation, &TokenInformation);
  v3 = v29;
  if ( v29 >= 0 )
  {
    v4 = 0;
    v5 = -1;
    v6 = -1;
    v7 = **(_DWORD **)TokenInformation;
    v8 = 16 * v7;
    if ( v7 )
    {
      v9 = *(_QWORD *)(*(_QWORD *)TokenInformation + 8LL);
      v10 = SeExports;
      do
      {
        Sid2 = *(PSID *)v9;
        RemainingSidArea = Sid2;
        v8 += RtlLengthSid(Sid2);
        if ( v5 == -1 && RtlEqualSid(v10->SeAliasAdminsSid, Sid2) )
        {
          v5 = v4;
        }
        else if ( v6 == -1 && (*(_BYTE *)(v9 + 8) & 0x60) == 0x60 )
        {
          v6 = v4;
        }
        ++v4;
        v9 += 16LL;
      }
      while ( v4 < v7 );
      v3 = v29;
    }
    v11 = 0;
    if ( v5 == -1 )
    {
      v11 = 1;
      Src[0].Attributes = 7;
      Src[0].Sid = SeExports->SeAliasAdminsSid;
    }
    if ( v6 == -1 )
    {
      v21 = v11++;
      Src[v21].Sid = SeExports->SeHighMandatorySid;
      Src[v21].Attributes = 96;
    }
    if ( v11 )
    {
      v22 = v11;
      v23 = Src;
      v8 += 16 * v11;
      do
      {
        v8 += RtlLengthSid(v23->Sid);
        ++v23;
        --v22;
      }
      while ( v22 );
    }
    v12 = (v8 + 7) & 0xFFFFFFF8;
    Pool = CmpAllocatePool(0x100uLL);
    v14 = Pool;
    if ( Pool )
    {
      v15 = (ULONG *)(Pool + 88);
      *(_QWORD *)(Pool + 24) = *((_QWORD *)TokenInformation + 3);
      *(_DWORD *)(Pool + 32) = *((_DWORD *)TokenInformation + 8);
      *(_DWORD *)(Pool + 36) = *((_DWORD *)TokenInformation + 9);
      *(_DWORD *)(Pool + 40) = *((_DWORD *)TokenInformation + 10);
      *(_DWORD *)(Pool + 44) = *((_DWORD *)TokenInformation + 11) & 0xFFFF9FFF | 0x2000;
      v16 = v11 + **(_DWORD **)TokenInformation;
      *(_QWORD *)(Pool + 96) = Pool + 360;
      *(_DWORD *)(Pool + 88) = v16;
      RtlCopySidAndAttributesArray(
        **(_DWORD **)TokenInformation,
        *(PSID_AND_ATTRIBUTES *)(*(_QWORD *)TokenInformation + 8LL),
        v12 - 16 * v16,
        (PSID_AND_ATTRIBUTES)(Pool + 360),
        (PSID)(Pool + 360 + 16 * v16),
        &RemainingSidArea,
        &SidAreaSize);
      if ( v5 != -1 )
        *(_DWORD *)(*(_QWORD *)(v14 + 96) + 16LL * v5 + 8) = 7;
      if ( v6 != -1 )
        *(_DWORD *)(*(_QWORD *)(v14 + 96) + 16LL * v6 + 8) = 96;
      if ( v11 )
        RtlCopySidAndAttributesArray(
          v11,
          Src,
          SidAreaSize,
          (PSID_AND_ATTRIBUTES)(*(_QWORD *)(v14 + 96) + 16LL * **(unsigned int **)TokenInformation),
          RemainingSidArea,
          &RemainingSidArea,
          &SidAreaSize);
      RtlSidHashInitialize(*(PSID_AND_ATTRIBUTES *)(v14 + 96), *v15, (PSID_AND_ATTRIBUTES_HASH)(v14 + 88));
      *(_QWORD *)v14 = v15;
      v17 = *(_QWORD *)(v14 + 96) + v12;
      *(_DWORD *)v17 = 0;
      *(_QWORD *)(v17 + 8) = 0LL;
      *(_QWORD *)(v14 + 8) = v17;
      v17 += 272LL;
      *(_DWORD *)v17 = 0;
      v18 = v17 + 272;
      *(_QWORD *)(v17 + 8) = 0LL;
      *(_QWORD *)(v14 + 64) = v17;
      *(_QWORD *)(v14 + 56) = 0LL;
      v19 = **((_DWORD **)TokenInformation + 2);
      *(_DWORD *)(v17 + 272) = v19;
      RtlCopyLuidAndAttributesArray(
        v19,
        (PLUID_AND_ATTRIBUTES)(*((_QWORD *)TokenInformation + 2) + 4LL),
        (PLUID_AND_ATTRIBUTES)(v17 + 276));
      *(_QWORD *)(v14 + 16) = v18;
      *a1 = v14;
    }
    else
    {
      v3 = -1073741670;
    }
  }
  if ( TokenInformation )
    ExFreePoolWithTag(TokenInformation, 0);
  return v3;
}
