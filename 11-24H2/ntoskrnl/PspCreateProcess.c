/*
 * XREFs of PspCreateProcess @ 0x140A1B354
 * Callers:
 *     NtCreateProcessEx @ 0x140773840 (NtCreateProcessEx.c)
 *     PspInitPhase0 @ 0x140C65530 (PspInitPhase0.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1403254A0 (ObfDereferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x140325680 (ObfDereferenceObject.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     PsCreateMinimalProcess @ 0x1407797C4 (PsCreateMinimalProcess.c)
 *     SeDeleteAccessState @ 0x140840F80 (SeDeleteAccessState.c)
 *     ObReferenceObjectByHandle @ 0x14084AF40 (ObReferenceObjectByHandle.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x14084B7E0 (ObpReferenceObjectByHandleWithTag.c)
 *     ExRaiseDatatypeMisalignment @ 0x14089B1F0 (ExRaiseDatatypeMisalignment.c)
 *     PspInsertProcess @ 0x1408A7074 (PspInsertProcess.c)
 *     PspRundownSingleProcess @ 0x1408A8B38 (PspRundownSingleProcess.c)
 *     PspCreateObjectHandle @ 0x140A0C160 (PspCreateObjectHandle.c)
 *     PspReferenceTokenForNewProcess @ 0x140A1B954 (PspReferenceTokenForNewProcess.c)
 *     SeQuerySigningPolicy @ 0x140A1BB40 (SeQuerySigningPolicy.c)
 *     PspAllocateProcess @ 0x140A1C4C0 (PspAllocateProcess.c)
 *     PspGetProcessProtectionRequirementsFromImage @ 0x140A56770 (PspGetProcessProtectionRequirementsFromImage.c)
 */

