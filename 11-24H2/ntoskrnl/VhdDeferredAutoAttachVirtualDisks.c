/*
 * XREFs of VhdDeferredAutoAttachVirtualDisks @ 0x1406A2788
 * Callers:
 *     PipOobeCompleteAsyncCallback @ 0x140717E20 (PipOobeCompleteAsyncCallback.c)
 * Callees:
 *     VhdiAutoAttachOneVhd @ 0x14082A69C (VhdiAutoAttachOneVhd.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void VhdDeferredAutoAttachVirtualDisks()
{
  char *v0; // rbx
  __int64 v1; // rax
  _WORD *v2; // rcx
  __int64 v3; // rdx

  while ( 1 )
  {
    v0 = (char *)qword_140E651C8;
    if ( qword_140E651C8 == &qword_140E651C8 )
      break;
    if ( *((PVOID **)qword_140E651C8 + 1) != &qword_140E651C8
      || (v1 = *(_QWORD *)qword_140E651C8, *(PVOID *)(*(_QWORD *)qword_140E651C8 + 8LL) != qword_140E651C8) )
    {
      __fastfail(3u);
    }
    qword_140E651C8 = *(PVOID *)qword_140E651C8;
    v2 = v0 + 36;
    *(_QWORD *)(v1 + 8) = &qword_140E651C8;
    v3 = -1LL;
    do
      ++v3;
    while ( v2[v3] );
    VhdiAutoAttachOneVhd(v2, (unsigned int)(2 * v3));
    ExFreePoolWithTag(v0, 0);
  }
}
