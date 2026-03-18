/*
 * XREFs of Callout @ 0x140A29C30
 * Callers:
 *     KeExpandKernelStackAndCalloutInternal @ 0x140347C90 (KeExpandKernelStackAndCalloutInternal.c)
 * Callees:
 *     sub_140979E70 @ 0x140979E70 (sub_140979E70.c)
 */

void __fastcall Callout(PVOID Parameter)
{
  *((_DWORD *)Parameter + 7) = sub_140979E70(
                                 *(unsigned int **)Parameter,
                                 *((_DWORD *)Parameter + 2),
                                 *((_DWORD *)Parameter + 3),
                                 (char **)Parameter + 2,
                                 (unsigned int *)Parameter + 6);
}
