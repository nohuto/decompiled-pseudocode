/*
 * XREFs of PopDirectedDripsDiagInsertErrorRecord @ 0x140A98B38
 * Callers:
 *     PopDirectedDripsDiagTraceBroadcastFailureDevice @ 0x140763E2C (PopDirectedDripsDiagTraceBroadcastFailureDevice.c)
 *     PopDirectedDripsDiagTraceProblemDevice @ 0x140763F0C (PopDirectedDripsDiagTraceProblemDevice.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

__int64 __fastcall PopDirectedDripsDiagInsertErrorRecord(__int64 a1, __int64 a2, int a3)
{
  __int64 *v3; // rbx
  __int64 v5; // rcx
  __int64 result; // rax

  v3 = (__int64 *)(a1 + 24);
  v5 = *(_QWORD *)(a1 + 24);
  if ( v5 )
  {
    do
    {
      if ( *(_QWORD *)(v5 + 8) == a2 && *(_DWORD *)(v5 + 16) == a3 )
        break;
      v3 = (__int64 *)v5;
      v5 = *(_QWORD *)v5;
    }
    while ( v5 );
    result = *v3;
    if ( *v3 )
      goto LABEL_6;
  }
  result = ExAllocatePool2(0x100uLL, 0x18uLL, 0x67696450u);
  *v3 = result;
  if ( result )
  {
    *(_QWORD *)(result + 8) = a2;
    *(_DWORD *)(*v3 + 16) = a3;
    result = *v3;
LABEL_6:
    ++*(_DWORD *)(result + 20);
  }
  return result;
}
