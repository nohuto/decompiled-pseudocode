/*
 * XREFs of ?MapSection@CSectionBitmapRealization@@IEAAJXZ @ 0x180197190
 * Callers:
 *     ?EnsureBitmapCacheSource@CSectionBitmapRealization@@MEAAJXZ @ 0x1801976F0 (-EnsureBitmapCacheSource@CSectionBitmapRealization@@MEAAJXZ.c)
 *     ?EnsureBitmapCacheSource@CGDISubSectionBitmapRealization@@EEAAJXZ @ 0x1802D7320 (-EnsureBitmapCacheSource@CGDISubSectionBitmapRealization@@EEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CSectionBitmapRealization::MapSection(HANDLE *this)
{
  unsigned int v1; // ebx
  PVOID *v2; // rsi
  HANDLE CurrentProcess; // rax
  NTSTATUS v5; // eax
  ULONG_PTR ViewSize; // [rsp+60h] [rbp+8h] BYREF
  union _LARGE_INTEGER SectionOffset; // [rsp+68h] [rbp+10h] BYREF

  v1 = 0;
  v2 = this + 47;
  if ( !this[47] )
  {
    ViewSize = 0LL;
    SectionOffset.QuadPart = 0LL;
    CurrentProcess = GetCurrentProcess();
    v5 = NtMapViewOfSection(this[44], CurrentProcess, v2, 0LL, 0LL, &SectionOffset, &ViewSize, ViewUnmap, 0, 4u);
    if ( v5 < 0 )
    {
      v1 = v5 | 0x10000000;
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v5 | 0x10000000, 0xB1u, 0LL);
    }
  }
  return v1;
}
