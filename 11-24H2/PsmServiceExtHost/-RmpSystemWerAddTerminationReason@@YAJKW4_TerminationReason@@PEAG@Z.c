/*
 * XREFs of ?RmpSystemWerAddTerminationReason@@YAJKW4_TerminationReason@@PEAG@Z @ 0x180006E8C
 * Callers:
 *     ?HampHostQueryAndLogTerminatingProcessCount@@YAKPEAU_HAM_PROCESS_SNAPSHOT@@W4_HAM_TERMINATE_REASON@@@Z @ 0x180007600 (-HampHostQueryAndLogTerminatingProcessCount@@YAKPEAU_HAM_PROCESS_SNAPSHOT@@W4_HAM_TERMINATE_REAS.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RmpSystemWerAddTerminationReason(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  unsigned int v3; // edi
  int v4; // eax
  unsigned int v5; // r8d

  v2 = a2;
  v3 = a1;
  v4 = WerpAddTerminationReason(a1, a2, L"HAM", 0LL);
  v5 = 0;
  if ( v4 < 0 )
    return (unsigned int)WerpAddTerminationReason(v3, v2, L"HAM", 0LL) | 0xC0000000;
  return v5;
}
