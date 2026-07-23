/*
 * XREFs of EtwpGetMicroarchitecturalPmcAffinity @ 0x1407A802C
 * Callers:
 *     EtwpLoadMicroarchitecturalProfileGroup @ 0x1407A87D4 (EtwpLoadMicroarchitecturalProfileGroup.c)
 *     EtwSetPerformanceTraceInformation @ 0x140A39934 (EtwSetPerformanceTraceInformation.c)
 * Callees:
 *     KeRemoveProcessorAffinityEx @ 0x1403A4D10 (KeRemoveProcessorAffinityEx.c)
 *     KeQueryActiveProcessorAffinity2 @ 0x1404564F0 (KeQueryActiveProcessorAffinity2.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

__int64 __fastcall EtwpGetMicroarchitecturalPmcAffinity(__int64 a1, unsigned __int16 *a2)
{
  __int64 result; // rax
  unsigned int v5; // ebx
  unsigned int v6; // esi
  __int64 *v7; // rdi
  __int64 v8; // rdx
  int v9; // eax
  int v10; // ecx
  int v11; // edx
  _DWORD v12[4]; // [rsp+20h] [rbp-38h]

  result = KeQueryActiveProcessorAffinity2((__int64)a2);
  v5 = 0;
  v6 = result;
  if ( (_DWORD)result )
  {
    v7 = KiProcessorBlock;
    do
    {
      v8 = *v7;
      v9 = *(unsigned __int8 *)(*v7 + 66);
      v12[0] = *(char *)(*v7 + 64);
      v10 = *(unsigned __int8 *)(v8 + 67);
      v12[2] = v9;
      result = 0LL;
      v12[1] = v10;
      while ( (unsigned int)result < 3 )
      {
        v11 = *(_DWORD *)(a1 + 4 * result);
        if ( v11 == -1 )
          break;
        if ( v11 != v12[result] )
        {
          result = KeRemoveProcessorAffinityEx(a2, v5);
          break;
        }
        result = (unsigned int)(result + 1);
      }
      ++v5;
      ++v7;
    }
    while ( v5 < v6 );
  }
  return result;
}
