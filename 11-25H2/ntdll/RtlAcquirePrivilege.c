/*
 * XREFs of RtlAcquirePrivilege @ 0x1800EA3C0
 * Callers:
 *     LdrpMinimalMapModule @ 0x18006D7B0 (LdrpMinimalMapModule.c)
 *     AcquireDebugPrivilege @ 0x18015E4A4 (AcquireDebugPrivilege.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180050340 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180080DD0 (RtlFreeHeap.c)
 *     RtlImpersonateSelfEx @ 0x1800EA710 (RtlImpersonateSelfEx.c)
 *     RtlpOpenThreadToken @ 0x1800EA84C (RtlpOpenThreadToken.c)
 *     NtSetInformationThread @ 0x1801633C0 (NtSetInformationThread.c)
 *     NtClose @ 0x180163400 (NtClose.c)
 *     NtOpenProcessTokenEx @ 0x180163820 (NtOpenProcessTokenEx.c)
 *     NtAdjustPrivilegesToken @ 0x180163A40 (NtAdjustPrivilegesToken.c)
 */

NTSTATUS __cdecl RtlAcquirePrivilege(PULONG Privilege, ULONG NumPriv, ULONG Flags, PVOID *ReturnedState)
{
  __int64 v5; // rsi
  char v7; // bp
  char *Heap; // rax
  char *v9; // rbx
  HANDLE *v10; // r15
  int v11; // edi
  __int64 v12; // rdx
  __int64 v13; // r8
  ULONG v14; // eax
  __int64 v15; // rcx
  char *v17; // r8
  _TOKEN_PRIVILEGES *PreviousState; // rax
  void *v19; // rcx
  __int64 ThreadInformation[7]; // [rsp+30h] [rbp-38h] BYREF
  ULONG BufferLength; // [rsp+80h] [rbp+18h] BYREF

  BufferLength = 0;
  v5 = NumPriv;
  if ( (Flags & 0xFFFFFFFC) != 0 )
    return -1073741811;
  v7 = Flags | 1;
  if ( (Flags & 2) == 0 )
    v7 = Flags;
  Heap = (char *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, NtdllBaseTag + 1310720, 12 * (NumPriv - 1 + 90LL));
  v9 = Heap;
  if ( Heap )
  {
    *(_QWORD *)Heap = 0LL;
    v10 = (HANDLE *)(Heap + 8);
    *((_QWORD *)Heap + 1) = 0LL;
    *((_DWORD *)Heap + 8) = 0;
    if ( !NtCurrentTeb()->IsImpersonating )
      goto LABEL_10;
    if ( (v7 & 1) != 0 )
    {
      v11 = RtlpOpenThreadToken(4u, v10);
      if ( v11 >= 0 )
      {
        *((_DWORD *)v9 + 8) |= 1u;
        ThreadInformation[0] = 0LL;
        NtSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadImpersonationToken, ThreadInformation, 8u);
        goto LABEL_9;
      }
    }
    else
    {
      v11 = RtlpOpenThreadToken(0x28u, (PHANDLE)Heap);
      if ( v11 >= 0 )
      {
LABEL_9:
        if ( *(_QWORD *)v9 )
        {
LABEL_13:
          *((_QWORD *)v9 + 3) = v9 + 1064;
          *((_QWORD *)v9 + 2) = v9 + 36;
          *((_DWORD *)v9 + 266) = v5;
          if ( (_DWORD)v5 )
          {
            v12 = 0LL;
            v13 = v5;
            do
            {
              v14 = *Privilege;
              v12 += 12LL;
              v15 = *((_QWORD *)v9 + 3);
              ++Privilege;
              ThreadInformation[0] = v14;
              *(_QWORD *)(v12 + v15 - 8) = v14;
              *(_DWORD *)(v12 + *((_QWORD *)v9 + 3)) = 2;
              --v13;
            }
            while ( v13 );
          }
          BufferLength = 1024;
          v11 = NtAdjustPrivilegesToken(
                  *(HANDLE *)v9,
                  0,
                  *((PTOKEN_PRIVILEGES *)v9 + 3),
                  0x400u,
                  *((PTOKEN_PRIVILEGES *)v9 + 2),
                  &BufferLength);
          if ( v11 == -1073741789 )
          {
            while ( 1 )
            {
              PreviousState = (_TOKEN_PRIVILEGES *)RtlAllocateHeap(
                                                     NtCurrentPeb()->ProcessHeap,
                                                     NtdllBaseTag + 1310720,
                                                     BufferLength);
              *((_QWORD *)v9 + 2) = PreviousState;
              if ( !PreviousState )
                break;
              v11 = NtAdjustPrivilegesToken(
                      *(HANDLE *)v9,
                      0,
                      *((PTOKEN_PRIVILEGES *)v9 + 3),
                      BufferLength,
                      PreviousState,
                      &BufferLength);
              if ( v11 != -1073741789 )
                goto LABEL_17;
              RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, *((PVOID *)v9 + 2));
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
              *ReturnedState = v9;
              return 0;
            }
          }
          v17 = (char *)*((_QWORD *)v9 + 2);
          if ( v17 && v17 != v9 + 36 )
            RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v17);
          NtClose(*(HANDLE *)v9);
          goto LABEL_27;
        }
LABEL_10:
        if ( (v7 & 2) != 0 )
        {
          v11 = NtOpenProcessTokenEx((HANDLE)0xFFFFFFFFFFFFFFFFLL, 0x28u, 0x200u, (PHANDLE)v9);
          if ( v11 >= 0 )
          {
            *((_DWORD *)v9 + 8) |= 2u;
            goto LABEL_13;
          }
        }
        else
        {
          v11 = RtlImpersonateSelfEx(SecurityDelegation, 0x28u, (PHANDLE)v9);
          if ( v11 >= 0 )
          {
            *((_DWORD *)v9 + 8) |= 1u;
            goto LABEL_13;
          }
        }
LABEL_27:
        if ( (v9[32] & 1) != 0 )
        {
          NtSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadImpersonationToken, v10, 8u);
          v19 = (void *)*((_QWORD *)v9 + 1);
          if ( v19 )
            NtClose(v19);
        }
      }
    }
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v9);
    return v11;
  }
  return -1073741801;
}
