/*
 * XREFs of SetPerformanceBoostMode @ 0x140002A50
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x14000E3B0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall SetPerformanceBoostMode(__int64 *a1, int a2)
{
  __int64 v2; // rcx
  unsigned int v3; // r8d
  unsigned __int64 v4; // rax
  __int64 result; // rax
  unsigned __int64 v6; // [rsp+40h] [rbp+8h]

  v2 = *a1;
  v3 = 0;
  if ( (unsigned int)(a2 - 1) > 1 )
    v3 = 0x2000000;
  if ( *(_DWORD *)(v2 + 80) )
    return ((__int64 (__fastcall *)(_QWORD, __int64, __int64, _QWORD))qword_1400159A8)(
             *(unsigned int *)(v2 + 84),
             3221291029LL,
             -33554433LL,
             v3);
  v4 = __readmsr(0xC0010015);
  HIDWORD(v6) = HIDWORD(v4);
  LODWORD(v6) = v3 | v4 & 0xFDFFFFFF;
  result = v6;
  __writemsr(0xC0010015, v6);
  return result;
}
