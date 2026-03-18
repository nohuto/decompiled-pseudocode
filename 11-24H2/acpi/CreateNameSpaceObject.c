/*
 * XREFs of CreateNameSpaceObject @ 0x140009050
 * Callers:
 *     OpRegion @ 0x140030DC0 (OpRegion.c)
 *     IndexField @ 0x140035220 (IndexField.c)
 *     BankField @ 0x140035420 (BankField.c)
 *     Field @ 0x140035640 (Field.c)
 *     ParseField @ 0x140035A2C (ParseField.c)
 *     CreateXField @ 0x14003B324 (CreateXField.c)
 *     Name @ 0x14003E7F0 (Name.c)
 *     Method @ 0x140041060 (Method.c)
 *     Device @ 0x14004F160 (Device.c)
 *     CreateNativeNameSpaceObject @ 0x140052F04 (CreateNativeNameSpaceObject.c)
 *     AMLIAddNextNamespaceOverride @ 0x14006C1E8 (AMLIAddNextNamespaceOverride.c)
 *     AMLIAddNextNamespaceOverrideObject @ 0x14006C350 (AMLIAddNextNamespaceOverrideObject.c)
 *     AMLIApplyNextNamespaceOverride @ 0x14006C538 (AMLIApplyNextNamespaceOverride.c)
 *     AMLICreateNativeNamespaceObject @ 0x14006D5F4 (AMLICreateNativeNamespaceObject.c)
 *     Event @ 0x14006EAA0 (Event.c)
 *     Mutex @ 0x14006EBC0 (Mutex.c)
 *     PowerRes @ 0x14006EC70 (PowerRes.c)
 *     Processor @ 0x14006EDE0 (Processor.c)
 *     ThermalZone @ 0x14006EF50 (ThermalZone.c)
 *     Alias @ 0x14006F250 (Alias.c)
 *     AMLIInitialize @ 0x1400C4F80 (AMLIInitialize.c)
 *     Simulator_NotifyTablesAreLoaded @ 0x1400C82BC (Simulator_NotifyTablesAreLoaded.c)
 * Callees:
 *     NewNameSpaceObject @ 0x140001CFC (NewNameSpaceObject.c)
 *     HeapAlloc @ 0x140008CA0 (HeapAlloc.c)
 *     GetNameSpaceObjectNoLock @ 0x14000AA30 (GetNameSpaceObjectNoLock.c)
 *     RtlStringCbPrintfA @ 0x14000AEFC (RtlStringCbPrintfA.c)
 *     LogError @ 0x14000FE74 (LogError.c)
 *     AcpiDiagTraceAmlError @ 0x14000FF1C (AcpiDiagTraceAmlError.c)
 *     PrintDebugMessage @ 0x140010060 (PrintDebugMessage.c)
 *     InsertOwnerObjList @ 0x14003E434 (InsertOwnerObjList.c)
 *     Simulator_NotifyNamespaceCollision @ 0x14006B25C (Simulator_NotifyNamespaceCollision.c)
 *     __security_check_cookie @ 0x140070B10 (__security_check_cookie.c)
 *     memmove @ 0x140070C40 (memmove.c)
 *     memset @ 0x140070F40 (memset.c)
 */

