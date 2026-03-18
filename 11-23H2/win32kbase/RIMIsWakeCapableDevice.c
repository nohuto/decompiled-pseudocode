/*
 * XREFs of RIMIsWakeCapableDevice @ 0x1C00BF6E4
 * Callers:
 *     RIMIsInputSuppressed @ 0x1C00053B0 (RIMIsInputSuppressed.c)
 *     RIMSetDeviceInputMode @ 0x1C00BF684 (RIMSetDeviceInputMode.c)
 *     _lambda_1fab3903b5a8bfcd713af340c69f2789_::operator() @ 0x1C00D3F6C (_lambda_1fab3903b5a8bfcd713af340c69f2789_--operator().c)
 *     RIMHandleTTMDeviceInput @ 0x1C01B4714 (RIMHandleTTMDeviceInput.c)
 * Callees:
 *     RimDeviceTypeToRimInputType @ 0x1C0005B28 (RimDeviceTypeToRimInputType.c)
 *     ?GetWakeOnDeviceTypes@CInputGlobals@@QEBA?AW4InputType@@XZ @ 0x1C00BF780 (-GetWakeOnDeviceTypes@CInputGlobals@@QEBA-AW4InputType@@XZ.c)
 */

__int64 __fastcall RIMIsWakeCapableDevice(__int64 a1)
{
  char v1; // al
  __int64 v2; // r9
  unsigned int v3; // edi
  char v4; // si
  __int64 v5; // r8
  unsigned int v6; // ecx
  __int64 v7; // rdx
  int v8; // ebx
  int WakeOnDeviceTypes; // eax
  int v10; // ecx

  if ( (*(_DWORD *)(a1 + 188) & 2) == 0 )
    return 0LL;
  v1 = RimDeviceTypeToRimInputType(a1, *(unsigned __int8 *)(a1 + 48));
  v3 = 0;
  v4 = v1;
  v5 = (2 * (v1 & 1)) | 4u;
  if ( (v1 & 2) == 0 )
    v5 = 2 * (v1 & 1u);
  v6 = v5 | 8;
  if ( (v1 & 0x10) == 0 )
    v6 = v5;
  v7 = v6 | 0x10;
  if ( (v1 & 4) == 0 )
    v7 = v6;
  v8 = v7 | 0x20;
  if ( (v1 & 8) == 0 )
    v8 = v7;
  WakeOnDeviceTypes = CInputGlobals::GetWakeOnDeviceTypes(*((_QWORD *)&WPP_MAIN_CB.Reserved + 1), v7, v5, v2);
  v10 = v8 | 0x100;
  if ( (v4 & 0x20) == 0 )
    v10 = v8;
  LOBYTE(v3) = (WakeOnDeviceTypes & v10) != 0;
  return v3;
}
