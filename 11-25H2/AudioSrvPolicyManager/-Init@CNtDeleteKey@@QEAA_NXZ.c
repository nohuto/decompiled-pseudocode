/*
 * XREFs of ?Init@CNtDeleteKey@@QEAA_NXZ @ 0x180049708
 * Callers:
 *     ?SafeRegCreateKeyEx@@YAJPEAUHKEY__@@PEBGKPEAGKKPEAU_SECURITY_ATTRIBUTES@@PEAPEAU1@PEAK@Z @ 0x1800127C0 (-SafeRegCreateKeyEx@@YAJPEAUHKEY__@@PEBGKPEAGKKPEAU_SECURITY_ATTRIBUTES@@PEAPEAU1@PEAK@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CNtDeleteKey::Init(CNtDeleteKey *this)
{
  HMODULE Library; // rax

  if ( hLibModule && qword_180067C88 )
  {
    LOBYTE(Library) = 1;
  }
  else
  {
    Library = LoadLibraryExW(L"ntdll.dll", 0LL, 0x800u);
    hLibModule = Library;
    if ( Library )
    {
      qword_180067C88 = (__int64 (__fastcall *)(_QWORD))GetProcAddress(Library, "NtDeleteKey");
      LOBYTE(Library) = qword_180067C88 != 0LL;
    }
  }
  return (char)Library;
}
