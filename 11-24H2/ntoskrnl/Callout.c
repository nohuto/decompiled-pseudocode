/*
 * XREFs of Callout @ 0x140A2FCE0
 * Callers:
 *     KeExpandKernelStackAndCalloutInternal @ 0x14027D7A0 (KeExpandKernelStackAndCalloutInternal.c)
 * Callees:
 *     sub_140973C40 @ 0x140973C40 (sub_140973C40.c)
 */

void __fastcall Callout(PVOID Parameter)
{
  *((_DWORD *)Parameter + 7) = sub_140973C40(
                                 *(unsigned int **)Parameter,
                                 *((_DWORD *)Parameter + 2),
                                 *((_DWORD *)Parameter + 3),
                                 (char **)Parameter + 2,
                                 (unsigned int *)Parameter + 6);
}
