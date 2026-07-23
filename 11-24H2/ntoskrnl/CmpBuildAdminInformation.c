/*
 * XREFs of CmpBuildAdminInformation @ 0x140990B8C
 * Callers:
 *     CmpCheckAdminAccess @ 0x140990AA8 (CmpCheckAdminAccess.c)
 * Callees:
 *     CmpAllocatePool @ 0x1403C9EA4 (CmpAllocatePool.c)
 *     RtlSidHashInitialize @ 0x1403EAE30 (RtlSidHashInitialize.c)
 *     RtlEqualSid @ 0x1403EB6C0 (RtlEqualSid.c)
 *     RtlLengthSid @ 0x14044B2D0 (RtlLengthSid.c)
 *     SeQueryInformationToken @ 0x1408E4F90 (SeQueryInformationToken.c)
 *     RtlCopySidAndAttributesArray @ 0x140990EE0 (RtlCopySidAndAttributesArray.c)
 *     RtlCopyLuidAndAttributesArray @ 0x140990FB0 (RtlCopyLuidAndAttributesArray.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
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
  int v13; // edx
  unsigned int v14; // eax
  __int64 Pool; // rax
  __int64 v16; // r14
  ULONG *v17; // rdi
  ULONG v18; // edx
  __int64 v19; // rax
  __int64 v20; // rbx
  ULONG v21; // ecx
  __int64 v23; // rdx
  __int64 v24; // r12
  _SID_AND_ATTRIBUTES *v25; // r14
  PSID RemainingSidArea; // [rsp+40h] [rbp-38h] BYREF
  PSID Sid2; // [rsp+48h] [rbp-30h]
  _SID_AND_ATTRIBUTES Src[2]; // [rsp+50h] [rbp-28h] BYREF
  ULONG SidAreaSize; // [rsp+C8h] [rbp+50h] BYREF
  NTSTATUS v31; // [rsp+D0h] [rbp+58h]
  PVOID TokenInformation; // [rsp+D8h] [rbp+60h] BYREF

  v2 = *(void **)a2;
  RemainingSidArea = 0LL;
  SidAreaSize = 0;
  TokenInformation = 0LL;
  if ( !v2 )
    v2 = *(void **)(a2 + 16);
  v31 = SeQueryInformationToken(v2, TokenAccessInformation, &TokenInformation);
  v3 = v31;
  if ( v31 >= 0 )
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
      v3 = v31;
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
      v23 = v11++;
      Src[v23].Sid = SeExports->SeHighMandatorySid;
      Src[v23].Attributes = 96;
    }
    if ( v11 )
    {
      v24 = v11;
      v25 = Src;
      v8 += 16 * v11;
      do
      {
        v8 += RtlLengthSid(v25->Sid);
        ++v25;
        --v24;
      }
      while ( v24 );
    }
    v12 = (v8 + 7) & 0xFFFFFFF8;
    v13 = 12 * **((_DWORD **)TokenInformation + 2);
    v14 = v12 + v13 + 920 - 12;
    if ( !v13 )
      v14 = v12 + 920;
    Pool = CmpAllocatePool(0x100uLL, v14, 0x20204D43u);
    v16 = Pool;
    if ( Pool )
    {
      v17 = (ULONG *)(Pool + 88);
      *(_QWORD *)(Pool + 24) = *((_QWORD *)TokenInformation + 3);
      *(_DWORD *)(Pool + 32) = *((_DWORD *)TokenInformation + 8);
      *(_DWORD *)(Pool + 36) = *((_DWORD *)TokenInformation + 9);
      *(_DWORD *)(Pool + 40) = *((_DWORD *)TokenInformation + 10);
      *(_DWORD *)(Pool + 44) = *((_DWORD *)TokenInformation + 11) & 0xFFFF9FFF | 0x2000;
      v18 = v11 + **(_DWORD **)TokenInformation;
      *(_QWORD *)(Pool + 96) = Pool + 360;
      *(_DWORD *)(Pool + 88) = v18;
      RtlCopySidAndAttributesArray(
        **(_DWORD **)TokenInformation,
        *(PSID_AND_ATTRIBUTES *)(*(_QWORD *)TokenInformation + 8LL),
        v12 - 16 * v18,
        (PSID_AND_ATTRIBUTES)(Pool + 360),
        (PSID)(Pool + 360 + 16 * v18),
        &RemainingSidArea,
        &SidAreaSize);
      if ( v5 != -1 )
        *(_DWORD *)(*(_QWORD *)(v16 + 96) + 16LL * v5 + 8) = 7;
      if ( v6 != -1 )
        *(_DWORD *)(*(_QWORD *)(v16 + 96) + 16LL * v6 + 8) = 96;
      if ( v11 )
        RtlCopySidAndAttributesArray(
          v11,
          Src,
          SidAreaSize,
          (PSID_AND_ATTRIBUTES)(*(_QWORD *)(v16 + 96) + 16LL * **(unsigned int **)TokenInformation),
          RemainingSidArea,
          &RemainingSidArea,
          &SidAreaSize);
      RtlSidHashInitialize(*(PSID_AND_ATTRIBUTES *)(v16 + 96), *v17, (PSID_AND_ATTRIBUTES_HASH)(v16 + 88));
      *(_QWORD *)v16 = v17;
      v19 = *(_QWORD *)(v16 + 96) + v12;
      *(_DWORD *)v19 = 0;
      *(_QWORD *)(v19 + 8) = 0LL;
      *(_QWORD *)(v16 + 8) = v19;
      v19 += 272LL;
      *(_DWORD *)v19 = 0;
      v20 = v19 + 272;
      *(_QWORD *)(v19 + 8) = 0LL;
      *(_QWORD *)(v16 + 64) = v19;
      *(_QWORD *)(v16 + 56) = 0LL;
      v21 = **((_DWORD **)TokenInformation + 2);
      *(_DWORD *)(v19 + 272) = v21;
      RtlCopyLuidAndAttributesArray(
        v21,
        (PLUID_AND_ATTRIBUTES)(*((_QWORD *)TokenInformation + 2) + 4LL),
        (PLUID_AND_ATTRIBUTES)(v19 + 276));
      *(_QWORD *)(v16 + 16) = v20;
      *a1 = v16;
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
