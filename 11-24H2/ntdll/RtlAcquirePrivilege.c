/*
 * XREFs of RtlAcquirePrivilege @ 0x1800E9050
 * Callers:
 *     LdrpMinimalMapModule @ 0x180072F40 (LdrpMinimalMapModule.c)
 *     AcquireDebugPrivilege @ 0x18015CFE0 (AcquireDebugPrivilege.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180011260 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x1800269F0 (RtlFreeHeap.c)
 *     RtlImpersonateSelfEx @ 0x1800E93A0 (RtlImpersonateSelfEx.c)
 *     RtlpOpenThreadToken @ 0x1800E94DC (RtlpOpenThreadToken.c)
 *     NtSetInformationThread @ 0x180161E30 (NtSetInformationThread.c)
 *     NtClose @ 0x180161E70 (NtClose.c)
 *     NtOpenProcessTokenEx @ 0x180162290 (NtOpenProcessTokenEx.c)
 *     NtAdjustPrivilegesToken @ 0x1801624B0 (NtAdjustPrivilegesToken.c)
 */

__int64 __fastcall RtlAcquirePrivilege(unsigned int *a1, unsigned int a2, int a3, _QWORD *a4)
{
  __int64 v5; // rsi
  char v7; // bp
  __int64 Heap; // rax
  _QWORD *v9; // rbx
  __int64 v10; // r15
  int v11; // edi
  __int64 v12; // rdx
  __int64 v13; // r8
  unsigned int v14; // eax
  __int64 v15; // rcx
  unsigned __int64 v17; // r8
  __int64 v18; // rax
  void *v19; // rcx
  _QWORD v20[7]; // [rsp+30h] [rbp-38h] BYREF

  v5 = a2;
  if ( (a3 & 0xFFFFFFFC) != 0 )
    return 3221225485LL;
  v7 = a3 | 1;
  if ( (a3 & 2) == 0 )
    v7 = a3;
  Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, NtdllBaseTag + 1310720, 12 * (a2 - 1 + 90LL));
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
        v20[0] = 0LL;
        NtSetInformationThread(-2LL, 5LL, v20);
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
            v12 = 0LL;
            v13 = v5;
            do
            {
              v14 = *a1;
              v12 += 12LL;
              v15 = v9[3];
              ++a1;
              v20[0] = v14;
              *(_QWORD *)(v12 + v15 - 8) = v14;
              *(_DWORD *)(v12 + v9[3]) = 2;
              --v13;
            }
            while ( v13 );
          }
          v11 = NtAdjustPrivilegesToken(*v9, 0LL, v9[3]);
          if ( v11 == -1073741789 )
          {
            while ( 1 )
            {
              v18 = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, NtdllBaseTag + 1310720, 0x400uLL);
              v9[2] = v18;
              if ( !v18 )
                break;
              v11 = NtAdjustPrivilegesToken(*v9, 0LL, v9[3]);
              if ( v11 != -1073741789 )
                goto LABEL_17;
              RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v9[2]);
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
          v17 = v9[2];
          if ( v17 && (_QWORD *)v17 != (_QWORD *)((char *)v9 + 36) )
            RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v17);
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
          v19 = (void *)v9[1];
          if ( v19 )
            NtClose(v19);
        }
      }
    }
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)v9);
    return (unsigned int)v11;
  }
  return 3221225495LL;
}
