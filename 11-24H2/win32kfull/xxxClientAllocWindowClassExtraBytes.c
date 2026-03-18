/*
 * XREFs of xxxClientAllocWindowClassExtraBytes @ 0x14019D004
 * Callers:
 *     xxxCreateWindowEx @ 0x14004B6FC (xxxCreateWindowEx.c)
 *     xxxValidateClassAndSize @ 0x14023A978 (xxxValidateClassAndSize.c)
 * Callees:
 *     RtlCopyFromUser @ 0x14026E428 (RtlCopyFromUser.c)
 *     ??0LeaveEnterUserCritIfAcquired@@QEAA@XZ @ 0x1402B80BC (--0LeaveEnterUserCritIfAcquired@@QEAA@XZ.c)
 *     ??1LeaveEnterUserCritIfAcquired@@QEAA@XZ @ 0x1402B8118 (--1LeaveEnterUserCritIfAcquired@@QEAA@XZ.c)
 */

volatile void *__fastcall xxxClientAllocWindowClassExtraBytes(SIZE_T Length, __int64 a2)
{
  SIZE_T v2; // rdi
  int v3; // ebx
  volatile void *v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 CurrentProcessWow64Process; // rax
  int v10; // [rsp+70h] [rbp+8h] BYREF
  int v11; // [rsp+78h] [rbp+10h] BYREF
  int v12; // [rsp+7Ch] [rbp+14h]
  void *Src; // [rsp+80h] [rbp+18h] BYREF
  volatile void *Address; // [rsp+88h] [rbp+20h] BYREF

  v12 = HIDWORD(a2);
  v2 = (unsigned int)Length;
  Src = 0LL;
  v10 = 0;
  v11 = Length;
  LeaveEnterUserCritIfAcquired::LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)&Address);
  EtwTraceBeginCallback(123LL);
  v3 = KeUserModeCallback(123LL, &v11, 4LL, &Src, &v10);
  EtwTraceEndCallback(123LL);
  LeaveEnterUserCritIfAcquired::~LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)&Address);
  if ( v3 < 0 || v10 != 24 )
    return 0LL;
  Address = 0LL;
  RtlCopyFromUser(&Address, Src, 8uLL);
  v4 = Address;
  CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v6, v5, v7);
  ProbeForRead(v4, v2, CurrentProcessWow64Process != 0 ? 1 : 4);
  return v4;
}
