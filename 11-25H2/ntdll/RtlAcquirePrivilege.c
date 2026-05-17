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

__int64 __fastcall RtlAcquirePrivilege(unsigned int *a1, unsigned int a2, int a3, _QWORD *a4)
{
  __int64 v5; // rsi
  char v7; // bp
  __int64 Heap; // rax
  _QWORD *v9; // rbx
  __int64 v10; // r15
  int v11; // edi
  __int64 v12; // r9
  __int64 v13; // rdx
  __int64 v14; // r8
  unsigned int v15; // eax
  __int64 v16; // rcx
  __int64 v17; // r9
  __int64 v19; // r8
  __int64 v20; // rax
  void *v21; // rcx
  _QWORD v22[7]; // [rsp+30h] [rbp-38h] BYREF

  v5 = a2;
  if ( (a3 & 0xFFFFFFFC) != 0 )
    return 3221225485LL;
  v7 = a3 | 1;
  if ( (a3 & 2) == 0 )
    v7 = a3;
  Heap = RtlAllocateHeap((char *)NtCurrentPeb()->ProcessHeap, NtdllBaseTag + 1310720, 12 * (a2 - 1 + 90LL));
  v9 = (_QWORD *)Heap;
  if ( Heap )
  {
    *(_QWORD *)Heap = 0LL;
    v10 = Heap + 8;
    *(_QWORD *)(Heap + 8) = 0LL;
    *(_DWORD *)(Heap + 32) = 0;
    if ( !NtCurrentTeb()->IsImpersonating )
      goto LABEL_10;
    if ( (v7 & 1) != 0 )
    {
      v11 = RtlpOpenThreadToken(4LL, v10);
      if ( v11 >= 0 )
      {
        *((_DWORD *)v9 + 8) |= 1u;
        v22[0] = 0LL;
        NtSetInformationThread(-2LL, 5LL, v22);
        goto LABEL_9;
      }
    }
    else
    {
      v11 = RtlpOpenThreadToken(40LL, Heap);
      if ( v11 >= 0 )
      {
LABEL_9:
        if ( *v9 )
        {
LABEL_13:
          v9[3] = v9 + 133;
          v9[2] = (char *)v9 + 36;
          *((_DWORD *)v9 + 266) = v5;
          if ( (_DWORD)v5 )
          {
            v13 = 0LL;
            v14 = v5;
            do
            {
              v15 = *a1;
              v13 += 12LL;
              v16 = v9[3];
              ++a1;
              v22[0] = v15;
              *(_QWORD *)(v13 + v16 - 8) = v15;
              *(_DWORD *)(v13 + v9[3]) = 2;
              --v14;
            }
            while ( v14 );
          }
          v11 = NtAdjustPrivilegesToken(*v9, 0LL, v9[3]);
          if ( v11 == -1073741789 )
          {
            while ( 1 )
            {
              v20 = RtlAllocateHeap((char *)NtCurrentPeb()->ProcessHeap, NtdllBaseTag + 1310720, 0x400uLL);
              v9[2] = v20;
              if ( !v20 )
                break;
              v11 = NtAdjustPrivilegesToken(*v9, 0LL, v9[3]);
              if ( v11 != -1073741789 )
                goto LABEL_17;
              RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v9[2], v17);
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
          v19 = v9[2];
          if ( v19 && (_QWORD *)v19 != (_QWORD *)((char *)v9 + 36) )
            RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v19, v17);
          NtClose((HANDLE)*v9);
          goto LABEL_27;
        }
LABEL_10:
        if ( (v7 & 2) != 0 )
        {
          v11 = NtOpenProcessTokenEx(-1LL, 40LL, 512LL, v9);
          if ( v11 >= 0 )
          {
            *((_DWORD *)v9 + 8) |= 2u;
            goto LABEL_13;
          }
        }
        else
        {
          v11 = RtlImpersonateSelfEx(3LL, 40LL, v9);
          if ( v11 >= 0 )
          {
            *((_DWORD *)v9 + 8) |= 1u;
            goto LABEL_13;
          }
        }
LABEL_27:
        if ( (v9[4] & 1) != 0 )
        {
          NtSetInformationThread(-2LL, 5LL, v10);
          v21 = (void *)v9[1];
          if ( v21 )
            NtClose(v21);
        }
      }
    }
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (__int64)v9, v12);
    return (unsigned int)v11;
  }
  return 3221225495LL;
}
