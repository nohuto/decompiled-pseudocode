/*
 * XREFs of KeRemoveSystemServiceTable @ 0x140738BC0
 * Callers:
 *     <none>
 * Callees:
 *     PsGetSessionIdEx @ 0x14030CBE0 (PsGetSessionIdEx.c)
 */

char __fastcall KeRemoveSystemServiceTable(int a1)
{
  __int64 v3; // rcx

  if ( (unsigned int)PsGetSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process) )
    return 1;
  if ( (unsigned int)(a1 - 1) <= 1 && ((_QWORD)xmmword_1412018E0 || xmmword_140FC72E0 || (_QWORD)xmmword_140FC7420) )
  {
    if ( a1 == 1 )
    {
      xmmword_140FC72E0 = 0LL;
      LODWORD(xmmword_140FC72F0) = 0;
      *((_QWORD *)&xmmword_140FC72F0 + 1) = 0LL;
    }
    else
    {
      v3 = 2LL * (unsigned int)(a1 - 1);
      *(_QWORD *)&KeServiceDescriptorTableFilter[v3] = 0LL;
      LODWORD(KeServiceDescriptorTableFilter[v3 + 1]) = 0;
      *((_QWORD *)&KeServiceDescriptorTableFilter[v3 + 1] + 1) = 0LL;
    }
    return 1;
  }
  return 0;
}
