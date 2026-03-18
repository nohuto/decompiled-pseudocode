/*
 * XREFs of ?Initialize@EntryDataLookupTable@GdiHandleEntryTable@@QEAA_NI@Z @ 0x14007A480
 * Callers:
 *     HmgInsertObjectInternal @ 0x14001E500 (HmgInsertObjectInternal.c)
 *     ?AcquireEntryIndex@GdiHandleEntryTable@@QEAA_NPEAI@Z @ 0x14007A410 (-AcquireEntryIndex@GdiHandleEntryTable@@QEAA_NPEAI@Z.c)
 *     ?HmgpAcquireHandleIndex@@YA_NAEAUSESSION_GLOBALS@Base@Gre@@PEAU_GRETHREAD@@PEAI@Z @ 0x14007AA44 (-HmgpAcquireHandleIndex@@YA_NAEAUSESSION_GLOBALS@Base@Gre@@PEAU_GRETHREAD@@PEAI@Z.c)
 * Callees:
 *     ?Win32AllocPoolImpl@@YAPEAX_K0K@Z @ 0x14007C364 (-Win32AllocPoolImpl@@YAPEAX_K0K@Z.c)
 */

char __fastcall GdiHandleEntryTable::EntryDataLookupTable::Initialize(
        GdiHandleEntryTable::EntryDataLookupTable *this,
        unsigned int a2)
{
  unsigned __int64 v2; // rbx
  unsigned __int8 v4; // si
  __int64 v5; // rdx
  unsigned __int64 v6; // rbx
  _QWORD *v7; // rax

  v2 = a2;
  v4 = a2;
  v5 = *(_QWORD *)this;
  v6 = v2 >> 8;
  if ( !*(_QWORD *)(*(_QWORD *)this + 8 * v6) )
  {
    *(_QWORD *)(*(_QWORD *)this + 8 * v6) = Win32AllocPoolImpl(0x100uLL, 0x1000uLL, 0x636C6547u);
    v5 = *(_QWORD *)this;
    if ( !*(_QWORD *)(*(_QWORD *)this + 8 * v6) )
      return 0;
  }
  v7 = (_QWORD *)(*(_QWORD *)(v5 + 8 * v6) + 16LL * v4);
  *v7 = 0LL;
  v7[1] = 0LL;
  return 1;
}
