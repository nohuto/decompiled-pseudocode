/*
 * XREFs of RtlAcquirePrivilege @ 0x140A280B4
 * Callers:
 *     VhdiAutoAttachOneVhd @ 0x14081A06C (VhdiAutoAttachOneVhd.c)
 *     PspAllocateProcess @ 0x1409BE78C (PspAllocateProcess.c)
 * Callees:
 *     ZwSetInformationThread @ 0x14069B2E0 (ZwSetInformationThread.c)
 *     ZwClose @ 0x14069B320 (ZwClose.c)
 *     ZwOpenProcessTokenEx @ 0x14069B740 (ZwOpenProcessTokenEx.c)
 *     ZwAdjustPrivilegesToken @ 0x14069B960 (ZwAdjustPrivilegesToken.c)
 *     RtlImpersonateSelfEx @ 0x140A28334 (RtlImpersonateSelfEx.c)
 *     RtlpOpenThreadToken @ 0x140A28468 (RtlpOpenThreadToken.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

NTSTATUS __cdecl RtlAcquirePrivilege(PULONG Privilege, ULONG NumPriv, ULONG Flags, PVOID *ReturnedState)
{
  __int64 v5; // rbp
  char v7; // si
  __int64 Pool2; // rax
  __int64 v9; // rbx
  HANDLE *v10; // r15
  int v11; // edi
  __int64 v12; // rdx
  __int64 v13; // r8
  ULONG v14; // eax
  __int64 v15; // rcx
  void *v17; // rcx
  struct _TOKEN_PRIVILEGES *PreviousState; // rax
  _QWORD ThreadInformation[7]; // [rsp+30h] [rbp-38h] BYREF
  ULONG BufferLength; // [rsp+80h] [rbp+18h] BYREF

  BufferLength = 0;
  v5 = NumPriv;
  if ( (Flags & 0xFFFFFFFC) != 0 )
    return -1073741811;
  v7 = Flags | 1;
  if ( (Flags & 2) == 0 )
    v7 = Flags;
  Pool2 = ExAllocatePool2(0x41uLL);
  v9 = Pool2;
  if ( Pool2 )
  {
    *(_QWORD *)Pool2 = 0LL;
    v10 = (HANDLE *)(Pool2 + 8);
    *(_QWORD *)(Pool2 + 8) = 0LL;
    *(_DWORD *)(Pool2 + 32) = 0;
    if ( (*(_DWORD *)(&KeGetCurrentThread()[1].SwapListEntry + 1) & 8) == 0 )
      goto LABEL_9;
    if ( (v7 & 1) != 0 )
    {
      v11 = RtlpOpenThreadToken(4u, v10);
      if ( v11 >= 0 )
      {
        *(_DWORD *)(v9 + 32) |= 1u;
        ThreadInformation[0] = 0LL;
        ZwSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadImpersonationToken, ThreadInformation, 8u);
        goto LABEL_9;
      }
    }
    else
    {
      v11 = RtlpOpenThreadToken(0x28u, (PHANDLE)Pool2);
      if ( v11 >= 0 )
      {
LABEL_9:
        if ( !*(_QWORD *)v9 )
        {
          if ( (v7 & 2) != 0 )
          {
            v11 = ZwOpenProcessTokenEx((HANDLE)0xFFFFFFFFFFFFFFFFLL, 0x28u, 0x200u, (PHANDLE)v9);
            if ( v11 >= 0 )
            {
              *(_DWORD *)(v9 + 32) |= 2u;
              goto LABEL_13;
            }
          }
          else
          {
            v11 = RtlImpersonateSelfEx(SecurityDelegation, 0x28u, (PHANDLE)v9);
            if ( v11 >= 0 )
            {
              *(_DWORD *)(v9 + 32) |= 1u;
              goto LABEL_13;
            }
          }
LABEL_26:
          if ( (*(_DWORD *)(v9 + 32) & 1) != 0 )
          {
            ZwSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadImpersonationToken, v10, 8u);
            if ( *v10 )
              ZwClose(*v10);
          }
          goto LABEL_29;
        }
LABEL_13:
        *(_QWORD *)(v9 + 24) = v9 + 1064;
        *(_QWORD *)(v9 + 16) = v9 + 36;
        *(_DWORD *)(v9 + 1064) = v5;
        if ( (_DWORD)v5 )
        {
          v12 = 0LL;
          v13 = v5;
          do
          {
            v14 = *Privilege;
            v12 += 12LL;
            v15 = *(_QWORD *)(v9 + 24);
            ++Privilege;
            ThreadInformation[0] = v14;
            *(_QWORD *)(v12 + v15 - 8) = v14;
            *(_DWORD *)(v12 + *(_QWORD *)(v9 + 24)) = 2;
            --v13;
          }
          while ( v13 );
        }
        BufferLength = 1024;
        v11 = ZwAdjustPrivilegesToken(
                *(HANDLE *)v9,
                0,
                *(PTOKEN_PRIVILEGES *)(v9 + 24),
                0x400u,
                *(PTOKEN_PRIVILEGES *)(v9 + 16),
                &BufferLength);
        if ( v11 == -1073741789 )
        {
          while ( 1 )
          {
            PreviousState = (struct _TOKEN_PRIVILEGES *)ExAllocatePool2(0x41uLL);
            *(_QWORD *)(v9 + 16) = PreviousState;
            if ( !PreviousState )
              break;
            v11 = ZwAdjustPrivilegesToken(
                    *(HANDLE *)v9,
                    0,
                    *(PTOKEN_PRIVILEGES *)(v9 + 24),
                    BufferLength,
                    PreviousState,
                    &BufferLength);
            if ( v11 != -1073741789 )
              goto LABEL_17;
            ExFreePoolWithTag(*(PVOID *)(v9 + 16), 0);
          }
          v11 = -1073741801;
        }
        else
        {
LABEL_17:
          if ( v11 == 262 )
          {
            if ( (_DWORD)v5 != 1 )
              goto LABEL_19;
            v11 = -1073741727;
          }
          else if ( v11 >= 0 )
          {
LABEL_19:
            *ReturnedState = (PVOID)v9;
            return 0;
          }
        }
        v17 = *(void **)(v9 + 16);
        if ( v17 && v17 != (void *)(v9 + 36) )
          ExFreePoolWithTag(v17, 0);
        ZwClose(*(HANDLE *)v9);
        goto LABEL_26;
      }
    }
LABEL_29:
    ExFreePoolWithTag((PVOID)v9, 0);
    return v11;
  }
  return -1073741801;
}
