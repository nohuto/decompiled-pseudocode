/*
 * XREFs of ?ndisMRegisterBugCheckHandler@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140098480
 * Callers:
 *     NdisMRegisterAdapterShutdownHandler @ 0x14009DAB0 (NdisMRegisterAdapterShutdownHandler.c)
 *     ?ndisPmInitializeMiniport@@_Y2PAGENPNP@@AHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1401846F0 (-ndisPmInitializeMiniport@@_Y2PAGENPNP@@AHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPER_CONFIGURATION_HANDLE@@PEAU_UNICODE_STRING@@PEAX@Z @ 0x140186B80 (-ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPE.c)
 * Callees:
 *     <none>
 */

void __fastcall ndisMRegisterBugCheckHandler(char *Buffer)
{
  if ( (unsigned __int8)Buffer[32] < 6u )
  {
    if ( !*((_QWORD *)Buffer + 258) )
      return;
  }
  else if ( (*((_DWORD *)Buffer + 30) & 0x400) == 0 || !*(_QWORD *)(*((_QWORD *)Buffer + 470) + 232LL) )
  {
    return;
  }
  if ( (*((_DWORD *)Buffer + 30) & 0x2000) == 0 )
  {
    Buffer[2128] = 0;
    if ( KeRegisterBugCheckCallback(
           (PKBUGCHECK_CALLBACK_RECORD)(Buffer + 2072),
           ndisBugcheckHandler,
           Buffer,
           0x17D8u,
           (PUCHAR)"Ndis miniport") )
    {
      *((_DWORD *)Buffer + 30) |= 0x2000u;
    }
  }
}
