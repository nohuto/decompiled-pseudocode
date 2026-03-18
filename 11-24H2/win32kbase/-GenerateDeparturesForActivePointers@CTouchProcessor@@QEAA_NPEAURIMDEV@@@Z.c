/*
 * XREFs of ?GenerateDeparturesForActivePointers@CTouchProcessor@@QEAA_NPEAURIMDEV@@@Z @ 0x1401FC890
 * Callers:
 *     <none>
 * Callees:
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 *     ??1CInpLockGuardExclusive@@QEAA@XZ @ 0x1400C47E4 (--1CInpLockGuardExclusive@@QEAA@XZ.c)
 *     ?IsLockedShared@tagDomLock@@QEBA_NXZ @ 0x1400D8564 (-IsLockedShared@tagDomLock@@QEBA_NXZ.c)
 *     ?RemoveUndispatchedFrameFromThreadFrameList@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@@Z @ 0x14010EE14 (-RemoveUndispatchedFrameFromThreadFrameList@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@@Z.c)
 *     ?CommitRimCompleteFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@_N1@Z @ 0x140182E00 (-CommitRimCompleteFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@_N1@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ??0CInpLockGuardExclusive@@QEAA@AEAVCEResourceLock@@PEAX@Z @ 0x1401F6318 (--0CInpLockGuardExclusive@@QEAA@AEAVCEResourceLock@@PEAX@Z.c)
 *     _lambda_e1b7d727f4d9425d1205377adb72da73_::operator() @ 0x1401F6400 (_lambda_e1b7d727f4d9425d1205377adb72da73_--operator().c)
 *     ?CancelActivePointer@CTouchProcessor@@AEAAXPEAUCInputPointerNode@@PEAH@Z @ 0x1401F71B0 (-CancelActivePointer@CTouchProcessor@@AEAAXPEAUCInputPointerNode@@PEAH@Z.c)
 *     ?GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z @ 0x1401FCB24 (-GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z.c)
 *     ?ReferenceFrameInt@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@PEAU2@W4CPointerInputFramePhase@@@Z @ 0x14020547C (-ReferenceFrameInt@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@PEAU2@W4CPointerInputFramePhase@.c)
 *     ?ReferenceInputFrame@CTouchProcessor@@QEAAPEBUCPointerInputFrame@@PEAU2@PEAURIMCOMPLETEFRAME@@K@Z @ 0x1402054C0 (-ReferenceInputFrame@CTouchProcessor@@QEAAPEBUCPointerInputFrame@@PEAU2@PEAURIMCOMPLETEFRAME@@K@.c)
 *     ?UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z @ 0x140208B58 (-UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z.c)
 *     ?UnreferenceFrameInt@CTouchProcessor@@AEAAKPEAUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z @ 0x140208EB4 (-UnreferenceFrameInt@CTouchProcessor@@AEAAKPEAUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z.c)
 *     Feature_FixGenerateDeparturesForActivePointersKASANBug__private_IsEnabledDeviceUsageNoInline @ 0x14020A434 (Feature_FixGenerateDeparturesForActivePointersKASANBug__private_IsEnabledDeviceUsageNoInline.c)
 */

