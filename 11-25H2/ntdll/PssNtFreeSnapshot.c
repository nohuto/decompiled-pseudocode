/*
 * XREFs of PssNtFreeSnapshot @ 0x1800C93A0
 * Callers:
 *     PssNtCaptureSnapshot @ 0x1800C7F80 (PssNtCaptureSnapshot.c)
 *     PsspDuplicateSnapshotLocalToRemote @ 0x1800C8DE0 (PsspDuplicateSnapshotLocalToRemote.c)
 * Callees:
 *     RtlFreeHeap @ 0x180080DD0 (RtlFreeHeap.c)
 *     PssNtValidateDescriptor @ 0x1800C9A80 (PssNtValidateDescriptor.c)
 *     NtClose @ 0x180163400 (NtClose.c)
 *     ZwFreeVirtualMemory @ 0x1801635E0 (ZwFreeVirtualMemory.c)
 */

__int64 __fastcall PssNtFreeSnapshot(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // r9
  void *v4; // rcx
  void *v5; // rcx
  void *v6; // rcx
  void *v7; // rcx
  void *v8; // rcx
  void *v9; // rcx
  int v10; // eax
  __int64 v11; // r8
  void *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v13; // [rsp+38h] [rbp+10h] BYREF
  __int64 v14; // [rsp+40h] [rbp+18h] BYREF

  v14 = 0LL;
  v13 = 0LL;
  result = PssNtValidateDescriptor(a1, retaddr);
  if ( (int)result >= 0 )
  {
    if ( (*(_BYTE *)(a1 + 4) & 2) != 0 )
    {
      v11 = *(_QWORD *)(a1 + 904);
      if ( v11 )
      {
        RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v11, v3);
        *(_QWORD *)(a1 + 904) = 0LL;
      }
      *(_DWORD *)(a1 + 4) &= ~2u;
    }
    else if ( (*(_BYTE *)(a1 + 4) & 4) != 0 && *(_QWORD *)(a1 + 904) )
    {
      v14 = *(_QWORD *)(a1 + 904);
      v13 = 0LL;
      ZwFreeVirtualMemory(-1LL, &v14, &v13, 0x8000LL);
      *(_DWORD *)(a1 + 4) &= ~4u;
      *(_QWORD *)(a1 + 904) = 0LL;
    }
    v4 = *(void **)(a1 + 1008);
    if ( v4 )
    {
      NtClose(v4);
      *(_QWORD *)(a1 + 1008) = 0LL;
    }
    v5 = *(void **)(a1 + 976);
    if ( v5 )
    {
      NtClose(v5);
      *(_QWORD *)(a1 + 976) = 0LL;
    }
    v6 = *(void **)(a1 + 920);
    if ( v6 )
    {
      NtClose(v6);
      *(_QWORD *)(a1 + 920) = 0LL;
    }
    v7 = *(void **)(a1 + 944);
    if ( v7 )
    {
      NtClose(v7);
      *(_QWORD *)(a1 + 944) = 0LL;
    }
    v8 = *(void **)(a1 + 896);
    if ( v8 )
    {
      NtClose(v8);
      *(_QWORD *)(a1 + 896) = 0LL;
    }
    v9 = *(void **)(a1 + 872);
    if ( v9 )
    {
      NtClose(v9);
      *(_QWORD *)(a1 + 872) = 0LL;
    }
    v10 = *(_DWORD *)(a1 + 4);
    if ( (v10 & 0x10) != 0 )
    {
      NtClose(*(HANDLE *)(a1 + 1128));
      *(_DWORD *)(a1 + 4) &= ~0x10u;
      v10 = *(_DWORD *)(a1 + 4);
      *(_QWORD *)(a1 + 1128) = 0LL;
      *(_DWORD *)(a1 + 1136) = 0;
    }
    if ( (v10 & 1) != 0 )
    {
      v14 = a1;
      v13 = 0LL;
      ZwFreeVirtualMemory(-1LL, &v14, &v13, 0x8000LL);
    }
    return 0LL;
  }
  return result;
}
