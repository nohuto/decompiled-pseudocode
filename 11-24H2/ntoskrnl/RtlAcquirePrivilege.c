/*
 * XREFs of RtlAcquirePrivilege @ 0x1409C1C84
 * Callers:
 *     VhdiAutoAttachOneVhd @ 0x140829E6C (VhdiAutoAttachOneVhd.c)
 *     PspAllocateProcess @ 0x140A1C4C0 (PspAllocateProcess.c)
 * Callees:
 *     ZwSetInformationThread @ 0x1406A65B0 (ZwSetInformationThread.c)
 *     ZwClose @ 0x1406A65F0 (ZwClose.c)
 *     ZwOpenProcessTokenEx @ 0x1406A6A10 (ZwOpenProcessTokenEx.c)
 *     ZwAdjustPrivilegesToken @ 0x1406A6C30 (ZwAdjustPrivilegesToken.c)
 *     RtlImpersonateSelfEx @ 0x1409C1F04 (RtlImpersonateSelfEx.c)
 *     RtlpOpenThreadToken @ 0x1409C2114 (RtlpOpenThreadToken.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall RtlAcquirePrivilege(unsigned int *a1, unsigned int a2, int a3, __int64 *a4)
{
  __int64 v5; // rbp
  char v7; // si
  __int64 Pool2; // rax
  __int64 v9; // rbx
  HANDLE *v10; // r15
  int v11; // edi
  __int64 v12; // rdx
  __int64 v13; // r8
  unsigned int v14; // eax
  __int64 v15; // rcx
  void *v17; // rcx
  __int64 v18; // rax
  __int64 ThreadInformation[7]; // [rsp+30h] [rbp-38h] BYREF

  v5 = a2;
  if ( (a3 & 0xFFFFFFFC) != 0 )
    return 3221225485LL;
  v7 = a3 | 1;
  if ( (a3 & 2) == 0 )
    v7 = a3;
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
            v11 = RtlImpersonateSelfEx(3LL, 40LL, v9);
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
            v14 = *a1;
            v12 += 12LL;
            v15 = *(_QWORD *)(v9 + 24);
            ++a1;
            ThreadInformation[0] = v14;
            *(_QWORD *)(v12 + v15 - 8) = v14;
            *(_DWORD *)(v12 + *(_QWORD *)(v9 + 24)) = 2;
            --v13;
          }
          while ( v13 );
        }
        v11 = ZwAdjustPrivilegesToken(*(_QWORD *)v9, 0LL);
        if ( v11 == -1073741789 )
        {
          while ( 1 )
          {
            v18 = ExAllocatePool2(0x41uLL);
            *(_QWORD *)(v9 + 16) = v18;
            if ( !v18 )
              break;
            v11 = ZwAdjustPrivilegesToken(*(_QWORD *)v9, 0LL);
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
            *a4 = v9;
            return 0LL;
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
    return (unsigned int)v11;
  }
  return 3221225495LL;
}