char __fastcall CTouchProcessor::GenerateDeparturesForActivePointers(PERESOURCE *this, struct RIMDEV *a2)
{
  struct RIMDEV *v3; // r12
  char *v4; // rbp
  __int64 v5; // rcx
  PERESOURCE **v6; // r15
  PERESOURCE *v7; // rbx
  __int64 **v8; // r14
  __int64 *i; // rdx
  unsigned int v10; // r10d
  unsigned int v11; // r8d
  __int64 v12; // rdi
  char v13; // r12
  struct RIMCOMPLETEFRAME *v14; // rax
  struct CPointerInputFrame *v15; // rax
  struct RIMCOMPLETEFRAME *v16; // r8
  const struct CPointerInputFrame *v17; // rax
  const struct CPointerInputFrame *v18; // r14
  int v19; // r10d
  int IsEnabledDeviceUsageNoInline; // eax
  struct CInputPointerNode *v21; // rdx
  int v22; // r8d
  int v24[2]; // [rsp+30h] [rbp-88h] BYREF
  PERESOURCE *v25[16]; // [rsp+38h] [rbp-80h] BYREF
  char v26; // [rsp+C0h] [rbp+8h]

  v3 = a2;
  v4 = 0LL;
  if ( tagDomLock::IsLockedShared(this + 4) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 16391);
  CInpLockGuardExclusive::CInpLockGuardExclusive((CInpLockGuardExclusive *)v25, this + 4, 0LL);
  v6 = (PERESOURCE **)(this + 10);
  v26 = 0;
  v7 = (PERESOURCE *)this[10];
  if ( v7 != this + 10 )
  {
    v8 = (__int64 **)(this + 6);
    while ( 1 )
    {
      for ( i = *v8; ; i = (__int64 *)*i )
      {
        if ( i == (__int64 *)v8 )
        {
          v12 = 0LL;
          goto LABEL_12;
        }
        v10 = *((_DWORD *)i + 10);
        v11 = 0;
        if ( v10 )
          break;
LABEL_9:
        ;
      }
      while ( 1 )
      {
        v5 = 480LL * v11;
        if ( *(_WORD *)(v5 + i[29] + 160) == *((_WORD *)v7 + 9) )
          break;
        if ( ++v11 >= v10 )
          goto LABEL_9;
      }
      v12 = CTouchProcessor::ReferenceFrameInt(v5, i - 1);
LABEL_12:
      if ( !v3 || v12 && *(struct RIMDEV **)(*(_QWORD *)(v12 + 256) + 16LL) == v3 )
        break;
      v4 = 0LL;
      v13 = 0;
LABEL_34:
      if ( v12 )
        CTouchProcessor::UnreferenceFrameInt(this, v12);
      if ( v13 )
      {
        v7 = *v6;
        v26 = 1;
      }
      else
      {
        v7 = (PERESOURCE *)*v7;
      }
      v3 = a2;
      if ( v7 == (PERESOURCE *)v6 )
        goto LABEL_40;
    }
    v13 = 1;
    if ( v12 )
    {
      v14 = (struct RIMCOMPLETEFRAME *)lambda_e1b7d727f4d9425d1205377adb72da73_::operator()(v5, v12);
      v4 = (char *)v14;
      if ( v14 )
      {
        v15 = CTouchProcessor::CommitRimCompleteFrame(this, v14, 0, 0);
        if ( v15 )
        {
          v17 = CTouchProcessor::ReferenceInputFrame((CTouchProcessor *)this, v15, v16, 0);
          v18 = v17;
          if ( v17 )
          {
            CTouchProcessor::RemoveUndispatchedFrameFromThreadFrameList(*((CTouchProcessor **)v17 + 32), v17);
            CTouchProcessor::GenerateMessagesCore(
              (CTouchProcessor *)this,
              -__CFSHR__(v19, 4),
              -__CFSHR__(v19, 5),
              0,
              v18);
            CTouchProcessor::UnreferenceFrame(this, v18);
          }
          v8 = (__int64 **)(this + 6);
        }
      }
    }
    if ( *v7 != (PERESOURCE)v7 )
    {
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 16532);
      IsEnabledDeviceUsageNoInline = Feature_FixGenerateDeparturesForActivePointersKASANBug__private_IsEnabledDeviceUsageNoInline();
      v21 = (struct CInputPointerNode *)(v7 - 2);
      if ( IsEnabledDeviceUsageNoInline )
      {
        v24[0] = 0;
        CTouchProcessor::CancelActivePointer((CTouchProcessor *)this, v21, v24);
        if ( v24[0] || *v7 == (PERESOURCE)v7 )
          goto LABEL_31;
        v24[1] = 0x20000;
        v22 = 16544;
        goto LABEL_30;
      }
      CTouchProcessor::CancelActivePointer((CTouchProcessor *)this, v21, 0LL);
      if ( *v7 != (PERESOURCE)v7 )
      {
        v22 = 16550;
LABEL_30:
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, v22);
      }
    }
LABEL_31:
    if ( v4 )
      GreDeleteFastMutex(v4);
    v4 = 0LL;
    goto LABEL_34;
  }
LABEL_40:
  CInpLockGuardExclusive::~CInpLockGuardExclusive(v25);
  return v26;
}