__int64 __fastcall CreateNameSpaceObject(__int64 a1, __int64 a2, __int64 a3, __int64 a4, _QWORD *a5, int a6)
{
  _QWORD *v6; // r15
  unsigned __int8 *v9; // rsi
  unsigned int v10; // r14d
  __int64 v11; // rbx
  size_t v12; // rbx
  char *Pool2; // r12
  unsigned int NameSpaceObjectNoLock; // eax
  int v15; // ecx
  char *v16; // rax
  unsigned __int8 *v17; // rdi
  __int64 v18; // rbx
  char *v20; // rax
  char *v21; // r15
  _DWORD *v22; // rcx
  struct _EX_RUNDOWN_REF *v23; // rcx
  _QWORD *v24; // rax
  __int64 v25; // r13
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rcx
  _QWORD *v29; // rbx
  KIRQL v30; // di
  struct _EX_RUNDOWN_REF *v31; // rcx
  _QWORD *v32; // rax
  __int64 v33; // r13
  __int64 v34; // rcx
  __int64 *i; // rcx
  __int64 v36; // rax
  __int64 v37; // rax
  KIRQL v38; // [rsp+40h] [rbp-C0h]
  __int64 v39; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v40; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v41; // [rsp+58h] [rbp-A8h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+60h] [rbp-A0h] BYREF
  __int64 *v43; // [rsp+70h] [rbp-90h]
  __int64 v44; // [rsp+78h] [rbp-88h]
  __int64 *v45; // [rsp+80h] [rbp-80h]
  __int64 v46; // [rsp+88h] [rbp-78h]
  __int64 v47; // [rsp+90h] [rbp-70h] BYREF
  __int16 v48; // [rsp+98h] [rbp-68h]
  __int64 v49; // [rsp+A0h] [rbp-60h] BYREF
  __int16 v50; // [rsp+A8h] [rbp-58h]
  __int64 v51; // [rsp+B0h] [rbp-50h] BYREF
  __int16 v52; // [rsp+B8h] [rbp-48h]
  char Str[128]; // [rsp+C0h] [rbp-40h] BYREF
  char pszDest[256]; // [rsp+140h] [rbp+40h] BYREF

  v6 = a5;
  v47 = a4;
  v49 = a1;
  v51 = (__int64)a5;
  v9 = (unsigned __int8 *)a2;
  v41 = 0LL;
  v10 = 0;
  v40 = 0LL;
  v11 = 0LL;
  if ( a2 )
  {
    v12 = -1LL;
    do
      ++v12;
    while ( *(_BYTE *)(a2 + v12) );
    if ( v12 + 1 >= 0x80 )
    {
      Pool2 = (char *)ExAllocatePool2(64LL, v12 + 1, 1768973121LL);
      if ( !Pool2 )
        return 3221225626LL;
    }
    else
    {
      Pool2 = Str;
    }
    memmove(Pool2, v9, v12);
    a1 = v49;
    v9 = (unsigned __int8 *)Pool2;
    Pool2[v12] = 0;
    v11 = v41;
  }
  else
  {
    Pool2 = 0LL;
  }
  if ( !a3 )
    a3 = gpnsNameSpaceRoot;
  if ( !v9 )
  {
    v41 = NewNameSpaceObject(a1, a2);
    v29 = (_QWORD *)v41;
    v40 = v41;
    if ( !v41 )
    {
      v10 = -1073741670;
      LogError(3221225626LL);
      AcpiDiagTraceAmlError(0LL, 3221225626LL);
      PrintDebugMessage(36, 0, 0, 0, 0LL);
      goto LABEL_30;
    }
    v30 = ExAcquireSpinLockExclusive(&ACPINamespaceLock);
    *(_QWORD *)(v41 + 16) = a3;
    if ( (gdwfAMLI & 4) != 0 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(a3 + 112));
      v41 = v40;
    }
    v31 = (struct _EX_RUNDOWN_REF *)v47;
    v29[6] = v47;
    if ( v31 )
    {
      v29[7] = v31[3].Count;
      v31[3].Count = (unsigned __int64)v29;
      ExAcquireRundownProtection(v31 + 4);
    }
    v32 = *(_QWORD **)(a3 + 32);
    v33 = a3 + 24;
    if ( *v32 == v33 )
    {
      *v29 = v33;
      v29[1] = v32;
      *v32 = v29;
      *(_QWORD *)(v33 + 8) = v29;
      ExReleaseSpinLockExclusive(&ACPINamespaceLock, v30);
      v11 = v41;
      goto LABEL_28;
    }
    goto LABEL_60;
  }
  v38 = ExAcquireSpinLockExclusive(&ACPINamespaceLock);
  if ( *v9 )
  {
    NameSpaceObjectNoLock = GetNameSpaceObjectNoLock(v9, a3, &v40, 1LL);
    v10 = NameSpaceObjectNoLock;
    if ( !NameSpaceObjectNoLock )
    {
      if ( (a6 & 0x20000) != 0 )
      {
        v10 = -1073741771;
        ExReleaseSpinLockExclusive(&ACPINamespaceLock, v38);
        v11 = v40;
      }
      else
      {
        v11 = v40;
        if ( _bittest16((const signed __int16 *)(v40 + 64), 8u) )
        {
          v34 = *(_QWORD *)(v40 + 48);
          if ( v34 )
          {
            for ( i = (__int64 *)(v34 + 24); ; i = (__int64 *)(v36 + 56) )
            {
              v36 = *i;
              if ( !*i )
                break;
              if ( v36 == v40 )
              {
                *i = *(_QWORD *)(v40 + 56);
                break;
              }
            }
            ExReleaseRundownProtection((PEX_RUNDOWN_REF)(*(_QWORD *)(v11 + 48) + 32LL));
          }
          InsertOwnerObjList(v47, v11);
          *(_WORD *)(v11 + 64) &= ~0x100u;
          *(_WORD *)(v11 + 64) |= 0x80u;
          ExReleaseSpinLockExclusive(&ACPINamespaceLock, v38);
        }
        else
        {
          ExReleaseSpinLockExclusive(&ACPINamespaceLock, v38);
          if ( (!g_SimulatorCallbackObject || (int)Simulator_NotifyNamespaceCollision(v9, a3) < 0)
            && (a6 & 0x10000) == 0 )
          {
            LogError(3221225525LL);
            AcpiDiagTraceAmlError(0LL, 3221225525LL);
            PrintDebugMessage(35, (_DWORD)v9, 0, 0, 0LL);
          }
          v10 = -1073741771;
        }
      }
      goto LABEL_28;
    }
    if ( NameSpaceObjectNoLock != -1073741772 )
    {
      ExReleaseSpinLockExclusive(&ACPINamespaceLock, v38);
      v11 = v40;
      goto LABEL_49;
    }
    v11 = v40;
    v41 = v40;
  }
  v10 = 0;
  v15 = *v9 - 92;
  if ( *v9 == 92 )
    v15 = v9[1];
  if ( !v15 )
  {
    v37 = NewNameSpaceObject(v49, 0LL);
    v11 = v37;
    if ( v37 )
    {
      *(_DWORD *)(v37 + 40) = 1600085852;
      gpnsNameSpaceRoot = v37;
      InsertOwnerObjList(a4, v37);
    }
    else
    {
      v10 = -1073741670;
      LogError(3221225626LL);
      AcpiDiagTraceAmlError(0LL, 3221225626LL);
      PrintDebugMessage(36, 0, 0, 0, 0LL);
    }
    goto LABEL_27;
  }
  v39 = 0LL;
  v16 = strrchr((const char *)v9, 46);
  if ( v16 )
  {
    *v16 = 0;
    v17 = (unsigned __int8 *)(v16 + 1);
    v10 = GetNameSpaceObjectNoLock(v9, a3, &v39, 2147483649LL);
    if ( v10 )
      goto LABEL_27;
    a3 = v39;
  }
  else
  {
    v26 = *v9;
    if ( *v9 == 92 )
    {
      a3 = gpnsNameSpaceRoot;
      v17 = v9 + 1;
      v39 = gpnsNameSpaceRoot;
    }
    else
    {
      v39 = a3;
      v17 = v9;
      if ( (_BYTE)v26 == 94 )
      {
        v27 = a3;
        v28 = a3;
        do
        {
          if ( !v27 )
            break;
          a3 = *(_QWORD *)(v28 + 16);
          ++v17;
          v27 = a3;
          v39 = a3;
          v28 = a3;
        }
        while ( *v17 == 94 );
      }
    }
  }
  v18 = -1LL;
  do
    ++v18;
  while ( v17[v18] );
  if ( !*v17 || (unsigned int)v18 <= 4 )
  {
    v20 = (char *)HeapAlloc(v49, 1330859592, 0xA0u);
    v41 = (__int64)v20;
    v21 = v20;
    if ( !v20 )
    {
      v10 = -1073741670;
      v11 = 0LL;
      LogError(3221225626LL);
      LODWORD(v39) = -1073741670;
      v50 = 0;
      v49 = 0x41002F004ELL;
      v47 = 0x41002F004ELL;
      *(_QWORD *)&UserData.Size = 6LL;
      v48 = 0;
      UserData.Ptr = (unsigned __int64)&v47;
      v44 = 6LL;
      v43 = &v49;
      v45 = &v39;
      v46 = 4LL;
      EtwWrite((REGHANDLE)WPP_MAIN_CB.Queue.Wcb.DeviceContext, &ACPI_ETW_EVENT_AMLI_ERROR, 0LL, 3u, &UserData);
      PrintDebugMessage(36, 0, 0, 0, 0LL);
      goto LABEL_41;
    }
    memset(v20, 0, 0xA0uLL);
    *((_QWORD *)v21 + 4) = v21 + 24;
    *((_QWORD *)v21 + 3) = v21 + 24;
    *((_DWORD *)v21 + 28) = 2;
    *((_DWORD *)v21 + 32) = 1;
    v22 = v21 + 40;
    *((_QWORD *)v21 + 15) = v21;
    *((_QWORD *)v21 + 18) = 0LL;
    *((_QWORD *)v21 + 19) = -1LL;
    v40 = (__int64)v21;
    if ( *v9 )
    {
      *v22 = 1600085855;
      memmove(v22, v17, (unsigned int)v18);
    }
    else
    {
      *v22 = 0;
    }
    *((_QWORD *)v21 + 2) = a3;
    if ( (gdwfAMLI & 4) != 0 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(a3 + 112));
      v11 = v40;
      a3 = v39;
    }
    else
    {
      v11 = v41;
    }
    v23 = (struct _EX_RUNDOWN_REF *)v47;
    *((_QWORD *)v21 + 6) = v47;
    if ( v23 )
    {
      *((struct _EX_RUNDOWN_REF *)v21 + 7) = v23[3];
      v23[3].Count = (unsigned __int64)v21;
      ExAcquireRundownProtection(v23 + 4);
    }
    v24 = *(_QWORD **)(a3 + 32);
    v25 = a3 + 24;
    if ( *v24 == v25 )
    {
      *(_QWORD *)v21 = v25;
      *((_QWORD *)v21 + 1) = v24;
      *v24 = v21;
      *(_QWORD *)(v25 + 8) = v21;
LABEL_41:
      v6 = (_QWORD *)v51;
      goto LABEL_27;
    }