NTSTATUS __fastcall PspCreateProcess(
        _QWORD *a1,
        int a2,
        __int64 a3,
        ULONG_PTR a4,
        KPROCESSOR_MODE AccessMode,
        int a6,
        HANDLE Handle,
        void *a8,
        __int64 a9)
{
  __int64 v11; // rax
  __int64 v12; // r8
  int v13; // eax
  int v14; // eax
  NTSTATUS result; // eax
  PVOID v16; // r12
  int ProcessProtectionRequirementsFromImage; // esi
  _BYTE *v18; // r14
  __int64 v19; // rdx
  __int64 v20; // r9
  char v21; // bl
  char v22; // al
  __int64 v23; // rdx
  int Process; // eax
  int v25; // ebx
  char v26; // al
  __int64 v27; // rdx
  __int64 v28; // r8
  __int64 v29; // r9
  unsigned __int8 v30; // [rsp+80h] [rbp-238h] BYREF
  char v31; // [rsp+81h] [rbp-237h] BYREF
  char v32; // [rsp+82h] [rbp-236h] BYREF
  char v33[5]; // [rsp+83h] [rbp-235h] BYREF
  __int16 v34[2]; // [rsp+88h] [rbp-230h] BYREF
  int v35; // [rsp+8Ch] [rbp-22Ch]
  PVOID SystemArgument1; // [rsp+90h] [rbp-228h] BYREF
  PVOID v37; // [rsp+98h] [rbp-220h] BYREF
  int v38; // [rsp+A0h] [rbp-218h]
  PVOID v39; // [rsp+A8h] [rbp-210h] BYREF
  PVOID Object; // [rsp+B0h] [rbp-208h] BYREF
  __int64 v41; // [rsp+B8h] [rbp-200h]
  _QWORD *v42; // [rsp+C0h] [rbp-1F8h]
  PVOID v43; // [rsp+C8h] [rbp-1F0h]
  HANDLE v44; // [rsp+D0h] [rbp-1E8h]
  struct _ACCESS_STATE v45[2]; // [rsp+E0h] [rbp-1D8h] BYREF
  int v46; // [rsp+260h] [rbp-58h]
  KPROCESSOR_MODE v47; // [rsp+264h] [rbp-54h]
  __int64 v48; // [rsp+268h] [rbp-50h]

  v38 = a2;
  v42 = a1;
  v44 = a8;
  v41 = a9;
  v34[0] = 0;
  v33[0] = 0;
  v39 = 0LL;
  SystemArgument1 = 0LL;
  v30 = 0;
  v32 = 0;
  v37 = 0LL;
  if ( (a6 & 0xFFB14048) != 0
    || (KeGetCurrentThread()->ApcState.Process[3].ActiveGroupsMask.Masks[1] & 0x70000) != 0 && AccessMode )
  {
    return -1073741811;
  }
  if ( (a6 & 0x4000) != 0 && (a6 & 0x2000) == 0 )
    return -1073741811;
  v35 = a6 & 0x800;
  if ( (a6 & 0x2000) != 0 && (a6 & 0x800) == 0 )
    return -1073741811;
  if ( (a6 & 0x800) != 0 )
  {
    if ( AccessMode )
      return -1073741811;
    if ( a3 )
    {
      if ( *(_QWORD *)(a3 + 8) )
        return -1073741811;
      v11 = *(_QWORD *)(a3 + 16);
      if ( !v11
        || !*(_QWORD *)(v11 + 8)
        || !*(_WORD *)v11
        || *(_DWORD *)(a3 + 24) != 512
        || *(_QWORD *)(a3 + 32)
        || *(_QWORD *)(a3 + 40) )
      {
        return -1073741811;
      }
    }
    if ( Handle || a8 || !a4 )
      return -1073741811;
  }
  if ( (a6 & 0x20000) != 0 && (AccessMode || (a6 & 0x800) == 0) )
    return -1073741811;
  memset_0(v45, 0, 0x190uLL);
  v47 = AccessMode;
  if ( a3 )
  {
    if ( AccessMode )
    {
      if ( (a3 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v13 = *(_DWORD *)(a3 + 24);
      v46 = v13;
    }
    else
    {
      v13 = *(_DWORD *)(a3 + 24);
    }
    if ( AccessMode )
      v14 = v13 & 0x1DF2;
    else
      v14 = v13 & 0x11FF2;
    v46 = v14;
  }
  if ( Handle )
  {
    Object = 0LL;
    result = ObReferenceObjectByHandle(Handle, 8u, MmSectionObjectType, AccessMode, &Object, 0LL);
    v16 = Object;
    v43 = Object;
    if ( result < 0 )
      return result;
  }
  else
  {
    v16 = 0LL;
    v43 = 0LL;
  }
  if ( !a4
    || (ProcessProtectionRequirementsFromImage = ObpReferenceObjectByHandleWithTag(
                                                   a4,
                                                   128,
                                                   (__int64)PsProcessType,
                                                   AccessMode,
                                                   0x72437350u,
                                                   &v39,
                                                   0LL,
                                                   0LL),
        ProcessProtectionRequirementsFromImage >= 0) )
  {
    LOBYTE(v12) = AccessMode;
    v18 = v39;
    ProcessProtectionRequirementsFromImage = PspReferenceTokenForNewProcess(v39, a9, v12, &v37);
    if ( ProcessProtectionRequirementsFromImage < 0 )
      goto LABEL_69;
    if ( v18 )
    {
      if ( v16 )
      {
        v31 = 0;
        LOBYTE(v20) = 0;
        ProcessProtectionRequirementsFromImage = SeQuerySigningPolicy(v37, 0LL, 0LL, v20, &v30, &v32, &v31);
        if ( ProcessProtectionRequirementsFromImage < 0 )
        {
LABEL_68:
          ObfDereferenceObject(v37);
LABEL_69:
          if ( v18 )
            ObfDereferenceObjectWithTag(v18, 0x72437350u);
          goto LABEL_71;
        }
        if ( v30 > 1u || (v21 = v31) != 0 )
        {
LABEL_46:
          ProcessProtectionRequirementsFromImage = -1073741637;
          goto LABEL_68;
        }
LABEL_50:
        if ( !v16 )
          goto LABEL_53;
        LOBYTE(v19) = v21;
        ProcessProtectionRequirementsFromImage = PspGetProcessProtectionRequirementsFromImage(v16, v19, v33);
        if ( ProcessProtectionRequirementsFromImage < 0 )
          goto LABEL_68;
        if ( v21 == v33[0] )
        {
LABEL_53:
          if ( v35 )
          {
            if ( a3 )
              v23 = *(_QWORD *)(a3 + 16);
            else
              v23 = 0LL;
            ProcessProtectionRequirementsFromImage = PsCreateMinimalProcess(
                                                       (__int64)v18,
                                                       v23,
                                                       0LL,
                                                       v21,
                                                       (void *)((unsigned __int64)v37 & -(__int64)(v41 != 0)),
                                                       a6,
                                                       0,
                                                       0LL,
                                                       0LL,
                                                       0LL,
                                                       0LL,
                                                       v42);
          }
          else
          {
            LOBYTE(v20) = v21;
            LOBYTE(v19) = AccessMode;
            Process = PspAllocateProcess(
                        (_DWORD)v18,
                        v19,
                        a3,
                        v20,
                        v30,
                        v32,
                        (__int64)v16,
                        (__int64)v37,
                        a6,
                        0,
                        0LL,
                        v41 != 0,
                        0LL,
                        (__int64)v34,
                        (__int64)&SystemArgument1);
            ProcessProtectionRequirementsFromImage = Process;
            if ( Process >= 0 )
            {
              v25 = Process;
              v35 = Process;
              v26 = 1;
              if ( LOBYTE(v34[0]) )
                v26 = 3;
              ProcessProtectionRequirementsFromImage = PspInsertProcess(
                                                         (char *)SystemArgument1,
                                                         (__int64)v18,
                                                         v38,
                                                         a6,
                                                         v44,
                                                         v26,
                                                         0LL,
                                                         v45);
              if ( ProcessProtectionRequirementsFromImage >= 0 )
              {
                ProcessProtectionRequirementsFromImage = PspCreateObjectHandle(
                                                           SystemArgument1,
                                                           (__int64)v45,
                                                           (struct _OBJECT_TYPE *)PsProcessType);
                if ( ProcessProtectionRequirementsFromImage >= 0 )
                {
                  *v42 = v48;
                  ProcessProtectionRequirementsFromImage = v25;
                }
                SeDeleteAccessState((__int64)v45, v27, v28, v29);
              }
              if ( ProcessProtectionRequirementsFromImage < 0 )
                PspRundownSingleProcess((char *)SystemArgument1, 0);
              ObfDereferenceObjectWithTag(SystemArgument1, 0x72437350u);
            }
          }
          goto LABEL_68;
        }
        goto LABEL_46;
      }
      v21 = v18[1530];
      v22 = v18[1529];
      v30 = v18[1528];
    }
    else
    {
      v21 = 114;
      v30 = 30;
      v22 = 28;
    }
    v32 = v22;
    v31 = v21;
    goto LABEL_50;
  }
LABEL_71:
  if ( v16 )
    ObfDereferenceObject(v16);
  return ProcessProtectionRequirementsFromImage;
}
