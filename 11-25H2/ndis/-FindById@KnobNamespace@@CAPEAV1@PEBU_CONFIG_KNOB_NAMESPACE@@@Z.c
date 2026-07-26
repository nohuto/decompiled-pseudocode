/*
 * XREFs of ?FindById@KnobNamespace@@CAPEAV1@PEBU_CONFIG_KNOB_NAMESPACE@@@Z @ 0x140153CF0
 * Callers:
 *     ?Ioctl@KnobNamespace@@SAJ_NKKKPEAX1PEAK@Z @ 0x140153DD0 (-Ioctl@KnobNamespace@@SAJ_NKKKPEAX1PEAK@Z.c)
 * Callees:
 *     <none>
 */

struct KnobNamespace *__fastcall KnobNamespace::FindById(const struct _CONFIG_KNOB_NAMESPACE *a1)
{
  __int64 *i; // rdx
  __int64 v3; // rcx

  for ( i = (__int64 *)qword_140126B98; i != &qword_140126B98; i = (__int64 *)*i )
  {
    if ( *((_DWORD *)i - 6) == a1->NamespaceType )
    {
      v3 = *(__int64 *)((char *)i - 20) - *(_QWORD *)&a1->ObjectId.Data1;
      if ( !v3 )
        v3 = *(__int64 *)((char *)i - 12) - *(_QWORD *)a1->ObjectId.Data4;
      if ( !v3 )
        return (struct KnobNamespace *)(i - 4);
    }
  }
  return 0LL;
}
