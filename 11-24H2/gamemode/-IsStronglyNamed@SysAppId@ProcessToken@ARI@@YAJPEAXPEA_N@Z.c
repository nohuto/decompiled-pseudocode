/*
 * XREFs of ?IsStronglyNamed@SysAppId@ProcessToken@ARI@@YAJPEAXPEA_N@Z @ 0x180010444
 * Callers:
 *     ?IsProcessStronglyNamed@SysAppId@ProcessToken@ARI@@YAJPEAXPEA_N@Z @ 0x1800103A8 (-IsProcessStronglyNamed@SysAppId@ProcessToken@ARI@@YAJPEAXPEA_N@Z.c)
 * Callees:
 *     memset_0 @ 0x180002E14 (memset_0.c)
 *     ??$AutoPtrAriHeapDeallocate@U_TOKEN_SECURITY_ATTRIBUTES_INFORMATION@@@ARI@@YAXPEAU_TOKEN_SECURITY_ATTRIBUTES_INFORMATION@@@Z @ 0x1800101D0 (--$AutoPtrAriHeapDeallocate@U_TOKEN_SECURITY_ATTRIBUTES_INFORMATION@@@ARI@@YAXPEAU_TOKEN_SECURIT.c)
 */

ULONG __fastcall ARI::ProcessToken::SysAppId::IsStronglyNamed(HANDLE TokenHandle, _BYTE *a2, bool *a3)
{
  NTSTATUS InformationToken; // eax
  PVOID Heap; // rax
  PVOID v8; // rdi
  int v9; // eax
  ULONG v10; // ebx
  __int64 v11; // rbx
  const UNICODE_STRING *v12; // rdx
  _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF
  size_t Size; // [rsp+58h] [rbp+10h] BYREF

  LODWORD(Size) = 0;
  *a2 = 0;
  InformationToken = NtQueryInformationToken(TokenHandle, TokenSecurityAttributes, 0LL, 0, (PULONG)&Size);
  if ( InformationToken != -1073741789 )
  {
    if ( InformationToken )
      return RtlNtStatusToDosErrorNoTeb(InformationToken);
    else
      return 1359;
  }
  if ( !is_mul_ok((unsigned int)Size, 0x10uLL) )
  {
    v8 = 0LL;
    goto LABEL_18;
  }
  Heap = RtlAllocateHeap(
           NtCurrentPeb()->ProcessHeap,
           ((unsigned int)Size * (unsigned __int128)0x10uLL) >> 64,
           16LL * (unsigned int)Size);
  v8 = Heap;
  if ( !Heap )
  {
LABEL_18:
    ARI::AutoPtrAriHeapDeallocate<_TOKEN_SECURITY_ATTRIBUTES_INFORMATION>(v8);
    return 8;
  }
  memset_0(Heap, 0, (unsigned int)Size);
  v9 = NtQueryInformationToken(TokenHandle, TokenSecurityAttributes, v8, Size, (PULONG)&Size);
  if ( v9 >= 0 )
  {
    if ( *((_DWORD *)v8 + 1) )
    {
      DestinationString = 0LL;
      RtlInitUnicodeString(&DestinationString, L"WIN://SYSAPPID");
      v11 = 0LL;
      if ( *((_DWORD *)v8 + 1) )
      {
        while ( 1 )
        {
          v12 = (const UNICODE_STRING *)(*((_QWORD *)v8 + 1) + 40 * v11);
          if ( v12[1].Length == 3 && !RtlCompareUnicodeString(&DestinationString, v12, 1u) )
            break;
          v11 = (unsigned int)(v11 + 1);
          if ( (unsigned int)v11 >= *((_DWORD *)v8 + 1) )
            goto LABEL_16;
        }
        *a2 = 1;
      }
    }
LABEL_16:
    ARI::AutoPtrAriHeapDeallocate<_TOKEN_SECURITY_ATTRIBUTES_INFORMATION>(v8);
    return 0;
  }
  else
  {
    v10 = RtlNtStatusToDosErrorNoTeb(v9);
    ARI::AutoPtrAriHeapDeallocate<_TOKEN_SECURITY_ATTRIBUTES_INFORMATION>(v8);
    return v10;
  }
}
