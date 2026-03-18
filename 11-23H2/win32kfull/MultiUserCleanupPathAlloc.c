/*
 * XREFs of MultiUserCleanupPathAlloc @ 0x1C00A01D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall MultiUserCleanupPathAlloc(Gre::Base *a1)
{
  struct Gre::Base::SESSION_GLOBALS *v1; // rbx
  __int64 v2; // rcx
  _QWORD *v3; // rcx

  v1 = Gre::Base::Globals(a1);
  v2 = *((_QWORD *)v1 + 755);
  if ( v2 )
  {
    GreDeleteSemaphore(v2);
    *((_QWORD *)v1 + 755) = 0LL;
  }
  while ( 1 )
  {
    v3 = (_QWORD *)*((_QWORD *)v1 + 756);
    if ( !v3 )
      break;
    *((_QWORD *)v1 + 756) = *v3;
    Win32FreePool(v3);
  }
}
