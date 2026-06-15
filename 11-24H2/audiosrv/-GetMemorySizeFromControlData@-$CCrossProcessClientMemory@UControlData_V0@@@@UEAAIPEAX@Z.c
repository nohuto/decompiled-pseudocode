/*
 * XREFs of ?GetMemorySizeFromControlData@?$CCrossProcessClientMemory@UControlData_V0@@@@UEAAIPEAX@Z @ 0x180165BC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CCrossProcessClientMemory<ControlData_V0>::GetMemorySizeFromControlData(__int64 a1, _DWORD *a2)
{
  if ( a2[45] == -1 )
    return (unsigned int)a2[92];
  else
    return (unsigned int)a2[94];
}
