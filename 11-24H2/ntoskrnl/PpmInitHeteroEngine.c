/*
 * XREFs of PpmInitHeteroEngine @ 0x140C337F8
 * Callers:
 *     PoInitHeteroDetection @ 0x140C2F1BC (PoInitHeteroDetection.c)
 * Callees:
 *     KeQueryMaximumProcessorCountEx @ 0x14031D920 (KeQueryMaximumProcessorCountEx.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 PpmInitHeteroEngine()
{
  _QWORD *v0; // rdi
  ULONG MaximumProcessorCount; // eax
  ULONG_PTR v2; // rbx
  ULONG_PTR v3; // r15
  _QWORD *Pool2; // rsi
  unsigned int v5; // ebx
  __int64 v6; // r14
  unsigned int v7; // r12d
  __int64 v8; // rax
  __int64 v9; // rbp
  __int64 v10; // rax
  void *v11; // rcx
  void *v12; // rcx
  void *v13; // rcx
  void *v14; // rcx
  int v15; // eax

  v0 = 0LL;
  MaximumProcessorCount = KeQueryMaximumProcessorCountEx(0xFFFFu);
  v2 = MaximumProcessorCount;
  v3 = 4 * PpmHeteroWorkloadClasses * MaximumProcessorCount + 24;
  Pool2 = (_QWORD *)ExAllocatePool2(0x40uLL, v3, 0x704D5050uLL);
  if ( Pool2 )
  {
    v6 = ExAllocatePool2(0x40uLL, v2, 0x704D5050uLL);
    if ( !v6 )
      goto LABEL_8;
    v7 = 2 * PpmHeteroWorkloadClasses;
    v8 = ExAllocatePool2(0x40uLL, (unsigned int)(2 * PpmHeteroWorkloadClasses), 0x704D5050uLL);
    if ( !v8 )
      goto LABEL_8;
    Pool2[1] = v6;
    Pool2[2] = v8;
    *((_DWORD *)Pool2 + 1) = PpmHeteroWorkloadClasses;
    *(_DWORD *)Pool2 = v2;
    v0 = (_QWORD *)ExAllocatePool2(0x40uLL, v3, 0x704D5050uLL);
    if ( v0
      && (v9 = ExAllocatePool2(0x40uLL, v2, 0x704D5050uLL)) != 0
      && (v10 = ExAllocatePool2(0x40uLL, v7, 0x704D5050uLL)) != 0 )
    {
      v0[1] = v9;
      v0[2] = v10;
      v15 = PpmHeteroWorkloadClasses;
      *(_DWORD *)v0 = v2;
      v5 = 0;
      *((_DWORD *)v0 + 1) = v15;
      *(_QWORD *)&KeNumberProcessorsGroup0[1] = Pool2;
      PpmHeteroCapabilityTest = (__int64)v0;
    }
    else
    {
LABEL_8:
      v11 = (void *)Pool2[2];
      v5 = -1073741670;
      if ( v11 )
      {
        ExFreePoolWithTag(v11, 0x704D5050u);
        Pool2[2] = 0LL;
      }
      v12 = (void *)Pool2[1];
      if ( v12 )
      {
        ExFreePoolWithTag(v12, 0x704D5050u);
        Pool2[1] = 0LL;
      }
      ExFreePoolWithTag(Pool2, 0x704D5050u);
      if ( v0 )
      {
        v13 = (void *)v0[2];
        if ( v13 )
        {
          ExFreePoolWithTag(v13, 0x704D5050u);
          v0[2] = 0LL;
        }
        v14 = (void *)v0[1];
        if ( v14 )
        {
          ExFreePoolWithTag(v14, 0x704D5050u);
          v0[1] = 0LL;
        }
        ExFreePoolWithTag(v0, 0x704D5050u);
      }
    }
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v5;
}
