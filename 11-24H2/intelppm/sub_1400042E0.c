/*
 * XREFs of sub_1400042E0 @ 0x1400042E0
 * Callers:
 *     sub_140033CF0 @ 0x140033CF0 (sub_140033CF0.c)
 *     sub_14003EAA0 @ 0x14003EAA0 (sub_14003EAA0.c)
 *     WorkerRoutine @ 0x140040AD0 (WorkerRoutine.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400102D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall sub_1400042E0(_QWORD *a1, __int64 a2)
{
  unsigned int v4; // edi
  __int64 v5; // rax

  v4 = -1073741823;
  if ( *((_BYTE *)a1 + 12) )
  {
    v5 = (*(__int64 (__fastcall **)(__int64, _QWORD))(qword_140019120 + 3016))(qword_140019128, *a1);
    if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64, __int64))(qword_140019120 + 2968))(
           qword_140019128,
           v5,
           1LL) )
    {
      return (*(unsigned int (__fastcall **)(__int64, _QWORD, _QWORD, __int64))(qword_140019120 + 3024))(
               qword_140019128,
               *a1,
               *((unsigned int *)a1 + 2),
               a2);
    }
  }
  return v4;
}
