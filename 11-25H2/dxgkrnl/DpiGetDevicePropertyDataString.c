/*
 * XREFs of DpiGetDevicePropertyDataString @ 0x1403EE810
 * Callers:
 *     DpiMiracastInterfaceChange @ 0x14007E760 (DpiMiracastInterfaceChange.c)
 *     ?FillInternalAdapterInfo@DXGADAPTER@@QEBAXPEAUDXGKVMB_COMMAND_GETINTERNALADAPTERINFO_RETURN@@@Z @ 0x1402179D4 (-FillInternalAdapterInfo@DXGADAPTER@@QEBAXPEAUDXGKVMB_COMMAND_GETINTERNALADAPTERINFO_RETURN@@@Z.c)
 *     DpiFdoInitializeFdo @ 0x14023C19C (DpiFdoInitializeFdo.c)
 * Callees:
 *     memset @ 0x14009FCC0 (memset.c)
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
  __int64 v12; // r9
  unsigned int v13; // ebx
  void *Data; // rdi
  int v15; // eax
  void *Pool2; // rax
  ULONG v18; // ebx
  NTSTATUS v19; // eax
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
          v13 = DevicePropertyData;
          if ( DevicePropertyData == -1073741789 )
          {
            if ( Type != 18 )
            {
              v13 = -1073741811;
              WdLogSingleEntry1(2LL, -1073741811LL);
              WdLogGlobalForLineNumber = 1110;
              return v13;
            }
            LODWORD(Size) = Size + 2;
            Pool2 = (void *)ExAllocatePool2(a4, (unsigned int)Size, 1953656900LL, v12);
            Data = Pool2;
            if ( !Pool2 )
            {
              v13 = -1073741670;
              WdLogSingleEntry1(6LL, -1073741670LL);
              WdLogGlobalForLineNumber = 1137;
              return v13;
            }
            v18 = Size;
            memset(Pool2, 0, (unsigned int)Size);
            v19 = IoGetDevicePropertyData(Pdo, PropertyKey, 0, 0, v18, Data, (PULONG)&Size, &Type);
            v13 = v19;
            if ( v19 < 0 )
            {
              WdLogSingleEntry1(2LL, v19);
              WdLogGlobalForLineNumber = 1161;
              ExFreePoolWithTag(Data, 0);
              return v13;
            }
          }
          else
          {
            WdLogSingleEntry1(2LL, DevicePropertyData);
            WdLogGlobalForLineNumber = 1100;
            Data = 0LL;
            if ( (v13 & 0x80000000) != 0 )
              return v13;
          }
          v15 = Size;
          *v9 = Data;
          *v10 = v15;
          return v13;
        }
      }
    }
  }
  return -1073741811LL;
}
