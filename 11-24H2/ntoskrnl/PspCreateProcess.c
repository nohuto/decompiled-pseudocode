/*
 * XREFs of PspCreateProcess @ 0x1409F98C4
 * Callers:
 *     NtCreateProcessEx @ 0x140773A60 (NtCreateProcessEx.c)
 *     PspInitPhase0 @ 0x140C676AC (PspInitPhase0.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     PsCreateMinimalProcess @ 0x1407798C4 (PsCreateMinimalProcess.c)
 *     SeDeleteAccessState @ 0x14083D240 (SeDeleteAccessState.c)
 *     ObReferenceObjectByHandle @ 0x140847200 (ObReferenceObjectByHandle.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x140847AA0 (ObpReferenceObjectByHandleWithTag.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408A3890 (ExRaiseDatatypeMisalignment.c)
 *     PspInsertProcess @ 0x1408FD2CC (PspInsertProcess.c)
 *     PspRundownSingleProcess @ 0x1408FED98 (PspRundownSingleProcess.c)
 *     PspReferenceTokenForNewProcess @ 0x1409F9EC4 (PspReferenceTokenForNewProcess.c)
 *     SeQuerySigningPolicy @ 0x1409FA0B0 (SeQuerySigningPolicy.c)
 *     PspAllocateProcess @ 0x1409FACD0 (PspAllocateProcess.c)
 *     PspCreateObjectHandle @ 0x140A0B3A0 (PspCreateObjectHandle.c)
 *     PspGetProcessProtectionRequirementsFromImage @ 0x140A4E604 (PspGetProcessProtectionRequirementsFromImage.c)
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
        __int64 a9)
{
  __int64 v11; // rax
  __int64 v12; // r8
  int v13; // eax
  int v14; // eax
  NTSTATUS result; // eax
  PVOID v16; // r12
  int ProcessProtectionRequirementsFromImage; // esi
  PVOID v18; // r14
  __int64 v19; // rdx
  __int64 v20; // r9
  char v21; // bl
  char v22; // al
  __int64 v23; // rdx
  int Process; // eax
  int v25; // ebx
  char v26; // al
  unsigned __int8 v27; // [rsp+80h] [rbp-238h] BYREF
  char v28; // [rsp+81h] [rbp-237h] BYREF
  char v29; // [rsp+82h] [rbp-236h] BYREF
  char v30[5]; // [rsp+83h] [rbp-235h] BYREF
  __int16 v31[2]; // [rsp+88h] [rbp-230h] BYREF
  int v32; // [rsp+8Ch] [rbp-22Ch]
  PVOID SystemArgument1; // [rsp+90h] [rbp-228h] BYREF
  PVOID v34; // [rsp+98h] [rbp-220h] BYREF
  int v35; // [rsp+A0h] [rbp-218h]
  PVOID v36; // [rsp+A8h] [rbp-210h] BYREF
  PVOID Object; // [rsp+B0h] [rbp-208h] BYREF
  __int64 v38; // [rsp+B8h] [rbp-200h]
  _QWORD *v39; // [rsp+C0h] [rbp-1F8h]
  PVOID v40; // [rsp+C8h] [rbp-1F0h]
  HANDLE v41; // [rsp+D0h] [rbp-1E8h]
  struct _ACCESS_STATE v42[2]; // [rsp+E0h] [rbp-1D8h] BYREF
  int v43; // [rsp+260h] [rbp-58h]
  KPROCESSOR_MODE v44; // [rsp+264h] [rbp-54h]
  __int64 v45; // [rsp+268h] [rbp-50h]

  v35 = a2;
  v39 = a1;
  v41 = a8;
  v38 = a9;
  v31[0] = 0;
  v30[0] = 0;
  v36 = 0LL;
  SystemArgument1 = 0LL;
  v27 = 0;
  v29 = 0;
  v34 = 0LL;
  if ( (a6 & 0xFF314048) != 0
    || (KeGetCurrentThread()->ApcState.Process[3].ActiveGroupsMask.Masks[1] & 0x70000) != 0 && AccessMode )
  {
    return -1073741811;
  }
  if ( (a6 & 0x4000) != 0 && (a6 & 0x2000) == 0 )
    return -1073741811;
  v32 = a6 & 0x800;
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
  memset_0(v42, 0, 0x190uLL);
  v44 = AccessMode;
  if ( a3 )
  {
    if ( AccessMode )
    {
      if ( (a3 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v13 = *(_DWORD *)(a3 + 24);
      v43 = v13;
    }
    else
    {
      v13 = *(_DWORD *)(a3 + 24);
    }
    if ( AccessMode )
      v14 = v13 & 0x1DF2;
    else
      v14 = v13 & 0x11FF2;
    v43 = v14;
  }
  if ( Handle )
  {
    Object = 0LL;
    result = ObReferenceObjectByHandle(Handle, 8u, MmSectionObjectType, AccessMode, &Object, 0LL);
    v16 = Object;
    v40 = Object;
    if ( result < 0 )
      return result;
  }
  else
  {
    v16 = 0LL;
    v40 = 0LL;
  }
  if ( !a4
    || (ProcessProtectionRequirementsFromImage = ObpReferenceObjectByHandleWithTag(
                                                   a4,
                                                   128,
                                                   (__int64)PsProcessType,
                                                   AccessMode,
                                                   0x72437350u,
                                                   &v36,
                                                   0LL,
                                                   0LL),
        ProcessProtectionRequirementsFromImage >= 0) )
  {
    LOBYTE(v12) = AccessMode;
    v18 = v36;
    ProcessProtectionRequirementsFromImage = PspReferenceTokenForNewProcess(v36, a9, v12, &v34);
    if ( ProcessProtectionRequirementsFromImage < 0 )
      goto LABEL_69;
    if ( v18 )
    {
      if ( v16 )
      {
        v28 = 0;
        LOBYTE(v20) = 0;
        ProcessProtectionRequirementsFromImage = SeQuerySigningPolicy(v34, 0LL, 0LL, v20, &v27, &v29, &v28);
        if ( ProcessProtectionRequirementsFromImage < 0 )
        {
LABEL_68:
          ObfDereferenceObject(v34);
LABEL_69:
          if ( v18 )
            ObfDereferenceObjectWithTag(v18, 0x72437350u);
          goto LABEL_71;
        }
        if ( v27 > 1u || (v21 = v28) != 0 )
        {
LABEL_46:
          ProcessProtectionRequirementsFromImage = -1073741637;
          goto LABEL_68;
        }
LABEL_50:
        if ( !v16 )
          goto LABEL_53;
        LOBYTE(v19) = v21;
        ProcessProtectionRequirementsFromImage = PspGetProcessProtectionRequirementsFromImage(v16, v19, v30);
        if ( ProcessProtectionRequirementsFromImage < 0 )
          goto LABEL_68;
        if ( v21 == v30[0] )
        {
LABEL_53:
          if ( v32 )
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
                                                       (void *)((unsigned __int64)v34 & -(__int64)(v38 != 0)),
                                                       a6,
                                                       0,
                                                       0LL,
                                                       0LL,
                                                       0LL,
                                                       0LL,
                                                       v39);
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
                        v27,
                        v29,
                        (__int64)v16,
                        (__int64)v34,
                        a6,
                        0,
                        0LL,
                        v38 != 0,
                        0LL,
                        (__int64)v31,
                        (__int64)&SystemArgument1);
            ProcessProtectionRequirementsFromImage = Process;
            if ( Process >= 0 )
            {
              v25 = Process;
              v32 = Process;
              v26 = 1;
              if ( LOBYTE(v31[0]) )
                v26 = 3;
              ProcessProtectionRequirementsFromImage = PspInsertProcess(
                                                         (char *)SystemArgument1,
                                                         (struct _KPROCESS *)v18,
                                                         v35,
                                                         a6,
                                                         v41,
                                                         v26,
                                                         0LL,
                                                         v42);
              if ( ProcessProtectionRequirementsFromImage >= 0 )
              {
                ProcessProtectionRequirementsFromImage = PspCreateObjectHandle(SystemArgument1, v42, PsProcessType);
                if ( ProcessProtectionRequirementsFromImage >= 0 )
                {
                  *v39 = v45;
                  ProcessProtectionRequirementsFromImage = v25;
                }
                SeDeleteAccessState((__int64)v42);
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
      v21 = *((_BYTE *)v18 + 1530);
      v22 = *((_BYTE *)v18 + 1529);
      v27 = *((_BYTE *)v18 + 1528);
    }
    else
    {
      v21 = 114;
      v27 = 30;
      v22 = 28;
    }
    v29 = v22;
    v28 = v21;
    goto LABEL_50;
  }
LABEL_71:
  if ( v16 )
    ObfDereferenceObject(v16);
  return ProcessProtectionRequirementsFromImage;
}
