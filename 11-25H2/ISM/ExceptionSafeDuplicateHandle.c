/*
 * XREFs of ExceptionSafeDuplicateHandle @ 0x18012E1F4
 * Callers:
 *     ?GetDuplicatedInputSinkHandle@LegacyInputSinkData@@QEBA?AV?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AJPEAX@Z$1?NtCloseCompositionInputSink@@YAJ0@Z@details@wil@@@details@wil@@@wil@@XZ @ 0x18012E28C (-GetDuplicatedInputSinkHandle@LegacyInputSinkData@@QEBA-AV-$unique_any_t@V-$unique_storage@U-$ha.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ExceptionSafeDuplicateHandle(HANDLE hSourceHandle, LPHANDLE lpTargetHandle)
{
  unsigned int v4; // edi
  HANDLE CurrentProcess; // rbx
  HANDLE v6; // rax

  v4 = 0;
  CurrentProcess = GetCurrentProcess();
  v6 = GetCurrentProcess();
  if ( !DuplicateHandle(v6, hSourceHandle, CurrentProcess, lpTargetHandle, 0, 0, 2u) )
    return (unsigned int)-1073741816;
  return v4;
}
