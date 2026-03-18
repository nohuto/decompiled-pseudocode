/*
 * XREFs of AllocateUnicodeString @ 0x1C008F36C
 * Callers:
 *     ?_SetCursorIconDataEx@@YA_NPEAUtagCURSOR@@PEAU_UNICODE_STRING@@1PEAUtagCURSORDATA@@KI@Z @ 0x1C004A78C (-_SetCursorIconDataEx@@YA_NPEAUtagCURSOR@@PEAU_UNICODE_STRING@@1PEAUtagCURSORDATA@@KI@Z.c)
 *     xxxSetClassData @ 0x1C008C668 (xxxSetClassData.c)
 *     InternalRegisterClassEx @ 0x1C00A9170 (InternalRegisterClassEx.c)
 *     ?Initialize@SimpleHapticsController@@QEAAJPEAU_UNICODE_STRING@@@Z @ 0x1C0247FC0 (-Initialize@SimpleHapticsController@@QEAAJPEAU_UNICODE_STRING@@@Z.c)
 * Callees:
 *     UShortAdd @ 0x1C008F434 (UShortAdd.c)
 *     memmove @ 0x1C0140A40 (memmove.c)
 */

__int64 __fastcall AllocateUnicodeString(struct _UNICODE_STRING *a1, const void **a2)
{
  USHORT v4; // si
  WCHAR *v5; // rax
  unsigned int v6; // eax
  USHORT v8; // [rsp+58h] [rbp+10h] BYREF

  v8 = 0;
  if ( !a2 )
  {
    RtlInitUnicodeString(a1, 0LL);
    return 1LL;
  }
  if ( UShortAdd(*(_WORD *)a2, 2u, &v8) >= 0 )
  {
    v4 = v8;
    v5 = (WCHAR *)Win32AllocPoolWithQuotaZInit(v8, 2020897621LL);
    a1->Buffer = v5;
    if ( v5 )
    {
      memmove(v5, a2[1], *(unsigned __int16 *)a2);
      a1->MaximumLength = v4;
      v6 = *(unsigned __int16 *)a2;
      a1->Length = v6;
      a1->Buffer[(unsigned __int64)v6 >> 1] = 0;
      return 1LL;
    }
  }
  return 0LL;
}
