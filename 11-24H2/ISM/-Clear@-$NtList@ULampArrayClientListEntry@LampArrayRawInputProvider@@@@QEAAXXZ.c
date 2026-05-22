/*
 * XREFs of ?Clear@?$NtList@ULampArrayClientListEntry@LampArrayRawInputProvider@@@@QEAAXXZ @ 0x18009919C
 * Callers:
 *     ??1LampArrayRawInputProvider@@EEAA@XZ @ 0x1800E2FB0 (--1LampArrayRawInputProvider@@EEAA@XZ.c)
 *     ?Shutdown@LampArrayRawInputProvider@@AEAAXXZ @ 0x1800E40D0 (-Shutdown@LampArrayRawInputProvider@@AEAAXXZ.c)
 * Callees:
 *     ??_GLampArrayClientListEntry@LampArrayRawInputProvider@@QEAAPEAXI@Z @ 0x1800E339C (--_GLampArrayClientListEntry@LampArrayRawInputProvider@@QEAAPEAXI@Z.c)
 */

__int64 __fastcall NtList<LampArrayRawInputProvider::LampArrayClientListEntry>::Clear(
        LampArrayRawInputProvider::LampArrayClientListEntry *a1,
        unsigned int a2)
{
  LampArrayRawInputProvider::LampArrayClientListEntry *v3; // rcx
  __int64 result; // rax

  while ( 1 )
  {
    v3 = *(LampArrayRawInputProvider::LampArrayClientListEntry **)a1;
    if ( *(LampArrayRawInputProvider::LampArrayClientListEntry **)(*(_QWORD *)a1 + 8LL) != a1
      || (result = *(_QWORD *)v3, *(LampArrayRawInputProvider::LampArrayClientListEntry **)(*(_QWORD *)v3 + 8LL) != v3) )
    {
      __fastfail(3u);
    }
    *(_QWORD *)a1 = result;
    *(_QWORD *)(result + 8) = a1;
    if ( v3 == a1 )
      break;
    LampArrayRawInputProvider::LampArrayClientListEntry::`scalar deleting destructor'(v3, a2);
    --*((_DWORD *)a1 + 4);
  }
  return result;
}
