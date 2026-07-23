/*
 * XREFs of Callout @ 0x140A24720
 * Callers:
 *     KeExpandKernelStackAndCalloutInternal @ 0x140232D30 (KeExpandKernelStackAndCalloutInternal.c)
 * Callees:
 *     sub_14095C450 @ 0x14095C450 (sub_14095C450.c)
 */

void __fastcall Callout(PVOID Parameter)
{
  *((_DWORD *)Parameter + 7) = sub_14095C450(
                                 *(unsigned int **)Parameter,
                                 *((_DWORD *)Parameter + 2),
                                 *((_DWORD *)Parameter + 3),
                                 (char **)Parameter + 2,
                                 (unsigned int *)Parameter + 6);
}
