/*
 * XREFs of ?InRapidHPDPeriod@RAPID_HPD_MANAGER@@AEAAXW4RAPID_HPD_PERIOD_UPDATE@1@AEA_N1@Z @ 0x14004C284
 * Callers:
 *     ?ReportTriggerEvent@RAPID_HPD_MANAGER@@QEAAXW4RAPID_HPD_TRIGGER@@U_LUID@@@Z @ 0x140046F04 (-ReportTriggerEvent@RAPID_HPD_MANAGER@@QEAAXW4RAPID_HPD_TRIGGER@@U_LUID@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RAPID_HPD_MANAGER::InRapidHPDPeriod(__int64 a1, int a2, bool *a3, bool *a4)
{
  __int64 v5; // rax
  __int64 v6; // r10
  __int64 v7; // rdx
  __int64 v8; // rdx
  __int64 result; // rax

  v5 = MEMORY[0xFFFFF78000000014];
  v6 = (unsigned int)(10000 * *(_DWORD *)(a1 + 24)) + *(_QWORD *)(a1 + 56);
  v7 = (unsigned int)(10000 * *(_DWORD *)(a1 + 28));
  *a3 = MEMORY[0xFFFFF78000000014] < v6;
  v8 = *(_QWORD *)(a1 + 72) + v7;
  *a4 = v5 < v8;
  if ( a2 == 1 || a2 == 2 && v5 < v6 && v5 < v8 )
    *(_QWORD *)(a1 + 56) = v5;
  result = *(unsigned int *)(a1 + 88);
  if ( (_DWORD)result == 1 )
  {
    *a3 = 1;
  }
  else if ( (_DWORD)result == 2 )
  {
    *a3 = 0;
  }
  return result;
}
