/*
 * XREFs of DpiGetDevicePropertyDataString @ 0x1403E8B38
 * Callers:
 *     DpiMiracastInterfaceChange @ 0x14007EDE0 (DpiMiracastInterfaceChange.c)
 *     ?FillInternalAdapterInfo@DXGADAPTER@@QEBAXPEAUDXGKVMB_COMMAND_GETINTERNALADAPTERINFO_RETURN@@@Z @ 0x14021DFA4 (-FillInternalAdapterInfo@DXGADAPTER@@QEBAXPEAUDXGKVMB_COMMAND_GETINTERNALADAPTERINFO_RETURN@@@Z.c)
 *     DpiFdoInitializeFdo @ 0x140242CBC (DpiFdoInitializeFdo.c)
 * Callees:
 *     memset @ 0x1400A2000 (memset.c)
 */

__int64 __fastcall DpiGetDevicePropertyDataString(
        PDEVICE_OBJECT Pdo,
        DEVPROPKEY *PropertyKey,
        __int64 a3,
        __int64 a4,
        _QWORD *a5,
        _DWORD *a6)
{
  _QWORD *v9; // rsi
  _DWORD *v10; // r14
  NTSTATUS DevicePropertyData; // eax
  unsigned int v12; // ebx
  void *Data; // rdi
  int v14; // eax
  void *Pool2; // rax
  ULONG v17; // ebx
  NTSTATUS v18; // eax
  ULONG Type; // [rsp+70h] [rbp+8h] BYREF
  size_t Size; // [rsp+80h] [rbp+18h] BYREF

  Type = 0;
  LODWORD(Size) = 0;
  if ( Pdo )
  {
    if ( PropertyKey )
    {
      v9 = a5;
      if ( a5 )
      {
        v10 = a6;
        if ( a6 )
        {
          DevicePropertyData = IoGetDevicePropertyData(Pdo, PropertyKey, 0, 0, 0, 0LL, (PULONG)&Size, &Type);
          v12 = DevicePropertyData;
          if ( DevicePropertyData == -1073741789 )
          {
            if ( Type != 18 )
            {
              v12 = -1073741811;
              WdLogSingleEntry1(2LL, -1073741811LL);
              WdLogGlobalForLineNumber = 1110;
              return v12;
            }
            LODWORD(Size) = Size + 2;
            Pool2 = (void *)ExAllocatePool2(a4, (unsigned int)Size, 1953656900LL);
            Data = Pool2;
            if ( !Pool2 )
            {
              v12 = -1073741670;
              WdLogSingleEntry1(6LL, -1073741670LL);
              WdLogGlobalForLineNumber = 1137;
              return v12;
            }
            v17 = Size;
            memset(Pool2, 0, (unsigned int)Size);
            v18 = IoGetDevicePropertyData(Pdo, PropertyKey, 0, 0, v17, Data, (PULONG)&Size, &Type);
            v12 = v18;
            if ( v18 < 0 )
            {
              WdLogSingleEntry1(2LL, v18);
              WdLogGlobalForLineNumber = 1161;
              ExFreePoolWithTag(Data, 0);
              return v12;
            }
          }
          else
          {
            WdLogSingleEntry1(2LL, DevicePropertyData);
            WdLogGlobalForLineNumber = 1100;
            Data = 0LL;
            if ( (v12 & 0x80000000) != 0 )
              return v12;
          }
          v14 = Size;
          *v9 = Data;
          *v10 = v14;
          return v12;
        }
      }
    }
  }
  return -1073741811LL;
}
