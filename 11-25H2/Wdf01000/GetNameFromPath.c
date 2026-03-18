/*
 * XREFs of GetNameFromPath @ 0x140075690
 * Callers:
 *     ?IsCompanionRequiredForDevice@FxCompanionLibrary@@QEAAEPEAVFxDevice@@PEAPEBG@Z @ 0x1400515D4 (-IsCompanionRequiredForDevice@FxCompanionLibrary@@QEAAEPEAVFxDevice@@PEAPEBG@Z.c)
 *     GetImageName @ 0x14006E320 (GetImageName.c)
 *     FxLibraryCommonRegisterClient @ 0x1400777A8 (FxLibraryCommonRegisterClient.c)
 *     FxLibraryIsV35DriverAllowed @ 0x14008E0FC (FxLibraryIsV35DriverAllowed.c)
 *     ?LoadCompanion@FxCompanionLibrary@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAU_DEVICE_OBJECT@@PEAUIDeviceCompanionCallbacks@@PEAPEAUIDeviceCompanion@@@Z @ 0x14008EC6C (-LoadCompanion@FxCompanionLibrary@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAU_DEVICE_OBJECT@@PEAUIDeviceC.c)
 * Callees:
 *     <none>
 */

void __fastcall GetNameFromPath(const _UNICODE_STRING *Path, _UNICODE_STRING *Name)
{
  __int64 Length; // rcx
  wchar_t *v4; // rax
  wchar_t *v5; // rax
  unsigned __int16 v6; // cx
  char v7; // r9

  if ( Path->Length < 2u )
  {
    *Name = 0LL;
  }
  else
  {
    Length = Path->Length;
    v4 = Path->Buffer - 1;
    Name->Length = 2;
    v5 = (wchar_t *)((char *)v4 + Length);
    v6 = 2;
    v7 = 0;
    while ( 1 )
    {
      Name->Buffer = v5;
      if ( v5 < Path->Buffer )
        break;
      if ( *v5 == 92 )
      {
        ++v5;
        v7 = 1;
        v6 -= 2;
        Name->Buffer = v5;
        Name->Length = v6;
        if ( !v6 )
        {
          Name->Buffer = 0LL;
          goto LABEL_9;
        }
        break;
      }
      --v5;
      v6 += 2;
      Name->Length = v6;
    }
    if ( !v7 )
    {
      v6 -= 2;
      Name->Length = v6;
      Name->Buffer = v5 + 1;
    }
LABEL_9:
    Name->MaximumLength = v6;
  }
}
