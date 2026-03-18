/*
 * XREFs of Simulator_InitializeInterface @ 0x1400C81B0
 * Callers:
 *     DriverEntry @ 0x1400C64B0 (DriverEntry.c)
 * Callees:
 *     <none>
 */

__int64 Simulator_InitializeInterface()
{
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-40h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-30h] BYREF

  *(&ObjectAttributes.Attributes + 1) = 0;
  *(&ObjectAttributes.Length + 1) = 0;
  DestinationString = 0LL;
  if ( !g_SimulatorCallbackObject )
  {
    RtlInitUnicodeString(&DestinationString, L"\\Callback\\AcpiSimulator");
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 16;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( ExCreateCallback((PCALLBACK_OBJECT *)&g_SimulatorCallbackObject, &ObjectAttributes, 0, 1u) >= 0
      && g_SimulatorCallbackObject )
    {
      g_SimulatorCallbackFuncHandle = ExRegisterCallback(
                                        (PCALLBACK_OBJECT)g_SimulatorCallbackObject,
                                        (PCALLBACK_FUNCTION)Simulator_CallbackWorker,
                                        0LL);
      if ( !g_SimulatorCallbackFuncHandle )
      {
        if ( g_SimulatorCallbackObject )
        {
          ObfDereferenceObject(g_SimulatorCallbackObject);
          g_SimulatorCallbackObject = 0LL;
        }
        if ( g_SimulatorCallbackFuncHandle )
        {
          ExUnregisterCallback(g_SimulatorCallbackFuncHandle);
          g_SimulatorCallbackFuncHandle = 0LL;
        }
      }
    }
    else
    {
      g_SimulatorCallbackObject = 0LL;
    }
  }
  return 0LL;
}
