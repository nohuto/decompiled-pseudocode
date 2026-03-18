/*
 * XREFs of PspCreateProcess @ 0x140A8F360
 * Callers:
 *     NtCreateProcessEx @ 0x140763E70 (NtCreateProcessEx.c)
 *     PspInitPhase0 @ 0x140C563A8 (PspInitPhase0.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140257820 (ObfDereferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x140309490 (ObfDereferenceObject.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     PsCreateMinimalProcess @ 0x140769B14 (PsCreateMinimalProcess.c)
 *     SeDeleteAccessState @ 0x140844A10 (SeDeleteAccessState.c)
 *     ObReferenceObjectByHandle @ 0x14084F190 (ObReferenceObjectByHandle.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x14084FA30 (ObpReferenceObjectByHandleWithTag.c)
 *     ExRaiseDatatypeMisalignment @ 0x14085AF60 (ExRaiseDatatypeMisalignment.c)
 *     PspRundownSingleProcess @ 0x1408E0448 (PspRundownSingleProcess.c)
 *     PspInsertProcess @ 0x1408F3D10 (PspInsertProcess.c)
 *     PspCreateObjectHandle @ 0x1409BBD2C (PspCreateObjectHandle.c)
 *     PspGetProcessProtectionRequirementsFromImage @ 0x1409BC16C (PspGetProcessProtectionRequirementsFromImage.c)
 *     SeQuerySigningPolicy @ 0x1409BD120 (SeQuerySigningPolicy.c)
 *     PspReferenceTokenForNewProcess @ 0x1409BD294 (PspReferenceTokenForNewProcess.c)
 *     PspAllocateProcess @ 0x1409BE78C (PspAllocateProcess.c)
 */

