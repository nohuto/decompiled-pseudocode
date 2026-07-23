/*
 * XREFs of NtCreateThreadEx @ 0x1408F8F00
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitializeExtendedContext2 @ 0x140235240 (RtlInitializeExtendedContext2.c)
 *     RtlGetExtendedContextLength2 @ 0x1402354D0 (RtlGetExtendedContextLength2.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     _alloca_probe @ 0x1406B4C20 (_alloca_probe.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x140847AA0 (ObpReferenceObjectByHandleWithTag.c)
 *     PspBuildCreateProcessContext @ 0x1408F9210 (PspBuildCreateProcessContext.c)
 *     PspCreateThread @ 0x1408FA8F0 (PspCreateThread.c)
 *     PspDeleteCreateProcessContext @ 0x1408FAD80 (PspDeleteCreateProcessContext.c)
 */

NTSTATUS __cdecl NtCreateThreadEx(
        PHANDLE ThreadHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        HANDLE ProcessHandle,
        PUSER_THREAD_START_ROUTINE StartRoutine,
        PVOID Argument,
        ULONG CreateFlags,
        SIZE_T ZeroBits,
        SIZE_T StackSize,
        SIZE_T MaximumStackSize,
        PPS_ATTRIBUTE_LIST AttributeList)
{
  ULONG *v13; // r12
  char *v14; // r14
  ULONG *v15; // rbx
  __int64 v16; // rcx
  __int64 v17; // rdx
  NTSTATUS result; // eax
  _DWORD *v19; // rdi
  ULONG64 v20; // r12
  unsigned __int64 v21; // rax
  void *v22; // rsp
  NTSTATUS Thread; // ebx
  ULONG v24[8]; // [rsp+50h] [rbp-70h] BYREF
  __int64 v25; // [rsp+80h] [rbp-40h]
  _WORD v26[12]; // [rsp+88h] [rbp-38h] BYREF
  char v27; // [rsp+A0h] [rbp-20h] BYREF
  SIZE_T v28; // [rsp+A8h] [rbp-18h]
  SIZE_T v29; // [rsp+B0h] [rbp-10h]
  SIZE_T v30; // [rsp+B8h] [rbp-8h]
  ULONG ContextLength; // [rsp+C0h] [rbp+0h] BYREF
  ULONG ContextFlags[2]; // [rsp+C8h] [rbp+8h] BYREF
  PUSER_THREAD_START_ROUTINE v33; // [rsp+D0h] [rbp+10h]
  PVOID v34; // [rsp+D8h] [rbp+18h]
  PUSER_THREAD_START_ROUTINE v35; // [rsp+E0h] [rbp+20h]
  PCONTEXT_EX ContextEx; // [rsp+E8h] [rbp+28h] BYREF
  __int64 v37; // [rsp+F0h] [rbp+30h]
  ULONG *v38; // [rsp+F8h] [rbp+38h]
  POBJECT_ATTRIBUTES v39; // [rsp+100h] [rbp+40h]
  _BYTE v40[24]; // [rsp+110h] [rbp+50h] BYREF
  __int64 v41; // [rsp+128h] [rbp+68h]
  __int64 v42; // [rsp+148h] [rbp+88h]
  __int16 v43; // [rsp+150h] [rbp+90h]
  int v44; // [rsp+168h] [rbp+A8h]

  v39 = ObjectAttributes;
  LODWORD(v33) = DesiredAccess;
  v35 = StartRoutine;
  v34 = Argument;
  *(_QWORD *)ContextFlags = 0LL;
  ContextEx = 0LL;
  ContextLength = 0;
  v13 = 0LL;
  v14 = 0LL;
  v15 = 0LL;
  if ( (CreateFlags & 0xFFFFFF80) != 0 )
    return -1073741579;
  if ( KeGetCurrentThread()->PreviousMode )
  {
    v16 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)ThreadHandle < 0x7FFFFFFF0000LL )
      v16 = (__int64)ThreadHandle;
    *(_QWORD *)v16 = *(_QWORD *)v16;
  }
  memset_0(v40, 0, 0x210uLL);
  if ( !AttributeList
    || (LOBYTE(v17) = KeGetCurrentThread()->PreviousMode,
        result = PspBuildCreateProcessContext(AttributeList, v17, 1LL, v40),
        result >= 0) )
  {
    result = ObpReferenceObjectByHandleWithTag(
               (ULONG_PTR)ProcessHandle,
               2,
               (__int64)PsProcessType,
               KeGetCurrentThread()->PreviousMode,
               0x72437350u,
               ContextFlags,
               0LL,
               0LL);
    if ( result >= 0 )
    {
      v19 = *(_DWORD **)ContextFlags;
      if ( (*(_BYTE *)(*(_QWORD *)ContextFlags + 368LL) & 1) == 0 )
      {
        v14 = &v27;
        v27 = 0;
        v29 = StackSize;
        v30 = MaximumStackSize;
        v28 = ZeroBits;
        v38 = v24;
        memset_0(v24, 0, 0x48uLL);
        v20 = (v19[469] & 0x4000) != 0 ? 0x800 : 0;
        ContextFlags[0] = (v19[469] & 0x4000) != 0 ? 1048651 : 1048587;
        v37 = qword_140FC74C0;
        RtlGetExtendedContextLength2(ContextFlags[0], &ContextLength, (unsigned int)v20);
        v21 = ContextLength + 15LL;
        if ( v21 <= ContextLength )
          v21 = 0xFFFFFFFFFFFFFF0LL;
        v22 = alloca(v21 & 0xFFFFFFFFFFFFFFF0uLL);
        v15 = v24;
        memset_0(v24, 0, ContextLength);
        RtlInitializeExtendedContext2((PCONTEXT)v24, ContextFlags[0], &ContextEx, v20);
        v42 = v37;
        v33 = v35;
        *(_QWORD *)&v26[1] = 0x2B0053002B002BLL;
        v26[5] = 43;
        strcpy((char *)v26, "3");
        HIDWORD(v25) = 8064;
        v43 = 639;
        v44 = 8064;
        v13 = v38;
      }
      ObfDereferenceObjectWithTag(v19, 0x72437350u);
      Thread = PspCreateThread(
                 ThreadHandle,
                 (unsigned int)v33,
                 v39,
                 ProcessHandle,
                 0LL,
                 v40,
                 v41,
                 v15,
                 v13,
                 CreateFlags,
                 v35,
                 v34,
                 v14);
      PspDeleteCreateProcessContext(v40);
      return Thread;
    }
  }
  return result;
}
