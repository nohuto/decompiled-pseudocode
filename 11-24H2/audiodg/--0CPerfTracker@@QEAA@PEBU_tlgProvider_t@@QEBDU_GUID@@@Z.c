/*
 * XREFs of ??0CPerfTracker@@QEAA@PEBU_tlgProvider_t@@QEBDU_GUID@@@Z @ 0x1400074C0
 * Callers:
 *     ?ActivateAPOs@CPipeInstance@@AEAAJ_K@Z @ 0x140006E20 (-ActivateAPOs@CPipeInstance@@AEAAJ_K@Z.c)
 *     ?DeactivateAPOsAndRemoveConnections@CPipeInstance@@QEAAXXZ @ 0x140006FE4 (-DeactivateAPOsAndRemoveConnections@CPipeInstance@@QEAAXXZ.c)
 *     ?ResolveFormatConflictsRightLeft@CPipeInstance@@AEAAJXZ @ 0x1400116C8 (-ResolveFormatConflictsRightLeft@CPipeInstance@@AEAAJXZ.c)
 * Callees:
 *     ?StringCchPrintfExA@@YAJPEAD_KPEAPEADPEA_KKPEBDZZ @ 0x14002CAAC (-StringCchPrintfExA@@YAJPEAD_KPEAPEADPEA_KKPEBDZZ.c)
 *     ?StringCchPrintfA@@YAJPEAD_KPEBDZZ @ 0x1400337C4 (-StringCchPrintfA@@YAJPEAD_KPEBDZZ.c)
 *     memset_0 @ 0x14005A0E4 (memset_0.c)
 */

CPerfTracker *__fastcall CPerfTracker::CPerfTracker(
        CPerfTracker *this,
        const struct _tlgProvider_t *a2,
        const char *a3,
        struct _GUID *a4)
{
  LARGE_INTEGER *v4; // r12

  v4 = (LARGE_INTEGER *)((char *)this + 16);
  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  memset_0((char *)this + 24, 0, 0x40uLL);
  memset_0((char *)this + 88, 0, 0x80uLL);
  *((_QWORD *)this + 29) = a2;
  StringCchPrintfExA((STRSAFE_LPSTR)this + 24, 0x40uLL, (char **)this + 27, (unsigned __int64 *)this + 28, 0, "%s", a3);
  StringCchPrintfExA(*((STRSAFE_LPSTR *)this + 27), *((_QWORD *)this + 28), 0LL, 0LL, 0, "-Start");
  StringCchPrintfA(
    (char *)this + 88,
    0x80uLL,
    "{%08x-%04x-%04x-%02x%02x-%02x%02x%02x%02x%02x%02x}",
    a4->Data1,
    a4->Data2,
    a4->Data3,
    a4->Data4[0],
    a4->Data4[1],
    a4->Data4[2],
    a4->Data4[3],
    a4->Data4[4],
    a4->Data4[5],
    a4->Data4[6],
    a4->Data4[7]);
  QueryPerformanceCounter((LARGE_INTEGER *)this);
  QueryPerformanceFrequency(v4);
  return this;
}
