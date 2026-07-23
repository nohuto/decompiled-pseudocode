/*
 * XREFs of KiAllocatePrcbThread @ 0x1405B52C0
 * Callers:
 *     KiAllocateDpcDelegateThread @ 0x1405B2BD0 (KiAllocateDpcDelegateThread.c)
 *     KiAllocateSmtIsolationThread @ 0x1405C00B4 (KiAllocateSmtIsolationThread.c)
 *     KiAllocateIdleThread @ 0x140B5C794 (KiAllocateIdleThread.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     RtlUnicodeStringCopy @ 0x1403D20F0 (RtlUnicodeStringCopy.c)
 *     PsInitializeThreadRngState @ 0x14047A17C (PsInitializeThreadRngState.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     ObCreateObject @ 0x140973930 (ObCreateObject.c)
 *     KeInitThread @ 0x140B6A948 (KeInitThread.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

__int64 __fastcall KiAllocatePrcbThread(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        PCUNICODE_STRING SourceString,
        int a7)
{
  unsigned int v7; // r14d
  int v10; // r13d
  unsigned int v11; // r12d
  int v12; // eax
  char *v13; // rdi
  int inited; // ebx
  __int64 v15; // rcx
  char *v16; // rax
  PCUNICODE_STRING v17; // rbx
  __int64 Pool2; // rax
  __int64 v19; // rcx
  unsigned __int16 Length; // ax
  _QWORD v22[4]; // [rsp+58h] [rbp-31h] BYREF
  __int128 v23; // [rsp+78h] [rbp-11h]
  void *v24; // [rsp+88h] [rbp-1h]
  int v25; // [rsp+90h] [rbp+7h]
  int v26; // [rsp+94h] [rbp+Bh]
  __int64 v27; // [rsp+98h] [rbp+Fh]
  PVOID Object; // [rsp+F0h] [rbp+67h] BYREF

  v7 = (unsigned __int16)KiMaximumGroups;
  v10 = 8 * (unsigned __int16)KiMaximumGroups;
  v11 = 16 * (unsigned __int16)KiMaximumGroups + 1960;
  Object = 0LL;
  v12 = ObCreateObject(
          0,
          (_DWORD)PsThreadType,
          0,
          0,
          0,
          16 * (unsigned int)(unsigned __int16)KiMaximumGroups + 2504,
          0,
          1944,
          (__int64)&Object);
  v13 = (char *)Object;
  inited = v12;
  if ( v12 >= 0 )
  {
    memset_0(Object, 0, 0x798uLL);
    *((_QWORD *)v13 + 72) = v13 + 1944;
    *((_QWORD *)v13 + 69) = &v13[v10 + 1952];
    *((_DWORD *)v13 + 487) = 0;
    *((_WORD *)v13 + 972) = 1;
    *((_WORD *)v13 + 973) = v7;
    memset_0(v13 + 1952, 0, 8LL * v7);
    v15 = *((_QWORD *)v13 + 69);
    *(_WORD *)(v15 + 2) = v7;
    *(_DWORD *)(v15 + 4) = 0;
    *(_WORD *)v15 = 1;
    memset_0((void *)(v15 + 8), 0, 8LL * v7);
    v16 = &v13[v11];
    v22[0] = 0LL;
    v23 = 0LL;
    v27 = 0LL;
    v22[1] = a2;
    *(_QWORD *)v16 = v13;
    v16[12] = 6;
    *((_QWORD *)v13 + 142) = v16;
    *((_DWORD *)v13 + 257) = 32;
    *((_QWORD *)v13 + 191) = v13 + 1520;
    *((_QWORD *)v13 + 190) = v13 + 1520;
    *((_QWORD *)v13 + 193) = v13 + 1536;
    *((_QWORD *)v13 + 192) = v13 + 1536;
    *((_QWORD *)v13 + 194) = 0LL;
    *((_QWORD *)v13 + 216) = v13 + 1720;
    *((_QWORD *)v13 + 215) = v13 + 1720;
    *((_QWORD *)v13 + 219) = v13 + 1744;
    *((_QWORD *)v13 + 218) = v13 + 1744;
    v22[2] = 0LL;
    v25 = a5 + 1;
    v24 = &KiInitialProcess;
    v22[3] = 0LL;
    v26 = a7 | 2;
    inited = KeInitThread(v13, v22);
    if ( inited >= 0 )
    {
      v17 = SourceString;
      Pool2 = ExAllocatePool2(0x40uLL, SourceString->Length + 16LL, 0x6D4E6854u);
      *((_QWORD *)v13 + 212) = Pool2;
      v19 = Pool2;
      if ( Pool2 )
      {
        Length = v17->Length;
        *(_OWORD *)v19 = 0LL;
        *(_WORD *)(v19 + 2) = Length;
        *(_QWORD *)(v19 + 8) = v19 + 16;
        RtlUnicodeStringCopy(*((PUNICODE_STRING *)v13 + 212), v17);
        *((_QWORD *)v13 + 156) = a2;
        *((_QWORD *)v13 + 172) = a2;
        PsInitializeThreadRngState((unsigned __int64)v13);
        v13[1831] = -1;
        if ( KiSchedulerAssistThreadFlagEnabled )
        {
          _interlockedbittestandset((volatile signed __int32 *)v13, 0x16u);
          v13 = (char *)Object;
        }
        if ( PopEnergyEstimationEnabled )
        {
          _interlockedbittestandset((volatile signed __int32 *)v13, 0x15u);
          v13 = (char *)Object;
        }
        *a1 = v13;
        inited = 0;
        v13 = 0LL;
      }
      else
      {
        inited = -1073741801;
      }
    }
  }
  if ( v13 )
    ObfDereferenceObjectWithTag(v13, 0x746C6644u);
  return (unsigned int)inited;
}
