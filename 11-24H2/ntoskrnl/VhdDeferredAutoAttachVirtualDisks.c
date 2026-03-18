/*
 * XREFs of VhdDeferredAutoAttachVirtualDisks @ 0x1406A1730
 * Callers:
 *     PipOobeCompleteAsyncCallback @ 0x14071A290 (PipOobeCompleteAsyncCallback.c)
 * Callees:
 *     VhdiAutoAttachOneVhd @ 0x140829E6C (VhdiAutoAttachOneVhd.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

void VhdDeferredAutoAttachVirtualDisks()
{
  char *v0; // rbx
  __int64 v1; // rax
  _WORD *v2; // rcx
  __int64 v3; // rdx

  while ( 1 )
  {
    v0 = (char *)qword_140E65048;
    if ( qword_140E65048 == &qword_140E65048 )
      break;
    if ( *((PVOID **)qword_140E65048 + 1) != &qword_140E65048
      || (v1 = *(_QWORD *)qword_140E65048, *(PVOID *)(*(_QWORD *)qword_140E65048 + 8LL) != qword_140E65048) )
    {
      __fastfail(3u);
    }
    qword_140E65048 = *(PVOID *)qword_140E65048;
    v2 = v0 + 36;
    *(_QWORD *)(v1 + 8) = &qword_140E65048;
    v3 = -1LL;
    do
      ++v3;
    while ( v2[v3] );
    VhdiAutoAttachOneVhd(v2, (unsigned int)(2 * v3));
    ExFreePoolWithTag(v0, 0);
  }
}