LABEL_60:
    __fastfail(3u);
  }
  v10 = -1073741773;
  LogError(3221225523LL);
  LODWORD(v39) = -1073741773;
  v48 = 0;
  v47 = 0x41002F004ELL;
  v51 = 0x41002F004ELL;
  *(_QWORD *)&UserData.Size = 6LL;
  v52 = 0;
  UserData.Ptr = (unsigned __int64)&v51;
  v44 = 6LL;
  v43 = &v47;
  v45 = &v39;
  v46 = 4LL;
  EtwWrite((REGHANDLE)WPP_MAIN_CB.Queue.Wcb.DeviceContext, &ACPI_ETW_EVENT_AMLI_ERROR, 0LL, 3u, &UserData);
  if ( (_BYTE)KdDebuggerEnabled )
  {
    DbgPrintEx(0x19u, 0, off_140087378, v17, 0LL, 0LL, 0LL);
    if ( (gDebugger & 0x40000) != 0 )
    {
      RtlStringCbPrintfA(pszDest, 0x100uLL, "!amli err 0x%x %p %p %p %p;g", 37, v17, 0LL, 0LL, 0LL);
      DbgCommandString("ACPI", pszDest);
    }
  }
  else
  {
    RtlStringCbPrintfA(pszDest, 0x100uLL, "AMLIDBG: !amli err 0x%x %p %p %p %p", 37, v17, 0LL, 0LL, 0LL);
    DbgPrintEx(0x19u, 0, "%s\n", pszDest);
  }
  v11 = v41;
LABEL_27:
  ExReleaseSpinLockExclusive(&ACPINamespaceLock, v38);
  if ( !v10 )
    goto LABEL_28;
LABEL_49:
  if ( v10 == -1073741771 )
  {
LABEL_28:
    if ( v6 )
      *v6 = v11;
  }
LABEL_30:
  if ( Pool2 )
  {
    if ( Str != Pool2 )
      ExFreePoolWithTag(Pool2, 0);
  }
  return v10;
}