NTSTATUS __fastcall PspCreateProcess(
        _QWORD *a1,
        int a2,
        __int64 a3,
        ULONG_PTR a4,
        KPROCESSOR_MODE AccessMode,
        unsigned int a6,
        HANDLE Handle,
        void *a8,
        void *a9)
{
  __int64 v11; // rax
  int v12; // eax
  int v13; // eax
  NTSTATUS result; // eax
  PVOID v15; // r12
  int ProcessProtectionRequirementsFromImage; // esi
  PVOID v17; // r14
  char v18; // bl
  char v19; // al
  __int64 v20; // rdx
  int v21; // eax
  int v22; // ebx
  char v23; // al
  unsigned __int8 v24; // [rsp+80h] [rbp-238h] BYREF
  char v25; // [rsp+81h] [rbp-237h] BYREF
  char v26; // [rsp+82h] [rbp-236h] BYREF
  char v27; // [rsp+83h] [rbp-235h]
  __int16 v28[2]; // [rsp+88h] [rbp-230h] BYREF
  int v29; // [rsp+8Ch] [rbp-22Ch]
  PVOID SystemArgument1; // [rsp+90h] [rbp-228h] BYREF
  PVOID v31; // [rsp+98h] [rbp-220h] BYREF
  int v32; // [rsp+A0h] [rbp-218h]
  PVOID v33; // [rsp+A8h] [rbp-210h] BYREF
  PVOID Object; // [rsp+B0h] [rbp-208h] BYREF
  void *v35; // [rsp+B8h] [rbp-200h]
  _QWORD *v36; // [rsp+C0h] [rbp-1F8h]
  PVOID v37; // [rsp+C8h] [rbp-1F0h]
  HANDLE v38; // [rsp+D0h] [rbp-1E8h]
  struct _ACCESS_STATE AccessState; // [rsp+E0h] [rbp-1D8h] BYREF
  int v40; // [rsp+260h] [rbp-58h]
  KPROCESSOR_MODE v41; // [rsp+264h] [rbp-54h]
  __int64 v42; // [rsp+268h] [rbp-50h]

  v32 = a2;
  v36 = a1;
  v38 = a8;
  v35 = a9;
  v28[0] = 0;
  v27 = 0;
  v33 = 0LL;
  SystemArgument1 = 0LL;
  v24 = 0;
  v26 = 0;
  v31 = 0LL;
  if ( (a6 & 0xFFB14048) != 0
    || (KeGetCurrentThread()->ApcState.Process[3].ActiveGroupsMask.Masks[1] & 0x70000) != 0 && AccessMode )
  {
    return -1073741811;
  }
  if ( (a6 & 0x4000) != 0 && (a6 & 0x2000) == 0 )
    return -1073741811;
  v29 = a6 & 0x800;
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
  memset_0(&AccessState, 0, 0x190uLL);
  v41 = AccessMode;
  if ( a3 )
  {
    if ( AccessMode )
    {
      if ( (a3 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v12 = *(_DWORD *)(a3 + 24);
      v40 = v12;
    }
    else
    {
      v12 = *(_DWORD *)(a3 + 24);
    }
    if ( AccessMode )
      v13 = v12 & 0x1DF2;
    else
      v13 = v12 & 0x11FF2;
    v40 = v13;
  }
  if ( Handle )
  {
    Object = 0LL;
    result = ObReferenceObjectByHandle(Handle, 8u, MmSectionObjectType, AccessMode, &Object, 0LL);
    v15 = Object;
    v37 = Object;
    if ( result < 0 )
      return result;
  }
  else
  {
    v15 = 0LL;
    v37 = 0LL;
  }
  if ( !a4
    || (ProcessProtectionRequirementsFromImage = ObpReferenceObjectByHandleWithTag(
                                                   a4,
                                                   128,
                                                   (__int64)PsProcessType,
                                                   AccessMode,
                                                   0x72437350u,
                                                   &v33,
                                                   0LL,
                                                   0LL),
        ProcessProtectionRequirementsFromImage >= 0) )
  {
    v17 = v33;
    ProcessProtectionRequirementsFromImage = PspReferenceTokenForNewProcess(
                                               (__int64)v33,
                                               a9,
                                               AccessMode,
                                               (ULONG_PTR *)&v31);
    if ( ProcessProtectionRequirementsFromImage < 0 )
      goto LABEL_69;
    if ( v17 )
    {
      if ( v15 )
      {
        v25 = 0;
        ProcessProtectionRequirementsFromImage = SeQuerySigningPolicy(
                                                   (int)v31,
                                                   0LL,
                                                   0,
                                                   0,
                                                   (char *)&v24,
                                                   &v26,
                                                   (unsigned __int8 *)&v25);
        if ( ProcessProtectionRequirementsFromImage < 0 )
        {
LABEL_68:
          ObfDereferenceObject(v31);
LABEL_69:
          if ( v17 )
            ObfDereferenceObjectWithTag(v17, 0x72437350u);
          goto LABEL_71;
        }
        if ( v24 > 1u || (v18 = v25) != 0 )
        {
LABEL_46:
          ProcessProtectionRequirementsFromImage = -1073741637;
          goto LABEL_68;
        }
LABEL_50:
        if ( !v15 )
          goto LABEL_53;
        ProcessProtectionRequirementsFromImage = PspGetProcessProtectionRequirementsFromImage((__int64)v15);
        if ( ProcessProtectionRequirementsFromImage < 0 )
          goto LABEL_68;
        if ( v18 == v27 )
        {
LABEL_53:
          if ( v29 )
          {
            if ( a3 )
              v20 = *(_QWORD *)(a3 + 16);
            else
              v20 = 0LL;
            ProcessProtectionRequirementsFromImage = PsCreateMinimalProcess(
                                                       (__int64)v17,
                                                       v20,
                                                       0LL,
                                                       v18,
                                                       (void *)((unsigned __int64)v31 & -(__int64)(v35 != 0LL)),
                                                       a6,
                                                       0,
                                                       0LL,
                                                       0LL,
                                                       0LL,
                                                       0LL,
                                                       v36);
          }
          else
          {
            v21 = PspAllocateProcess(
                    (__int64)v17,
                    AccessMode,
                    a3,
                    v18,
                    v24,
                    v26,
                    v15,
                    v31,
                    a6,
                    0,
                    0LL,
                    v35 != 0LL,
                    0LL,
                    (__int64)v28,
                    &SystemArgument1);
            ProcessProtectionRequirementsFromImage = v21;
            if ( v21 >= 0 )
            {
              v22 = v21;
              v29 = v21;
              v23 = 1;
              if ( LOBYTE(v28[0]) )
                v23 = 3;
              ProcessProtectionRequirementsFromImage = PspInsertProcess(
                                                         (char *)SystemArgument1,
                                                         (struct _KPROCESS *)v17,
                                                         v32,
                                                         a6,
                                                         v38,
                                                         v23,
                                                         0LL,
                                                         &AccessState);
              if ( ProcessProtectionRequirementsFromImage >= 0 )
              {
                ProcessProtectionRequirementsFromImage = PspCreateObjectHandle(
                                                           SystemArgument1,
                                                           (__int64)&AccessState,
                                                           (struct _OBJECT_TYPE *)PsProcessType);
                if ( ProcessProtectionRequirementsFromImage >= 0 )
                {
                  *v36 = v42;
                  ProcessProtectionRequirementsFromImage = v22;
                }
                SeDeleteAccessState((__int64)&AccessState);
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
      v18 = *((_BYTE *)v17 + 1530);
      v19 = *((_BYTE *)v17 + 1529);
      v24 = *((_BYTE *)v17 + 1528);
    }
    else
    {
      v18 = 114;
      v24 = 30;
      v19 = 28;
    }
    v26 = v19;
    v25 = v18;
    goto LABEL_50;
  }
LABEL_71:
  if ( v15 )
    ObfDereferenceObject(v15);
  return ProcessProtectionRequirementsFromImage;
}
