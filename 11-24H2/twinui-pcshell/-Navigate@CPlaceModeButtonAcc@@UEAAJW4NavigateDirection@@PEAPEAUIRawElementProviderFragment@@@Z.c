/*
 * XREFs of ?Navigate@CPlaceModeButtonAcc@@UEAAJW4NavigateDirection@@PEAPEAUIRawElementProviderFragment@@@Z @ 0x18054B4E0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CPlaceModeButtonAcc::Navigate(
        CPlaceModeButtonAcc *this,
        enum NavigateDirection a2,
        struct IRawElementProviderFragment **a3)
{
  __int64 v4; // rcx
  int v5; // edx

  *a3 = 0LL;
  if ( *((_BYTE *)this + 32) )
  {
    v4 = *((_QWORD *)this + 7);
    if ( v4 )
    {
      if ( a2 )
      {
        v5 = a2 - 1;
        if ( !v5 || v5 == 1 && *((_DWORD *)this + 9) )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 120LL))(v4);
      }
      else
      {
        (**(void (__fastcall ***)(__int64, GUID *, struct IRawElementProviderFragment **, CPlaceModeButtonAcc *))v4)(
          v4,
          &GUID_f7063da8_8359_439c_9297_bbc5299a7d87,
          a3,
          this);
      }
    }
  }
  return 0LL;
}
