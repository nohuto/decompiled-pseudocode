/*
 * XREFs of PopGetPowerRequestListInfo @ 0x140A76148
 * Callers:
 *     NtPowerInformation @ 0x1409EDB00 (NtPowerInformation.c)
 * Callees:
 *     PopReleaseRwLock @ 0x1402AE8FC (PopReleaseRwLock.c)
 *     PopAcquireRwLockShared @ 0x1402AE968 (PopAcquireRwLockShared.c)
 *     PoStoreDiagnosticContext @ 0x1402BA9FC (PoStoreDiagnosticContext.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PopGetPowerRequestListInfo(_QWORD *a1, _DWORD *a2)
{
  PVOID *v4; // rbx
  ULONG_PTR v5; // rdi
  __int64 v6; // rcx
  int v7; // ebx
  __int64 Pool2; // rax
  _QWORD *v10; // rsi
  __int64 *v11; // r15
  __int64 v12; // rax
  PVOID *v13; // r14
  __int64 v14; // rbp
  unsigned __int64 v15; // rdi
  _DWORD *v16; // rcx
  __int64 v17; // r9
  __int64 v18; // rcx
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // [rsp+60h] [rbp+18h] BYREF

  PopAcquireRwLockShared(&PopPowerRequestLock);
  v4 = (PVOID *)PopPowerRequestObjectList;
  v5 = (8LL * (unsigned int)PopPowerRequestObjectCount + 15) & 0xFFFFFFFFFFFFFFF8uLL;
  while ( v4 != &PopPowerRequestObjectList )
  {
    v6 = (__int64)v4[12];
    v20 = 0LL;
    PoStoreDiagnosticContext(v6, 0LL, &v20);
    v5 = (v20 + 39 + v5) & 0xFFFFFFFFFFFFFFF8uLL;
    if ( v5 > 0xFFFFFFFF )
    {
      v7 = -1073741789;
      goto LABEL_6;
    }
    v4 = (PVOID *)*v4;
  }
  Pool2 = ExAllocatePool2(0x100uLL, v5, 0x206D654Du);
  v10 = (_QWORD *)Pool2;
  if ( Pool2 )
  {
    v11 = (__int64 *)(Pool2 + 8);
    v12 = (unsigned int)PopPowerRequestObjectCount;
    *v10 = (unsigned int)PopPowerRequestObjectCount;
    v13 = (PVOID *)PopPowerRequestObjectList;
    v14 = 8 * v12 + 8;
    v15 = v5 - v14;
    while ( 1 )
    {
      if ( v13 == &PopPowerRequestObjectList )
      {
        *a1 = v10;
        v7 = 0;
        *a2 = v14;
        goto LABEL_6;
      }
      if ( v15 < 0x48 )
        break;
      *(_DWORD *)((char *)v10 + v14) = *((_DWORD *)v13 + 5);
      v16 = (_DWORD *)((char *)v10 + v14 + 4);
      v17 = 6LL;
      do
      {
        *v16 = *(_DWORD *)((char *)v16 + (char *)v13 - ((char *)v10 + v14) + 36);
        ++v16;
        --v17;
      }
      while ( v17 );
      v18 = (__int64)v13[12];
      v20 = v15 - 32;
      v7 = PoStoreDiagnosticContext(v18, (_QWORD *)((char *)v10 + v14 + 32), &v20);
      if ( v7 < 0 )
        goto LABEL_19;
      v19 = (v20 + 39) & 0xFFFFFFFFFFFFFFF8uLL;
      if ( v15 < v19 )
        break;
      *v11 = v14;
      v15 -= v19;
      v13 = (PVOID *)*v13;
      v14 += v19;
      ++v11;
    }
    v7 = -1073741789;
LABEL_19:
    ExFreePoolWithTag(v10, 0x206D654Du);
  }
  else
  {
    v7 = -1073741670;
  }
LABEL_6:
  PopReleaseRwLock(&PopPowerRequestLock);
  return (unsigned int)v7;
}
