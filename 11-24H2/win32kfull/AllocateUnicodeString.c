/*
 * XREFs of AllocateUnicodeString @ 0x1401E85D0
 * Callers:
 *     xxxSetClassData @ 0x14007D32C (xxxSetClassData.c)
 *     InternalRegisterClassEx @ 0x1400B54C0 (InternalRegisterClassEx.c)
 *     ?_SetCursorIconDataEx@@YA_NPEAUtagCURSOR@@PEAU_UNICODE_STRING@@1PEAUtagCURSORDATA@@KI@Z @ 0x14012C9E4 (-_SetCursorIconDataEx@@YA_NPEAUtagCURSOR@@PEAU_UNICODE_STRING@@1PEAUtagCURSORDATA@@KI@Z.c)
 *     ?Initialize@SimpleHapticsController@@QEAAJPEAU_UNICODE_STRING@@@Z @ 0x1402EF3B4 (-Initialize@SimpleHapticsController@@QEAAJPEAU_UNICODE_STRING@@@Z.c)
 * Callees:
 *     memmove @ 0x140340480 (memmove.c)
 */

__int64 __fastcall AllocateUnicodeString(struct _UNICODE_STRING *a1, unsigned __int16 *a2)
{
  unsigned __int16 v3; // cx
  USHORT v4; // di
  __int64 v5; // rax
  unsigned int v6; // ecx

  if ( !a2 )
  {
    RtlInitUnicodeString(a1, 0LL);
    return 1LL;
  }
  v3 = *a2;
  v4 = *a2 + 2;
  if ( (unsigned __int16)(v3 + 2) >= v3 )
  {
    v5 = Win32AllocPoolWithQuotaZInit((unsigned __int16)(v3 + 2), 2020897621LL);
    a1->Buffer = (PWSTR)v5;
    if ( v5 )
    {
      memmove(a1->Buffer, *((const void **)a2 + 1), *a2);
      a1->MaximumLength = v4;
      v6 = *a2;
      a1->Length = v6;
      a1->Buffer[(unsigned __int64)v6 >> 1] = 0;
      return 1LL;
    }
  }
  return 0LL;
}
