/*
 * XREFs of ACPIIoctlEvalPreProcessingV1 @ 0x140010F68
 * Callers:
 *     ACPIIrpDispatchDeviceControl @ 0x1400101A0 (ACPIIrpDispatchDeviceControl.c)
 *     ACPIIoctlAsyncEvalControlMethod @ 0x140042CD0 (ACPIIoctlAsyncEvalControlMethod.c)
 *     ACPIIoctlEvalControlMethod @ 0x1400509E4 (ACPIIoctlEvalControlMethod.c)
 * Callees:
 *     ConPrintf @ 0x1400067DC (ConPrintf.c)
 *     GetNameSpaceObjectNoLock @ 0x14000AA30 (GetNameSpaceObjectNoLock.c)
 *     DereferenceObjectEx @ 0x14000C640 (DereferenceObjectEx.c)
 *     AMLIDereferenceHandleEx @ 0x140010850 (AMLIDereferenceHandleEx.c)
 *     CreateObjectHandle @ 0x14001A7CC (CreateObjectHandle.c)
 *     ACPIInternalGetDeviceExtension @ 0x14001B920 (ACPIInternalGetDeviceExtension.c)
 *     AcpiIoctlArgumentToPackageObjV1 @ 0x140042620 (AcpiIoctlArgumentToPackageObjV1.c)
 *     AMLIDebugger @ 0x1400564EC (AMLIDebugger.c)
 *     __security_check_cookie @ 0x140070B10 (__security_check_cookie.c)
 *     memmove @ 0x140070C40 (memmove.c)
 */

