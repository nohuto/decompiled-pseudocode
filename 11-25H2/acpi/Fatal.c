/*
 * XREFs of Fatal @ 0x14006F340
 * Callers:
 *     <none>
 * Callees:
 *     ValidateArgTypes @ 0x140007F70 (ValidateArgTypes.c)
 *     _guard_dispatch_icall @ 0x140070B90 (_guard_dispatch_icall.c)
 */

__int64 __fastcall Fatal(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = ValidateArgTypes(a1, *(_QWORD *)(a2 + 80), 0, "III");
  if ( !(_DWORD)result )
  {
    if ( ghFatal )
      ghFatal(
        *(unsigned int *)(*(_QWORD *)(a2 + 80) + 16LL),
        *(unsigned int *)(*(_QWORD *)(a2 + 80) + 56LL),
        *(unsigned int *)(*(_QWORD *)(a2 + 80) + 96LL),
        a1,
        qword_140088EF8);
    return 3222536198LL;
  }
  return result;
}
