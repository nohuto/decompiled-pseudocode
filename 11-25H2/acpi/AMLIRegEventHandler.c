/*
 * XREFs of AMLIRegEventHandler @ 0x140051D40
 * Callers:
 *     UnRegisterOperationRegionHandler @ 0x1400A2424 (UnRegisterOperationRegionHandler.c)
 *     RegisterOperationRegionHandler @ 0x1400BFA6C (RegisterOperationRegionHandler.c)
 *     OSInitializeCallbacks @ 0x1400C56B4 (OSInitializeCallbacks.c)
 * Callees:
 *     RegRSAccess @ 0x1400010AC (RegRSAccess.c)
 *     LogError @ 0x14000FE74 (LogError.c)
 *     AcpiDiagTraceAmlError @ 0x14000FF1C (AcpiDiagTraceAmlError.c)
 *     PrintDebugMessage @ 0x140010060 (PrintDebugMessage.c)
 *     Simulator_Pre_RegEventHandler @ 0x140051FD0 (Simulator_Pre_RegEventHandler.c)
 *     Simulator_Free_Arguments @ 0x14006B1AC (Simulator_Free_Arguments.c)
 *     Simulator_TestNotifyRet @ 0x14006B5F4 (Simulator_TestNotifyRet.c)
 *     RegEventHandler @ 0x14006D210 (RegEventHandler.c)
 *     RegOpcodeHandler @ 0x14006D26C (RegOpcodeHandler.c)
 */

__int64 AMLIRegEventHandler(unsigned int a1, unsigned int a2, ...)
{
  __int64 v2; // rsi
  unsigned __int64 v3; // rdi
  __int64 v4; // r10
  __int64 v5; // r11
  __int64 result; // rax
  __int64 *v8; // rcx
  unsigned int v9; // eax
  __int64 v10; // r9
  char v11; // r9
  unsigned int v12; // ebx
  _QWORD v13[3]; // [rsp+30h] [rbp-18h] BYREF
  __int64 v14; // [rsp+60h] [rbp+18h] BYREF
  va_list va; // [rsp+60h] [rbp+18h]
  __int64 v16; // [rsp+68h] [rbp+20h] BYREF
  va_list va1; // [rsp+68h] [rbp+20h]
  va_list va2; // [rsp+70h] [rbp+28h] BYREF

  va_start(va2, a2);
  va_start(va1, a2);
  va_start(va, a2);
  v14 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v16 = va_arg(va2, _QWORD);
  v2 = 0LL;
  v3 = a1;
  dword_140089138 = 0;
  v4 = v16;
  v5 = v14;
  v13[0] = 0LL;
  pszDest = 0;
  if ( g_SimulatorCallbackObject )
  {
    result = Simulator_Pre_RegEventHandler(a1, a2, (unsigned int)va, (unsigned int)va1, (__int64)v13);
    if ( (_DWORD)result )
      return result;
    v4 = v16;
    v5 = v14;
    v2 = v13[0];
  }
  if ( (unsigned int)v3 > 0xB )
  {
    if ( (_DWORD)v3 != 12 )
    {
      switch ( (_DWORD)v3 )
      {
        case 0xD:
          v8 = &ghMapTable;
          goto LABEL_14;
        case 0xE:
          v8 = (__int64 *)&ghGetAcpiTableVersion;
          goto LABEL_14;
        case 0xF:
          v8 = (__int64 *)&ghCheckOsiString;
          goto LABEL_14;
        case 0x10:
          v8 = &ghMutexObject;
          goto LABEL_14;
        case 0x11:
          v8 = &ghQueryDLMSupportHandler;
          goto LABEL_14;
        case 0x12:
          v8 = &ghLoadTable;
          goto LABEL_14;
        case 0x13:
          v8 = &ghUnloadTable;
          goto LABEL_14;
        case 0x14:
          v8 = (__int64 *)&ghNativeMethodEvalObject;
          goto LABEL_14;
      }
      goto LABEL_38;
    }
    v10 = 0x80000000LL;
    goto LABEL_48;
  }
  if ( (_DWORD)v3 == 11 )
  {
    v8 = &ghDestroyObj;
    goto LABEL_14;
  }
  if ( (unsigned int)v3 > 6 )
  {
    if ( (_DWORD)v3 != 7 )
    {
      if ( (_DWORD)v3 == 8 )
      {
        v8 = (__int64 *)&qword_140089118;
      }
      else if ( (_DWORD)v3 == 9 )
      {
        v8 = &qword_140089128;
      }
      else
      {
        v8 = (__int64 *)&ghCreate;
      }
      goto LABEL_14;
    }
    v11 = 1;
    goto LABEL_20;
  }
  switch ( (_DWORD)v3 )
  {
    case 6:
      v11 = 0;
LABEL_20:
      v9 = RegRSAccess(a2, v5, v4, v11);
      goto LABEL_49;
    case 1:
      v10 = 0LL;
LABEL_48:
      v9 = RegOpcodeHandler(a2, v5, v4, v10);
LABEL_49:
      v12 = v9;
      if ( v9 == 32772 )
        v12 = 259;
      goto LABEL_51;
    case 2:
      v8 = &ghNotify;
      goto LABEL_14;
    case 3:
      v8 = &ghFatal;
      goto LABEL_14;
    case 4:
      v8 = &ghValidateTable;
      goto LABEL_14;
    case 5:
      v8 = (__int64 *)&ghGlobalLock;
LABEL_14:
      v9 = RegEventHandler(v8, v5, v4);
      goto LABEL_49;
  }
LABEL_38:
  v12 = -1072431091;
  LogError(-1072431091);
  AcpiDiagTraceAmlError(0LL, -1072431091);
  PrintDebugMessage(0xA4u, (const void *)v3, 0LL, 0LL, 0LL);
LABEL_51:
  if ( g_SimulatorCallbackObject )
  {
    if ( v2 )
    {
      v12 = Simulator_TestNotifyRet((PVOID)v2);
      if ( (unsigned int)(*(_DWORD *)(v2 + 4) - 1) <= 2 )
        Simulator_Free_Arguments(*(unsigned int *)(v2 + 32), *(_QWORD *)(v2 + 40));
      ExFreePoolWithTag((PVOID)v2, 0);
    }
    else
    {
      return (unsigned int)-1073741823;
    }
  }
  return v12;
}