__int64 __fastcall ACPIIoctlEvalPreProcessingV1(
        ULONG_PTR BugCheckParameter3,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 *a5,
        _QWORD *a6,
        _QWORD *a7,
        unsigned int *a8)
{
  __int64 ObjectHandle; // r12
  int v10; // ecx
  _WORD *v11; // rdi
  unsigned int v12; // r13d
  unsigned int v13; // eax
  int *v14; // r14
  __int64 *v15; // r15
  size_t v16; // rbx
  _BYTE *Pool2; // rsi
  KIRQL v18; // bp
  int NameSpaceObjectNoLock; // ebx
  __int64 v20; // rdx
  void *v21; // r15
  int v22; // eax
  __int64 v23; // rax
  __int64 v25; // rax
  _DWORD *v26; // rsi
  int v27; // edx
  __int64 i; // rbp
  __int16 v29; // cx
  __int64 v30; // rax
  __int64 v31; // [rsp+30h] [rbp-F8h] BYREF
  __int64 *v32; // [rsp+38h] [rbp-F0h]
  _QWORD *v33; // [rsp+40h] [rbp-E8h]
  _QWORD *v34; // [rsp+48h] [rbp-E0h]
  unsigned int *v35; // [rsp+50h] [rbp-D8h]
  int Src; // [rsp+58h] [rbp-D0h] BYREF
  char v37; // [rsp+5Ch] [rbp-CCh]
  _BYTE P[128]; // [rsp+60h] [rbp-C8h] BYREF

  v32 = a5;
  ObjectHandle = 0LL;
  v10 = *(_DWORD *)(a3 + 8);
  v11 = 0LL;
  v33 = a6;
  v12 = 0;
  v34 = a7;
  v35 = a8;
  v13 = *(_DWORD *)(a3 + 16);
  *(_QWORD *)(a2 + 56) = 0LL;
  if ( v13 < 8 )
    return 3221225476LL;
  if ( (unsigned int)(v10 - 1) <= 0x12 )
    return 3221225507LL;
  v14 = *(int **)(a2 + 24);
  v37 = 0;
  Src = v14[1];
  v15 = *(__int64 **)(ACPIInternalGetDeviceExtension(BugCheckParameter3) + 760);
  if ( !v15 )
    return 3221225486LL;
  v16 = -1LL;
  do
    ++v16;
  while ( *((_BYTE *)&Src + v16) );
  if ( v16 + 1 >= 0x80 )
  {
    Pool2 = (_BYTE *)ExAllocatePool2(64LL, v16 + 1, 1768973121LL);
    if ( !Pool2 )
      return (unsigned int)-1073741670;
  }
  else
  {
    Pool2 = P;
  }
  memmove(Pool2, &Src, v16);
  Pool2[v16] = 0;
  v18 = ExAcquireSpinLockShared(&ACPINamespaceLock);
  v31 = 0LL;
  dword_140089138 = 0;
  pszDest = 0;
  if ( (gDebugger & 0x1000) != 0 )
  {
    ConPrintf("\nProcess AML Debugger Request.\n");
    _InterlockedAnd(&gDebugger, 0xFFFFEFFF);
    AMLIDebugger();
  }
  if ( *Pool2 )
  {
    if ( (*(_BYTE *)(*v15 + 64) & 4) != 0 )
    {
      NameSpaceObjectNoLock = -1073741738;
    }
    else
    {
      NameSpaceObjectNoLock = GetNameSpaceObjectNoLock(Pool2, *v15, &v31, 1);
      if ( NameSpaceObjectNoLock >= 0 && v31 )
      {
        ObjectHandle = CreateObjectHandle(v31);
        DereferenceObjectEx(v20);
      }
      if ( NameSpaceObjectNoLock == 32772 )
        NameSpaceObjectNoLock = 259;
    }
  }
  else
  {
    NameSpaceObjectNoLock = -1073741810;
  }
  ExReleaseSpinLockShared(&ACPINamespaceLock, v18);
  if ( P != Pool2 )
    ExFreePoolWithTag(Pool2, 0);
  if ( NameSpaceObjectNoLock < 0 )
    return (unsigned int)NameSpaceObjectNoLock;
  v21 = (void *)ExAllocatePool2(64LL, 40LL, 1383097153LL);
  if ( !v21 )
    goto LABEL_60;
  v22 = *v14;
  if ( *v14 == 1114203457 )
  {
LABEL_27:
    *v32 = ObjectHandle;
    *v33 = v21;
    *v34 = v11;
    *v35 = v12;
    return 0LL;
  }
  if ( v22 == 1130980673 )
  {
    v25 = (unsigned int)v14[3];
    if ( (_DWORD)v25 )
    {
      v26 = v14 + 4;
      v12 = v14[3];
      v11 = (_WORD *)ExAllocatePool2(64LL, 40 * v25, 1097884481LL);
      if ( v11 )
      {
        for ( i = 0LL; ; i = (unsigned int)(i + 1) )
        {
          if ( (unsigned int)i >= v12 )
            goto LABEL_27;
          if ( *(_WORD *)v26 == 4 )
            v29 = 4;
          else
            v29 = *(_WORD *)v26 + 1;
          v11[20 * i + 1] = v29;
          if ( *(_WORD *)v26 )
          {
            if ( *(_WORD *)v26 == 1 || *(_WORD *)v26 == 2 )
              goto LABEL_39;
            if ( *(_WORD *)v26 != 4 )
            {
              v11[20 * i + 1] = 3;
LABEL_39:
              v27 = (_DWORD)v26 + 4;
              *(_DWORD *)&v11[20 * i + 12] = *((unsigned __int16 *)v26 + 1);
              *(_QWORD *)&v11[20 * i + 16] = (unsigned __int64)(v26 + 1) & -(__int64)(*((_WORD *)v26 + 1) != 0);
              goto LABEL_40;
            }
            NameSpaceObjectNoLock = AcpiIoctlArgumentToPackageObjV1(
                                      (_DWORD)v26,
                                      v27,
                                      0,
                                      (int)v11 + 24 + 40 * (int)i,
                                      (__int64)&v11[20 * i + 16]);
            if ( NameSpaceObjectNoLock < 0 )
              goto LABEL_49;
          }
          else
          {
            *(_QWORD *)&v11[20 * i + 8] = (unsigned int)v26[1];
          }
LABEL_40:
          v30 = *((unsigned __int16 *)v26 + 1);
          if ( (unsigned __int16)v30 < 4u )
            v30 = 4LL;
          v26 = (_DWORD *)((char *)v26 + v30 + 4);
        }
      }
LABEL_60:
      NameSpaceObjectNoLock = -1073741670;
LABEL_49:
      if ( ObjectHandle )
        AMLIDereferenceHandleEx(ObjectHandle);
      if ( v21 )
        ExFreePoolWithTag(v21, 0x52706341u);
      if ( v11 )
        ExFreePoolWithTag(v11, 0x52706341u);
      return (unsigned int)NameSpaceObjectNoLock;
    }
    goto LABEL_27;
  }
  if ( v22 == 1399416129 || v22 == 1231643969 )
  {
    v12 = 1;
    v23 = ExAllocatePool2(64LL, 40LL, 1097884481LL);
    v11 = (_WORD *)v23;
    if ( v23 )
    {
      if ( *v14 == 1231643969 )
      {
        *(_WORD *)(v23 + 2) = 1;
        *(_QWORD *)(v23 + 16) = (unsigned int)v14[2];
      }
      else
      {
        *(_WORD *)(v23 + 2) = 2;
        *(_DWORD *)(v23 + 24) = v14[2];
        *(_QWORD *)(v23 + 32) = (unsigned __int64)(v14 + 3) & -(__int64)(v14[2] != 0);
      }
      goto LABEL_27;
    }
    goto LABEL_60;
  }
  return 3221225711LL;
}
